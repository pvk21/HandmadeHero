#include<Windows.h>

int CALLBACK
WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR     lpCmdLine,
	int       nShowCmd
)
{
	MessageBox(0, "This is HandmadeHero", "HandmadeHero", 
		       MB_OK | MB_ICONINFORMATION);
	return(0);
}