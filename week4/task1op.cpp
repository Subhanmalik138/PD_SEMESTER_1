#include<iostream>
#include<windows.h>
using namespace std;
void  move(int,int);
void gotoxy(int, int);
void gaze();
int main()
{
	int x = 2, y = 4;
	system("cls");
	gaze();

	while (true)
	{
		move(x, y);
		x = x + 1;
		if (x == 18)
		{
			x = 2;
		}
		
	}
}
void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
void gaze()
{
	cout << "######################" << endl;
	cout << "##                  ##" << endl;
	cout << "##                  ##" << endl;
	cout << "##                  ##" << endl;
	cout << "##                  ##" << endl;
	cout << "##                  ##" << endl;
	cout << "##                  ##" << endl;
	cout << "######################" << endl;
		
}
void move(int a, int b)
{
	gotoxy(a, b);
	cout << "P";
	Sleep(500);
	gotoxy(a, b);
	cout << " ";

}