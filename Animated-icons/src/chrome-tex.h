/*  GIMP header image file format (RGB): /home/fab/CD/branches/plug-ins/Animated-icons/src/chrome-tex.h  */

static unsigned int width = 48;
static unsigned int height = 48;

/*  Call this macro repeatedly.  After each use, the pixel data can be extracted  */

#define HEADER_PIXEL(data,pixel) {\
  pixel[0] = (((data[0] - 33) << 2) | ((data[1] - 33) >> 4)); \
  pixel[1] = ((((data[1] - 33) & 0xF) << 4) | ((data[2] - 33) >> 2)); \
  pixel[2] = ((((data[2] - 33) & 0x3) << 6) | ((data[3] - 33))); \
  data += 4; \
}
static char *header_data =
	"2U>(56&245V.5&\"12U>(2E:'3%B)3EJ+3EJ+256&256&3EJ+3%B)2E:'4U^04U^0"
	"2%2%2U>(35F*2E:'4%R-3%B)3EJ+1%\"!2U>(1E*#1U.$3EJ+4EZ/45V.3EJ+256&"
	"2%2%1U.$3EJ+4U^05&\"13UN,7&B97FJ;9G*C8V^@7FJ;4%R-4%R-2U>(6&258FZ?"
	"3UN,3UN,4U^045V.04U^1U.$8FZ?=(\"Q;'BI7FJ;5V.43EJ+1U.$256&5V.46F:7"
	"86V>35F*3UN,5V.46V>85V.43EJ+1U.$6V>87FJ;56&2:W>H<GZO;'BI9'\"A76F:"
	"56&25&\"11U.$56&23%B)6V>8:76FD)S-AI+#@(R]@HZ_4EZ/4U^04EZ/7FJ;97&B"
	"35F*97&B4U^04EZ/5&\"115&\":W>H;GJK:G:G;WNL<'RM<GZO9G*C7VN<8V^@6&25"
	":76F4%R-2U>(6&256V>84U^035F*1U.$76F:7VN<5F*38V^@<GZO<GZO;GJK:G:G"
	"9'\"A8FZ?6&251U.$5V.476F:?HJ[CIK+@(R]9'\"A35F*2%2%66665F*36F:76666"
	"35F*:W>H;WNL35F*4%R-3%B):'2E9W.D6F:77&B97&B986V>;GJK?(BY:G:G8V^@"
	"97&B4%R-2U>(56&266664%R-3%B)2%2%66669'\"A7FJ;8FZ?7FJ;6666666676F:"
	"7FJ;8FZ?9'\"A66665F*39W.D@X^`8&R=2U>(3%B)2E:'3EJ+5V.45V.466664%R-"
	"0T]`3UN,7FJ;2%2%2E:'3%B)9W.D4%R-3EJ+6V>87&B95V.46F:79G*C=X.T:76F"
	"9'\"A2U>(2%2%5&\"156&25F*32E:'3EJ+7VN<4%R-4EZ/56&256&26&25666656&2"
	"4%R-5&\"176F::76F=H*S@(R]?HJ[3%B)5V.44EZ/3EJ+4%R-666666666&252%2%"
	"2U>(256&2E:'3EJ+3EJ+:76F5V.445V.=(\"Q>(2U<7VN<'RM9G*C97&B@(R]5F*3"
	"3%B)35F*0T]`35F*4U^04%R-35F*;7FJ3UN,9'\"A=8&R?HJ[?XN\\B97&BY?(B)3%"
	"A)#!AY/$C)C)C)C)C)C)A9'\";GJK6V>8;7FJ:'2E666656&24U^05V.44U^00DY_"
	"6&25:W>H:W>H<7VN=(\"Q8FZ?;'BI97&B6F:75&\"14EZ/7&B9<7VN=X.T9G*C2%2%"
	"15&\"3EJ+2E:'1E*#1U.$2%2%:W>H76F:86V>AY/$DY_0DI[/CYO,C)C)D9W.DY_0"
	"E*#1CYO,;WNL6666:G:G;'BI6&2597&B256&8V^@8&R=56&24EZ/4U^03EJ+04U^"
	"3UN,:W>H>X>X?(BY;GJK5V.43UN,256&1%\"!1%\"!1%\"!0DY_15&\"2U>(1E*#35F*"
	"1E*#256&4EZ/45V.3EJ+8FZ?8&R=6V>8@8V^EJ+3H*S=F:76E*#1AI+#@X^`CYO,"
	"DI[/>H:W1U.$3EJ+8&R=66669W.D56&20T]`4EZ/9W.D5&\"16&2566665F*356&2"
	"0$Q]3EJ+6&254%R-0DY_04U^1%\"!2E:'2U>(2%2%4EZ/3%B)15&\"1U.$256&1U.$"
	"1U.$45V.8V^@:76F:G:G4U^05F*3<'RM@X^`EZ/4I;'BG:G:CIK+>H:W:W>H<7VN"
	"9W.D56&2:W>H=(\"Q:G:G86V>8V^@2E:'15&\"3UN,:'2E56&26V>86F:75V.48&R="
	"0T]`1%\"!04U^0$Q]0$Q]04U^0$Q]0T]`1U.$4U^086V>45V.1%\"!1U.$1E*#0T]`"
	"8&R=<7VN9'\"A5V.445V.8FZ?9'\"A7FJ;<W^PAI+#CYO,AI+#:G:G5&\"14U^06V>8"
	"4EZ/9W.D5V.415&\"1%\"!15&\"2E:'1%\"!0T]`56&29W.D2E:'35F*45V.35F*56&2"
	"0$Q]0$Q]/TM\\0$Q]0$Q]/TM\\/TM\\04U^15&\"5V.45V.42E:'1E*#1%\"!256&:'2E"
	"9'\"A5F*32E:'04U^7&B9;'BI6F:735F*=(\"Q@(R]=X.T7VN<3EJ+5F*3:W>H9W.D"
	"6&252%2%0T]`0T]`1%\"!0DY_0T]`0DY_3EJ+97&B5&\"14%R-6F:77VN<:W>H?XN\\"
	"4EZ/0$Q]0$Q]/TM\\/TM\\/TM\\/DI[/TM\\1%\"!4U^05&\"12U>(256&76F:<GZO8&R="
	"9W.D>X>X6V>8/DI[1U.$8FZ?7FJ;3%B)56&23%B)2%2%4EZ/9'\"A<'RM6F:74EZ/"
	"15&\"0T]`0DY_0DY_04U^0$Q]04U^2E:'86V>5F*39W.D@X^`B97&CYO,FZ?8H*S="
	"1E*#0$Q]0$Q]15&\"4U^06&257&B96F:75V.49W.D<'RM<W^P>H:W:W>H3EJ+;WNL"
	"B97&>H:W5V.40$Q]1U.$7&B94U^01U.$4EZ/5F*38V^@9'\"A;WNL<GZO7&B95&\"1"
	"0T]`0DY_04U^0DY_0$Q]/TM\\0DY_66665V.4<GZOAI+#EZ/4G*C9FJ;7EJ+3?8FZ"
	"/DI[/TM\\45V.;WNL>86V=H*S>(2U=H*S<W^P=8&R8FZ?5F*32E:'2%2%:W>H@X^`"
	"AI+#<7VN4U^04%R-9'\"A8FZ?0T]`3%B)>86V9W.D;'BI<7VN<'RM<7VN9W.D5F*3"
	"3%B)0T]`0DY_0T]`0T]`04U^4U^04EZ/:'2EA)#!G:G:GZO<FZ?8F:76F*35C9G*"
	"0$Q]1U.$:W>H<7VN3UN,3UN,9'\"A:'2E8V^@35F*/DI[/TM\\0$Q]6F:7=H*SAY/$"
	"@X^`;WNL45V.7&B9=(\"Q8&R=0$Q]7FJ;@(R]:'2E7VN<;'BI;7FJ9G*C9W.D86V>"
	"5F*31%\"!15&\"1%\"!04U^256&76F:5&\"1>X>XEZ/4IK+CH:W>GJK;G*C9F*35GJK;"
	"4U^0<7VN;7FJ7&B9;GJK256&4EZ/7&B976F:5F*32%2%/4EZ2E:'<'RMAI+#CIK+"
	"@HZ_9W.D1E*#6F:7<'RM6F:70$Q]8&R=>86V:'2E4U^04EZ/5&\"16F:776F:8&R="
	"86V>2%2%1%\"!15&\"6&257FJ;5&\"1=(\"QBY?(J+3EI;'BH*S=H*S=FZ?8EZ/4I+#A"
	"<W^P8V^@8V^@C9G*DY_07FJ;4%R-7&B97&B96F:75V.40DY_4U^0@X^`DI[/B97&"
	"=X.T7VN<2U>(56&27FJ;1E*#256&7VN<;GJK=H*S:'2E3EJ+3UN,4EZ/:76F<'RM"
	"<'RM8V^@5&\"176F:4EZ/6666=8&RD)S-IK+CGZO<F*35FZ?8GZO<FZ?8GJK;I[/D"
	"4EZ/7FJ;CIK+F:76E*#17&B93UN,7FJ;76F:6F:7666615&\"6V>8C)C)C9G*>H:W"
	"9G*C86V>9G*C6F:71E*#/TM\\4EZ/6666;7FJ;WNL<W^P<W^P:76F;GJK8FZ?86V>"
	":'2E:76F9W.D2U>(76F:>(2UDY_0HJ[?FJ;7CIK+C9G*EJ+3FZ?8FZ?8H:W>H:W>"
	"3UN,BI;'EJ+3F*35BY?(2E:'5&\"17FJ;76F:6F:75V.41U.$6V>8@HZ_<GZO3UN,"
	"15&\"7&B9<7VN86V>04U^6666;GJK7&B96F:797&B97&B;7FJ=H*S<GZO7FJ;<GZO"
	"<W^P7VN<2%2%9W.D?(BYDI[/G:G:EZ/4C)C)AY/$D)S-FJ;7FJ;7GZO<G:G:DY_0"
	"4EZ/CYO,E*#1EZ/4<W^P256&6V>87FJ;76F:6F:75V.42%2%35F*9W.D3%B)0$Q]"
	"15&\"6&259W.D3EJ+8FZ?A9'\"BI;'<GZO4EZ/9'\"A7VN<9'\"A97&B5&\"17VN<=X.T"
	"?XN\\7FJ;9'\"A@HZ_E:'2HJ[?FJ;7DI[/EZ/4H*S=H:W>G:G:G*C9I;'BI+#AGZO<"
	"45V.A)#!E:'2DY_06&2545V.7&B97VN<7FJ;6V>86F:73UN,0DY_15&\"04U^0DY_"
	"1%\"!4%R-3%B)86V>?8FZ>H:W@8V^=(\"Q<W^P;WNL;'BI9W.D;GJK;'BIA)#!?8FZ"
	"<'RM56&2@X^`FZ?8HZ_@G:G:FZ?8H*S=HJ[?DY_0BY?(AI+#@8V^CYO,I+#AIK+C"
	"3%B)<7VNCYO,AY/$3EJ+4U^07FJ;8FZ?97&B8V^@7FJ;4EZ//DI[/DI[/4EZ/TM\\"
	"1E*#8FZ?<'RM9G*C;'BI<GZO?(BY?XN\\>X>X>H:W=8&R;GJK;GJK=X.T<GZO>H:W"
	"7&B9>(2UG:G:H:W>H:W>H:W>I[/DH:W>B)3%?XN\\AY/$B97&BY?(D)S-E*#1DY_0"
	"5&\"176F:>(2U;WNL2U>(7VN<;7FJ;7FJ:W>H:76F9W.D6F:70$Q]/TM\\/DI[/DI["
	"1U.$;GJK@HZ_>H:W:76F97&B:76F9G*C86V>5V.4:'2E?(BY?(BY>86V;'BI=(\"Q"
	"7VN<CIK+I[/DIK+CI+#AIK+CGZO<C)C)>(2U?(BYAI+#B97&BI;'C9G*D9W.D)S-"
	"=(\"Q3EJ+8&R=5&\"1<'RM?HJ[>H:W=X.T<7VN:G:G:76F8FZ?5&\"10T]`0DY_/TM\\"
	"/TM\\2U>(=8&R?8FZ:W>H5&\"13%B)2E:'256&2%2%1U.$4%R-5V.47&B9<W^P7FJ;"
	"=8&RGZO<J;7FJ+3EI+#AH:W>F*35B)3%?(BY=H*S>X>XBI;'A)#!@HZ_CYO,DI[/"
	"<W^P4%R-1U.$8V^@76F:256&45V.8V^@=(\"Q?8FZ>86V<GZO;'BI2%2%1%\"!1E*#"
	"0$Q]3EJ+8FZ?>X>X7VN<1U.$3EJ+1E*#15&\"1%\"!1E*#1E*#/TM\\4U^0;'BI6V>8"
	"A9'\"I+#AJ+3EJ;7FHJ[?G*C9E*#1C)C)@8V^?(BY=H*S@X^`<'RM9W.D?XN\\F:76"
	"8&R=6V>86V>84EZ/1E*#2%2%2U>(1E*#35F*7FJ;<7VN@X^`?XN\\3UN,1%\"!0DY_"
	"35F*:76F<W^P?8FZ5V.41%\"!4U^03EJ+1E*#1%\"!1E*#1U.$1%\"!:'2E7VN<;7FJ"
	"AY/$FZ?8HZ_@I[/DHZ_@FJ;7D)S-AY/$?HJ[>X>XA9'\"@HZ_9G*C3UN,6F:7@X^`"
	"76F:9G*C6F:71%\"!256&4U^04U^015&\"256&4%R-8FZ?=(\"Q>(2U9W.D3%B)3UN,"
	"=8&R?(BY<W^P97&B1%\"!0T]`3UN,45V.1%\"!3%B)35F*1U.$6&25>(2U6F:7@X^`"
	"C)C)E*#1F:76F:76E*#1BI;'@X^`>X>X?XN\\B)3%C)C)@8V^=(\"Q7&B94EZ/:W>H"
	"76F:;7FJ9'\"A3%B)15&\"1E*#1U.$5&\"18&R=6&255V.48V^@8FZ?5V.456&26&25"
	"6V>82E:'1%\"!/TM\\0$Q]15&\"256&3%B)2E:'9W.D;WNL8FZ?:G:G=X.T76F:BI;'"
	"D9W.DY_0DI[/CIK+A9'\"?HJ[?(BYA)#!CIK+D9W.B97&C)C)BY?(B)3%@(R]A9'\""
	"7FJ;7FJ;>(2U>(2U=8&R<W^P;WNL=H*S<GZO8&R=6F:7:W>H=(\"Q<GZO:'2E3EJ+"
	"1E*#4%R-3%B)1E*#256&2%2%0DY_3EJ+8FZ?9G*C<'RM8V^@;7FJ97&B:'2ED)S-"
	"D9W.E*#1CYO,>(2U7FJ;6F:7:'2E?XN\\CIK+D)S-D9W.D)S-D)S-DI[/D)S-E*#1"
	";7FJ3%B):'2E>86V<'RM<'RM;WNL=8&R?XN\\>H:W8V^@7VN<<'RM:G:G3%B)2U>("
	"3%B)4%R-5F*34%R-3EJ+04U^4U^0=X.T<'RM8V^@56&266668&R=5&\"1=H*SC)C)"
	"DI[/D)S->X>X2U>(1E*#256&2%2%7&B9AY/$CIK+B)3%BI;'F:76H*S=H:W>IK+C"
	">(2U6F:75V.44%R-;GJK;GJK<'RM<'RM;'BI<GZO>86V<'RM86V>2U>(2E:'45V."
	"3%B)3%B)4U^06666256&3%B)>86V:G:G1%\"!0T]`3%B)3UN,5&\"1:G:GAY/$CIK+"
	"C)C)C)C)?8FZ3%B)2E:'2%2%1E*#1E*#<GZO@X^`@(R]D)S-HZ_@I[/DI+#AH:W>"
	"<'RM:G:G<'RM256&8V^@<'RM;WNL;WNL<'RM;'BI;GJK>86V:'2E256&4U^04EZ/"
	"3UN,3EJ+4%R-5&\"10T]`8FZ?=H*S2%2%1%\"!5&\"19G*C=(\"Q@(R]BY?(EZ/4H*S="
	"E*#1@8V^?(BY<7VN97&B6V>84%R-3UN,<7VN@HZ_?8FZCYO,G:G:J+3EHZ_@EZ/4"
	";WNL<W^P?(BY35F*:G:G;GJK;GJK<7VN<7VN;WNL:76F<'RM:G:G2%2%5&\"16&25"
	"4EZ/2E:'2U>(2%2%2U>(<W^P:G:G0T]`5F*3<'RM@(R]D)S-EJ+3E:'2EJ+3FJ;7"
	"GJK;D)S-A9'\"?8FZ?8FZ>X>X?8FZ?HJ[AI+#@8V^B)3%CIK+D)S-BI;'9W.D7&B9"
	":76F:'2E;GJK8&R=>(2U>86V>86V<W^P;7FJ;'BI;7FJ;7FJ>(2U3EJ+2%2%2U>("
	"2E:'1U.$256&5&\"1:76F?XN\\6F:7256&;7FJB97&E:'2FJ;7E:'2DY_0DI[/D9W."
	"EZ/4E:'2E*#1D9W.DY_0DI[/CIK+CYO,DI[/EZ/4DY_0AI+#@8V^:G:G:76F97&B"
	"9W.D1U.$35F*7VN<2U>(256&7FJ;=8&R?HJ[=H*S=H*S?HJ[@X^`=X.T=(\"Q;GJK"
	";7FJ:G:G;WNL=X.T>H:W:W>H1U.$76F:@8V^E:'2H:W>GZO<EZ/4C)C)@X^`AI+#"
	"DI[/EZ/4EJ+3DY_0EJ+3F*35F*35G*C9GJK;H:W>E:'2A)#!9W.D56&24%R-35F*"
	";WNL3EJ+9'\"A5F*31U.$0$Q]256&8V^@9W.D6V>86V>8:W>H>86V;GJK;GJK;'BI"
	"<GZO?XN\\?XN\\:G:G5F*30T]`45V.=(\"QD)S-G:G:GZO<GJK;E*#1@HZ_=H*S@(R]"
	"CIK+EJ+3E:'2DY_0EJ+3F*35F:76FJ;7G*C9GJK;A)#!8V^@4U^03%B)6V>84%R-"
	">X>X9W.D9G*C2U>(2%2%1E*#5F*37VN<5&\"11%\"!1%\"!35F*<GZO;WNL;GJK;'BI"
	"7&B935F*1E*#0$Q]/DI[/DI[4U^0=8&RAY/$EZ/4H:W>HZ_@EZ/4A)#!=X.T?XN\\"
	"CYO,E:'2DI[/E*#1G:G:H*S=FZ?8FJ;7GZO<?XN\\7&B98V^@4EZ/6&25666635F*"
	">H:W4%R-2%2%2%2%5V.46F:77&B98V^@5V.41%\"!1E*#2E:';'BI=H*S;'BI9W.D"
	"6F:72E:'/4EZ1%\"!0T]`/TM\\1E*#;7FJ@(R]F*35IK+CI[/DGZO<C9G*@8V^B97&"
	"D9W.DI[/CYO,E*#1G:G:GZO<EJ+3CYO,=8&R7FJ;:'2E2U>(5F*366664EZ/3EJ+"
	"?XN\\6V>81%\"!6&25<7VN:'2E76F:97&B<GZO:W>H<'RM=(\"Q>H:W;7FJ97&B8V^@"
	"56&21E*#/DI[2U>(2%2%/DI[/TM\\97&BD9W.I[/DI[/DI[/DJ+3EG*C9CYO,D9W."
	"D)S-C)C)BI;'D)S-F:76B97&?8FZ;WNL7&B976F:256&4U^06F:766662U>(8FZ?"
	"<GZO?8FZ:76F:G:G8V^@7VN<7VN<6V>8?XN\\<W^P9G*C97&B7VN<6F:766665V.4"
	"5&\"1256&/DI[0T]`04U^0$Q]0DY_:W>HG:G:JK;GI;'BI;'BJ;7FJ;7FGZO<D9W."
	"BI;'B)3%BI;'D9W.CIK+?8FZ76F:5V.45&\"13EJ+5F*35&\"166663UN,5&\"16&25"
	"<'RM;GJK;GJK>X>X9'\"A4U^04EZ/256&:'2E97&B7&B956&24U^04EZ/4U^05&\"1"
	"4U^04EZ/15&\"/TM\\/DI[/4EZ2U>(>H:WH*S=J;7FI[/DHJ[?HJ[?J+3EIK+CE:'2"
	"BI;'B)3%C)C)DI[/AI+#:76F56&29'\"A3EJ+6F:74EZ/4EZ/666635F*56&286V>"
	"97&B6V>86V>89'\"A6&253%B)8&R=8V^@2U>(;7FJ8&R=4U^0256&0DY_2%2%45V."
	"56&25V.45&\"12U>(/DI[0T]`;7FJD9W.HZ_@J;7FI+#AH*S=HJ[?J+3EJ+3EG*C9"
	"C)C)C)C)CIK+?8FZ8&R=4EZ/6F:7256&5V.456&25&\"15V.46V>83UN,666686V>"
	"2U>(4%R-3%B)66662E:'56&2>X>X=H*S2E:'>H:W<W^P5F*31E*#35F*5V.47FJ;"
	"6F:776F:6F:756&21U.$7FJ;B)3%FJ;7I+#AI;'BGZO<IK+CG:G:D9W.E:'2E:'2"
	"DY_0BY?(=8&R6&259G*C45V.4%R-5F*35&\"16&2566664U^03EJ+6F:76F:72E:'"
	"0T]`256&4%R-45V.0T]`5V.4:W>H5V.42U>(?8FZ>86V>86V=8&R<7VN:G:G;GJK"
	"<W^P<GZO<7VN5V.41U.$>H:WF*35HJ[?HJ[?G*C9F:76H*S=G*C9D)S-CYO,BY?("
	"C)C)>H:W4U^0<W^P3%B)5V.466665V.46&255&\"14EZ/6F:7;GJK97&B3EJ+1%\"!"
	"86V>7VN<66662U>(<7VN:'2E1%\"!35F*;7FJ:G:G2E:'2E:'256&1U.$1E*#0T]`"
	"1E*#3%B)=(\"Q5V.44U^0D)S-GZO<I;'BGZO<F*35E:'2EZ/4G:G:HJ[?G:G:D)S-"
	"=H*S4EZ/;WNL3%B)1E*#2U>(2E:'2U>(4U^07FJ;6V>886V>45V.04U^1%\"!35F*"
	"=(\"Q<7VN9G*C35F*8V^@56&29W.D<7VN7VN<1E*#1%\"!3EJ+7&B98FZ?:'2E9'\"A"
	"86V>:W>H<W^P35F*>86VEJ+3H*S=H:W>G:G:EJ+3E*#1F*35EZ/4DY_0E*#1FZ?8"
	"8V^@:W>H35F*0$Q]1%\"!76F:<GZO<7VN;GJK5V.4>86VD)S-<7VN3%B)2%2%6&25"
	";'BI;7FJ;WNL:W>H66666V>85F*30T]`04U^5V.4;7FJ:G:G86V>6V>85F*376F:"
	"86V>56&215&\";GJKC9G*F*35FZ?8F*35DY_0D)S-D9W.E:'2GJK;G*C9B97&CYO,"
	"7&B997&B0T]`15&\"9W.D<'RM8&R=8&R=3UN,5&\"1B97&9G*C?(BY4EZ/66668FZ?"
	"2E:'1U.$4EZ/<'RM>X>X:76F5F*36&259G*C9G*C35F*3%B)1E*#0$Q]15&\"35F*"
	"2E:'1%\"!45V.AI+#E:'2F*35F:76EJ+3D9W.D9W.DI[/E*#1F:76C9G*@(R]BY?("
	"5V.4=H*S:76F;'BI:W>H5V.45V.466665F*34EZ/>(2U7VN<@(R]4EZ/5F*39G*C"
	"";
