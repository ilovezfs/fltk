//
// "$Id$"
//
// implementation of Fl_Device class for the Fast Light Tool Kit (FLTK).
//
// Copyright 2010-2011 by Bill Spitzak and others.
//
// This library is free software. Distribution and use rights are outlined in
// the file "COPYING" which should have been included with this file.  If this
// file is missing or damaged, see the license at:
//
//     http://www.fltk.org/COPYING.php
//
// Please report all bugs and problems to:
//
//     http://www.fltk.org/str.php
//

#include <FL/Fl.H>
#include <FL/Fl_Device.H>
#include <FL/Fl_Image.H>

const char *Fl_Device::class_id = "Fl_Device";
const char *Fl_Surface_Device::class_id = "Fl_Surface_Device";
const char *Fl_Display_Device::class_id = "Fl_Display_Device";
const char *Fl_Graphics_Driver::class_id = "Fl_Graphics_Driver";
#if defined(__APPLE__) || defined(FL_DOXYGEN)
const char *Fl_Quartz_Graphics_Driver::class_id = "Fl_Quartz_Graphics_Driver";
#endif
#if defined(WIN32) || defined(FL_DOXYGEN)
const char *Fl_GDI_Graphics_Driver::class_id = "Fl_GDI_Graphics_Driver";
#endif
#if !(defined(__APPLE__) || defined(WIN32))
const char *Fl_Xlib_Graphics_Driver::class_id = "Fl_Xlib_Graphics_Driver";
#endif


/** \brief Use this drawing surface for future graphics requests. */
void Fl_Surface_Device::set_current(void)
{
  fl_graphics_driver = _driver;
  _surface = this;
}

const Fl_Graphics_Driver::matrix Fl_Graphics_Driver::m0 = {1, 0, 0, 1, 0, 0};

Fl_Graphics_Driver::Fl_Graphics_Driver() {
  font_ = 0;
  size_ = 0;
  sptr=0; rstackptr=0; 
  fl_clip_state_number=0;
  m = m0; 
  fl_matrix = &m; 
  p = (XPOINT *)0;
  font_descriptor_ = NULL;
};

void Fl_Graphics_Driver::text_extents(const char*t, int n, int& dx, int& dy, int& w, int& h)
{
  w = (int)width(t, n);
  h = - height();
  dx = 0;
  dy = descent();
}

Fl_Display_Device::Fl_Display_Device(Fl_Graphics_Driver *graphics_driver) : Fl_Surface_Device( graphics_driver) {
#ifdef __APPLE__
  SInt32 versionMajor = 0;
  SInt32 versionMinor = 0;
  SInt32 versionBugFix = 0;
  SInt32 version;
  Gestalt( gestaltSystemVersion, &version);
#if MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_4
  if (version >= 0x1040) {
    Gestalt( gestaltSystemVersionMajor, &versionMajor );
    Gestalt( gestaltSystemVersionMinor, &versionMinor );
    Gestalt( gestaltSystemVersionBugFix, &versionBugFix );
    }
  else {
#endif
    versionMajor = 10;
    versionMinor = (version / 0x10) % 0x10;
    versionBugFix = version % 0x10;
#if MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_4
    }
#endif
  fl_mac_os_version = versionMajor * 10000 + versionMinor * 100 + versionBugFix;
#endif
};


//
// End of "$Id$".
//
