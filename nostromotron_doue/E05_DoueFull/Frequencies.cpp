
#include "Frequencies.h"

//  ================== Note -> Pitch conversion =====================================

const int sNoteToFrequencySize = 128;

const float sNoteToFrequency[] = 
{
16.3515978313f,17.3239144361f,18.3540479948f,19.4454364826f,
20.6017223071f,21.8267644646f,23.1246514195f,24.4997147489f,
25.9565435987f,27.5000000000f,29.1352350949f,30.8677063285f,
32.7031956626f,34.6478288721f,36.7080959897f,38.8908729653f,
41.2034446141f,43.6535289291f,46.2493028390f,48.9994294977f,
51.9130871975f,55.0000000000f,58.2704701898f,61.7354126570f,
65.4063913251f,69.2956577442f,73.4161919794f,77.7817459305f,
82.4068892282f,87.3070578583f,92.4986056779f,97.9988589954f,
103.8261743950f,110.0000000000f,116.5409403795f,123.4708253140f,
130.8127826503f,138.5913154884f,146.8323839587f,155.5634918610f,
164.8137784564f,174.6141157165f,184.9972113558f,195.9977179909f,
207.6523487900f,220.0000000000f,233.0818807590f,246.9416506281f,
261.6255653006f,277.1826309769f,293.6647679174f,311.1269837221f,
329.6275569129f,349.2282314330f,369.9944227116f,391.9954359818f,
415.3046975799f,440.0000000000f,466.1637615181f,493.8833012561f,
523.2511306012f,554.3652619537f,587.3295358348f,622.2539674442f,
659.2551138257f,698.4564628660f,739.9888454233f,783.9908719635f,
830.6093951599f,880.0000000000f,932.3275230362f,987.7666025123f,
1046.5022612024f,1108.7305239075f,1174.6590716696f,1244.5079348883f,
1318.5102276515f,1396.9129257320f,1479.9776908465f,1567.9817439270f,
1661.2187903198f,1760.0000000000f,1864.6550460724f,1975.5332050245f,
2093.0045224048f,2217.4610478150f,2349.3181433393f,2489.0158697767f,
2637.0204553030f,2793.8258514640f,2959.9553816931f,3135.9634878540f,
3322.4375806396f,3520.0000000000f,3729.3100921447f,3951.0664100490f,
4186.0090448096f,4434.9220956300f,4698.6362866785f,4978.0317395533f,
5274.0409106059f,5587.6517029281f,5919.9107633862f,6271.9269757080f,
6644.8751612792f,7040.0000000000f,7458.6201842895f,7902.1328200980f,
8372.0180896192f,8869.8441912600f,9397.2725733571f,9956.0634791066f,
10548.0818212119f,11175.3034058562f,11839.8215267724f,12543.8539514160f,
13289.7503225583f,14080.0000000001f,14917.2403685790f,15804.2656401961f,
16744.0361792384f,17739.6883825199f,18794.5451467142f,19912.1269582133f,
21096.1636424238f,22350.6068117124f,23679.6430535447f,25087.7079028321f
};

const uint16_t sIntervalToFreqFactorSize = 512;

const float sIntervalToFreqFactor[] =
{
1.0000000000f,1.0001128233f,1.0002256593f,1.0003385081f,
1.0004513695f,1.0005642437f,1.0006771307f,1.0007900304f,
1.0009029428f,1.0010158680f,1.0011288059f,1.0012417565f,
1.0013547199f,1.0014676960f,1.0015806849f,1.0016936865f,
1.0018067009f,1.0019197280f,1.0020327679f,1.0021458205f,
1.0022588859f,1.0023719641f,1.0024850550f,1.0025981586f,
1.0027112751f,1.0028244042f,1.0029375462f,1.0030507009f,
1.0031638684f,1.0032770486f,1.0033902416f,1.0035034474f,
1.0036166660f,1.0037298973f,1.0038431414f,1.0039563983f,
1.0040696680f,1.0041829504f,1.0042962456f,1.0044095536f,
1.0045228744f,1.0046362080f,1.0047495544f,1.0048629135f,
1.0049762854f,1.0050896702f,1.0052030677f,1.0053164780f,
1.0054299011f,1.0055433370f,1.0056567857f,1.0057702472f,
1.0058837215f,1.0059972086f,1.0061107086f,1.0062242213f,
1.0063377468f,1.0064512851f,1.0065648363f,1.0066784002f,
1.0067919770f,1.0069055666f,1.0070191690f,1.0071327842f,
1.0072464122f,1.0073600531f,1.0074737067f,1.0075873732f,
1.0077010526f,1.0078147447f,1.0079284497f,1.0080421675f,
1.0081558981f,1.0082696416f,1.0083833979f,1.0084971670f,
1.0086109490f,1.0087247438f,1.0088385514f,1.0089523719f,
1.0090662052f,1.0091800514f,1.0092939104f,1.0094077823f,
1.0095216670f,1.0096355645f,1.0097494749f,1.0098633982f,
1.0099773343f,1.0100912833f,1.0102052451f,1.0103192198f,
1.0104332073f,1.0105472077f,1.0106612209f,1.0107752471f,
1.0108892861f,1.0110033379f,1.0111174026f,1.0112314802f,
1.0113455707f,1.0114596740f,1.0115737902f,1.0116879193f,
1.0118020613f,1.0119162161f,1.0120303838f,1.0121445644f,
1.0122587579f,1.0123729642f,1.0124871835f,1.0126014156f,
1.0127156606f,1.0128299185f,1.0129441894f,1.0130584730f,
1.0131727696f,1.0132870791f,1.0134014015f,1.0135157368f,
1.0136300850f,1.0137444460f,1.0138588200f,1.0139732069f,
1.0140876067f,1.0142020194f,1.0143164450f,1.0144308835f,
1.0145453349f,1.0146597993f,1.0147742765f,1.0148887667f,
1.0150032698f,1.0151177858f,1.0152323147f,1.0153468566f,
1.0154614113f,1.0155759790f,1.0156905597f,1.0158051532f,
1.0159197597f,1.0160343791f,1.0161490114f,1.0162636567f,
1.0163783149f,1.0164929861f,1.0166076701f,1.0167223672f,
1.0168370771f,1.0169518000f,1.0170665359f,1.0171812847f,
1.0172960464f,1.0174108211f,1.0175256087f,1.0176404093f,
1.0177552228f,1.0178700493f,1.0179848888f,1.0180997412f,
1.0182146065f,1.0183294849f,1.0184443761f,1.0185592804f,
1.0186741976f,1.0187891278f,1.0189040709f,1.0190190270f,
1.0191339961f,1.0192489781f,1.0193639731f,1.0194789811f,
1.0195940021f,1.0197090361f,1.0198240830f,1.0199391429f,
1.0200542158f,1.0201693017f,1.0202844005f,1.0203995123f,
1.0205146372f,1.0206297750f,1.0207449258f,1.0208600896f,
1.0209752664f,1.0210904562f,1.0212056590f,1.0213208747f,
1.0214361035f,1.0215513453f,1.0216666001f,1.0217818679f,
1.0218971487f,1.0220124425f,1.0221277493f,1.0222430691f,
1.0223584019f,1.0224737477f,1.0225891066f,1.0227044784f,
1.0228198633f,1.0229352612f,1.0230506721f,1.0231660961f,
1.0232815330f,1.0233969830f,1.0235124460f,1.0236279221f,
1.0237434112f,1.0238589133f,1.0239744284f,1.0240899565f,
1.0242054977f,1.0243210520f,1.0244366192f,1.0245521995f,
1.0246677929f,1.0247833993f,1.0248990187f,1.0250146512f,
1.0251302967f,1.0252459553f,1.0253616269f,1.0254773116f,
1.0255930093f,1.0257087201f,1.0258244439f,1.0259401808f,
1.0260559307f,1.0261716937f,1.0262874698f,1.0264032589f,
1.0265190611f,1.0266348764f,1.0267507047f,1.0268665461f,
1.0269824006f,1.0270982681f,1.0272141487f,1.0273300424f,
1.0274459491f,1.0275618689f,1.0276778019f,1.0277937478f,
1.0279097069f,1.0280256791f,1.0281416643f,1.0282576626f,
1.0283736740f,1.0284896985f,1.0286057361f,1.0287217868f,
1.0288378506f,1.0289539275f,1.0290700174f,1.0291861205f,
1.0293022366f,1.0294183659f,1.0295345083f,1.0296506637f,
1.0297668323f,1.0298830140f,1.0299992088f,1.0301154167f,
1.0302316377f,1.0303478718f,1.0304641190f,1.0305803794f,
1.0306966529f,1.0308129394f,1.0309292391f,1.0310455520f,
1.0311618779f,1.0312782170f,1.0313945692f,1.0315109345f,
1.0316273130f,1.0317437046f,1.0318601093f,1.0319765271f,
1.0320929581f,1.0322094022f,1.0323258595f,1.0324423299f,
1.0325588134f,1.0326753101f,1.0327918199f,1.0329083429f,
1.0330248790f,1.0331414283f,1.0332579907f,1.0333745663f,
1.0334911550f,1.0336077568f,1.0337243719f,1.0338410001f,
1.0339576414f,1.0340742959f,1.0341909636f,1.0343076444f,
1.0344243384f,1.0345410455f,1.0346577659f,1.0347744993f,
1.0348912460f,1.0350080058f,1.0351247788f,1.0352415650f,
1.0353583644f,1.0354751769f,1.0355920026f,1.0357088415f,
1.0358256936f,1.0359425589f,1.0360594373f,1.0361763289f,
1.0362932338f,1.0364101518f,1.0365270830f,1.0366440274f,
1.0367609850f,1.0368779557f,1.0369949397f,1.0371119369f,
1.0372289473f,1.0373459709f,1.0374630076f,1.0375800576f,
1.0376971208f,1.0378141972f,1.0379312868f,1.0380483897f,
1.0381655057f,1.0382826349f,1.0383997774f,1.0385169331f,
1.0386341020f,1.0387512841f,1.0388684794f,1.0389856880f,
1.0391029098f,1.0392201448f,1.0393373930f,1.0394546545f,
1.0395719291f,1.0396892171f,1.0398065182f,1.0399238326f,
1.0400411602f,1.0401585011f,1.0402758552f,1.0403932225f,
1.0405106031f,1.0406279970f,1.0407454040f,1.0408628244f,
1.0409802579f,1.0410977047f,1.0412151648f,1.0413326381f,
1.0414501247f,1.0415676245f,1.0416851376f,1.0418026639f,
1.0419202035f,1.0420377564f,1.0421553225f,1.0422729019f,
1.0423904946f,1.0425081005f,1.0426257197f,1.0427433522f,
1.0428609979f,1.0429786569f,1.0430963292f,1.0432140147f,
1.0433317136f,1.0434494257f,1.0435671511f,1.0436848898f,
1.0438026417f,1.0439204070f,1.0440381855f,1.0441559773f,
1.0442737824f,1.0443916008f,1.0445094325f,1.0446272775f,
1.0447451358f,1.0448630074f,1.0449808923f,1.0450987904f,
1.0452167019f,1.0453346267f,1.0454525648f,1.0455705162f,
1.0456884809f,1.0458064589f,1.0459244502f,1.0460424549f,
1.0461604728f,1.0462785041f,1.0463965487f,1.0465146066f,
1.0466326778f,1.0467507623f,1.0468688602f,1.0469869714f,
1.0471050959f,1.0472232337f,1.0473413849f,1.0474595494f,
1.0475777272f,1.0476959184f,1.0478141229f,1.0479323407f,
1.0480505719f,1.0481688164f,1.0482870742f,1.0484053454f,
1.0485236300f,1.0486419279f,1.0487602391f,1.0488785637f,
1.0489969016f,1.0491152529f,1.0492336175f,1.0493519955f,
1.0494703868f,1.0495887915f,1.0497072096f,1.0498256410f,
1.0499440858f,1.0500625439f,1.0501810155f,1.0502995003f,
1.0504179986f,1.0505365102f,1.0506550352f,1.0507735735f,
1.0508921253f,1.0510106904f,1.0511292688f,1.0512478607f,
1.0513664659f,1.0514850846f,1.0516037166f,1.0517223620f,
1.0518410207f,1.0519596929f,1.0520783784f,1.0521970774f,
1.0523157897f,1.0524345154f,1.0525532546f,1.0526720071f,
1.0527907730f,1.0529095523f,1.0530283450f,1.0531471512f,
1.0532659707f,1.0533848036f,1.0535036500f,1.0536225097f,
1.0537413829f,1.0538602694f,1.0539791694f,1.0540980828f,
1.0542170096f,1.0543359498f,1.0544549035f,1.0545738706f,
1.0546928510f,1.0548118450f,1.0549308523f,1.0550498731f,
1.0551689073f,1.0552879549f,1.0554070159f,1.0555260904f,
1.0556451784f,1.0557642797f,1.0558833945f,1.0560025228f,
1.0561216644f,1.0562408195f,1.0563599881f,1.0564791701f,
1.0565983656f,1.0567175745f,1.0568367968f,1.0569560326f,
1.0570752819f,1.0571945446f,1.0573138208f,1.0574331104f,
1.0575524135f,1.0576717300f,1.0577910600f,1.0579104035f,
1.0580297604f,1.0581491308f,1.0582685147f,1.0583879120f,
1.0585073228f,1.0586267471f,1.0587461848f,1.0588656360f,
1.0589851007f,1.0591045789f,1.0592240706f,1.0593435757f
};

