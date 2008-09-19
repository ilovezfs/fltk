//
// "$Id$"
//
// Setting and shell dialogs for the Fast Light Tool Kit (FLTK).
//
// Copyright 1998-2008 by Bill Spitzak and others.
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Library General Public
// License as published by the Free Software Foundation; either
// version 2 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Library General Public License for more details.
//
// You should have received a copy of the GNU Library General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
// USA.
//
// Please report all bugs and problems on the following page:
//
//     http://www.fltk.org/str.php
//

// generated by Fast Light User Interface Designer (fluid) version 1.0300

#include "alignment_panel.h"

Fl_Double_Window *project_window=(Fl_Double_Window *)0;

static void cb_Close(Fl_Button*, void*) {
  project_window->hide();
}

Fl_Input *header_file_input=(Fl_Input *)0;

Fl_Input *code_file_input=(Fl_Input *)0;

Fl_Check_Button *include_H_from_C_button=(Fl_Check_Button *)0;

Fl_Check_Button *use_FL_COMMAND_button=(Fl_Check_Button *)0;

Fl_Choice *i18n_type_chooser=(Fl_Choice *)0;

Fl_Menu_Item menu_i18n_type_chooser[] = {
 {"None", 0,  0, 0, 0, FL_NORMAL_LABEL, 0, 11, 0},
 {"GNU gettext", 0,  0, 0, 0, FL_NORMAL_LABEL, 0, 11, 0},
 {"POSIX catgets", 0,  0, 0, 0, FL_NORMAL_LABEL, 0, 11, 0},
 {0,0,0,0,0,0,0,0,0}
};

Fl_Input *i18n_include_input=(Fl_Input *)0;

Fl_Input *i18n_file_input=(Fl_Input *)0;

Fl_Input *i18n_set_input=(Fl_Input *)0;

Fl_Input *i18n_function_input=(Fl_Input *)0;

Fl_Double_Window* make_project_window() {
  { project_window = new Fl_Double_Window(358, 207, "Project Settings");
    { Fl_Button* o = new Fl_Button(293, 175, 52, 20, "Close");
      o->tooltip("Close this dialog.");
      o->labelsize(11);
      o->callback((Fl_Callback*)cb_Close);
    } // Fl_Button* o
    { Fl_Tabs* o = new Fl_Tabs(10, 10, 335, 151);
      o->selection_color((Fl_Color)12);
      o->labelsize(11);
      { Fl_Group* o = new Fl_Group(10, 30, 335, 131, "Output");
        o->labelsize(11);
        { Fl_Box* o = new Fl_Box(15, 40, 325, 15, "Use \"name.ext\" to set name or just \".ext\" to set extension.");
          o->labelsize(11);
          o->align(Fl_Align(FL_ALIGN_WRAP|FL_ALIGN_INSIDE));
        } // Fl_Box* o
        { header_file_input = new Fl_Input(96, 60, 228, 20, "Header File:");
          header_file_input->tooltip("The name of the generated header file.");
          header_file_input->box(FL_THIN_DOWN_BOX);
          header_file_input->labelfont(1);
          header_file_input->labelsize(11);
          header_file_input->textfont(4);
          header_file_input->textsize(11);
          header_file_input->callback((Fl_Callback*)header_input_cb, (void*)(1));
          header_file_input->when(FL_WHEN_CHANGED);
        } // Fl_Input* header_file_input
        { code_file_input = new Fl_Input(97, 85, 227, 20, "Code File:");
          code_file_input->tooltip("The name of the generated code file.");
          code_file_input->box(FL_THIN_DOWN_BOX);
          code_file_input->labelfont(1);
          code_file_input->labelsize(11);
          code_file_input->textfont(4);
          code_file_input->textsize(11);
          code_file_input->callback((Fl_Callback*)code_input_cb, (void*)(1));
          code_file_input->when(FL_WHEN_CHANGED);
        } // Fl_Input* code_file_input
        { include_H_from_C_button = new Fl_Check_Button(95, 110, 145, 20, "Include Header from Code");
          include_H_from_C_button->tooltip("Include the header file from the code file.");
          include_H_from_C_button->down_box(FL_DOWN_BOX);
          include_H_from_C_button->labelsize(11);
          include_H_from_C_button->callback((Fl_Callback*)include_H_from_C_button_cb);
        } // Fl_Check_Button* include_H_from_C_button
        { use_FL_COMMAND_button = new Fl_Check_Button(95, 130, 245, 20, "Generate menu shortcuts using FL_COMMAND");
          use_FL_COMMAND_button->tooltip("Replace FL_CTRL with FL_COMMAND when generating menu shortcut code.");
          use_FL_COMMAND_button->down_box(FL_DOWN_BOX);
          use_FL_COMMAND_button->labelsize(11);
          use_FL_COMMAND_button->callback((Fl_Callback*)use_FL_COMMAND_button_cb);
        } // Fl_Check_Button* use_FL_COMMAND_button
        o->end();
      } // Fl_Group* o
      { Fl_Group* o = new Fl_Group(10, 30, 335, 131, "Internationalization");
        o->labelsize(11);
        o->hide();
        { i18n_type_chooser = new Fl_Choice(80, 42, 100, 20, "Use:");
          i18n_type_chooser->tooltip("Type of internationalization to use.");
          i18n_type_chooser->box(FL_THIN_UP_BOX);
          i18n_type_chooser->down_box(FL_BORDER_BOX);
          i18n_type_chooser->labelfont(1);
          i18n_type_chooser->labelsize(11);
          i18n_type_chooser->textsize(11);
          i18n_type_chooser->callback((Fl_Callback*)i18n_type_cb);
          i18n_type_chooser->menu(menu_i18n_type_chooser);
        } // Fl_Choice* i18n_type_chooser
        { i18n_include_input = new Fl_Input(80, 67, 245, 20, "#include:");
          i18n_include_input->tooltip("The include file for internationalization.");
          i18n_include_input->box(FL_THIN_DOWN_BOX);
          i18n_include_input->labelfont(1);
          i18n_include_input->labelsize(11);
          i18n_include_input->textfont(4);
          i18n_include_input->textsize(11);
          i18n_include_input->callback((Fl_Callback*)i18n_text_cb);
        } // Fl_Input* i18n_include_input
        { i18n_file_input = new Fl_Input(80, 92, 245, 20, "File:");
          i18n_file_input->tooltip("The name of the message catalog.");
          i18n_file_input->box(FL_THIN_DOWN_BOX);
          i18n_file_input->labelfont(1);
          i18n_file_input->labelsize(11);
          i18n_file_input->textfont(4);
          i18n_file_input->textsize(11);
          i18n_file_input->callback((Fl_Callback*)i18n_text_cb);
        } // Fl_Input* i18n_file_input
        { i18n_set_input = new Fl_Input(80, 117, 245, 20, "Set:");
          i18n_set_input->tooltip("The message set number.");
          i18n_set_input->type(2);
          i18n_set_input->box(FL_THIN_DOWN_BOX);
          i18n_set_input->labelfont(1);
          i18n_set_input->labelsize(11);
          i18n_set_input->textfont(4);
          i18n_set_input->textsize(11);
          i18n_set_input->callback((Fl_Callback*)i18n_text_cb);
        } // Fl_Input* i18n_set_input
        { i18n_function_input = new Fl_Input(80, 92, 245, 20, "Function:");
          i18n_function_input->tooltip("The function to call to internationalize the labels and tooltips.");
          i18n_function_input->box(FL_THIN_DOWN_BOX);
          i18n_function_input->labelfont(1);
          i18n_function_input->labelsize(11);
          i18n_function_input->textfont(4);
          i18n_function_input->textsize(11);
          i18n_function_input->callback((Fl_Callback*)i18n_text_cb);
        } // Fl_Input* i18n_function_input
        o->end();
      } // Fl_Group* o
      o->end();
    } // Fl_Tabs* o
    project_window->set_modal();
    project_window->end();
  } // Fl_Double_Window* project_window
  return project_window;
}
Fl_Text_Buffer *shell_run_buffer; 
void scheme_cb(Fl_Choice *, void *); 

Fl_Double_Window *settings_window=(Fl_Double_Window *)0;

Fl_Choice *scheme_choice=(Fl_Choice *)0;

Fl_Menu_Item menu_scheme_choice[] = {
 {"Default", 0,  0, 0, 0, FL_NORMAL_LABEL, 0, 14, 0},
 {"None", 0,  0, 0, 0, FL_NORMAL_LABEL, 0, 14, 0},
 {"Plastic", 0,  0, 0, 0, FL_NORMAL_LABEL, 0, 14, 0},
 {"GTK+", 0,  0, 0, 0, FL_NORMAL_LABEL, 0, 14, 0},
 {0,0,0,0,0,0,0,0,0}
};

Fl_Check_Button *tooltips_button=(Fl_Check_Button *)0;

static void cb_tooltips_button(Fl_Check_Button*, void*) {
  Fl_Tooltip::enable(tooltips_button->value());
fluid_prefs.set("show_tooltips", tooltips_button->value());
}

Fl_Check_Button *completion_button=(Fl_Check_Button *)0;

static void cb_completion_button(Fl_Check_Button*, void*) {
  fluid_prefs.set("show_completion_dialogs", completion_button->value());
}

Fl_Check_Button *openlast_button=(Fl_Check_Button *)0;

static void cb_openlast_button(Fl_Check_Button*, void*) {
  fluid_prefs.set("open_previous_file", openlast_button->value());
}

Fl_Check_Button *prevpos_button=(Fl_Check_Button *)0;

static void cb_prevpos_button(Fl_Check_Button*, void*) {
  fluid_prefs.set("prev_window_pos", prevpos_button->value());
}

Fl_Check_Button *show_comments_button=(Fl_Check_Button *)0;

static void cb_show_comments_button(Fl_Check_Button*, void*) {
  show_comments = show_comments_button->value();
fluid_prefs.set("show_comments", show_comments);
redraw_browser();
}

Fl_Spinner *recent_spinner=(Fl_Spinner *)0;

static void cb_recent_spinner(Fl_Spinner*, void*) {
  fluid_prefs.set("recent_files", recent_spinner->value());
load_history();
}

static void cb_Close1(Fl_Button*, void*) {
  settings_window->hide();
}

Fl_Double_Window* make_settings_window() {
  { settings_window = new Fl_Double_Window(342, 242, "GUI Settings");
    { scheme_choice = new Fl_Choice(116, 10, 115, 25, "Scheme:");
      scheme_choice->down_box(FL_BORDER_BOX);
      scheme_choice->labelfont(1);
      scheme_choice->callback((Fl_Callback*)scheme_cb);
      scheme_choice->menu(menu_scheme_choice);
      int s;
      fluid_prefs.get("scheme", s, 0);
      scheme_choice->value(s);
      scheme_cb(0, 0);
    } // Fl_Choice* scheme_choice
    { Fl_Group* o = new Fl_Group(70, 40, 266, 128, "Options:\n\n\n\n\n");
      o->labelfont(1);
      o->align(Fl_Align(FL_ALIGN_LEFT));
      { tooltips_button = new Fl_Check_Button(116, 40, 113, 25, "Show Tooltips");
        tooltips_button->down_box(FL_DOWN_BOX);
        tooltips_button->callback((Fl_Callback*)cb_tooltips_button);
        int b;
        fluid_prefs.get("show_tooltips", b, 1);
        tooltips_button->value(b);
        Fl_Tooltip::enable(b);
      } // Fl_Check_Button* tooltips_button
      { completion_button = new Fl_Check_Button(116, 65, 186, 25, "Show Completion Dialogs");
        completion_button->down_box(FL_DOWN_BOX);
        completion_button->callback((Fl_Callback*)cb_completion_button);
        int b;
        fluid_prefs.get("show_completion_dialogs", b, 1);
        completion_button->value(b);
      } // Fl_Check_Button* completion_button
      { openlast_button = new Fl_Check_Button(115, 90, 215, 25, "Open Previous File on Startup");
        openlast_button->down_box(FL_DOWN_BOX);
        openlast_button->callback((Fl_Callback*)cb_openlast_button);
        int b;
        fluid_prefs.get("open_previous_file", b, 0);
        openlast_button->value(b);
      } // Fl_Check_Button* openlast_button
      { prevpos_button = new Fl_Check_Button(115, 115, 210, 25, "Remember Window Positions");
        prevpos_button->down_box(FL_DOWN_BOX);
        prevpos_button->callback((Fl_Callback*)cb_prevpos_button);
        int b;
        fluid_prefs.get("prev_window_pos", b, 1);
        prevpos_button->value(b);
      } // Fl_Check_Button* prevpos_button
      { show_comments_button = new Fl_Check_Button(115, 140, 210, 25, "Show Comments in Browser");
        show_comments_button->down_box(FL_DOWN_BOX);
        show_comments_button->callback((Fl_Callback*)cb_show_comments_button);
        fluid_prefs.get("show_comments", show_comments, 1);
        show_comments_button->value(show_comments);
      } // Fl_Check_Button* show_comments_button
      o->end();
    } // Fl_Group* o
    { recent_spinner = new Fl_Spinner(115, 170, 40, 25, "# Recent Files:");
      recent_spinner->labelfont(1);
      recent_spinner->value(1);
      recent_spinner->callback((Fl_Callback*)cb_recent_spinner);
      recent_spinner->when(FL_WHEN_CHANGED);
      int c;
      fluid_prefs.get("recent_files", c, 5);
      recent_spinner->maximum(10);
      recent_spinner->value(c);
    } // Fl_Spinner* recent_spinner
    { Fl_Button* o = new Fl_Button(266, 205, 64, 25, "Close");
      o->tooltip("Close this dialog.");
      o->callback((Fl_Callback*)cb_Close1);
    } // Fl_Button* o
    settings_window->set_non_modal();
    settings_window->end();
  } // Fl_Double_Window* settings_window
  return settings_window;
}

Fl_Double_Window *shell_window=(Fl_Double_Window *)0;

Fl_Input *shell_command_input=(Fl_Input *)0;

static void cb_shell_command_input(Fl_Input*, void*) {
  fluid_prefs.set("shell_command", shell_command_input->value());
}

Fl_Check_Button *shell_writecode_button=(Fl_Check_Button *)0;

static void cb_shell_writecode_button(Fl_Check_Button*, void*) {
  fluid_prefs.set("shell_writecode", shell_writecode_button->value());
}

Fl_Check_Button *shell_writemsgs_button=(Fl_Check_Button *)0;

static void cb_shell_writemsgs_button(Fl_Check_Button*, void*) {
  fluid_prefs.set("shell_writemsgs", shell_writemsgs_button->value());
}

Fl_Check_Button *shell_savefl_button=(Fl_Check_Button *)0;

static void cb_shell_savefl_button(Fl_Check_Button*, void*) {
  fluid_prefs.set("shell_savefl", shell_savefl_button->value());
}

static void cb_Cancel(Fl_Button*, void*) {
  shell_window->hide();
}

Fl_Double_Window *shell_run_window=(Fl_Double_Window *)0;

Fl_Text_Display *shell_run_display=(Fl_Text_Display *)0;

Fl_Return_Button *shell_run_button=(Fl_Return_Button *)0;

static void cb_shell_run_button(Fl_Return_Button*, void*) {
  shell_run_window->hide();
}

Fl_Double_Window* make_shell_window() {
  { shell_window = new Fl_Double_Window(365, 125, "Shell Command");
    { shell_command_input = new Fl_Input(10, 27, 347, 25, "Command:");
      shell_command_input->labelfont(1);
      shell_command_input->callback((Fl_Callback*)cb_shell_command_input);
      shell_command_input->align(Fl_Align(FL_ALIGN_TOP_LEFT));
      char buf[1024];
      fluid_prefs.get("shell_command", buf, "", sizeof(buf));
      shell_command_input->value(buf);
    } // Fl_Input* shell_command_input
    { shell_writecode_button = new Fl_Check_Button(128, 61, 93, 19, "Write Code");
      shell_writecode_button->down_box(FL_DOWN_BOX);
      shell_writecode_button->callback((Fl_Callback*)cb_shell_writecode_button);
      int b;
      fluid_prefs.get("shell_writecode", b, 1);
      shell_writecode_button->value(b);
    } // Fl_Check_Button* shell_writecode_button
    { shell_writemsgs_button = new Fl_Check_Button(231, 61, 126, 19, "Write Messages");
      shell_writemsgs_button->down_box(FL_DOWN_BOX);
      shell_writemsgs_button->callback((Fl_Callback*)cb_shell_writemsgs_button);
      int b;
      fluid_prefs.get("shell_writemsgs", b, 0);
      shell_writemsgs_button->value(b);
    } // Fl_Check_Button* shell_writemsgs_button
    { shell_savefl_button = new Fl_Check_Button(10, 62, 108, 19, "Save .FL File");
      shell_savefl_button->down_box(FL_DOWN_BOX);
      shell_savefl_button->callback((Fl_Callback*)cb_shell_savefl_button);
      int b;
      fluid_prefs.get("shell_savefl", b, 1);
      shell_savefl_button->value(b);
    } // Fl_Check_Button* shell_savefl_button
    { Fl_Return_Button* o = new Fl_Return_Button(132, 90, 143, 25, "Run Command");
      o->callback((Fl_Callback*)do_shell_command);
    } // Fl_Return_Button* o
    { Fl_Button* o = new Fl_Button(285, 90, 72, 25, "Cancel");
      o->callback((Fl_Callback*)cb_Cancel);
    } // Fl_Button* o
    shell_window->end();
  } // Fl_Double_Window* shell_window
  { shell_run_window = new Fl_Double_Window(555, 430, "Shell Command Output");
    { shell_run_display = new Fl_Text_Display(10, 10, 535, 375);
      shell_run_display->box(FL_DOWN_BOX);
      shell_run_display->textfont(4);
      Fl_Group::current()->resizable(shell_run_display);
      shell_run_buffer = new Fl_Text_Buffer();
      shell_run_display->buffer(shell_run_buffer);
    } // Fl_Text_Display* shell_run_display
    { shell_run_button = new Fl_Return_Button(468, 395, 77, 25, "Close");
      shell_run_button->callback((Fl_Callback*)cb_shell_run_button);
    } // Fl_Return_Button* shell_run_button
    shell_run_window->end();
  } // Fl_Double_Window* shell_run_window
  return shell_run_window;
}

Fl_Double_Window *grid_window=(Fl_Double_Window *)0;

Fl_Input *horizontal_input=(Fl_Input *)0;

Fl_Input *vertical_input=(Fl_Input *)0;

Fl_Input *snap_input=(Fl_Input *)0;

Fl_Check_Button *guides_toggle=(Fl_Check_Button *)0;

static void cb_Close2(Fl_Button*, void*) {
  grid_window->hide();
}

Fl_Round_Button *def_widget_size[6]={(Fl_Round_Button *)0};

Fl_Double_Window* make_layout_window() {
  { grid_window = new Fl_Double_Window(285, 245, "Layout Settings");
    { Fl_Input* o = horizontal_input = new Fl_Input(106, 10, 50, 25, "x");
      horizontal_input->tooltip("Horizontal grid spacing.");
      horizontal_input->type(2);
      horizontal_input->box(FL_THIN_DOWN_BOX);
      horizontal_input->callback((Fl_Callback*)grid_cb, (void*)(1));
      horizontal_input->align(Fl_Align(FL_ALIGN_RIGHT));
      o->when(FL_WHEN_RELEASE|FL_WHEN_ENTER_KEY);
    } // Fl_Input* horizontal_input
    { Fl_Input* o = vertical_input = new Fl_Input(166, 10, 50, 25, "pixels");
      vertical_input->tooltip("Vertical grid spacing.");
      vertical_input->type(2);
      vertical_input->box(FL_THIN_DOWN_BOX);
      vertical_input->callback((Fl_Callback*)grid_cb, (void*)(2));
      vertical_input->align(Fl_Align(FL_ALIGN_RIGHT));
      o->when(FL_WHEN_RELEASE|FL_WHEN_ENTER_KEY);
    } // Fl_Input* vertical_input
    { Fl_Input* o = snap_input = new Fl_Input(106, 45, 50, 25, "pixel snap");
      snap_input->tooltip("Snap to grid within this many pixels.");
      snap_input->type(2);
      snap_input->box(FL_THIN_DOWN_BOX);
      snap_input->callback((Fl_Callback*)grid_cb, (void*)(3));
      snap_input->align(Fl_Align(FL_ALIGN_RIGHT));
      o->when(FL_WHEN_RELEASE|FL_WHEN_ENTER_KEY);
    } // Fl_Input* snap_input
    { guides_toggle = new Fl_Check_Button(106, 80, 110, 25, "Show Guides");
      guides_toggle->tooltip("Show distance and alignment guides in overlay");
      guides_toggle->down_box(FL_DOWN_BOX);
      guides_toggle->callback((Fl_Callback*)guides_cb, (void*)(4));
    } // Fl_Check_Button* guides_toggle
    { Fl_Button* o = new Fl_Button(215, 210, 60, 25, "Close");
      o->tooltip("Close this dialog.");
      o->callback((Fl_Callback*)cb_Close2);
    } // Fl_Button* o
    { Fl_Box* o = new Fl_Box(26, 10, 70, 25, "Grid:");
      o->labelfont(1);
      o->align(Fl_Align(FL_ALIGN_RIGHT|FL_ALIGN_INSIDE));
    } // Fl_Box* o
    { Fl_Box* o = new Fl_Box(-1, 115, 97, 25, "Widget Size:");
      o->labelfont(1);
      o->align(Fl_Align(FL_ALIGN_RIGHT|FL_ALIGN_INSIDE));
    } // Fl_Box* o
    { Fl_Group* o = new Fl_Group(105, 115, 170, 75);
      { def_widget_size[0] = new Fl_Round_Button(105, 115, 70, 25);
        def_widget_size[0]->type(102);
        def_widget_size[0]->down_box(FL_ROUND_DOWN_BOX);
        def_widget_size[0]->callback((Fl_Callback*)default_widget_size_cb, (void*)(8));
      } // Fl_Round_Button* def_widget_size[0]
      { Fl_Box* o = new Fl_Box(120, 115, 50, 25, "tiny");
        o->labelsize(8);
        o->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
      } // Fl_Box* o
      { def_widget_size[1] = new Fl_Round_Button(180, 115, 70, 25);
        def_widget_size[1]->type(102);
        def_widget_size[1]->down_box(FL_ROUND_DOWN_BOX);
        def_widget_size[1]->callback((Fl_Callback*)default_widget_size_cb, (void*)(11));
      } // Fl_Round_Button* def_widget_size[1]
      { Fl_Box* o = new Fl_Box(195, 115, 50, 25, "small");
        o->labelsize(11);
        o->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
      } // Fl_Box* o
      { def_widget_size[2] = new Fl_Round_Button(105, 140, 70, 25);
        def_widget_size[2]->type(102);
        def_widget_size[2]->down_box(FL_ROUND_DOWN_BOX);
        def_widget_size[2]->callback((Fl_Callback*)default_widget_size_cb, (void*)(14));
      } // Fl_Round_Button* def_widget_size[2]
      { Fl_Box* o = new Fl_Box(120, 140, 50, 25, "normal");
        o->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
      } // Fl_Box* o
      { def_widget_size[3] = new Fl_Round_Button(180, 140, 90, 25);
        def_widget_size[3]->type(102);
        def_widget_size[3]->down_box(FL_ROUND_DOWN_BOX);
        def_widget_size[3]->callback((Fl_Callback*)default_widget_size_cb, (void*)(18));
      } // Fl_Round_Button* def_widget_size[3]
      { Fl_Box* o = new Fl_Box(195, 140, 68, 25, "medium");
        o->labelsize(18);
        o->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
      } // Fl_Box* o
      { def_widget_size[4] = new Fl_Round_Button(105, 165, 75, 25);
        def_widget_size[4]->type(102);
        def_widget_size[4]->down_box(FL_ROUND_DOWN_BOX);
        def_widget_size[4]->callback((Fl_Callback*)default_widget_size_cb, (void*)(24));
      } // Fl_Round_Button* def_widget_size[4]
      { Fl_Box* o = new Fl_Box(120, 165, 64, 25, "large");
        o->labelsize(24);
        o->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
      } // Fl_Box* o
      { def_widget_size[5] = new Fl_Round_Button(180, 165, 95, 25);
        def_widget_size[5]->type(102);
        def_widget_size[5]->down_box(FL_ROUND_DOWN_BOX);
        def_widget_size[5]->callback((Fl_Callback*)default_widget_size_cb, (void*)(32));
      } // Fl_Round_Button* def_widget_size[5]
      { Fl_Box* o = new Fl_Box(195, 165, 76, 25, "huge");
        o->labelsize(32);
        o->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
      } // Fl_Box* o
      o->end();
    } // Fl_Group* o
    grid_window->set_non_modal();
    grid_window->end();
  } // Fl_Double_Window* grid_window
  return grid_window;
}

//
// End of "$Id$".
//
