#include "app.h"
#include "frame.h"


IMPLEMENT_APP(App)

App::App()
{
}


bool App::OnInit()
{	
	Frame *myFrame = new Frame();
	myFrame->Show();
	return true;
}


