#include <iostream>
#include <Windows.h>
using namespace std;
 
void  autoClicker()
{
	bool click = false; 
    bool slowClick = false;
	int clickSpeed;
  	cout << "Please enter an integer value: ";
  	cin >> clickSpeed;
	while (true)
	{
		if (GetAsyncKeyState('X'))
		{
			click = true; 
		}
		else if (GetAsyncKeyState('Z')) 
		{
			click = false;
		}
     
		if (click == true) 
		{
			mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
            Sleep(clickSpeed);	 //you can adjust the speed of the click here
		
		}
	}
}		
 
int main()
{
	autoClicker();
	return 0;
}