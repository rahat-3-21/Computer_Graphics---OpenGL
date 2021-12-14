///GROUP_10, COMPUTER GRAPHICS PROJECT_ SEC:O
///Group Member1_name: Rahat,Ratul Hasan, ID_19-40647-1
///Group Member2_name: ABZANA SULTAN IRA, ID_20-41973-1
///Group Member3_name: ABU TAHER MAHIM SARKAR, ID_20-42042-1

#include<GL/glut.h>
#include<math.h>
#include<iostream>
void village_view(void)

{
   float theta;

   ///field
   glClear(GL_COLOR_BUFFER_BIT);


    glBegin(GL_QUADS);

    glColor3ub (49, 140, 12);

    glVertex2i(0,700);  ///field
    glVertex2i(1200,700);

    glColor3ub (192, 209, 127);

    glVertex2i(1200,315);
    glVertex2i(0,315);

    glEnd();

     ///river

    glBegin(GL_POLYGON);

    glColor3ub (119, 207, 239);

    glVertex2i(0,700);  ///river
    glVertex2i(850,700);
    glVertex2i(725,670);
    glVertex2i(783,650);
    glVertex2i(623,633);
    glVertex2i(675,610);
    glVertex2i(465,570);
    glVertex2i(605,535);
    glVertex2i(350,475);
    glVertex2i(463,455);
    glVertex2i(305,435);
    glVertex2i(500,365);
    glVertex2i(545,315);
    glColor3ub (248, 252, 199);
    glVertex2i(0,315);

    glEnd();

    glBegin(GL_LINE_STRIP);

    glColor3ub (0, 0, 0);

    glVertex2i(850,700); ///river
    glVertex2i(725,670);
    glVertex2i(783,650);
    glVertex2i(623,633);
    glVertex2i(675,610);
    glVertex2i(465,570);
    glVertex2i(605,535);
    glVertex2i(400,488);
    glVertex2i(463,455);
    glVertex2i(379,445);
    glVertex2i(500,365);
    glVertex2i(545,315);
    glVertex2i(0,315);

    glEnd();

    ///day sky

    glBegin(GL_QUADS);

    glColor3ub (100, 149, 237);///color code https://htmlcolorcodes.com/
    glVertex2i(0,315);  ///sky
    glColor3ub (132, 192, 255);
    glVertex2i(1200,315);
    glVertex2i(1200,0);
    glColor3ub (248, 249, 222);
    glVertex2i(0,0);
    glEnd();

    ///sun

   glColor3ub(243, 156, 18);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
    theta = i*3.1416/180;
    glVertex2f(500 + 40*cos(theta), 70 + 40*sin(theta));
   }
   glEnd();

    ///cloud-1
   ///1

   glColor3ub(218, 221, 217);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
    theta = i*3.1416/180;
    glVertex2f(150 + 59*cos(theta), 53 +25*sin(theta));
   }
    glEnd();

   ///2

   glColor3ub(218, 221, 217);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
   theta = i*3.1416/180;
   glVertex2f(150 + 26*cos(theta), 80 +20*sin(theta));
   }
   glEnd();

   ///3

   glColor3ub(218, 221, 217);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
   theta = i*3.1416/180;
   glVertex2f(120 + 26*cos(theta), 77 +19*sin(theta));
   }
    glEnd();
    ///4

    glColor3ub(218, 221, 217);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
    theta = i*3.1416/180;
    glVertex2f(100 + 37*cos(theta), 56 +20*sin(theta));
    }
    glEnd();

     ///5

    glColor3ub(218, 221, 217);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
    theta = i*3.1416/180;
    glVertex2f(120 + 27*cos(theta), 32 +19*sin(theta));
    }
    glEnd();

    ///6

    glColor3ub(218, 221, 217);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
    theta = i*3.1416/180;
    glVertex2f(170 + 26*cos(theta), 34 +20*sin(theta));
    }
    glEnd();

    ///7
    glColor3ub(218, 221, 217);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
     theta = i*3.1416/180;
     glVertex2f(200 + 30*cos(theta), 76 +22*sin(theta));
    }
     glEnd();

    ///cloud-2
    ///1

    glColor3ub(218, 221, 217);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
     theta = i*3.1416/180;
     glVertex2f(350 + 59*cos(theta), 53 +25*sin(theta));
    }
     glEnd();

    ///2

    glColor3ub(218, 221, 217);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
    theta = i*3.1416/180;
    glVertex2f(350 + 26*cos(theta), 80 +20*sin(theta));
    }
    glEnd();

    ///3

    glColor3ub(218, 221, 217);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
    theta = i*3.1416/180;
    glVertex2f(320 + 26*cos(theta), 77 +19*sin(theta));
    }
    glEnd();
    ///4

    glColor3ub(218, 221, 217);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
     theta = i*3.1416/180;
     glVertex2f(300 + 37*cos(theta), 56 +20*sin(theta));
    }
    glEnd();

    ///5

    glColor3ub(218, 221, 217);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
    theta = i*3.1416/180;
    glVertex2f(320 + 27*cos(theta), 32 +19*sin(theta));
    }
    glEnd();

    ///6

    glColor3ub(218, 221, 217);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
    theta = i*3.1416/180;
    glVertex2f(370 + 26*cos(theta), 34 +20*sin(theta));
    }
    glEnd();

    ///7
    glColor3ub(218, 221, 217);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
    theta = i*3.1416/180;
    glVertex2f(400 + 30*cos(theta), 76 +22*sin(theta));
    }
    glEnd();


   ///cloud-3
   ///1

   glColor3ub(218, 221, 217);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
    {
    theta = i*3.1416/180;
    glVertex2f(1095 + 59*cos(theta), 53 +25*sin(theta));
    }
    glEnd();

    ///2

    glColor3ub(218, 221, 217);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
    theta = i*3.1416/180;
    glVertex2f(1095 + 26*cos(theta), 80 +20*sin(theta));
    }
    glEnd();

    ///3

    glColor3ub(218, 221, 217);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
    theta = i*3.1416/180;
    glVertex2f(1060 + 26*cos(theta), 77 +19*sin(theta));
    }
    glEnd();
    ///4

    glColor3ub(218, 221, 217);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
     {
     theta = i*3.1416/180;
     glVertex2f(1020 + 37*cos(theta), 56 +20*sin(theta));
     }
     glEnd();

     ///5

     glColor3ub(218, 221, 217);
     glBegin(GL_POLYGON);
     for(int i=0; i<360; i++)
     {
     theta = i*3.1416/180;
     glVertex2f(1040 + 27*cos(theta), 32 +19*sin(theta));
    }
     glEnd();

     ///6

     glColor3ub(218, 221, 217);
     glBegin(GL_POLYGON);
     for(int i=0; i<360; i++)
     {
      theta = i*3.1416/180;
      glVertex2f(1088 + 26*cos(theta), 34 +20*sin(theta));
     }
     glEnd();

     ///7
     glColor3ub(218, 221, 217);
     glBegin(GL_POLYGON);
     for(int i=0; i<360; i++)
     {
      theta = i*3.1416/180;
      glVertex2f(1144 + 30*cos(theta), 76 +22*sin(theta));
     }
     glEnd();


    ///Back side tree base
    glBegin(GL_QUADS);

    glColor3ub(11, 185, 50 );

    glVertex2i(0,315);
    glVertex2i(1200,315);
    glVertex2i(1200,310);
    glVertex2i(0,310);

    glEnd();
    /// Back side tree-1
    glColor3ub(11, 185, 50 );
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
    theta = i*3.1416/180;
    glVertex2f(20 + 30*cos(theta), 295 +20*sin(theta));
    }
    glEnd();

    ///Back side tree-2
    glColor3ub(11, 185, 50 );
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
    theta = i*3.1416/180;
    glVertex2f(62+ 30*cos(theta), 295 +20*sin(theta));
    }
    glEnd();
    ///Back side tree-3
    glColor3ub(11, 185, 50 );
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
    theta = i*3.1416/180;
    glVertex2f(105 + 30*cos(theta),295 +20*sin(theta));
    }
    glEnd();
    ///Back side tree-4
    glColor3ub(11, 185, 50 );
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
    theta = i*3.1416/180;
    glVertex2f(145 + 30*cos(theta),295 +20*sin(theta));
    }
    glEnd();
    ///Back side tree-5
    glColor3ub(1, 185, 50);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
    theta = i*3.1416/180;
    glVertex2f(190 + 30*cos(theta),295 +20*sin(theta));
    }
    glEnd();
    ///Back side tree-6
    glColor3ub(11, 185, 50 );
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
    theta = i*3.1416/180;
    glVertex2f(230 + 30*cos(theta), 295 +20*sin(theta));
    }
    glEnd();
    ///Back side tree-7
    glColor3ub(11, 185, 50 );
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
    theta = i*3.1416/180;
    glVertex2f(270 + 30*cos(theta),295 +20*sin(theta));
    }
    glEnd();///Back side tree-8
    glColor3ub(11, 185, 50 );
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
    theta = i*3.1416/180;
    glVertex2f(310 + 30*cos(theta), 295 +20*sin(theta));
    }
    glEnd();
    ///Back side tree-9
    glColor3ub(11, 185, 50 );
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
    theta = i*3.1416/180;
    glVertex2f(350 + 30*cos(theta),295 +20*sin(theta));
    }
    glEnd();///pison ar choto tree-10
    glColor3ub(11, 185, 50 );
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
    theta = i*3.1416/180;
    glVertex2f(390+ 30*cos(theta), 295 +20*sin(theta));
    }
   glEnd();
   ///Back side tree-11
    glColor3ub(11, 185, 50 );
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
    theta = i*3.1416/180;
    glVertex2f(420 + 30*cos(theta),295 +20*sin(theta));
    }
    glEnd();
    ///Back side tree-12
    glColor3ub(11, 185, 50 );
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
     theta = i*3.1416/180;
     glVertex2f(460 + 30*cos(theta),295+20*sin(theta));
     }
     glEnd();
    ///Back side tree-13
    glColor3ub(11, 185, 50 );
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
    theta = i*3.1416/180;
    glVertex2f(500+ 30*cos(theta),295+20*sin(theta));
    }
    glEnd();
   ///Back side tree-14
    glColor3ub(11, 185, 50 );
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
    theta = i*3.1416/180;
    glVertex2f(540 + 30*cos(theta),295+20*sin(theta));
    }
    glEnd();

    /// Back side tree-15
    glColor3ub(11, 185, 50 );
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
    theta = i*3.1416/180;
    glVertex2f(950 + 30*cos(theta),295+20*sin(theta));
    }
    glEnd();
    ///Back side tree-16
    glColor3ub(11, 185, 50 );
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
    theta = i*3.1416/180;
    glVertex2f(990+ 30*cos(theta),295+20*sin(theta));
    }
    glEnd();
    ///Back side tree-17
    glColor3ub(11, 185, 50 );
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
     {
     theta = i*3.1416/180;
     glVertex2f(1020+ 30*cos(theta),295+20*sin(theta));
     }
     glEnd();
    ///Back side tree-18
    glColor3ub(11, 185, 50 );
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
    theta = i*3.1416/180;
    glVertex2f(1050 + 30*cos(theta),295+20*sin(theta));
    }
    glEnd();
   ///Back side tree-19
    glColor3ub(11, 185, 50 );
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
    theta = i*3.1416/180;
    glVertex2f(1090 + 30*cos(theta),295+20*sin(theta));
    }
    glEnd();
    ///Back side tree-20
    glColor3ub(11, 185, 50 );
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
    theta = i*3.1416/180;
    glVertex2f(1130 + 30*cos(theta),295+20*sin(theta));
    }
    glEnd();
   ///Back side tree-21
    glColor3ub(11, 185, 50 );
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
    theta = i*3.1416/180;
    glVertex2f(1170 + 30*cos(theta),295+20*sin(theta));
    }
   glEnd();
   ///Back side tree-22
    glColor3ub(11, 185, 50 );
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
    theta = i*3.1416/180;
    glVertex2f(1200+ 30*cos(theta),295+20*sin(theta));
    }
    glEnd();

    ///All-tree

    glBegin(GL_QUADS); ///Left river tree

    glColor3ub(153,81,10);
    glVertex2i(327,316);
    glVertex2i(337,316);
    glVertex2i(322,251);
    glVertex2i(312,251);
    glVertex2i(312,251);
    glVertex2i(322,251);
    glVertex2i(323,212);
    glVertex2i(314,212);

    glVertex2i(351,316);/// Right river tree
    glVertex2i(359,315);
    glVertex2i(370,204);
    glVertex2i(362,203);
    glVertex2i(362,203);
    glVertex2i(370,204);
    glVertex2i(379,175);
    glVertex2i(373,174);

    glVertex2i(375,317);///third river tree
    glVertex2i(385,316);
    glVertex2i(413,271);
    glVertex2i(403,268);
    glVertex2i(413,271);
    glVertex2i(403,268);
    glVertex2i(450,238);
    glVertex2i(443,231);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub (49, 140, 12);

    glVertex2i(314,213); ///river left tree leaf
    glVertex2i(319,213);
    glVertex2i(338,184);
    glVertex2i(334,178);
    glVertex2i(345,169);
    glVertex2i(337,168);
    glVertex2i(345,155);
    glVertex2i(340,154);
    glVertex2i(355,127);
    glVertex2i(329,154);

    glVertex2i(313,212);
    glVertex2i(319,212);
    glVertex2i(316,194);
    glVertex2i(262,134);
    glVertex2i(279,157);
    glVertex2i(277,162);
    glVertex2i(283,168);
    glVertex2i(282,173);
    glVertex2i(285,176);
    glVertex2i(284,182);
    glVertex2i(288,185);
    glVertex2i(288,192);

    glVertex2i(313,214);
    glVertex2i(317,214);
    glVertex2i(317,204);
    glVertex2i(262,204);
    glVertex2i(233,216);
    glVertex2i(252,212);
    glVertex2i(256,217);
    glVertex2i(263,213);
    glVertex2i(268,218);
    glVertex2i(276,217);
    glVertex2i(278,220);
    glVertex2i(283,217);
    glVertex2i(285,222);

    glVertex2i(314,214);
    glVertex2i(313,209);
    glVertex2i(285,243);
    glVertex2i(288,247);
    glVertex2i(280,270);
    glVertex2i(291,255);
    glVertex2i(292,269);
    glVertex2i(300,244);
    glVertex2i(304,244);
    glVertex2i(304,237);
    glVertex2i(308,234);

    glVertex2i(316,212);
    glVertex2i(320,239);
    glVertex2i(326,239);
    glVertex2i(326,247);
    glVertex2i(333,249);
    glVertex2i(341,266);
    glVertex2i(342,243);
    glVertex2i(321,213);

    glVertex2i(317,212);
    glVertex2i(339,215);
    glVertex2i(340,222);
    glVertex2i(346,214);
    glVertex2i(355,220);
    glVertex2i(355,214);
    glVertex2i(368,218);
    glVertex2i(368,213);
    glVertex2i(385,216);
    glVertex2i(359,203);
    glVertex2i(315,202);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (49, 140, 12);

    glVertex2i(376,175);///right river tree leaf
    glVertex2i(395,179);
    glVertex2i(397,186);
    glVertex2i(403,179);
    glVertex2i(409,180);
    glVertex2i(411,186);
    glVertex2i(416,181);
    glVertex2i(437,190);
    glVertex2i(411,167);
    glVertex2i(378,167);

    glVertex2i(394,160);
    glVertex2i(390,158);
    glVertex2i(400,147);
    glVertex2i(392,146);
    glVertex2i(400,131);
    glVertex2i(394,130);
    glVertex2i(413,104);
    glVertex2i(389,127);
    glVertex2i(379,149);
    glVertex2i(375,173);

    glVertex2i(374,163);
    glVertex2i(365,148);
    glVertex2i(345,135);
    glVertex2i(320,137);
    glVertex2i(344,142);
    glVertex2i(350,152);
    glVertex2i(353,151);
    glVertex2i(345,160);
    glVertex2i(361,159);
    glVertex2i(360,167);

    glVertex2i(357,173);
    glVertex2i(347,175);
    glVertex2i(324,189);
    glVertex2i(340,186);
    glVertex2i(340,193);
    glVertex2i(352,192);
    glVertex2i(346,206);
    glVertex2i(370,183);

    glVertex2i(376,178);
    glVertex2i(372,202);
    glVertex2i(377,203);
    glVertex2i(378,211);
    glVertex2i(384,211);
    glVertex2i(384,217);
    glVertex2i(389,219);
    glVertex2i(413,240);
    glVertex2i(403,206);
    glVertex2i(379,175);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (49, 140, 12);

    glVertex2i(443,239);///river third tree leaf
    glVertex2i(441,233);
    glVertex2i(418,228);
    glVertex2i(395,229);
    glVertex2i(371,244);
    glVertex2i(385,242);
    glVertex2i(391,253);
    glVertex2i(397,242);
    glVertex2i(403,250);
    glVertex2i(411,240);
    glVertex2i(415,246);
    glVertex2i(439,239);

    glVertex2i(444,237);
    glVertex2i(455,223);
    glVertex2i(461,179);
    glVertex2i(451,160);
    glVertex2i(454,177);
    glVertex2i(442,176);
    glVertex2i(446,188);
    glVertex2i(434,189);
    glVertex2i(441,201);
    glVertex2i(429,202);
    glVertex2i(442,237);

    glVertex2i(441,240);
    glVertex2i(479,245);
    glVertex2i(485,231);
    glVertex2i(499,243);
    glVertex2i(501,229);
    glVertex2i(513,238);
    glVertex2i(513,226);
    glVertex2i(531,225);
    glVertex2i(522,215);
    glVertex2i(486,212);
    glVertex2i(464,224);
    glVertex2i(439,240);

    glVertex2i(441,241);
    glVertex2i(446,242);
    glVertex2i(434,264);
    glVertex2i(446,262);
    glVertex2i(439,276);
    glVertex2i(453,273);
    glVertex2i(446,290);
    glVertex2i(460,279);
    glVertex2i(469,296);
    glVertex2i(469,276);
    glVertex2i(464,250);
    glVertex2i(445,237);

    glEnd();

  /// Big tree behind the house
    glBegin(GL_QUADS);


    glColor3ub(100,30,22);

    glVertex2i(787,368);///middle big tree START
    glVertex2i(811,368);
    glVertex2i(811,258);
    glVertex2i(787,258);
    glVertex2i(787,258);
    glVertex2i(811,258);
    glVertex2i(838,105);
    glVertex2i(830,102);
    glVertex2i(825,182);
    glVertex2i(887,119);
    glVertex2i(883,114);
    glVertex2i(823,162);
    glVertex2i(820,157);
    glVertex2i(823,143);
    glVertex2i(802,115);
    glVertex2i(796,115);
    glVertex2i(804,226);
    glVertex2i(809,216);
    glVertex2i(771,164);
    glVertex2i(767,166);
    glVertex2i(794,204);
    glVertex2i(795,194);
    glVertex2i(752,171);
    glVertex2i(750,173);///Middle big tree END





    glVertex2i(917,383);///Right big tree
    glVertex2i(935,378);
    glVertex2i(938,271);
    glVertex2i(916,270);
    glVertex2i(916,270);
    glVertex2i(938,271);
    glVertex2i(923,215);
    glVertex2i(908,238);
    glVertex2i(908,238);
    glVertex2i(915,231);
    glVertex2i(883,174);
    glVertex2i(880,182);
    glVertex2i(915,228);
    glVertex2i(922,230);
    glVertex2i(985,155);
    glVertex2i(983,150);
    glVertex2i(932,209);
    glVertex2i(936,208);
    glVertex2i(936,163);
    glVertex2i(928,164);
    glVertex2i(930,331);
    glVertex2i(1016,230);
    glVertex2i(1014,224);
    glVertex2i(929,305);

   glEnd();

   ///big tree-leaf
   ///circle-1
   glColor3ub(26, 106, 9 );
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
    theta = i*3.1416/180;
   glVertex2f(1030 + 47*cos(theta), 250 + 45*sin(theta));
   }
   glEnd();
   ///circle-2
   glColor3ub(26, 106, 9 );
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
   theta = i*3.1416/180;
   glVertex2f(977 + 42*cos(theta), 230 + 42*sin(theta));
   }
   glEnd();

   ///circle-3
   glColor3ub(26, 106, 9 );
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
   theta = i*3.1416/180;
   glVertex2f(1060 + 55*cos(theta), 190 + 45*sin(theta));
   }
   glEnd();

   ///circle-4
   glColor3ub(26, 106, 9 );
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
   theta = i*3.1416/180;
   glVertex2f(980 + 50*cos(theta), 160 + 55*sin(theta));
   }
   glEnd();

   ///circle-5
   glColor3ub(26, 106, 9 );
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
   theta = i*3.1416/180;
   glVertex2f(895 + 50*cos(theta), 157 + 55*sin(theta));
   }
   glEnd();

   ///circle-6
   glColor3ub(26, 106, 9 );
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
    theta = i*3.1416/180;
    glVertex2f(860 + 38*cos(theta), 200 + 40*sin(theta));
   }
    glEnd();

   ///circle-7

   glColor3ub(26, 106, 9 );
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
    theta = i*3.1416/180;
    glVertex2f(855 + 44*cos(theta), 100 + 44*sin(theta));
   }
   glEnd();

   ///circle-8

   glColor3ub(26, 106, 9 );
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
   theta = i*3.1416/180;
   glVertex2f(920 + 44*cos(theta), 100 + 44*sin(theta));
   }
   glEnd();

   ///circle-9

   glColor3ub(26, 106, 9 );
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
    theta = i*3.1416/180;
    glVertex2f(800 + 48*cos(theta), 80 + 48*sin(theta));
   }
   glEnd();

   ///circle-10

   glColor3ub(26, 106, 9 );
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
    theta = i*3.1416/180;
    glVertex2f(730 + 52*cos(theta), 150 + 52*sin(theta));
   }
   glEnd();

   ///circle-11

    glColor3ub(26, 106, 9 );
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
    theta = i*3.1416/180;
    glVertex2f(740 + 35*cos(theta), 200 + 35*sin(theta));
    }
    glEnd();

    ///circle-12

    glColor3ub(26, 106, 9 );
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
    theta = i*3.1416/180;
    glVertex2f(690 + 35*cos(theta), 190 +35*sin(theta));
    }
    glEnd();

   ///circle-13

    glColor3ub(26, 106, 9 );
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
    theta = i*3.1416/180;
    glVertex2f(660 + 37*cos(theta), 142 +37*sin(theta));
    }
    glEnd();


   ///circle-14

   glColor3ub(26, 106, 9 );
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
   theta = i*3.1416/180;
   glVertex2f(700 + 49*cos(theta), 90 +49*sin(theta));
   }
   glEnd();



   ///circle-15

   glColor3ub(26, 106, 9 );
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
   theta = i*3.1416/180;
   glVertex2f(750 + 45*cos(theta), 53 +45*sin(theta));
   }
   glEnd();

  ///1circle-16

   glColor3ub(26, 106, 9 );
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
   theta = i*3.1416/180;
   glVertex2f(780 + 35*cos(theta), 110 +45*sin(theta));
   }
   glEnd();

    ///circle-17

   glColor3ub(26, 106, 9 );
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
   theta = i*3.1416/180;
   glVertex2f(840 + 52*cos(theta), 50 +52*sin(theta));
   }
   glEnd();
   ///circle-18

   glColor3ub(26, 106, 9 );
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
    theta = i*3.1416/180;
    glVertex2f(750 + 45*cos(theta), 53 +45*sin(theta));
   }
    glEnd();
   ///circle-19

    glColor3ub(26, 106, 9 );
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
    theta = i*3.1416/180;
    glVertex2f(930 + 50*cos(theta), 70 +55*sin(theta));
    }
    glEnd();
    ///circle-20

    glColor3ub(26, 106, 9 );
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
    theta = i*3.1416/180;
    glVertex2f(999 + 55*cos(theta), 100 +55*sin(theta));
    }
    glEnd();
   ///circle-21

     glColor3ub(26, 106, 9 );
     glBegin(GL_POLYGON);
     for(int i=0; i<360; i++)
     {
     theta = i*3.1416/180;
     glVertex2f(1050 + 45*cos(theta), 130 +45*sin(theta));
     }
     glEnd();

   ///ALL-House

   ///Brown house
    glBegin(GL_QUADS);
    glColor3ub(186, 74, 0);
    glVertex2i(510, 400); ///Brown house left side base
    glVertex2i(608, 414);
    glVertex2i(608, 365);
    glVertex2i(510, 353);

    glEnd();
    glBegin(GL_LINE_LOOP);

    glColor3ub(0, 0, 0);
    glVertex2i(510, 400); ///Brown house left side base_line
    glVertex2i(608, 414);
    glVertex2i(608, 365);
    glVertex2i(510, 353);

    glEnd();
    glBegin(GL_QUADS);

    glColor3ub(0, 0, 0);
    glVertex2i(505, 410); ///Brown house left side bottom black base
    glVertex2i(608, 424);
    glVertex2i(608, 414);
    glVertex2i(505, 400);

    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(126, 80, 6);
    glVertex2i(540, 404); ///Brown house left side door
    glVertex2i(565, 408);
    glVertex2i(568, 365);
    glVertex2i(542, 363);

    glEnd();
    glBegin(GL_LINE_LOOP);

    glColor3ub(0, 0, 0);
    glVertex2i(540, 404); ///Brown house left side door line
    glVertex2i(565, 408);
    glVertex2i(568, 365);
    glVertex2i(542, 363);

    glEnd();

    glBegin(GL_LINES);

    glColor3ub(0, 0, 0);
    glVertex2i(552, 405); ///Brown house left side door inside line
    glVertex2i(553, 363);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(186, 74, 0);

    glVertex2i(608, 414);///Brown house right side
    glVertex2i(672, 408);
    glVertex2i(677, 350);
    glVertex2i(660, 327);
    glVertex2i(608, 368);

    glEnd();
    glBegin(GL_LINE_LOOP);

    glColor3ub(0, 0, 0);

    glVertex2i(608, 414);///Brown house right side line
    glVertex2i(672, 408);
    glVertex2i(677, 350);
    glVertex2i(660, 327);
    glVertex2i(608, 368);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(0, 0, 0);

    glVertex2i(608, 424);///Brown house right side bottom black base
    glVertex2i(672, 418);
    glVertex2i(672, 408);
    glVertex2i(608, 414);

    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(126, 80, 6);
    glVertex2i(629, 400); ///Brown house right side window
    glVertex2i(654, 397);
    glVertex2i(654, 377);
    glVertex2i(629, 379);

    glEnd();
    glBegin(GL_LINE_LOOP);

    glColor3ub(0, 0, 0);

    glVertex2i(629, 400); ///Brown house right side window line
    glVertex2i(654, 397);
    glVertex2i(654, 377);
    glVertex2i(629, 379);

    glEnd();

     glBegin(GL_POLYGON);

    glColor3ub(188, 121, 11 );

    glVertex2i(496, 368); ///Brown house left side roof top
    glVertex2i(600, 377);
    glVertex2i(660, 327);
    glVertex2i(610, 276);
    glVertex2i(561, 291);

    glEnd();

    glBegin(GL_LINE_LOOP);

    glColor3ub(0, 0, 0);

    glVertex2i(496, 368); ///Brown house left side roof top line
    glVertex2i(600, 377);
    glVertex2i(660, 327);
    glVertex2i(610, 276);
    glVertex2i(561, 291);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(188, 121, 11 );

    glVertex2i(680, 355); ///Brown house right side roof top
    glVertex2i(788, 288);
    glVertex2i(756, 264);
    glVertex2i(597, 270);

    glEnd();

    glBegin(GL_LINE_LOOP);

    glColor3ub(0, 0, 0);

    glVertex2i(680, 355); ///Brown house right side roof top line
    glVertex2i(788, 288);
    glVertex2i(756, 264);
    glVertex2i(597, 270);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(188, 121, 11 );

    glVertex2i(561, 291); ///Brown house left side roof top tri
    glVertex2i(610, 276);
    glVertex2i(597, 270);

    glEnd();

    glBegin(GL_LINE_LOOP);

    glColor3ub(0, 0, 0);

    glVertex2i(561, 291); ///Brown house left side roof top tri-line
    glVertex2i(605, 277);
    glVertex2i(597, 270);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(186, 74, 0);

    glVertex2i(672, 408); ///Brown house right side
    glVertex2i(706, 409);
    glVertex2i(707, 363);
    glVertex2i(676, 362);

    glEnd();

    glBegin(GL_LINE_LOOP);

    glColor3ub(0, 0, 0);

    glVertex2i(672, 408); ///Brown house right side line
    glVertex2i(706, 409);
    glVertex2i(707, 363);
    glVertex2i(676, 362);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(0, 0, 0);

    glVertex2i(672, 418); ///Brown house right side bottom black base
    glVertex2i(706, 419);
    glVertex2i(707, 409);
    glVertex2i(672, 408);

    glEnd();

    ///yellow house
    glBegin(GL_QUADS);
    glColor3ub(229, 219, 107);///yellow house

    glVertex2i(705, 430);///yellow house left side base
    glVertex2i(814, 444);
    glVertex2i(817, 375);
    glVertex2i(705, 364);

    glEnd();

    glBegin(GL_LINE_STRIP);

    glColor3ub(0, 0, 0);
    glVertex2i(705, 364);
    glVertex2i(705, 430);///yellow house left side line
    glVertex2i(814, 444);
    glVertex2i(817, 375);

    glEnd();

    glBegin(GL_LINES);

    glVertex2i(705, 430); ///yellow house bottom line
    glVertex2i(705, 450);

    glVertex2i(814, 444);
    glVertex2i(814, 464);

    glVertex2i(944, 430);
    glVertex2i(944, 450);

    glVertex2i(884, 437);
    glVertex2i(884, 457);

    glVertex2i(765, 438);///yellow house ladder
    glVertex2i(743, 468);

    glVertex2i(735, 434);
    glVertex2i(715, 460);

    glVertex2i(748, 460);
    glVertex2i(722, 450);

    glVertex2i(756, 450);
    glVertex2i(728, 440);

    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(204, 195, 100);
    glVertex2i(814, 444);///yellow house right side
    glVertex2i(944, 430);
    glVertex2i(944, 360);
    glVertex2i(817, 375);

    glEnd();

    glBegin(GL_LINE_LOOP);

    glColor3ub(0, 0, 0);
    glVertex2i(814, 444);///yellow house right side line
    glVertex2i(944, 430);
    glVertex2i(944, 360);
    glVertex2i(817, 375);

    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(92, 66, 9);
    glVertex2i(854, 423); ///yellow house right side window
    glVertex2i(898, 421);
    glVertex2i(900, 407);
    glVertex2i(855, 406);

    glEnd();

    glBegin(GL_LINE_LOOP);

    glColor3ub(0, 0, 0);
    glVertex2i(854, 423); ///yellow house right side window line
    glVertex2i(898, 421);
    glVertex2i(900, 407);
    glVertex2i(855, 406);

    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(16, 59, 89);

    glVertex2i(886, 415);///yellow house right side roof top
    glVertex2i(990, 405);
    glVertex2i(944, 360);
    glVertex2i(817, 375);

    glEnd();

    glBegin(GL_LINE_LOOP);

    glColor3ub(0, 0, 0);
    glVertex2i(886, 415);///yellow house right side roof top line
    glVertex2i(990, 405);
    glVertex2i(944, 360);
    glVertex2i(817, 375);

    glEnd();

 glBegin(GL_QUADS);

    glColor3ub(26, 92, 138);
    glVertex2i(672, 360);///yellow house left side roof top
    glVertex2i(812, 383);
    glVertex2i(913, 284);
    glVertex2i(785, 277);

    glEnd();

    glBegin(GL_LINE_LOOP);

    glColor3ub(0, 0, 0);
    glVertex2i(672, 360);///yellow house left side roof top line
    glVertex2i(812, 383);
    glVertex2i(913, 284);
    glVertex2i(785, 277);

    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(16, 59, 89);
    glVertex2i(944, 360); ///yellow house right roof top corner
    glVertex2i(955, 362);
    glVertex2i(913, 284);
    glVertex2i(905, 292);

    glEnd();

    glBegin(GL_LINE_LOOP);

    glColor3ub(0, 0, 0);
    glVertex2i(944, 360); ///yellow house right roof top corner
    glVertex2i(955, 362);
    glVertex2i(913, 284);
    glVertex2i(905, 292);

    glEnd();

    glBegin(GL_TRIANGLES);

    glColor3ub(16, 59, 89);

    glVertex2i(817, 375);///yellow house right side roof top triangle
    glVertex2i(944, 360);
    glVertex2i(905, 292);

    glEnd();

    glBegin(GL_LINE_LOOP);

    glColor3ub(0, 0, 0);
    glVertex2i(817, 375);///yellow house right side roof top triangle line
    glVertex2i(944, 360);
    glVertex2i(905, 292);

    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(114, 82, 12);
    glVertex2i(735, 434);///yellow house left side  door
    glVertex2i(762, 437);
    glVertex2i(762, 393);
    glVertex2i(735, 391);

    glEnd();

    glBegin(GL_LINE_LOOP);

    glColor3ub(0, 0, 0);
    glVertex2i(735, 434);///yellow house left side door line
    glVertex2i(762, 437);
    glVertex2i(762, 393);
    glVertex2i(735, 391);

    glEnd();

    glBegin(GL_LINES);

    glColor3ub(0, 0, 0);
    glVertex2i(748, 434);///yellow house inside door line
    glVertex2i(748, 391);

    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(114, 82, 12);
    glVertex2i(773, 420); ///yellow house left side door-right window
    glVertex2i(795, 421);
    glVertex2i(796, 402);
    glVertex2i(774, 401);

    glEnd();

    glBegin(GL_LINE_LOOP);

    glColor3ub(0, 0, 0);
    glVertex2i(773, 420); ///yellow house left side door-right window line
    glVertex2i(795, 421);
    glVertex2i(796, 402);
    glVertex2i(774, 401);

    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(114, 82, 12);
    glVertex2i(711, 413); ///yellow house left side door-left window
    glVertex2i(728, 414);
    glVertex2i(729, 397);
    glVertex2i(712, 396);

    glEnd();

    glBegin(GL_LINE_LOOP);

    glColor3ub(0, 0, 0);
    glVertex2i(711, 413); ///yellow house left side door-left window line
    glVertex2i(728, 414);
    glVertex2i(729, 397);
    glVertex2i(712, 396);

    glEnd();

    ///Straw
    glColor3ub(255,185,35);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
    theta = i*3.1416/180;
    glVertex2f(1035 + 42*cos(theta), 395 + 42*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub (153,81,10);

    glVertex2i(1030,335); ///Straw-head
    glVertex2i(1030,355);
    glVertex2i(1038,355);
    glVertex2i(1038,335);

    glEnd();


    glBegin(GL_POLYGON);

    glColor3ub (255,185,35);

    glVertex2i(1005,385); ///Straw-body
    glVertex2i(970,455);
    glVertex2i(1100,455);
    glVertex2i(1065,385);

    glEnd();

   ///Base of small tree in front of Straw

    glBegin(GL_POLYGON);

    glColor3ub (48, 119, 18);

    glVertex2i(1070,441);
    glVertex2i(1070,455);
    glVertex2i(1200,455);
    glVertex2i(1200,441);

    glEnd();

    /// small tree in front of Straw

    ///1=========
    glColor3ub(48, 119, 18);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
   {
   theta = i*3.1416/180;
   glVertex2f(1178 + 27*cos(theta), 427 + 28*sin(theta));
   }
   glEnd();
   ///2========
   glColor3ub(48, 119, 18);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
   theta = i*3.1416/180;
   glVertex2f(1142 + 29*cos(theta), 420 + 32*sin(theta));
   }
   glEnd();
   ///3=====

   glColor3ub(48, 119, 18);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
   theta = i*3.1416/180;
   glVertex2f(1107 + 24*cos(theta), 425 + 25*sin(theta));
   }
   glEnd();

  ///4=========

   glColor3ub(48, 119, 18);
   glBegin(GL_POLYGON);
   for(int i=0; i<360; i++)
   {
   theta = i*3.1416/180;
   glVertex2f(1077 + 19*cos(theta), 439.5 + 16*sin(theta));
   }
   glEnd();

    ///WheelBarrow-body-1
    glBegin(GL_POLYGON);

        glColor3ub (153, 110, 30);

        glVertex2i(820,590); ///WheelBarrow-body
        glVertex2i(990,668);
        glVertex2i(1010,645);
        glVertex2i(860,580);

     glEnd();

     ///WheelBarrow-body-2
       glBegin(GL_LINE_LOOP);

        glColor3ub (50,50,50);

        glVertex2i(820,590); ///WheelBarrow-body
        glVertex2i(990,668);
        glVertex2i(1010,645);
        glVertex2i(860,580);

       glEnd();
     ///WheelBarrow-wheel
     glColor3ub(108, 67, 11);
     glBegin(GL_POLYGON);
     for(int i=0; i<360; i++)
     {
      theta = i*3.1416/180;
      glVertex2f(870 + 23*cos(theta),634 +23*sin(theta));
     }
     glEnd();
    ///WheelBarrow- inside wheel line

    glBegin(GL_LINES);

        glColor3ub (0,0,0); ///WheelBarrow-inside wheel line
        glVertex2i(870,635);
        glVertex2i(852,625);

        glVertex2i(870,635);
        glVertex2i(870,615);

        glVertex2i(870,635);
        glVertex2i(890,635);

        glVertex2i(870,635);
        glVertex2i(880,655);

        glVertex2i(870,635);
        glVertex2i(855,650);


    glEnd();

    ///WheelBarrow-handle
    glBegin(GL_LINES);

        glColor3ub (50,50,50);
        glLineWidth(5);
        glVertex2i(832,587);
        glVertex2i(820,580);

        glVertex2i(850,582);
        glVertex2i(835,575);

        glVertex2i(812,582);
        glVertex2i(842,572);

    glEnd();

    ///hanger
    glBegin(GL_LINES);

        glColor3ub (153, 97, 24);

        glVertex2i(1035,495); ///hanger left
        glVertex2i(1035,595);

     glEnd();

     glBegin(GL_LINES);

        glVertex2i(1036,509); /// hanger mid
        glVertex2i(1175,509);

     glEnd();

     glBegin(GL_LINES);

        glVertex2i(1175,495);/// hanger right
        glVertex2i(1175,595);

    glEnd();

    /// dress-1
    glBegin(GL_POLYGON);

        glColor3ub (244,80,26);

        glVertex2i(1050,505);/// dress-1
        glVertex2i(1050,545);
        glVertex2i(1100,545);
        glVertex2i(1100,505);

    glEnd();

    ///dress-2

     glBegin(GL_POLYGON);

        glColor3ub (26,142,244);

        glVertex2i(1110,505);/// dress-2
        glVertex2i(1110,545);
        glVertex2i(1160,545);
        glVertex2i(1160,505);

    glEnd();
    ///boat-1

    glBegin(GL_POLYGON);

        glColor3ub (20, 20, 21);

        glVertex2i(320,560);  ///boat-1
        glVertex2i(470,555);
        glVertex2i(535,515);
        glVertex2i(485,530);
        glVertex2i(310,535);
        glVertex2i(235,525);

    glEnd();

    glBegin(GL_QUADS);

        glColor3ub (0,0,0);

        glVertex2i(263,467); ///boat scull
        glVertex2i(263,570);
        glVertex2i(267,570);
        glVertex2i(267,467);

    glEnd();

    ///boat-2

    glBegin(GL_POLYGON);

        glColor3ub (0, 0, 0);

        glVertex2i(176,365);  ///boat-2
        glVertex2i(255,365);
        glVertex2i(300,332);
        glVertex2i(270,350);
        glVertex2i(185,350);
        glVertex2i(122,335);

    glEnd();

    glBegin(GL_POLYGON);

        glColor3ub (153, 110, 30);

        glVertex2i(175,350); ///boat -2-body
        glVertex2i(250,350);
        glVertex2i(250,320);
        glVertex2i(175,320);

    glEnd();

    glBegin(GL_LINES);

        glColor3ub (0,0,0);

        glVertex2i(134,366); ///boat-2-scull
        glVertex2i(175,340);

    glEnd();

    glPopMatrix();

    ///boat-3

    glBegin(GL_POLYGON);

        glColor3ub (20, 20, 21);

        glVertex2i(320,609);  ///boat-3
        glVertex2i(420,625);
        glVertex2i(425,655);
        glEnd();

    glBegin(GL_POLYGON);

        glColor3ub (20, 20, 21);

        glVertex2i(420,625);
        glVertex2i(425,655);
        glVertex2i(575,645);
        glVertex2i(575,615);

    glEnd();

    glBegin(GL_POLYGON);

        glColor3ub (20, 20, 21);

        glVertex2i(575,645);
        glVertex2i(575,615);
        glVertex2i(660,590);

    glEnd();

    glBegin(GL_QUADS);

        glColor3ub (0,0,0);

        glVertex2i(350,580); ///boat-3-scull
        glVertex2i(350,670);
        glVertex2i(354,670);
        glVertex2i(354,580);

    glEnd();


   ///Fence
    glBegin(GL_QUADS); ///Fence

    glColor3ub (0, 0, 0);

    glVertex2i(700,642);
    glVertex2i(713,563);
    glVertex2i(720,563);
    glVertex2i(708,644);

    glEnd();

    glBegin(GL_QUADS);

    glColor3ub (0, 0, 0);

    glVertex2i(750,648);
    glVertex2i(756,575);
    glVertex2i(761,576);
    glVertex2i(757,647);

    glEnd();

    glBegin(GL_QUADS);

    glColor3ub (0, 0, 0);

    glVertex2i(794,651);
    glVertex2i(795,602);
    glVertex2i(801,596);
    glVertex2i(798,652);

    glEnd();

    glBegin(GL_QUADS);

    glColor3ub (0, 0, 0);

    glVertex2i(704,575);
    glVertex2i(783,596);
    glVertex2i(785,602);
    glVertex2i(700,578);

    glEnd();

    glBegin(GL_QUADS);

    glColor3ub (0, 0, 0);

    glVertex2i(681,603);
    glVertex2i(792,622);
    glVertex2i(792,628);
    glVertex2i(687,608);

    glEnd(); ///Fence End

    ///crow

    glBegin(GL_POLYGON);

    glColor3ub(0,0,0);

    glVertex2i(164,156);/// 1st crow
    glVertex2i(180,153);
    glVertex2i(183,152);
    glVertex2i(179,148);
    glVertex2i(174,149);
    glVertex2i(174,147);
    glVertex2i(172,146);
    glVertex2i(170,143);
    glVertex2i(165,147);
    glVertex2i(161,147);
    glVertex2i(160,150);
    glVertex2i(158,153);
    glVertex2i(162,154);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(0,0,0);

    glVertex2i(224,146);/// 2nd crow
    glVertex2i(239,142);
    glVertex2i(243,139);
    glVertex2i(239,137);
    glVertex2i(234,138);
    glVertex2i(234,136);
    glVertex2i(231,136);
    glVertex2i(229,133);
    glVertex2i(224,138);
    glVertex2i(221,137);
    glVertex2i(220,140);
    glVertex2i(218,144);
    glVertex2i(222,144);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(0,0,0);

    glVertex2i(176,120);/// 3rd crow
    glVertex2i(194,118);
    glVertex2i(200,116);
    glVertex2i(194,112);
    glVertex2i(188,113);
    glVertex2i(189,110);
    glVertex2i(186,110);
    glVertex2i(185,106);
    glVertex2i(177,111);
    glVertex2i(174,110);
    glVertex2i(172,113);
    glVertex2i(169,116);
    glVertex2i(174,118);

    glEnd();



    glFlush();

}


void init(void)
{
    /*select clearing (background color*/
    glClearColor(0.2, 0.6, 1.0, 0.0);
   /* initialize viewing values */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 1200.0, 700.0, 0.0);
}
int main(int argc, char ** argv)
{

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(140,50);
    glutInitWindowSize(1200, 700);
    glutCreateWindow("Computer Graphics Final Project_(VILLAGE VIEW)");
    init();
    glutDisplayFunc(village_view);
    glutMainLoop();
    return 0;
}

