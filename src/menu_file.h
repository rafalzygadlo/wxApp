#ifndef __MENU
#define __MENU
#include <wx/wx.h>
#include <wx/frame.h>

class MenuFile: public wxMenu 
{

public:
	MenuFile();
		
	enum
	{
		ID_EXIT = 5001,
	};

};

#endif