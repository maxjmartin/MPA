#pragma once

/*********************************************************************/
//
//			Copyright 2022 Max J. Martin
//
//			This file is part of APM.
// 
//			APM is free software : you can redistribute it
//			and /or modify it under the terms of the GNU General
//			Public License as published by the Free Software
//			Foundation, either version 3 of the License, or
//			(at your option) any later version.
//			
//			APM is distributed in the hope that it will be
//			useful, but WITHOUT ANY WARRANTY; without even the
//			implied warranty of MERCHANTABILITY or FITNESS FOR
//			A PARTICULAR PURPOSE.See the GNU General Public
//			
//			You should have received a copy of the GNU General
//			Public License along with APM.If not, see
//			< https://www.gnu.org/licenses/>.
//			
/*********************************************************************/

#include "../sys/config.h"

namespace Olly {
	namespace APM {

		// pi to 10,000 characters.
		static const Text PI_STRING = "31415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679821480865132823066470938446095505822317253594081284811174502841027019385211055596446229489549303819644288109756659334461284756482337867831652712019091456485669234603486104543266482133936072602491412737245870066063155881748815209209628292540917153643678925903600113305305488204665213841469519415116094330572703657595919530921861173819326117931051185480744623799627495673518857527248912279381830119491298336733624406566430860213949463952247371907021798609437027705392171762931767523846748184676694051320005681271452635608277857713427577896091736371787214684409012249534301465495853710507922796892589235420199561121290219608640344181598136297747713099605187072113499999983729780499510597317328160963185950244594553469083026425223082533446850352619311881710100031378387528865875332083814206171776691473035982534904287554687311595628638823537875937519577818577805321712268066130019278766111959092164201989380952572010654858632788659361533818279682303019520353018529689957736225994138912497217752834791315155748572424541506959508295331168617278558890750983817546374649393192550604009277016711390098488240128583616035637076601047101819429555961989467678374494482553797747268471040475346462080466842590694912933136770289891521047521620569660240580381501935112533824300355876402474964732639141992726042699227967823547816360093417216412199245863150302861829745557067498385054945885869269956909272107975093029553211653449872027559602364806654991198818347977535663698074265425278625518184175746728909777727938000816470600161452491921732172147723501414419735685481613611573525521334757418494684385233239073941433345477624168625189835694855620992192221842725502542568876717904946016534668049886272327917860857843838279679766814541009538837863609506800642251252051173929848960841284886269456042419652850222106611863067442786220391949450471237137869609563643719172874677646575739624138908658326459958133904780275900994657640789512694683983525957098258226205224894077267194782684826014769909026401363944374553050682034962524517493996514314298091906592509372216964615157098583874105978859597729754989301617539284681382686838689427741559918559252459539594310499725246808459872736446958486538367362226260991246080512438843904512441365497627807977156914359977001296160894416948685558484063534220722258284886481584560285060168427394522674676788952521385225499546667278239864565961163548862305774564980355936345681743241125150760694794510965960940252288797108931456691368672287489405601015033086179286809208747609178249385890097149096759852613655497818931297848216829989487226588048575640142704775551323796414515237462343645428584447952658678210511413547357395231134271661021359695362314429524849371871101457654035902799344037420073105785390621983874478084784896833214457138687519435064302184531910484810053706146806749192781911979399520614196634287544406437451237181921799983910159195618146751426912397489409071864942319615679452080951465502252316038819301420937621378559566389377870830390697920773467221825625996615014215030680384477345492026054146659252014974428507325186660021324340881907104863317346496514539057962685610055081066587969981635747363840525714591028970641401109712062804390397595156771577004203378699360072305587631763594218731251471205329281918261861258673215791984148488291644706095752706957220917567116722910981690915280173506712748583222871835209353965725121083579151369882091444210067510334671103141267111369908658516398315019701651511685171437657618351556508849099898599823873455283316355076479185358932261854896321329330898570642046752590709154814165498594616371802709819943099244889575712828905923233260972997120844335732654893823911932597463667305836041428138830320382490375898524374417029132765618093773444030707469211201913020330380197621101100449293215160842444859637669838952286847831235526582131449576857262433441893039686426243410773226978028073189154411010446823252716201052652272111660396665573092547110557853763466820653109896526918620564769312570586356620185581007293606598764861179104533488503461136576867532494416680396265797877185560845529654126654085306143444318586769751456614068007002378776591344017127494704205622305389945613140711270004078547332699390814546646458807972708266830634328587856983052358089330657574067954571637752542021149557615814002501262285941302164715509792592309907965473761255176567513575178296664547791745011299614890304639947132962107340437518957359614589019389713111790429782856475032031986915140287080859904801094121472213179476477726224142548545403321571853061422881375850430633217518297986622371721591607716692547487389866549494501146540628433663937900397692656721463853067360965712091807638327166416274888800786925602902284721040317211860820419000422966171196377921337575114959501566049631862947265473642523081770367515906735023507283540567040386743513622224771589150495309844489333096340878076932599397805419341447377441842631298608099888687413260472156951623965864573021631598193195167353812974167729478672422924654366800980676928238280689964004824354037014163149658979409243237896907069779422362508221688957383798623001593776471651228935786015881617557829735233446042815126272037343146531977774160319906655418763979293344195215413418994854447345673831624993419131814809277771038638773431772075456545322077709212019051660962804909263601975988281613323166636528619326686336062735676303544776280350450777235547105859548702790814356240145171806246436267945612753181340783303362542327839449753824372058353114771199260638133467768796959703098339130771098704085913374641442822772634659470474587847787201927715280731767907707157213444730605700733492436931138350493163128404251219256517980694113528013147013047816437885185290928545201165839341965621349143415956258658655705526904965209858033850722426482939728584783163057777560688876446248246857926039535277348030480290058760758251047470916439613626760449256274204208320856611906254543372131535958450687724602901618766795240616342522577195429162991930645537799140373404328752628889639958794757291746426357455254079091451357111369410911939325191076020825202618798531887705842972591677813149699009019211697173727847684726860849003377024242916513005005168323364350389517029893922334517220138128069650117844087451960121228599371623130171144484640903890644954440061986907548516026327505298349187407866808818338510228334508504860825039302133219715518430635455007668282949304137765527939751754613953984683393638304746119966538581538420568533862186725233402830871123282789212507712629463229563989898935821167456270102183564622013496715188190973038119800497340723961036854066431939509790190699639552453005450580685501956730229219139339185680344903982059551002263535361920419947455385938102343955449597783779023742161727111723643435439478221818528624085140066604433258885698670543154706965747458550332323342107301545940516553790686627333799585115625784322988273723198987571415957811196358330059408730681216028764962867446047746491599505497374256269010490377819868359381465741268049256487985561453723478673303904688383436346553794986419270563872931748723320837601123029911367938627089438799362016295154133714248928307220126901475466847653576164773794675200490757155527819653621323926406160136358155907422020203187277605277219005561484255518792530343513984425322341576233610642506390497500865627109535919465897514131034822769306247435363256916078154781811528436679570611086153315044521274739245449454236828860613408414863776700961207151249140430272538607648236341433462351897576645216413767969031495019108575984423919862916421939949072362346468441173940326591840443780513338945257423995082965912285085558215725031071257012668302402929525220118726767562204154205161841634847565169998116141010029960783869092916030288400269104140792886215078424516709087000699282120660418371806535567252532567532861291042487761825829765157959847035622262934860034158722980534989650226291748788202734209222245339856264766914905562842503912757710284027998066365825488926488025456610172967026640765590429099456815065265305371829412703369313785178609040708667114965583434347693385781711386455873678123014587687126603489139095620099393610310291616152881384379099042317473363948045759314931405297634757481193567091101377517210080315590248530906692037671922033229094334676851422144773793937517034436619910403375111735471918550464490263655128162288244625759163330391072253837421821408835086573917715096828874782656995995744906617583441375223970968340800535598491754173818839994469748676265516582765848358845314277568790029095170283529716344562129640435231176006651012412006597558512761785838292041974844236080071930457618932349229279650198751872127267507981255470958904556357921221033346697499235630254947802490114195212382815309114079073860251522742995818072471625916685451333123948049470791191532673430282441860414263639548000448002670496248201792896476697583183271314251702969234889627668440323260927524960357996469256504936818360900323809293459588970695365349406034021665443755890045632882250545255640564482465151875471196218443965825337543885690941130315095261793780029741207665147939425902989695946995565761218656196733786236256125216320862869222103274889218654364802296780705765615144632046927906821207388377814233562823608963208068222468012248261177185896381409183903673672220888321513755600372798394004152970028783076670944474560134556417254370906979396122571429894671543578468788614445812314593571984922528471605049221242470141214780573455105008019086996033027634787081081754501193071412233908663938339529425786905076431006383519834389341596131854347546495569781038293097164651438407007073604112373599843452251610507027056235266012764848308407611830130527932054274628654036036745328651057065874882256981579367897669742205750596834408697350201410206723585020072452256326513410559240190274216248439140359989535394590944070469120914093870012645600162374288021092764579310657922955249887275846101264836999892256959688159205600101655256375679";

		// e to 10,000 characters.
		static const Text E_STRING = "27182818284590452353602874713526624977572470936999595749669676277240766303535475945713821785251664274274663919320030599218174135966290435729003342952605956307381323286279434907632338298807531952510190115738341879307021540891499348841675092447614606680822648001684774118537423454424371075390777449920695517027618386062613313845830007520449338265602976067371132007093287091274437470472306969772093101416928368190255151086574637721112523897844250569536967707854499699679468644549059879316368892300987931277361782154249992295763514822082698951936680331825288693984964651058209392398294887933203625094431173012381970684161403970198376793206832823764648042953118023287825098194558153017567173613320698112509961818815930416903515988885193458072738667385894228792284998920868058257492796104841984443634632449684875602336248270419786232090021609902353043699418491463140934317381436405462531520961836908887070167683964243781405927145635490613031072085103837505101157477041718986106873969655212671546889570350354021234078498193343210681701210056278802351930332247450158539047304199577770935036604169973297250886876966403555707162268447162560798826517871341951246652010305921236677194325278675398558944896970964097545918569563802363701621120477427228364896134225164450781824423529486363721417402388934412479635743702637552944483379980161254922785092577825620926226483262779333865664816277251640191059004916449982893150566047258027786318641551956532442586982946959308019152987211725563475463964479101459040905862984967912874068705048958586717479854667757573205681288459205413340539220001137863009455606881667400169842055804033637953764520304024322566135278369511778838638744396625322498506549958862342818997077332761717839280349465014345588970719425863987727547109629537415211151368350627526023264847287039207643100595841166120545297030236472549296669381151373227536450988890313602057248176585118063036442812314965507047510254465011727211555194866850800368532281831521960037356252794495158284188294787610852639813955990067376482922443752871846245780361929819713991475644882626039033814418232625150974827987779964373089970388867782271383605772978824125611907176639465070633045279546618550966661856647097113444740160704626215680717481877844371436988218559670959102596862002353718588748569652200050311734392073211390803293634479727355955277349071783793421637012050054513263835440001863239914907054797780566978533580489669062951194324730995876552368128590413832411607226029983305353708761389396391779574540161372236187893652605381558415871869255386061647798340254351284396129460352913325942794904337299085731580290958631382683291477116396337092400316894586360606458459251269946557248391865642097526850823075442545993769170419777800853627309417101634349076964237222943523661255725088147792231519747780605696725380171807763603462459278778465850656050780844211529697521890874019660906651803516501792504619501366585436632712549639908549144200014574760819302212066024330096412704894390397177195180699086998606636583232278709376502260149291011517177635944602023249300280401867723910288097866605651183260043688508817157238669842242201024950551881694803221002515426494639812873677658927688163598312477886520141174110913601164995076629077943646005851941998560162647907615321038727557126992518275687989302761761146162549356495903798045838182323368612016243736569846703785853305275833337939907521660692380533698879565137285593883499894707416181550125397064648171946708348197214488898790676503795903669672494992545279033729636162658976039498576741397359441023744329709355477982629614591442936451428617158587339746791897571211956187385783644758448423555581050025611492391518893099463428413936080383091662818811503715284967059741625628236092168075150177725387402564253470879089137291722828611515915683725241630772254406337875931059826760944203261924285317018781772960235413060672136046000389661093647095141417185777014180606443636815464440053316087783143174440811949422975599314011888683314832802706553833004693290115744147563139997221703804617092894579096271662260740718749975359212756084414737823303270330168237193648002173285734935947564334129943024850235732214597843282641421684878721673367010615094243456984401873312810107945127223737886126058165668053714396127888732527373890392890506865324138062796025930387727697783792868409325365880733988457218746021005311483351323850047827169376218004904795597959290591655470505777514308175112698985188408718564026035305583737832422924185625644255022672155980274012617971928047139600689163828665277009752767069777036439260224372841840883251848770472638440379530166905465937461619323840363893131364327137688841026811219891275223056256756254701725086349765367288605966752740868627407912856576996313789753034660616669804218267724560530660773899624218340859882071864682623215080288286359746839654358856685503773131296587975810501214916207656769950659715344763470320853215603674828608378656803073062657633469774295634643716709397193060876963495328846833613038829431040800296873869117066666146800015121143442256023874474325250769387077775193299942137277211258843608715834835626961661980572526612206797540621062080649882918454395301529982092503005498257043390553570168653120526495614857249257386206917403695213533732531666345466588597286659451136441370331393672118569553952108458407244323835586063106806964924851232632699514603596037297253198368423363904632136710116192821711150282801604488058802382031981493096369596735832742024988245684941273860566491352526706046234450549227581151709314921879592718001940968866986837037302200475314338181092708030017205935530520700706072233999463990571311587099635777359027196285061146514837526209565346713290025994397663114545902685898979115837093419370441155121920117164880566945938131183843765620627846310490346293950029458341164824114969758326011800731699437393506966295712410273239138741754923071862454543222039552735295240245903805744502892246886285336542213815722131163288112052146489805180092024719391710555390113943316681515828843687606961102505171007392762385553386272553538830960671644662370922646809671254061869502143176211668140097595281493907222601112681153108387317617323235263605838173151034595736538223534992935822836851007810884634349983518404451704270189381994243410090575376257767571118090088164183319201962623416288166521374717325477727783488774366518828752156685719506371936565390389449366421764003121527870222366463635755503565576948886549500270853923617105502131147413744106134445544192101336172996285694899193369184729478580729156088510396781959429833186480756083679551496636448965592948187851784038773326247051945050419847742014183947731202815886845707290544057510601285258056594703046836344592652552137008068752009593453607316226118728173928074623094685367823106097921599360019946237993434210687813497346959246469752506246958616909178573976595199392993995567542714654910456860702099012606818704984178079173924071945996323060254707901774527513186809982284730860766536866855516467702911336827563107223346726113705490795365834538637196235856312618387156774118738527722922594743373785695538456246801013905727871016512966636764451872465653730402443684140814488732957847348490003019477888020460324660842875351848364959195082888323206522128104190448047247949291342284951970022601310430062410717971502793433263407995960531446053230488528972917659876016667811937932372453857209607582277178483361613582612896226118129455927462767137794487586753657544861407611931125958512655759734573015333642630767985443385761715333462325270572005303988289499034259566232975782488735029259166825894456894655992658454762694528780516501720674785417887982276806536650641910973434528878338621726156269582654478205672987756426325321594294418039943217000090542650763095588465895171709147607437136893319469090981904501290307099566226620303182649365733698419555776963787624918852865686607600566025605445711337286840205574416030837052312242587223438854123179481388550075689381124935386318635287083799845692619981794523364087429591180747453419551420351726184200845509170845682368200897739455842679214273477560879644279202708312150156406341341617166448069815483764491573900121217041547872591998943825364950514771379399147205219529079396137621107238494290616357604596231253506068537651423115349665683715116604220796394466621163255157729070978473156278277598788136491951257483328793771571459091064841642678309949723674420175862269402159407924480541255360431317992696739157542419296607312393763542139230617876753958711436104089409966089471418340698362993675362621545247298464213752891079884381306095552622720837518629837066787224430195793793786072107254277289071732854874374355781966511716618330881129120245204048682200072344035025448202834254187884653602591506445271657700044521097735585897622655484941621714989532383421600114062950718490427789258552743035221396835679018076406042138307308774460170842688272261177180842664333651780002171903449234264266292261456004337383868335555343453004264818473989215627086095650629340405264943244261445665921291225648893569655009154306426134252668472594914314239398845432486327461842846655985332312210466259890141712103446084271616619001257195870793217569698544013397622096749454185407118446433946990162698351607848924514058940946395267807354579700307051163682519487701189764002827648414160587206184185297189154019688253289309149665345753571427318482016384644832499037886069008072709327673127581966563941148961716832980455139729506687604740915420428429993541025829113502241690769431668574242522509026939034814856451303069925199590436384028429267412573422447765584177886171737265462085498294498946787350929581652632072258992368768457017823038096567883112289305809140572610865884845873101658151167533327674887014829167419701512559782572707406431808601428149024146780472327597684269633935773542930186739439716388611764209004068663398856841681003872389214483176070116684503887212364367043314091155733280182977988736590916659612402021778558854876176161989370794380056663364884365089144805571039765214696027662583599051987042300179465536789";

		// ln(2) to 10,000 characters.
		static const Text LN2_STRING = "6931471805599453094172321214581765680755001343602552541206800094933936219696947156058633269964186875420014810205706857336855202357581305570326707516350759619307275708283714351903070386238916734711233501153644979552391204751726815749320651555247341395258829504530070953263666426541042391578149520437404303855008019441706416715186447128399681717845469570262716310645461502572074024816377733896385506952606683411372738737229289564935470257626520988596932019650585547647033067936544325476327449512504060694381471046899465062201677204245245296126879465461931651746813926725041038025462596568691441928716082938031727143677826548775664850856740776484514644399404614226031930967354025744460703080960850474866385231381816767514386674766478908814371419854942315199735488037516586127535291661000710535582498794147295092931138971559982056543928717000721808576102523688921324497138932037843935308877482597017155910708823683627589842589185353024363421436706118923678919237231467232172053401649256872747782344535347648114941864238677677440606956265737960086707625719918473402265146283790488306203306114463007371948900274364396500258093651944304119115060809487930678651588709006052034684297361938412896525565396860221941229242075743217574890977067526871158170511370091589426654785959648906530584602586683829400228330053820740056770530467870018416240441883323279838634900156312188956065055315127219939833203075140842609147900126516824344389357247278820548627155274187724300248979454019618723398086083166481149093066751933931289043164137068139777649817697486890388778999129650361927071088926410523092478391737350122984242049956893599220660220465494151061391878857442455775102068370308666194808964121868077902081815885800016881159730561866761991873952007667192145922367206025395954365416553112951759899400560003665135675690512459268257439464831683326249018038242408242314523061409638057007025513877026817851630690255137032340538021450190153740295099422629957796474271381573638017298739407042421799722669629799393127069357472404933865308797587216996451294464918837711567016785988049818388967841349383140140731664727653276359192335112333893387095132090592721854713289754707978913844454666761927028855334234298993218037691549733402675467588732367783429161918104301160916952655478597328917635455567428638774639871019124317542558883012067792102803412068797591430812833072303008834947057924965910058600123415617574132724659430684354652111350215443415399553818565227502214245664400062761833032064727257219751529082785684213207959886389672771195522188190466039570097747065126195052789322960889314056254334425523920620303439417773579455921259019925591148440242390125542590031295370519220615064345837878730020354144217857580132364516607099143831450049858966885772221486528821694181270488607589722032166631283783291567630749872985746389282693735098407780493950049339987626475507031622161390348452994249172483734061366226383493681116841670569252147513839306384553718626877973288955588716344297562447553923663694888778238901749810273565524050518547730619440524232212559024833082778888890596291197299545744156245124859268311260746797281638090250005655999146128332543581114048482060640824224792403855764762350311003242597091425011146155848306700125831821915347207474111940098355732728261442738213970704779562596705790230338480617134555536855375810657497344479225111965461618278960100685129653954796586637835224736245460935850360506784143911445231457780335917921127955705055554514387888188153519485934467246429498640506265184244753956637833734822075332944813064933603546101017746493267877167198612073968320123596077290246830459403130563776313240108042028543590269450940307400149339507673160285028697303187182399843352574354995608502566089783395564211494807339362607510238183314110047089039501343302974134748405406158775396888381540769801776730369991074924697847843128430364112892028012272563468391623354787727340063958657179819069358127387034335313189050383845616444442927969063837969092441303965600987663584627766076053486974908593811939309251791198855527765356660762439356877194233166642838200744816307865229235659826586275918747520875091447609016973569357231824249919475494431631463392270743244590302482544412490359409900711377326310998077723937579092667787226299567773759125268754691760395501473633737461645076457771598146610758399303043231349496586482284678495247540297968900151098424340816722641053465175318895709341462658913980173123676248874585502699619246678052425882378995907144185753559519019313826275593500184826081076906494067924435885831503526017045009346714087384727895167845415252267023696905468698446072109821774736606547523242089063817688335653308345429052023662173681689021810091859270116416256337109210919193811088408371995494139528087438476593315164645244837143495547071767478644667777773262400599442803883005052063960254487221940100482456835584914116372021650148290488954105485988582139146739280127960783765798030190197895831298445842350551628047138457098367143179598497983384936643051357439778464080283944996492836177201217529719601115189233475664664487214704005952700208247971196291259570791322875250242252752285663130430511219493771542940710492247147978154532985068822892694882234218141773477912289705930385167864412351277321379947051313086561526091767421412897899794277108410495559054929958460312928956410723379347221982629602465778859855649153542526276936457817157687505627695951940614769513362135896621103672390186183449100847056023240885740736498064913350497727229854121559922564905903204165800777130365484448790985802916806772298738484805391437126882845158996289290464953606976491322649729017581046490396601249026809144226696306532240532793180520138990302506701645946145093278991874975058845950892812313146535841156454786288876711792759444189103227033972699410782620949066939193233649528840398410534174131030284298298384597274509689153505229806232440923138110578435654734098675193838607282407897523799065221536828449641519520436143002340641177671720819470742812470616078679139714257561026877325672566518779398869543561247252503824110532837942494962425075385985566130187632566463726695281899182447028336064458337646946313432313914423530118060852644531774177829165319868877107483800215964071937546885362724120722736141210013984094390772718393471792022895741896562095677977039547595272233827891909436958956141581883760856034834063384906401173599284897189611655350881207229167416716902882811061704372980788755174869275740035755306007315351924334950734050193793931810588767452835236416527690371651749224459625244061326021533148024272969622677771345064205355151024831061088767266294511910945817001717135117299890025904644763066359724199051847024911088680124694191549654441175995933753867861532885105055485957519052829926745974805776695003496600239248911757605776389825650559728570971462382136461281575699631424743375953147095068089204461516870319405483113785049768421845778096360358356776814229804015130588032213887006143666466195154562642826797900580907023312944256272924492983069495929158131775714230468246948685772631408192667492977253974375636520310755620276511754740767284532831999750648553715678521340479205266153502615115035640625189174989835252957607118611897031987583795086582124471448554809890971322784110436163215054456189256415686480097687527172793631662356769343050705400960785297576973347816339786503563447596083113058918741088775476498966140767093540099289679033005197129229294655908813155093792311652676248200974255320501351088304034115018668628172784448518320999893113810480114847364338261550474827000102727871555379607626977726233061428597322037017716488013935906731651593131207225660010057306787815875968237327432664863152551632539069522055152460415473672664715829719759100176329246755391947924412596855986918431266716876066114774212493131547577111029905275698849479218285429200771991138110640201310850296702223726371927432520508605883939945814143535946600955513703685151439534425132251623274481769284748335160181431483775772910265977050216375513317616320906962102363852706627337362690153696255073610884241576308151549058618960450223864851723710305700902066826458514960037828134831228854708597775562195752286969914671954540310816696269690296896222715552668123003336549928427924612250395570999614692971694339351544508557516142866963351826393901192551987712707669409200410842997382985072562990345850433584478193617497687963688481517014603841493189458567310955889799384166616697431842151088678182747274771922062439778066084664630977888195315596103595567520455859572036591635522582959536734037782112409893988073073541836213121088375170380368236163604481832644531771086739357751041914220906966917822647476248726919802612861083744865233044185807437406799924659359146430681924558555771836314041797245925837265876930872766629910804504348591495996962501941052691904827629968903003602357636424254397670564582540996414041450994670345387743125702655292199608428211070672039110526250561980914926429443191308362902026158372172207479904166903500594072814160493965365572734122339332806103370037021008211534192227293534916762079885625851679806479158586942391146178726357859291357726649656033071530623284906061534893403415083718713352615870286424651827290435568456552106161725177136625005254799445985467661817786025877803806030984445445231764300573378558790455136113162544138851136958094835849584914934421251105356131748993037427322843117221670118781585253525367038010852035298366282616347129789683306531521000247432193921670599073133403022837905315374833325886025968671733006730262612955255637933976817300485239406795549141449465881533293253950529298238146676292254117063142342669344856493368632531418747139643415905283733805759990776658169381718971757458617472391097384196997646199589679391854451098059585787249716421848244964174409657751106908793193517216376221168703906403811218433433897183542006078817356825697886748930465585244588375921264841779920836375927805215882886594444347071772120467466371740330707609189137396956143477741839440991803548117653335878130833510705646029925695615913401856601359655561";
	}
}