#include "frame.h"
#include "menu_file.h"

Frame::Frame()
	:wxFrame(NULL, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize) 
{
	
	wxMenuBar *MenuBar = new wxMenuBar();
	MenuBar->Append(new MenuFile(),_("File"));
	this->SetMenuBar(MenuBar);

}

Frame::~Frame(void)
{
	
	
}

