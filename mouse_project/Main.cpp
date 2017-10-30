#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <conio.h>

int main()
{
	Sleep(5000);
	int x = 0;
	int y = 250;
	while (true)
	{
		if (kbhit())
			break;
		for (int j = 0; j < 10; j++)
		{
			for (int i = 0; i < 4; i++)
			{
				mouse_event(MOUSEEVENTF_MOVE, x, y, 0, 0);
				//mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
				Sleep(200);
			}
			for (int i = 0; i < 4; i++)
			{
				mouse_event(MOUSEEVENTF_MOVE, x, (-y), 0, 0);
				//mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
				Sleep(200);
			}
		}
	}
	return 0;
}