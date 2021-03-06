//
// "$Id: about_panel.cxx 10353 2014-10-05 00:03:27Z AlbrechtS $"
//
// About dialog for the Fast Light Tool Kit (FLTK).
//
// Copyright 1998-2014 by Bill Spitzak and others.
//
// This library is free software. Distribution and use rights are outlined in
// the file "COPYING" which should have been included with this file.  If this
// file is missing or damaged, see the license at:
//
//     http://www.fltk.org/COPYING.php
//
// Please report all bugs and problems on the following page:
//
//     http://www.fltk.org/str.php
//

// generated by Fast Light User Interface Designer (fluid) version 1.0303

#include "about_panel.h"
#include "FL/Fl_PNG_Image.H"
#include "FL/Fl_Shared_Image.H"

void show_help(const char *name){}; 

Fl_Double_Window *about_panel=(Fl_Double_Window *)0;

#include <FL/Fl_Pixmap.H>

static const char *idata_fluid[] = {
"96 96 32 1",
" \tc None",
".\tc #000100",
"+\tc #031F3F",
"@\tc #00366C",
"#\tc #2E302D",
"$\tc #0058AC",
"%\tc #0060BF",
"&\tc #4E504D",
"*\tc #14659F",
"=\tc #006DDC",
"-\tc #2C7087",
";\tc #0080FF",
">\tc #407B74",
",\tc #0F85F9",
"\'\tc #268CCD",
")\tc #7C7E7B",
"!\tc #2D92EC",
"~\tc #4498A9",
"{\tc #2F94FE",
"]\tc #5BA18C",
"^\tc #6BA674",
"/\tc #7DAD62",
"(\tc #93BD53",
"_\tc #A4A6A2",
":\tc #6CB6FF",
"<\tc #ABCC3F",
"[\tc #C4DA2A",
"}\tc #CACCC9",
"|\tc #DCE913",
"1\tc #BBDEFF",
"2\tc #FDFE00",
"3\tc #FDFFFC",
"                                                                             \
                   ",
"                                                                             \
                   ",
"                                                                             \
                   ",
"                                           ...........                       \
                   ",
"                                     ......................                  \
                   ",
"                                    ........................                 \
                   ",
"                                    ........#&#&#&#&##......                 \
                   ",
"                                    ....)__}33333333333}_...                 \
                   ",
"                                    ...&33333333333333333...                 \
                   ",
"                                    ...#33311133333333333...                 \
                   ",
"                                    ...&33!,{,;:333333333...                 \
                   ",
"                                    ...&3:,{{{{,13333333}...                 \
                   ",
"                                    ...&3!{{!{{,13333333}...                 \
                   ",
"                                    ...&3:!{{!{;13333333}...                 \
                   ",
"                                    ...&3{{{{{{;133333333...                 \
                   ",
"                                    ...&31,{{{;,33333333}...                 \
                   ",
"                                    ...&331{{{:133333333}...                 \
                   ",
"                                    ...&3333333333333333_...                 \
                   ",
"                                    ...&3333333333333333}...                 \
                   ",
"                                    ...&3333333333333333_...                 \
                   ",
"                                    ...&3333333333333333}...                 \
                   ",
"                                    ...&3333333333333333_...                 \
                   ",
"                                    ...&3333333333333333}...                 \
                   ",
"                                    ...&3333333333333333_...                 \
                   ",
"                                    ...&3333333331!,,;:3}...                 \
                   ",
"                                    ...&333333333{{{{{;:_...                 \
                   ",
"                                    ...&333333331,{!{!{{}...                 \
                   ",
"                                    ...&333333331{{{{{{,_...                 \
                   ",
"                                    ...)333333331{{!{{{{_...                 \
                   ",
"                                    ...)333333333{{{!{;:_...                 \
                   ",
"                                    ...)3333333331{;;;:3_...                 \
                   ",
"                                    ...)3333333333331333_...                 \
                   ",
"                                    ...)3333333333333333_...                 \
                   ",
"                                    ...)3333333333333333_...                 \
                   ",
"                                    ..._3333333333333333_...                 \
                   ",
"                                    ..._3333333333333333_...                 \
                   ",
"                                    ..._3333333333333333_...                 \
                   ",
"                                    ..._3333333333333333}....                \
                   ",
"                                   ...._33333333333333333#...                \
                   ",
"                                  ....&333333333333333333_....               \
                   ",
"                                 ....&33333333333333333333)....              \
                   ",
"                                 ....333333333333333333333}&....             \
                   ",
"                                ...._33333333333333333333333....             \
                   ",
"                               ....&333333333331:11333333333_....            \
                   ",
"                              ....#33333333333:,,,;:333333333&....           \
                   ",
"                              ....}3333333333:,!{{{;1333333333&....          \
                   ",
"                             ....}33333333333{{{!{{,!3333333333....          \
                   ",
"                            ....)333333333333{{{{!{{{3333333333_....         \
                   ",
"                           ....#3333333333333!{{{{{,:33333333333&....        \
                   ",
"                           ...._33333333333331{{!{,;1333333333333#....       \
                   ",
"                          ...._333333333333333:;,;,13333333333333_....       \
                   ",
"                         ...._333333333333333333113333333333333333_....      \
                   ",
"                        ....&33333333333333333333333333331::1333333&....     \
                   ",
"                        ...._333333333333333333333333333{,{{;{133333#...     \
                   ",
"                       ...._3333333333333333333333333331,{!{{,:33333}....    \
                   ",
"                      ....&3333333333133333333333333333:{{{{{{:333333)....   \
                   ",
"                      ...#333333331{,,;:333333333333333:{!{!{{:3333333&....  \
                   ",
"                     ....}33333333,{{{{;:333333333333331,{!{{;:33333333#...  \
                   ",
"                    ...._333333331,!{!{{,333333333333333{,{{;{1333333333.... \
                   ",
"                   ....&3333333331{{{{{{{3333333333333333::::33333333333)....\
                   ",
"                  ....+!:::::::::{{{{!{{;::::::::::::::::::::::::::!:::::+...\
.                  ",
"                  ...+=;;;;;;;;;;;;{{{{;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;=...\
.                  ",
"                 ....%;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;%..\
..                 ",
"                ....@;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;$.\
...                ",
"                ...+%;;;;;;!!!;;;;;,;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;!=;;;+\
....               ",
"               ....%;;;;;!([<|^~]^([%;;;;;;;;;;;;;;;;;,(<\'=;;;;;;;!^/<[|\'=;\
;=+...               ",
"              ....$;;;;;\'|2>]22<|22[%=;;;;;;;;;;;;;;;;^22[%=;;;;;;!][22|%=;;\
;$....              ",
"             ....@;;;;;;[2[%^2|*[22(%=;;;;;;;;;;;;;;;,/22|$=;;;;;;;;<22<%=;;;\
;$....             ",
"            ....+=;;;;;~22^$%]~$|22>%=;;;;;;;;;;;;;;;;\'||^%=;;;;;;;,[22^$=;;\
;;;+....            ",
"            ....%;;;;;,[22-%===\'22|*==;;;;;;;;;;;;;;;;;;=%=;;;;;;;;\'22|*%=;\
;;;;=+...            ",
"           ....$;;;;;;!22|$%;,;^22<$=;;;;;;;;;;;;;;;;;;===;;;;;;;;;^22|$==;;;\
;;;%....           ",
"          ....@;;;;;\'](22[^]=;;<22^$==!~]/~=;!]]~;;;;{\'~]==;;;;~<<]<22($=;;\
;;;;;;@....          ",
"         ....@;;;;;;]<|22|[<%;!|22-%\'[2222*=;/22(%;~|222(=;;;!<2|^[222>$=;;;\
;;;;;;+....         ",
"         ....=;;;;;;;,[22>$===~22|$==,[22[%=;[22]%=,!|22]%=;![2|*%]22|*==;;;;\
;;;;;%+...         ",
"        ....@;;;;;;;;!|22*$=;;/22($=;,[22/$=\'222*%=;!|22-%;;<22>%=]22[$%;;;;\
;;;;;;;=....        ",
"       ....@;;;;;;;;;~22[*==;;[22>%=;\'22|-%,^22[$=;,~22[$%;]22<$%=(22/$=;;;;\
;;;;;;;;@....       ",
"      ....+;;;;;;;;;;^22<$=;;!222*$=;]22[$==[22/$=;;(22/$=![22]$=;|22-%=;;;;;\
;;;;;;;;+...       ",
"      ....;;;;;;;;;;;<22^%=;;]22[$=;;(22/$=~222-%=;;[22>%=]22|$%;~22|$==;;;;;\
;;;;;;;;;....      ",
"     ....%;;;;;;;;;;;|22-%=;;(22/$=;{|22-%=<22|$%;;\'22|*%;<22<$==(22<$=;=;;;\
;;;;;;;;;;$....     ",
"    ....+;;;;;;;;;;;!222$==;,|22>%=;~22|$=]|22($=;;]22[$%,|22^%=!|22^$=;;;;;;\
;;;;;;;;;;@....    ",
"   ....+=;;;;;;;;;;;~22[$%;;\'22|*-/;]22($*[<22^$^=;(22/$(-222>$=(222->~;;;;;\
;;;;;;;;;;;=+....   ",
"   ...+;;;;;;;;;;;;;(22/$=;;]22|*<\'=(22/*[~[22>(]=;|22>//=|22/$^(|2|-[%=;;;;\
;;;;;;;;;;;;=....   ",
"  ....$;;;;;;;;;;;;;<22>%=;;]222|>==(222|^=|22|<%=;|222<%=(222|<-222|-==;;;;;\
;;;;;;;;;;;;$....  ",
" ....@;;;;;;;;;;;;;!|2|$=;;;\'[2[>%=;\'|2[]%=/2|/$==;^2|(*%=!(2|($%<2[-%=;;;;\
;;;;;;;;;;;;;;;@.... ",
"....@;;;;;;;;;;;;;;\'22($%;;;;=%%==;;;=%%%==;=%%==;;;=%===;;==%%====%%=,;;;;;\
;;;;;;;;;;;;;;;+... ",
"...+=;;;;;;;;;;!\'=,]22-%=;;;;;;==;=;;;===;=;;===;;;;;===;;;;=;=,;;,=;=;;;;;;\
;;;;;;;;;;;;;;;=....",
"...+;;;;;;;;;;;[2^=<2<$==;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;\
;;;;;;;;;;;;;;;+...",
"...+;;;;;;;;;;;22(\'2|*%=;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;\
;;;;;;;;;;;;;;;;+...",
"...+;;;;;;;;;;;^|<[[-%=;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;\
;;;;;;;;;;;;;;;+...",
"...+;;;;;;;;;;;;*~*%===;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;\
;;;;;;;;;;;;;;;@...",
"...+;;;;;;;;;;;;;====;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;\
;;;;;;;;;;;;;;;+...",
"....$=;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;\
;;;;;;;;;;;;;=$....",
" .....+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\
+++++++++++++..... ",
" ............................................................................\
.................  ",
"  ...........................................................................\
.................  ",
"     ........................................................................\
..............     "
};
static Fl_Pixmap image_fluid(idata_fluid);

static void cb_View(Fl_Button*, void*) {
  show_help("license.html");
}

static void cb_Close(Fl_Return_Button* o, void*) {
  about_panel->hide();
}
//#include "ui/mainicon.cxx"//extern const unsigned char main_png[];
#include "ui/imgdata.h"                            
Fl_Double_Window* make_about_panel() {
  { 
    about_panel = new Fl_Double_Window(345, 180, "About 他山定时");
    about_panel->color(FL_LIGHT1);
    about_panel->selection_color(FL_DARK1);
    about_panel->hotspot(about_panel);
    {
        Fl_Box* o = new Fl_Box(10, 10, 115, 120);

        // o->image(image_fluid);//main_png);
        Fl_PNG_Image *png = 0;//(Fl_PNG_Image*)Fl_Shared_Image::find("embedded:/main.png");
    #if 0        
        if (!png)
               png = new Fl_PNG_Image("embedded:/main.png", main_png, sizeof(main_png));
    #endif
        png = (Fl_PNG_Image*)new Fl_RGB_Image(main_png,96,96,4);  
        o->image(png);   
    } // Fl_Box* o

    Fl_Group *grp = new Fl_Group(135, 25, about_panel->w()-135, 35, 0,false);
    
    Fl_Box* oUrl = 0;
    oUrl=new Fl_Box(135, 60, 200, 30, "https://github.com/yaolixing/tashan-timer");
    oUrl->box(FL_BORDER_FRAME);
    oUrl->align(Fl_Align(FL_ALIGN_WRAP|FL_ALIGN_INSIDE|FL_ALIGN_LEFT|FL_ALIGN_CLIP));
        
    grp->end();
    { Fl_Box* o = new Fl_Box(135, 10, 205, 75,0);
      o->color((Fl_Color)12);
      o->selection_color(FL_DARK1);
      o->labelfont(1);
      o->labelsize(18);
      o->align(Fl_Align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE));
      char about[80]; // uses less than 60
      snprintf(about,sizeof(about),"跨平台开源定时软件\nVer 1.0.0.7");
      o->copy_label(about);
    } // Fl_Box* o
    { Fl_Box* o = new Fl_Box(135, 90, 200, 45, "By lixing yao\n2016");
      o->align(Fl_Align(132|FL_ALIGN_INSIDE));
    } // Fl_Box* o
    {
        //Fl_Button* o = new Fl_Button(115, 145, 123, 25, "View License...");
        //o->labelcolor(FL_DARK_BLUE);
        //o->callback((Fl_Callback*)cb_View);
    } // Fl_Button* o
    {
        Fl_Group *grp = new Fl_Group(135, 145, about_panel->w()-135, 25, 0,false);
        Fl_Group *grp0 = new Fl_Group(135, 145, 250-135, 25, 0,0);
        grp0->end();
        
        Fl_Return_Button* oOk = new Fl_Return_Button(250, 145, 63, 25, "Close");
        oOk->callback((Fl_Callback*)cb_Close);
        grp->end();
        grp->resizable(grp0);
    }
     // Fl_Return_Button* o
    about_panel->set_non_modal();
    about_panel->end();
    
    about_panel->resizable(grp);
  } // Fl_Double_Window* about_panel
  return about_panel;
}

//
// End of "$Id: about_panel.cxx 10353 2014-10-05 00:03:27Z AlbrechtS $".
//
