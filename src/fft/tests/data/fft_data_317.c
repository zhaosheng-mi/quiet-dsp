/*
 * Copyright (c) 2007 - 2015 Joseph Gaeddert
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

//
// autotest fft data for 317-point transform
//



#include "liquid.h"
#include "autotest/autotest.h"

liquid_float_complex fft_test_x317[] = {
    0.554097588235f +   0.674837317416f*_Complex_I,
    0.530737753317f +  -0.079409691311f*_Complex_I,
    0.132225792019f +  -2.683942671459f*_Complex_I,
   -0.433831796385f +  -0.644436889896f*_Complex_I,
    0.531193579547f +  -0.234132120154f*_Complex_I,
    0.372970050685f +   0.234590738463f*_Complex_I,
    0.469189910453f +   1.347839137560f*_Complex_I,
    1.407357556116f +  -0.732654574714f*_Complex_I,
   -0.892419998715f +   1.232301421325f*_Complex_I,
   -2.097695896055f +   0.374300022370f*_Complex_I,
    0.841647143326f +   1.509643189344f*_Complex_I,
    2.033126977287f +  -0.280107016121f*_Complex_I,
    0.436605233661f +  -0.542582266432f*_Complex_I,
   -0.564143476179f +  -1.316474379263f*_Complex_I,
    1.205813790177f +   0.314460438693f*_Complex_I,
   -0.290370012573f +  -0.142559201647f*_Complex_I,
    0.389754456864f +   0.846145131479f*_Complex_I,
    1.072733277575f +   0.217097105341f*_Complex_I,
   -0.530701360675f +   0.621669741612f*_Complex_I,
   -0.747465971012f +  -1.217065085995f*_Complex_I,
    0.285811246522f +  -0.575506757253f*_Complex_I,
    1.731868270921f +  -1.695420723201f*_Complex_I,
    2.062026927380f +  -0.467312976619f*_Complex_I,
   -0.238522083883f +   0.733481847031f*_Complex_I,
    0.962605683108f +  -0.932743731262f*_Complex_I,
   -0.244109153061f +   0.048909057472f*_Complex_I,
   -0.521908701077f +  -0.335290348825f*_Complex_I,
   -0.224377634061f +   0.812682493510f*_Complex_I,
   -0.808168093175f +  -2.606743537297f*_Complex_I,
   -0.383229234780f +   0.204386340920f*_Complex_I,
   -1.604057984500f +   0.282386325516f*_Complex_I,
    1.123689375175f +   0.294576201783f*_Complex_I,
    1.045506847212f +   0.558518419936f*_Complex_I,
    0.444874000589f +   0.832776075751f*_Complex_I,
    0.381774427538f +   0.783400026120f*_Complex_I,
    0.591805517099f +   0.899143948342f*_Complex_I,
    0.995508244414f +  -0.835798382940f*_Complex_I,
   -2.173146523457f +   0.954135191444f*_Complex_I,
    2.429109028004f +   0.404032043829f*_Complex_I,
   -0.642851155627f +  -0.253033059825f*_Complex_I,
   -0.960201285491f +  -0.932974674369f*_Complex_I,
    0.052794955676f +   0.070183835184f*_Complex_I,
   -0.122786042744f +   0.417387287207f*_Complex_I,
    0.200201640049f +  -0.342343750496f*_Complex_I,
    0.152601120150f +   0.746938165561f*_Complex_I,
   -0.720582709452f +   1.464296507060f*_Complex_I,
    0.286243449065f +  -0.356130710199f*_Complex_I,
   -0.855441109470f +   0.260173089323f*_Complex_I,
    1.241960323905f +  -1.220424835146f*_Complex_I,
    0.410436718259f +  -0.915784426815f*_Complex_I,
   -0.608754986761f +   1.196797063902f*_Complex_I,
    0.842595164718f +   1.776375320466f*_Complex_I,
    0.461313891161f +   0.132552548247f*_Complex_I,
   -1.038934516657f +  -0.503009712801f*_Complex_I,
   -0.174516309894f +  -1.414963943166f*_Complex_I,
   -1.312041533200f +   0.350893580013f*_Complex_I,
    0.208956667743f +  -0.958786287939f*_Complex_I,
    0.803660420194f +   1.011070131954f*_Complex_I,
    2.165017913712f +  -1.468093310734f*_Complex_I,
    1.129645943719f +   0.537365498647f*_Complex_I,
   -1.595984272966f +  -0.203122161061f*_Complex_I,
    1.001865195124f +  -1.388137201018f*_Complex_I,
    0.824523455412f +   0.399895307714f*_Complex_I,
    1.390174301291f +   2.631574565038f*_Complex_I,
   -0.950205283612f +  -1.131255194597f*_Complex_I,
    1.905487211032f +  -0.077934597969f*_Complex_I,
    1.003876696894f +  -0.060334922974f*_Complex_I,
   -0.739566795906f +  -0.125966238551f*_Complex_I,
    0.638862295532f +   0.312440320520f*_Complex_I,
    0.812688518156f +  -0.687832384174f*_Complex_I,
   -0.247460071939f +   1.506637100983f*_Complex_I,
    1.119835012306f +   1.284530437377f*_Complex_I,
    0.514075655596f +   0.315432575412f*_Complex_I,
   -0.556581507109f +  -2.240098527759f*_Complex_I,
    0.249592136667f +   0.505876736625f*_Complex_I,
    0.138808728752f +  -0.362938299441f*_Complex_I,
   -1.295018476090f +  -0.498162870507f*_Complex_I,
    0.633165144610f +  -1.395172629954f*_Complex_I,
    0.932960550573f +  -0.237180627122f*_Complex_I,
    1.661895463725f +   0.690503082347f*_Complex_I,
    0.333824445072f +  -1.788741666587f*_Complex_I,
    0.489887999458f +  -0.706548054495f*_Complex_I,
   -0.548551848905f +   0.898884888429f*_Complex_I,
   -0.608101416118f +  -0.201679435156f*_Complex_I,
    0.890886957534f +  -0.480205878554f*_Complex_I,
   -0.000052987921f +   0.753051843488f*_Complex_I,
   -2.008688335321f +  -0.531405355010f*_Complex_I,
    0.178224821311f +   0.093166214057f*_Complex_I,
   -1.028365245165f +  -0.852475963885f*_Complex_I,
    0.686303677542f +   1.543109809415f*_Complex_I,
    1.711982713732f +  -0.058899888612f*_Complex_I,
    1.120881384941f +   0.023773370634f*_Complex_I,
    0.452547007139f +  -0.345550830853f*_Complex_I,
    0.851642145828f +   0.918449585078f*_Complex_I,
    1.354411836149f +   0.053840956523f*_Complex_I,
    0.186505302140f +   0.455350659118f*_Complex_I,
    1.178867803924f +   0.561242592990f*_Complex_I,
   -0.867274007830f +   0.778369347385f*_Complex_I,
   -0.763210306046f +  -0.056553236256f*_Complex_I,
   -0.925493602469f +   1.802123360882f*_Complex_I,
   -0.381880717193f +   0.836790955039f*_Complex_I,
    0.740584915503f +   0.410451383495f*_Complex_I,
   -1.739773756173f +  -0.008392421431f*_Complex_I,
   -0.927812449353f +   0.225621894111f*_Complex_I,
    0.291685537968f +  -0.631710150727f*_Complex_I,
    1.044752342554f +  -0.921336822198f*_Complex_I,
    0.379926674636f +   0.104269280376f*_Complex_I,
   -0.747794397492f +  -1.586409810217f*_Complex_I,
   -0.707471806222f +  -3.451349626151f*_Complex_I,
   -0.610242217287f +  -0.050520690817f*_Complex_I,
   -1.141609802996f +  -0.450890109498f*_Complex_I,
   -0.110600652376f +   0.711135784835f*_Complex_I,
   -2.154140310955f +  -0.464833145767f*_Complex_I,
    2.215673027150f +   0.378163057373f*_Complex_I,
   -0.654346983910f +  -0.446467309237f*_Complex_I,
    0.054883600089f +  -0.699447750344f*_Complex_I,
    0.806739839269f +   0.085857123252f*_Complex_I,
   -1.606523541279f +   0.816575059374f*_Complex_I,
    0.592874861350f +  -0.160053556472f*_Complex_I,
   -0.487687814535f +   2.062004006591f*_Complex_I,
   -0.494854876646f +   1.222171460716f*_Complex_I,
    1.143598578272f +  -0.256116050124f*_Complex_I,
    2.400451006261f +  -0.615247709498f*_Complex_I,
    1.794972603823f +   0.061326347413f*_Complex_I,
   -1.785033202582f +   1.285030637182f*_Complex_I,
    0.952408789671f +  -0.061111017884f*_Complex_I,
    0.045375503932f +  -0.337506966204f*_Complex_I,
    0.098933506757f +   1.552870310423f*_Complex_I,
   -0.114562876521f +   0.289943289341f*_Complex_I,
   -0.283731751338f +  -0.946113439136f*_Complex_I,
    0.461130821204f +   0.048895395259f*_Complex_I,
   -1.174095369155f +   0.023986190137f*_Complex_I,
   -0.098711272023f +   0.155133236840f*_Complex_I,
    1.644296831488f +  -0.763890180558f*_Complex_I,
   -0.598417564337f +  -0.286264760137f*_Complex_I,
    0.526726895394f +   1.073518895905f*_Complex_I,
   -0.853228628205f +  -1.282488324989f*_Complex_I,
   -1.020706122357f +   0.248901790873f*_Complex_I,
    1.313386656293f +   1.883626375861f*_Complex_I,
   -0.596968080006f +   1.198886796626f*_Complex_I,
   -1.090527229732f +   1.322486318068f*_Complex_I,
    0.055643681240f +  -1.476648993263f*_Complex_I,
   -0.134166277120f +   0.538780165850f*_Complex_I,
   -0.394194728658f +   0.287017836253f*_Complex_I,
    0.451499019863f +   0.196444291722f*_Complex_I,
   -1.227900659262f +   0.066951464777f*_Complex_I,
    0.281655958102f +   0.477082252845f*_Complex_I,
    1.584578121348f +   2.263167026855f*_Complex_I,
   -0.337702889133f +  -1.675522983729f*_Complex_I,
   -1.262293072370f +   0.295093464675f*_Complex_I,
   -1.466903736895f +   0.492057686013f*_Complex_I,
   -1.485463891249f +   1.082857775981f*_Complex_I,
   -0.275569696975f +  -0.635382067043f*_Complex_I,
    1.705596337300f +   2.104558859516f*_Complex_I,
    0.704228406430f +   1.560694307633f*_Complex_I,
    0.940747890984f +   0.080075753674f*_Complex_I,
   -0.671195049979f +  -0.305225546505f*_Complex_I,
    1.351213152915f +  -0.159424965469f*_Complex_I,
   -0.168781019368f +   0.642571757925f*_Complex_I,
   -0.431378015911f +  -0.017150397606f*_Complex_I,
    0.084141441624f +   0.021065037620f*_Complex_I,
   -0.464340239256f +  -0.192995496761f*_Complex_I,
   -1.333718595841f +  -0.017151207176f*_Complex_I,
    1.699781888517f +   1.611185583580f*_Complex_I,
   -0.413570253776f +  -0.044257707528f*_Complex_I,
    2.258631378215f +  -0.166004542094f*_Complex_I,
   -0.465389665786f +   0.871749883624f*_Complex_I,
    1.029189363291f +   0.713498194652f*_Complex_I,
   -0.094915760832f +  -1.625030317385f*_Complex_I,
   -1.232066038521f +  -0.607872994844f*_Complex_I,
    1.502005331699f +  -0.020525271340f*_Complex_I,
   -0.683321223012f +  -0.293225147764f*_Complex_I,
   -0.907670613167f +  -0.107969897144f*_Complex_I,
    0.462429724200f +  -0.775625444256f*_Complex_I,
   -1.205101490966f +  -0.132384994859f*_Complex_I,
   -1.179628062446f +   2.189754291494f*_Complex_I,
   -0.631509862810f +   1.222985676196f*_Complex_I,
    0.789563515020f +   0.698677701769f*_Complex_I,
    1.687609752565f +   0.400827580780f*_Complex_I,
   -0.645610608306f +  -0.014606261491f*_Complex_I,
   -1.361740989948f +  -0.117827247124f*_Complex_I,
    1.314229682964f +  -0.603800894199f*_Complex_I,
   -1.956380418062f +   1.043229034913f*_Complex_I,
   -0.801537986631f +   2.532651178906f*_Complex_I,
   -2.386565797106f +  -1.098115563132f*_Complex_I,
    0.220407348326f +  -1.279188578233f*_Complex_I,
   -0.692180379497f +   0.560515689944f*_Complex_I,
   -0.356604504521f +   0.793303202093f*_Complex_I,
   -0.159496968171f +  -1.294766371488f*_Complex_I,
    1.198119217621f +  -1.994862046372f*_Complex_I,
   -0.568527073111f +   0.401071277388f*_Complex_I,
    2.987226058138f +  -0.073884662975f*_Complex_I,
    1.799586418676f +  -0.574490253290f*_Complex_I,
    0.011347684988f +  -0.745307885407f*_Complex_I,
    0.729683796427f +  -1.060721735894f*_Complex_I,
   -1.966760785708f +  -0.605669511192f*_Complex_I,
    1.142741187156f +   0.019297308388f*_Complex_I,
   -1.561621247893f +  -0.095007722087f*_Complex_I,
    0.336572557763f +  -0.651058510390f*_Complex_I,
    0.040766936719f +   1.217219328749f*_Complex_I,
    0.200903662048f +   0.393373958513f*_Complex_I,
   -1.236464108144f +   0.541280738924f*_Complex_I,
    0.117909377974f +  -0.607773139351f*_Complex_I,
    0.379616825601f +  -0.643186918605f*_Complex_I,
    0.643537081891f +   0.275436892658f*_Complex_I,
    0.225873382688f +  -0.158194256053f*_Complex_I,
    0.053176096756f +   1.458472268368f*_Complex_I,
    1.414145044178f +  -0.733638770750f*_Complex_I,
    1.347289531912f +   0.169321860659f*_Complex_I,
   -0.840384203303f +   0.763005504852f*_Complex_I,
    1.214072735988f +   1.485891717688f*_Complex_I,
   -0.348223438412f +   1.020459174171f*_Complex_I,
    0.073882541886f +  -0.905791314139f*_Complex_I,
   -0.705446913782f +   0.056186574618f*_Complex_I,
   -0.960863041873f +  -0.196833332985f*_Complex_I,
    1.006218030516f +  -0.467774405167f*_Complex_I,
    0.602372049969f +  -2.674593305127f*_Complex_I,
   -0.934722056514f +  -0.016922494007f*_Complex_I,
    0.257679561629f +  -0.885684235693f*_Complex_I,
    0.044866947149f +   0.936359293985f*_Complex_I,
    0.950842198317f +   1.868559062575f*_Complex_I,
    1.498943799171f +  -0.019107821973f*_Complex_I,
   -1.868507034816f +   0.197524971623f*_Complex_I,
    0.970832401725f +  -0.074109462719f*_Complex_I,
   -2.886469419266f +   0.142475981345f*_Complex_I,
    1.240964551237f +   0.153090872958f*_Complex_I,
   -0.000396756859f +  -1.046593294557f*_Complex_I,
    1.117655103664f +   1.647657701398f*_Complex_I,
    1.162930856009f +  -0.975104959968f*_Complex_I,
   -0.934535360620f +   0.307953402722f*_Complex_I,
   -0.573780565126f +  -0.375508524005f*_Complex_I,
   -0.103208834185f +   2.105768262189f*_Complex_I,
   -1.379507684252f +  -0.280894989725f*_Complex_I,
    0.859242654654f +   0.201801911064f*_Complex_I,
    0.214128192305f +  -0.427748749718f*_Complex_I,
    1.559388133754f +  -2.233121573297f*_Complex_I,
    0.019639327733f +   0.360300645061f*_Complex_I,
   -0.133932495128f +  -0.722680847651f*_Complex_I,
    0.863036773382f +  -2.922284619456f*_Complex_I,
    0.334598761557f +  -0.983050027547f*_Complex_I,
   -1.077563482460f +   0.417379502415f*_Complex_I,
   -0.198656810153f +   0.569701104618f*_Complex_I,
    0.913145816840f +   2.052526155977f*_Complex_I,
    0.854066622796f +  -0.413714533361f*_Complex_I,
   -0.414380668765f +  -1.405489197548f*_Complex_I,
   -1.110627741502f +  -1.820107908459f*_Complex_I,
   -0.613940194705f +   1.779435308312f*_Complex_I,
   -2.105251634607f +   0.525272681631f*_Complex_I,
    0.609098015750f +  -0.895402748194f*_Complex_I,
    1.934336563550f +   0.543860167180f*_Complex_I,
   -0.782446497605f +   0.641226314552f*_Complex_I,
   -0.955134630524f +  -0.077175268361f*_Complex_I,
   -0.210873574493f +  -1.715168716896f*_Complex_I,
    1.628059930554f +  -1.533301168339f*_Complex_I,
   -1.421933758706f +  -0.241187651806f*_Complex_I,
    2.187891215143f +  -0.023407875710f*_Complex_I,
    0.548885995861f +   0.285435244871f*_Complex_I,
    0.674430997216f +  -0.481078429799f*_Complex_I,
    0.397489182610f +  -0.446320110483f*_Complex_I,
   -0.865204055951f +  -0.020571209344f*_Complex_I,
   -0.155857632710f +  -1.473838050536f*_Complex_I,
   -0.825650581473f +   0.501060420785f*_Complex_I,
    0.506220809313f +   1.124359364738f*_Complex_I,
    0.199383983129f +   0.552775919340f*_Complex_I,
   -0.675785644869f +  -0.015515289402f*_Complex_I,
    0.347119071389f +  -0.046308125867f*_Complex_I,
   -0.580411900444f +   0.473043358519f*_Complex_I,
   -1.073929642005f +  -1.146130174539f*_Complex_I,
   -1.137495899690f +  -1.309784871827f*_Complex_I,
    1.171486989096f +   1.823857109273f*_Complex_I,
   -0.742946853968f +   0.049703242746f*_Complex_I,
   -0.160432289828f +   1.724103887278f*_Complex_I,
   -0.546035353551f +   0.386968779514f*_Complex_I,
   -1.213047883956f +  -0.537389928129f*_Complex_I,
   -1.339236442910f +  -1.248701576327f*_Complex_I,
   -0.815367922604f +   0.085728302177f*_Complex_I,
   -2.349193819868f +   0.427831727302f*_Complex_I,
   -0.276194199790f +   1.234485714534f*_Complex_I,
   -0.355231570763f +  -0.995816467388f*_Complex_I,
    1.137208262430f +   0.216271557004f*_Complex_I,
    0.962040804090f +  -1.065610794498f*_Complex_I,
   -0.668324382362f +   0.822590130460f*_Complex_I,
   -1.202015945307f +  -1.480043875470f*_Complex_I,
    1.179225549720f +   1.767048172045f*_Complex_I,
   -0.684123959923f +  -0.862865878982f*_Complex_I,
   -0.174319873616f +   0.167752215701f*_Complex_I,
   -1.446536704664f +   1.172516467428f*_Complex_I,
    0.858114162859f +   2.295181364008f*_Complex_I,
    0.124270375245f +   0.997986406329f*_Complex_I,
    0.394906672949f +   1.154862665198f*_Complex_I,
    1.053903228740f +   1.779817113028f*_Complex_I,
   -0.230950556520f +  -0.175979989611f*_Complex_I,
   -1.265383803223f +  -0.026310311336f*_Complex_I,
    0.762972265227f +   1.429231386216f*_Complex_I,
    1.162409662447f +  -1.112322698285f*_Complex_I,
    0.775539802471f +  -1.323064642721f*_Complex_I,
    0.666613966503f +  -0.129946108336f*_Complex_I,
    1.930414467502f +   0.436695033239f*_Complex_I,
    0.885068429064f +   0.115321831962f*_Complex_I,
    1.551024374006f +   0.416463074882f*_Complex_I,
    0.247974255137f +   0.627306468118f*_Complex_I,
    0.781609286510f +   0.378212834621f*_Complex_I,
    0.332343800329f +   0.539122959506f*_Complex_I,
    0.519709930109f +  -1.064947224271f*_Complex_I,
   -0.635850608190f +   1.257862397877f*_Complex_I,
    1.628515077193f +  -1.103666746889f*_Complex_I,
   -0.849325965524f +  -1.767990899186f*_Complex_I,
    0.743956616560f +  -2.505409755963f*_Complex_I,
    0.830498883146f +   0.057323145873f*_Complex_I,
   -1.470980958211f +  -1.558079958147f*_Complex_I,
   -0.088063460329f +   0.426467567974f*_Complex_I,
   -0.219298752127f +  -0.711676070690f*_Complex_I,
   -0.283866135348f +   1.254036523517f*_Complex_I,
   -0.254391988290f +   0.215410095075f*_Complex_I,
   -0.590092311740f +  -1.507631350024f*_Complex_I,
   -1.535360519901f +  -0.437319427483f*_Complex_I,
    1.026878345705f +  -0.182042614613f*_Complex_I};

liquid_float_complex fft_test_y317[] = {
   19.891894947904f +   5.655090929781f*_Complex_I,
   18.838569316919f + -27.216365987549f*_Complex_I,
  -11.140787864820f +  -1.700693291107f*_Complex_I,
    9.248191980131f + -11.880625755527f*_Complex_I,
    0.877433246927f +   5.210710512463f*_Complex_I,
   12.613756002695f + -22.914829471885f*_Complex_I,
   -7.522954808149f +   2.580642036625f*_Complex_I,
  -24.806396396859f +  14.114587974426f*_Complex_I,
    9.875249841730f + -22.004495722041f*_Complex_I,
  -18.222931551932f +   2.572927350772f*_Complex_I,
   20.867583356509f +  -1.458843546852f*_Complex_I,
   38.916192529134f +  -7.826129128685f*_Complex_I,
  -19.618271263978f + -21.217111192894f*_Complex_I,
    0.549362128526f +  18.584275483073f*_Complex_I,
   -5.258299327834f +  -0.446452119776f*_Complex_I,
   -6.830532675831f + -35.800356213084f*_Complex_I,
   16.124101912097f +  -2.387751210287f*_Complex_I,
   19.602770799308f + -18.449258115561f*_Complex_I,
   -4.933124103618f +   8.281766183665f*_Complex_I,
  -13.560383009984f +   0.970618524872f*_Complex_I,
   41.610229013366f +   5.152249379736f*_Complex_I,
    1.415309104711f +  11.210809107531f*_Complex_I,
  -40.441003535705f + -12.405906077032f*_Complex_I,
  -12.530216678354f +  22.864679881966f*_Complex_I,
  -29.573667819723f + -22.154070735316f*_Complex_I,
   -8.933348019353f + -25.720405793092f*_Complex_I,
   -3.072833505067f +  16.874820762270f*_Complex_I,
   -8.751051523099f +  -9.544252802963f*_Complex_I,
   19.619902222112f + -22.765558912475f*_Complex_I,
    3.204939906092f + -25.426020065167f*_Complex_I,
  -18.600493227238f +   2.762236432333f*_Complex_I,
   10.833867918922f + -38.070397977737f*_Complex_I,
   25.869914191964f + -19.192002503531f*_Complex_I,
   12.052348942398f +  -1.338816803484f*_Complex_I,
  -38.656067918699f + -24.135381967263f*_Complex_I,
    5.700781235700f +  11.219859126000f*_Complex_I,
  -23.338619501120f +  32.607593688928f*_Complex_I,
  -10.686035441793f +  16.337999228208f*_Complex_I,
   -9.517260831300f +  17.469953582495f*_Complex_I,
   11.452433021422f +  -2.244848000851f*_Complex_I,
    3.355159985201f +  -0.950021809091f*_Complex_I,
   11.960645612996f +   6.893274528846f*_Complex_I,
    9.585251410761f +  10.141135223678f*_Complex_I,
   -7.050051336892f +  27.613088292755f*_Complex_I,
    7.367552651770f +  -6.006047409882f*_Complex_I,
   19.902478672101f + -16.730550563777f*_Complex_I,
   32.759288191850f +   1.162079163303f*_Complex_I,
  -10.679222098466f +  -0.414496389670f*_Complex_I,
  -17.167648316558f +  13.231819142930f*_Complex_I,
  -15.270670234876f +  12.750590771914f*_Complex_I,
    7.808635317834f +  -1.976327148026f*_Complex_I,
    3.659364354893f +  12.967348190608f*_Complex_I,
    8.516191035487f +  -3.814776057042f*_Complex_I,
   -2.967686164798f +  -2.759276437723f*_Complex_I,
  -10.217022770046f +  22.446524490020f*_Complex_I,
  -13.759629399132f +   0.428077429397f*_Complex_I,
   12.108694472460f +  17.906136235301f*_Complex_I,
    0.500310973628f +  10.379459504754f*_Complex_I,
   22.170113416067f + -17.601071337137f*_Complex_I,
   -4.547207763897f +  13.535378900333f*_Complex_I,
   35.073898289289f +  -3.750408416097f*_Complex_I,
   12.960162045071f + -10.329236328497f*_Complex_I,
    5.155047938611f +  11.233862622741f*_Complex_I,
  -19.366076595616f +   3.290152177759f*_Complex_I,
   -2.547983907745f +  -4.318523679571f*_Complex_I,
   13.079902614417f + -31.788319997011f*_Complex_I,
   -0.294946700028f +  20.014494355305f*_Complex_I,
   18.602791112148f +  -1.875890460773f*_Complex_I,
  -13.396328282272f +   9.288327370031f*_Complex_I,
   -3.117158916891f +   2.544747297232f*_Complex_I,
   14.226131115223f +  17.462152594662f*_Complex_I,
  -19.578473387664f +  34.411911283259f*_Complex_I,
   -6.579019542175f +   1.022001674347f*_Complex_I,
   30.972194959263f +  -8.350211186911f*_Complex_I,
  -23.959086942588f +  -4.745490152344f*_Complex_I,
   18.433629972547f +  33.672506545950f*_Complex_I,
   -3.583025093477f +  29.006005065761f*_Complex_I,
   -3.421689832344f +  -6.516619591564f*_Complex_I,
   17.468290088683f +  14.351378688148f*_Complex_I,
  -20.170011170114f + -44.394817543067f*_Complex_I,
  -13.150516148634f +  45.749703126153f*_Complex_I,
   -6.345962437499f +   5.896690541701f*_Complex_I,
   -3.508737698320f +  25.459472943049f*_Complex_I,
   -9.590464636095f + -37.162638669309f*_Complex_I,
   -7.707872774343f +  -4.065042502767f*_Complex_I,
    4.310656075828f +  55.425516805330f*_Complex_I,
   -8.841697395726f +   7.827822742296f*_Complex_I,
    6.538079696486f +  18.790190957680f*_Complex_I,
    3.052383346750f + -35.409567370640f*_Complex_I,
    6.790218518127f +   6.485107042363f*_Complex_I,
   -1.939520400173f +   9.749487460014f*_Complex_I,
   27.335153513982f + -28.544990200718f*_Complex_I,
    1.310416901033f +  -3.384377012660f*_Complex_I,
   39.882940481275f +  -2.284359214074f*_Complex_I,
   10.547528262920f + -12.560415251324f*_Complex_I,
  -39.735255177309f +  13.592975359455f*_Complex_I,
  -15.339971072116f + -16.475578099072f*_Complex_I,
   17.033232877918f +   3.802866771597f*_Complex_I,
   28.013870016133f +   2.419611488016f*_Complex_I,
   -2.265805112454f +   0.312114751003f*_Complex_I,
  -33.149667339304f + -13.689695655857f*_Complex_I,
   17.388116065076f +   0.542000357078f*_Complex_I,
   24.899620116312f + -12.668755714836f*_Complex_I,
    4.917415611451f +  -9.932194848538f*_Complex_I,
  -11.738607295144f +  -8.914945728892f*_Complex_I,
  -19.712014537454f +  22.399807137247f*_Complex_I,
    5.053485084584f +  17.298193889941f*_Complex_I,
   -7.079518754159f +  17.581889100321f*_Complex_I,
  -10.281582568059f +   8.089169898931f*_Complex_I,
    1.422571832929f +   3.080323599470f*_Complex_I,
    8.605408612244f +  -3.487094722779f*_Complex_I,
  -11.890704936363f +   9.663054150701f*_Complex_I,
    9.768366151498f +  15.851583190991f*_Complex_I,
   15.643908708786f +  -4.022026320351f*_Complex_I,
  -23.153672099048f +  27.718041721476f*_Complex_I,
  -10.673968698682f +  -2.656942822276f*_Complex_I,
   -3.084198946373f +   5.011470019270f*_Complex_I,
   30.294417286976f +  -0.649680240512f*_Complex_I,
    9.336689517258f + -15.513350621571f*_Complex_I,
   -0.332156127181f +   9.028518696767f*_Complex_I,
  -18.028373273009f +   0.865624445339f*_Complex_I,
   18.478442253114f +  -4.603304072176f*_Complex_I,
  -23.690660760663f +  23.776870282847f*_Complex_I,
   15.985913856353f +  -2.839961425057f*_Complex_I,
    1.572606311668f + -19.612416936799f*_Complex_I,
   16.810087235424f +   0.199177019879f*_Complex_I,
  -15.975160985564f +   6.532163069799f*_Complex_I,
  -32.272173936218f + -31.217876380070f*_Complex_I,
   15.826696571154f +  18.609590632164f*_Complex_I,
   47.902645387609f +  17.126787301492f*_Complex_I,
   -2.541073313860f +  14.418504375704f*_Complex_I,
   14.540095561207f +  20.121389424019f*_Complex_I,
   26.277876001597f +  -3.644634538637f*_Complex_I,
   -2.512888880479f + -30.538233732588f*_Complex_I,
   16.529338657188f +  22.345368961768f*_Complex_I,
   -1.812032422371f + -34.161479691113f*_Complex_I,
   -0.453702679159f +  -6.380888555304f*_Complex_I,
   -3.152766309700f + -11.666085457234f*_Complex_I,
  -11.122245781125f + -11.927016012323f*_Complex_I,
   36.608207324428f +  15.883213693451f*_Complex_I,
   -7.991006509076f +  50.985368963626f*_Complex_I,
    4.226949261924f +   1.424207754420f*_Complex_I,
   17.463446429822f +   6.779880329142f*_Complex_I,
   -3.489655564559f +   0.384578586369f*_Complex_I,
   -5.888919363255f +  -5.109974862115f*_Complex_I,
   -7.227459554733f +  29.423681452522f*_Complex_I,
   -5.599219759541f + -23.600754528481f*_Complex_I,
   -1.449537808914f +  -5.756622299277f*_Complex_I,
  -19.475712102355f + -23.900197536654f*_Complex_I,
  -21.448274996924f +  26.188122613033f*_Complex_I,
  -29.449414779539f +   4.514251604734f*_Complex_I,
    0.711130838156f +   9.386706325613f*_Complex_I,
   -4.964574769823f +   3.355702966205f*_Complex_I,
  -69.341381991121f + -15.186662242307f*_Complex_I,
   -9.570125543135f + -19.565859787554f*_Complex_I,
  -10.294086283004f +   8.398169381304f*_Complex_I,
   -1.885058572468f +  -6.759464252726f*_Complex_I,
   27.070270898380f +  -0.178665040288f*_Complex_I,
   47.866947417745f + -31.409630574884f*_Complex_I,
   -8.921385543048f +  26.098382682234f*_Complex_I,
   -2.790785416910f +   9.787980555385f*_Complex_I,
  -11.714395450184f +   2.331009478742f*_Complex_I,
  -15.110851454222f + -16.495034888485f*_Complex_I,
    4.191147002221f +  12.009574674807f*_Complex_I,
   13.441299656087f +  -6.566453769009f*_Complex_I,
   37.589069138284f +  -3.493855465671f*_Complex_I,
   12.583644012597f +  15.635478070296f*_Complex_I,
  -10.233844300260f +  -2.537026190645f*_Complex_I,
   32.544552127969f +  -9.371296682693f*_Complex_I,
    5.840669998388f +  -0.465346273045f*_Complex_I,
  -32.889192462170f + -18.684446717050f*_Complex_I,
  -15.105348929262f +   9.854947012189f*_Complex_I,
    2.561152455963f + -17.413141080242f*_Complex_I,
   13.746092833724f +  -1.220057764138f*_Complex_I,
  -23.803933926504f +  19.459415272545f*_Complex_I,
   13.809596770429f + -10.104944386386f*_Complex_I,
   -8.303454415515f +   8.117739395766f*_Complex_I,
    6.133097727305f +  -1.569418595484f*_Complex_I,
   -8.760751262525f + -27.389777662710f*_Complex_I,
   10.131599125171f +   6.687127259801f*_Complex_I,
  -25.519018101480f +  18.199522992831f*_Complex_I,
  -13.233035001671f +  -6.395819934405f*_Complex_I,
   11.700095411690f + -15.584918347062f*_Complex_I,
   18.906883235021f +  -7.460982609320f*_Complex_I,
  -17.459921203210f +   1.804228941706f*_Complex_I,
   12.317579017635f +  10.356522098016f*_Complex_I,
   26.023982632040f +  -7.991255808237f*_Complex_I,
  -37.779207166301f +  -2.527619516503f*_Complex_I,
  -16.084376241401f + -20.612256188135f*_Complex_I,
   -6.114349663136f + -23.064645190863f*_Complex_I,
   -2.116498608238f +  50.021918384600f*_Complex_I,
   -7.117672685723f +  -8.176883387504f*_Complex_I,
   -5.412565357343f +  22.014215119309f*_Complex_I,
    6.088100003823f + -14.490088332571f*_Complex_I,
  -23.952484213391f +  -6.311185058243f*_Complex_I,
  -41.692266879065f + -16.754070143984f*_Complex_I,
   15.044401210058f +   3.664913601471f*_Complex_I,
  -33.750320820834f +  36.019579795022f*_Complex_I,
   13.347039200739f + -32.112552097269f*_Complex_I,
  -15.461626675606f +  23.718105709185f*_Complex_I,
  -12.296412987482f +  11.603712083795f*_Complex_I,
   -5.811459938628f +  -7.925008172416f*_Complex_I,
   -1.192572683531f + -17.231195267270f*_Complex_I,
  -20.865176875222f + -31.216074954599f*_Complex_I,
  -28.168417257904f +  -6.162171521961f*_Complex_I,
   14.071723863194f + -13.359093220787f*_Complex_I,
  -10.855751735127f +  -2.119685075188f*_Complex_I,
   10.100698435956f +  -0.047663624125f*_Complex_I,
  -16.742422653794f + -24.530696829578f*_Complex_I,
    4.000721417241f +  -9.851748070066f*_Complex_I,
   13.784754826511f +  11.502447326859f*_Complex_I,
   24.102575046761f +   1.552286673184f*_Complex_I,
    6.070752306643f +  -4.812888456253f*_Complex_I,
   -5.300318786685f +  -5.773884122203f*_Complex_I,
    4.177402715108f +   4.644324663894f*_Complex_I,
  -34.005084599492f +  24.853411330269f*_Complex_I,
   -4.077672998994f +   2.001774715846f*_Complex_I,
  -21.978658258889f + -16.888801388499f*_Complex_I,
   16.217687213434f +  24.308462530919f*_Complex_I,
    9.698665151728f + -11.152518442318f*_Complex_I,
   -0.713578550754f +  -0.408153703877f*_Complex_I,
  -13.404489453311f + -13.338812872852f*_Complex_I,
   12.438700016349f +  34.570234225070f*_Complex_I,
   -9.926721954129f +   6.906926926113f*_Complex_I,
   34.152883393921f +  32.217622455379f*_Complex_I,
   18.232286791872f +  37.874687752978f*_Complex_I,
   12.000459208850f +  -4.948870303603f*_Complex_I,
  -32.687697613521f + -14.030824660001f*_Complex_I,
    9.549264725873f + -11.955689902942f*_Complex_I,
   14.839058751293f + -31.933475859189f*_Complex_I,
  -14.754140603346f + -24.878350781691f*_Complex_I,
   10.712939318393f +  -5.996862342613f*_Complex_I,
  -17.907934788390f +   6.090055602127f*_Complex_I,
   36.124946787489f +  -5.830186488894f*_Complex_I,
    8.800236613602f +  -2.072057513781f*_Complex_I,
    3.437540103841f +   0.664749616099f*_Complex_I,
   31.950715457487f +  -0.220151294656f*_Complex_I,
   -0.045173525280f +  19.196581987850f*_Complex_I,
    1.870859081457f + -31.599244764015f*_Complex_I,
    0.209529336033f +   0.187035118051f*_Complex_I,
  -20.188770724804f +  -1.836423923991f*_Complex_I,
   -0.878467583840f +  20.234622217282f*_Complex_I,
   -2.102494717199f +  -2.913862105328f*_Complex_I,
  -12.424351209312f +  16.006770035694f*_Complex_I,
    4.029466210003f +  -4.407643696893f*_Complex_I,
    5.945482525641f +   6.202857230453f*_Complex_I,
  -10.003725089675f +  12.495974119472f*_Complex_I,
  -30.517926092302f + -12.650897630264f*_Complex_I,
    4.362955303417f + -12.091129699738f*_Complex_I,
   16.312617526910f +  33.224889607577f*_Complex_I,
   -7.191052604298f +  20.407651857657f*_Complex_I,
   20.796924916343f +  -6.364968926767f*_Complex_I,
  -12.625716653882f +  13.205109334295f*_Complex_I,
    8.088234917787f +   7.824060551408f*_Complex_I,
    1.922368898588f +  47.121922176668f*_Complex_I,
  -22.856735196688f +  24.367218386007f*_Complex_I,
   -7.383851526948f +  16.988073661561f*_Complex_I,
   44.161092935665f +  -5.907735807977f*_Complex_I,
   21.472541358807f + -13.144261767738f*_Complex_I,
  -11.542368964090f +  15.544417175199f*_Complex_I,
   27.503706468722f + -11.522885641815f*_Complex_I,
   47.558932357808f +   7.448305631246f*_Complex_I,
   11.766347399663f +  19.611745304561f*_Complex_I,
    9.190381176578f +  15.613955528574f*_Complex_I,
    4.579716108010f + -19.097122607568f*_Complex_I,
    8.259625237826f +   5.225672702106f*_Complex_I,
  -29.407167921996f +   2.730538989362f*_Complex_I,
   28.823600196176f +  29.176827923246f*_Complex_I,
    7.192706095305f + -13.060381105412f*_Complex_I,
   25.710478454828f +   0.151963358956f*_Complex_I,
    2.912008664120f + -30.634293042262f*_Complex_I,
  -18.887195071024f +  24.458778149068f*_Complex_I,
  -11.270981360031f +  36.740254138082f*_Complex_I,
  -27.910677769149f + -46.983604943585f*_Complex_I,
   28.541376587410f + -11.613642790751f*_Complex_I,
    4.477974452509f +  19.232597353019f*_Complex_I,
   -4.293520064043f +  21.064976071666f*_Complex_I,
  -35.598030786598f +  22.993609231670f*_Complex_I,
   15.465979612020f +  -7.083850274044f*_Complex_I,
  -20.864435551224f + -11.252291347107f*_Complex_I,
   -8.098484900823f +  15.454651546399f*_Complex_I,
    7.922777952587f + -23.004986313444f*_Complex_I,
    5.362453523073f +  -0.810615362821f*_Complex_I,
   23.691538716715f +   5.018112888735f*_Complex_I,
   -0.840977210667f +   5.291230447587f*_Complex_I,
  -14.732575553595f +   5.007945078325f*_Complex_I,
   11.153523811020f +   9.041741420055f*_Complex_I,
   10.332014628129f + -19.924730861837f*_Complex_I,
  -14.993931961657f +  31.489106362903f*_Complex_I,
   18.595068458053f + -35.418285443670f*_Complex_I,
   39.450078173463f +   1.995244884889f*_Complex_I,
   -1.199515997336f + -39.429463141214f*_Complex_I,
   32.594746366756f +  11.337568560792f*_Complex_I,
   12.403678050012f + -21.176744666160f*_Complex_I,
    3.346525369966f +  -1.001631596928f*_Complex_I,
  -19.825849167391f +  26.742894636469f*_Complex_I,
    4.915352470909f +   3.753914873323f*_Complex_I,
    8.679746038045f +  -3.972380637551f*_Complex_I,
   -3.287311421377f +  20.200996274143f*_Complex_I,
   22.907843859952f +   3.994757951688f*_Complex_I,
    2.844877291610f +  -4.339174940613f*_Complex_I,
    4.103872158917f +  -8.872001060599f*_Complex_I,
   28.989825837444f + -23.300936570044f*_Complex_I,
   -7.955654262813f +  31.438036806524f*_Complex_I,
   -6.389510821525f +  -2.868211291181f*_Complex_I,
    2.583272449361f + -13.352995160958f*_Complex_I,
  -38.239266883463f +  23.653429024344f*_Complex_I,
    8.079210774309f +  23.697861354779f*_Complex_I,
  -37.713434701568f +   2.799035443775f*_Complex_I,
  -26.751551315717f +   8.673836408974f*_Complex_I,
  -33.613333707208f +  -0.367929968698f*_Complex_I,
  -14.541161127911f +  -5.708211292132f*_Complex_I,
   -3.393160511476f + -24.278587890684f*_Complex_I,
   26.111359371252f + -28.934022170518f*_Complex_I,
   14.009362482345f + -20.358022264859f*_Complex_I,
    7.316431660011f +  26.887415857021f*_Complex_I,
    8.199534997352f +  -2.435205163079f*_Complex_I};

