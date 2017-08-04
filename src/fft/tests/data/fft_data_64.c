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
// autotest fft data for 64-point transform
//



#include "liquid.h"
#include "autotest/autotest.h"

liquid_float_complex fft_test_x64[] = {
   -0.021754290353f +  -0.612017802190f*_Complex_I,
    0.484276408753f +   0.753944723650f*_Complex_I,
   -1.051031916820f +   0.166448506301f*_Complex_I,
    0.185316597591f +  -0.053758419799f*_Complex_I,
   -0.775208247301f +  -1.344741618220f*_Complex_I,
    1.008977328193f +   0.309312932614f*_Complex_I,
    0.225467083836f +  -1.771870588253f*_Complex_I,
    0.469982216778f +  -1.560265270836f*_Complex_I,
    0.015796870295f +   0.514270976406f*_Complex_I,
    0.021523250463f +  -1.531865633331f*_Complex_I,
    0.374810770914f +  -1.819295376215f*_Complex_I,
   -0.271362317574f +   1.223581370818f*_Complex_I,
    1.095264083148f +   0.119410767188f*_Complex_I,
    0.176833870554f +  -0.357067009123f*_Complex_I,
   -0.844150660609f +  -0.402483548788f*_Complex_I,
    0.121027264669f +  -1.289015413302f*_Complex_I,
    0.263581726117f +  -1.020960568111f*_Complex_I,
   -1.850367234488f +   0.252491065243f*_Complex_I,
    0.180744535235f +   0.799594483178f*_Complex_I,
   -0.844109705065f +  -0.510108698929f*_Complex_I,
   -0.036218762055f +   1.294869055398f*_Complex_I,
    0.258512790360f +   0.568441072457f*_Complex_I,
    1.626275624183f +   0.634319322667f*_Complex_I,
    0.322617919951f +   0.212628458295f*_Complex_I,
    0.160934986434f +  -0.163540330171f*_Complex_I,
    1.047849823612f +  -0.095800483192f*_Complex_I,
    0.481794672802f +  -0.457172404256f*_Complex_I,
    0.129133928192f +   0.091760813424f*_Complex_I,
   -0.060049809575f +   0.184851257642f*_Complex_I,
   -1.806557059379f +  -0.712577972074f*_Complex_I,
   -1.514896468556f +  -0.698585251055f*_Complex_I,
    1.839754692918f +   0.489376426678f*_Complex_I,
   -1.243735376399f +   1.952793219096f*_Complex_I,
    0.254245070501f +   1.389680075711f*_Complex_I,
    0.692307414060f +   1.566188401796f*_Complex_I,
   -0.194903488026f +  -0.439000848041f*_Complex_I,
    1.668407720772f +  -0.910104238535f*_Complex_I,
   -0.575848786837f +   0.375593796515f*_Complex_I,
    0.429092097669f +  -0.640962925803f*_Complex_I,
   -1.534318288920f +  -1.204243660541f*_Complex_I,
    1.340275852733f +  -1.091482736862f*_Complex_I,
   -0.683541799234f +   1.328028176092f*_Complex_I,
    0.346674268228f +  -1.556024203629f*_Complex_I,
    0.808325600843f +   0.879310154017f*_Complex_I,
   -1.083115089529f +   0.217436971911f*_Complex_I,
    0.208798197538f +   1.065533831174f*_Complex_I,
   -0.075819341427f +  -1.489702533787f*_Complex_I,
   -0.768117108951f +  -0.395669850882f*_Complex_I,
   -0.171257456484f +  -1.684427171232f*_Complex_I,
    0.008638877159f +   0.828227749071f*_Complex_I,
   -0.907835739258f +   1.661585546412f*_Complex_I,
   -0.842311802407f +   0.128045074908f*_Complex_I,
   -0.480781325156f +  -0.060205164274f*_Complex_I,
   -0.332968153644f +  -0.725579827560f*_Complex_I,
    0.385831273126f +  -0.734953099969f*_Complex_I,
    0.078244895870f +   0.187320802435f*_Complex_I,
    0.822725278030f +   1.761602936253f*_Complex_I,
    0.854139534803f +  -0.447804374730f*_Complex_I,
    1.139585202373f +   0.594363516587f*_Complex_I,
   -0.327644569515f +  -1.601512234292f*_Complex_I,
    0.066470112247f +   0.272352995689f*_Complex_I,
   -0.233514955808f +   0.151832081236f*_Complex_I,
    0.804170356884f +   0.191021429001f*_Complex_I,
   -0.141790367715f +   0.873289762818f*_Complex_I};

liquid_float_complex fft_test_y64[] = {
    1.725198076750f +  -4.343291505303f*_Complex_I,
   -1.306135600819f +  -7.829723137959f*_Complex_I,
   -5.438260077023f +   4.634490918041f*_Complex_I,
   -1.955793027433f +   4.362156087676f*_Complex_I,
   -8.012216700915f +   8.400026452278f*_Complex_I,
   -4.952000692368f +   3.096434501516f*_Complex_I,
    5.298208914176f +   4.534862681807f*_Complex_I,
   -0.880561110671f +  -1.467056178833f*_Complex_I,
   11.861836819015f +  -0.544519325409f*_Complex_I,
   -1.503603146027f +   8.809918042520f*_Complex_I,
   -5.363184446773f +   9.548803374715f*_Complex_I,
   -6.505800504816f +  -7.798968990377f*_Complex_I,
   14.636787307656f +  -0.228256068710f*_Complex_I,
    0.052560363405f + -12.014345616554f*_Complex_I,
   -1.959253467557f +   8.402198459668f*_Complex_I,
   -6.980453925187f +  -6.436081969205f*_Complex_I,
    5.388968837267f +   3.576485581891f*_Complex_I,
    1.433883925658f +  -1.990690693711f*_Complex_I,
    0.745585452676f +  -3.797939482423f*_Complex_I,
    2.695240683264f +  -0.969955745711f*_Complex_I,
   -6.338874171853f +  -7.732858525855f*_Complex_I,
   11.298952810793f + -13.037152643099f*_Complex_I,
  -15.351176639589f +   9.947482416391f*_Complex_I,
   -5.345010122884f +   0.498205314186f*_Complex_I,
   -4.369620686268f +   0.751093800562f*_Complex_I,
    7.632293961493f +   0.946244674824f*_Complex_I,
   -2.209404645076f +  -8.887676077977f*_Complex_I,
    9.546753476599f + -11.691028922291f*_Complex_I,
  -10.473480711255f +   0.645167184977f*_Complex_I,
    9.912509001236f + -22.116979184633f*_Complex_I,
    7.805895621936f +   2.010265856692f*_Complex_I,
   -7.638461665175f +   0.687493859037f*_Complex_I,
    5.983512814381f +  -4.711548846349f*_Complex_I,
    1.432584757253f +   2.618196841573f*_Complex_I,
  -16.409812005381f +   2.126260364995f*_Complex_I,
   -4.891966320361f +   4.829626903245f*_Complex_I,
   -3.218785198666f +  -4.443535570591f*_Complex_I,
    2.772033282272f +  -1.143468987354f*_Complex_I,
   -8.913495498818f +   3.327029248182f*_Complex_I,
    8.015679354394f +  -3.131930356460f*_Complex_I,
    1.419572328954f +  -0.132902166668f*_Complex_I,
    3.850100186885f +   9.527061186961f*_Complex_I,
    0.681611518886f +   4.259777024769f*_Complex_I,
   12.246604521898f +  -0.790289131992f*_Complex_I,
    3.241695686006f + -15.727090004602f*_Complex_I,
   -9.932323330295f +  -0.102559333310f*_Complex_I,
   -2.411503210251f +  -0.408856287097f*_Complex_I,
    1.884210002432f +   7.477017352531f*_Complex_I,
   -6.852334636700f +   3.198788969708f*_Complex_I,
    1.141049818230f +   1.542427926488f*_Complex_I,
    0.732333269451f +  -1.802063276954f*_Complex_I,
   -6.450414970103f +  -2.758985609350f*_Complex_I,
   -3.738653299253f +  -7.196005387959f*_Complex_I,
    7.300969515165f +  -7.844893935009f*_Complex_I,
    8.053617788503f +   5.389482632745f*_Complex_I,
    9.227999871537f +  -2.302018386805f*_Complex_I,
   -5.824592830409f +  -0.544198322926f*_Complex_I,
   -3.152065877231f +  -6.410831104251f*_Complex_I,
   -1.003575490144f +  23.308352736314f*_Complex_I,
    1.725485190234f + -10.960063101324f*_Complex_I,
  -14.199659988605f +   7.198846575963f*_Complex_I,
    4.186354051025f +  -2.044041800204f*_Complex_I,
   14.017389932813f +   2.146139910120f*_Complex_I,
    4.242720273094f +  -3.627670543295f*_Complex_I};

