//
// "$Id$"
//
// Adjuster test program for the Fast Light Tool Kit (FLTK).
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

#include <stdlib.h>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Adjuster.H>
#include <FL/Fl_Box.H>

void adjcb(Fl_Widget *o, void *v) {
  Fl_Adjuster *a = (Fl_Adjuster*)o;
  Fl_Box *b = (Fl_Box *)v;
  a->format((char *)(b->label()));
  b->redraw();
}

int main(int argc, char ** argv) {
   Fl_Window window(320,100,argv[0]);

   char buf1[100];
   Fl_Box b1(FL_DOWN_BOX,20,30,80,25,buf1);
   b1.color(FL_WHITE);
   Fl_Adjuster a1(20+80,30,3*25,25);
   a1.callback(adjcb,&b1);
   adjcb(&a1,&b1);

   char buf2[100];
   Fl_Box b2(FL_DOWN_BOX,20+80+4*25,30,80,25,buf2);
   b2.color(FL_WHITE);
   Fl_Adjuster a2(b2.x()+b2.w(),10,25,3*25);
   a2.callback(adjcb,&b2);
   adjcb(&a2,&b2);

   window.resizable(window);
   window.end();
   window.show(argc, argv);
   return Fl::run();
}

//
// End of "$Id$".
//
