#include "stdlib.h"

#include "applet-config.h"
#include "applet-notifications.h"
#include "applet-struct.h"
#include "applet-init.h"
#include "applet-cpusage.h"


CD_APPLET_DEFINITION ("cpusage", 1, 6, 3, CAIRO_DOCK_CATEGORY_ACCESSORY);

static gboolean _unthreaded_measure (CairoDockModuleInstance *myApplet)
{
	cd_cpusage_read_data (myApplet);
	cd_cpusage_update_from_data (myApplet);
	return TRUE;
}

static void _cd_cpusage_write_value (double fValue, gchar *cFormatBuffer, int iBufferLength)
{
	snprintf (cFormatBuffer, iBufferLength, (fValue < 10 ? "%.1f%%" : "%.0f%%"), fValue);
}

CD_APPLET_INIT_BEGIN
	if (myDesklet != NULL) {
		CD_APPLET_SET_DESKLET_RENDERER ("Simple");
	}
	
	//Initialisation du rendu jauge/graphique.
	CairoDataRendererAttribute *pAttr;
	if (myConfig.bUseGraphic)
	{
		/*pAttr = g_new0 (CairoGraphAttribute, 1);
		pAttr->iType = myConfig.iGraphType;
		pAttr->pHighColor = myConfig.fHigholor;
		pAttr->pLowColor = myConfig.fLowColor;
		memcpy (pAttr->fBackGroundColor, myConfig.fBgColor, 4 * sizeof (double));
		pAttr->iRadius = 5;*/
	}
	else
	{
		pAttr = g_new0 (CairoGaugeAttribute, 1);
		gattr = 
		pAttr->cThemePath = myConfig.cGThemePath;
	}
	pAttr->cModelName = "graphic";
	pAttr->iNbValues = 1;
	pAttr->pMinMaxValues = {0., 100.};
	pAttr->bWriteValues = (myConfig.iInfoDisplay == CAIRO_DOCK_INFO_ON_ICON);
	pAttr->iLatencyTime = 500;
	pAttr->format_value = _cd_cpusage_write_value;
	cairo_dock_add_new_data_renderer_on_icon (myIcon, myContainer, myDrawContext, pAttr);
	g_free (pAttr);
	/*double fMaxScale = cairo_dock_get_max_scale (myContainer);
	if (myConfig.bUseGraphic)
	{
		myData.pGraph = cairo_dock_create_graph (myDrawContext,
			20, myConfig.iGraphType,
			myIcon->fWidth * fMaxScale, myIcon->fHeight * fMaxScale,
			myConfig.fLowColor, myConfig.fHigholor, myConfig.fBgColor, NULL, NULL);
		if (myConfig.cWatermarkImagePath != NULL)
			cairo_dock_add_watermark_on_graph (myDrawContext, myData.pGraph, myConfig.cWatermarkImagePath, myConfig.fAlpha);
		CD_APPLET_RENDER_GRAPH (myData.pGraph);
	}
	else
	{
		myData.pGauge = cairo_dock_load_gauge(myDrawContext,myConfig.cGThemePath,myIcon->fWidth * fMaxScale, myIcon->fHeight * fMaxScale);
		if (myConfig.cWatermarkImagePath != NULL)
			cairo_dock_add_watermark_on_gauge (myDrawContext, myData.pGauge, myConfig.cWatermarkImagePath, myConfig.fAlpha);
		CD_APPLET_RENDER_GAUGE (myData.pGauge, 0.);
	}*/
	
	//Initialisation du timer de mesure.
	myData.pClock = g_timer_new ();
	myData.pMeasureTimer = cairo_dock_new_measure_timer (myConfig.iCheckInterval,
		NULL,
		NULL,  // cd_cpusage_read_data
		(CairoDockUpdateTimerFunc) _unthreaded_measure,  // cd_cpusage_update_from_data
		myApplet);
	myData.bAcquisitionOK = TRUE;
	cairo_dock_launch_measure (myData.pMeasureTimer);
	
	CD_APPLET_REGISTER_FOR_CLICK_EVENT;
	CD_APPLET_REGISTER_FOR_MIDDLE_CLICK_EVENT;
	CD_APPLET_REGISTER_FOR_BUILD_MENU_EVENT;
CD_APPLET_INIT_END


CD_APPLET_STOP_BEGIN
	//\_______________ On se desabonne de nos notifications.
	CD_APPLET_UNREGISTER_FOR_CLICK_EVENT;
	CD_APPLET_UNREGISTER_FOR_MIDDLE_CLICK_EVENT;
	CD_APPLET_UNREGISTER_FOR_BUILD_MENU_EVENT;
CD_APPLET_STOP_END


CD_APPLET_RELOAD_BEGIN
	//\_______________ On recharge les donnees qui ont pu changer.
	if (myDesklet != NULL) {
		CD_APPLET_SET_DESKLET_RENDERER ("Simple");
	}
	
	double fMaxScale = cairo_dock_get_max_scale (myContainer);
	if (CD_APPLET_MY_CONFIG_CHANGED) {
		
		/*cairo_dock_free_gauge (myData.pGauge);
		cairo_dock_free_graph (myData.pGraph);
		if (myConfig.bUseGraphic)
		{
			myData.pGauge = NULL;
			myData.pGraph = cairo_dock_create_graph (myDrawContext,
				20, myConfig.iGraphType,
				myIcon->fWidth * fMaxScale, myIcon->fHeight * fMaxScale,
				myConfig.fLowColor, myConfig.fHigholor, myConfig.fBgColor, NULL, NULL);
			if (myConfig.cWatermarkImagePath != NULL)
				cairo_dock_add_watermark_on_graph (myDrawContext, myData.pGraph, myConfig.cWatermarkImagePath, myConfig.fAlpha);
		}
		else
		{
			myData.pGraph = NULL;
			myData.pGauge = cairo_dock_load_gauge(myDrawContext,
				myConfig.cGThemePath,
				myIcon->fWidth * fMaxScale,myIcon->fHeight * fMaxScale);
			if (myConfig.cWatermarkImagePath != NULL)
				cairo_dock_add_watermark_on_gauge (myDrawContext, myData.pGauge, myConfig.cWatermarkImagePath, myConfig.fAlpha);
		}*/
		
		if (myConfig.iInfoDisplay != CAIRO_DOCK_INFO_ON_ICON)
		{
			CD_APPLET_SET_QUICK_INFO_ON_MY_ICON (NULL);
		}
		if (myConfig.iInfoDisplay != CAIRO_DOCK_INFO_ON_LABEL)
		{
			CD_APPLET_SET_NAME_FOR_MY_ICON (myConfig.defaultTitle);
		}
		
		cairo_dock_relaunch_measure_immediately (myData.pMeasureTimer, myConfig.iCheckInterval);
		
		g_free (myData.pTopList);
		myData.pTopList = NULL;
		if (myData.pTopMeasureTimer != NULL)
			cairo_dock_change_measure_frequency (myData.pTopMeasureTimer, myConfig.iProcessCheckInterval);
	}
	else {  // on redessine juste l'icone.
		/*if (myData.pGauge != NULL)
			cairo_dock_reload_gauge (myDrawContext, myData.pGauge, myIcon->fWidth * fMaxScale, myIcon->fHeight * fMaxScale);
		else if (myData.pGraph != NULL)
			cairo_dock_reload_graph (myDrawContext, myData.pGraph, myIcon->fWidth * fMaxScale, myIcon->fHeight * fMaxScale);
		else if (myConfig.bUseGraphic)
			myData.pGraph = cairo_dock_create_graph (myDrawContext,
				20, myConfig.iGraphType,
				myIcon->fWidth * fMaxScale, myIcon->fHeight * fMaxScale,
				myConfig.fLowColor, myConfig.fHigholor, myConfig.fBgColor, NULL, NULL);
		else
			myData.pGauge = cairo_dock_load_gauge(myDrawContext,
				myConfig.cGThemePath,
				myIcon->fWidth * fMaxScale, myIcon->fHeight * fMaxScale);
		if (myConfig.cWatermarkImagePath != NULL)
		{
			if (myData.pGauge != NULL)
				cairo_dock_add_watermark_on_gauge (myDrawContext, myData.pGauge, myConfig.cWatermarkImagePath, myConfig.fAlpha);
			else
				cairo_dock_add_watermark_on_graph (myDrawContext, myData.pGraph, myConfig.cWatermarkImagePath, myConfig.fAlpha);
		}*/
		
		CairoDockLabelDescription *pOldLabelDescription = myConfig.pTopTextDescription;
		myConfig.pTopTextDescription = cairo_dock_duplicate_label_description (&myDialogs.dialogTextDescription);
		memcpy (myConfig.pTopTextDescription->fColorStart, pOldLabelDescription->fColorStart, 3*sizeof (double));
		memcpy (myConfig.pTopTextDescription->fColorStop, pOldLabelDescription->fColorStop, 3*sizeof (double));
		myConfig.pTopTextDescription->bVerticalPattern = TRUE;
		cairo_dock_free_label_description (pOldLabelDescription);
		
		cd_cpusage_update_from_data (myApplet);
	}
CD_APPLET_RELOAD_END
