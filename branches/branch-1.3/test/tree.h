// generated by Fast Light User Interface Designer (fluid) version 1.0300

#ifndef test_Fl_Tree_H
#define test_Fl_Tree_H
#include <FL/Fl.H>
#include <stdio.h>
#include <FL/Fl.H>
#include <FL/Fl_Pixmap.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Tree.H>
#include <FL/fl_ask.h>
void CccButton_CB(Fl_Widget*, void*data);
void RebuildTree();
#include <FL/Fl_Double_Window.H>
extern Fl_Double_Window *window;
extern Fl_Tree *tree;
#include <FL/Fl_Value_Slider.H>
extern Fl_Value_Slider *labelsize_slider;
extern Fl_Value_Slider *connectorwidth_slider;
#include <FL/Fl_Check_Button.H>
extern Fl_Check_Button *usericon_radio;
#include <FL/Fl_Choice.H>
extern Fl_Choice *collapseicons_chooser;
extern Fl_Choice *connectorstyle_chooser;
extern Fl_Choice *labelcolor_chooser;
#include <FL/Fl_Button.H>
#include <FL/Fl_Light_Button.H>
extern Fl_Light_Button *selectall_toggle;
extern Fl_Light_Button *bold_toggle;
extern Fl_Light_Button *bbbselect_toggle;
extern Fl_Value_Slider *margintop_slider;
extern Fl_Value_Slider *marginleft_slider;
extern Fl_Light_Button *deactivate_toggle;
extern Fl_Check_Button *showroot_radio;
extern Fl_Choice *selectmode_chooser;
extern Fl_Value_Slider *openchild_marginbottom_slider;
extern Fl_Menu_Item menu_collapseicons_chooser[];
extern Fl_Menu_Item menu_connectorstyle_chooser[];
extern Fl_Menu_Item menu_labelcolor_chooser[];
extern Fl_Menu_Item menu_selectmode_chooser[];
#endif
