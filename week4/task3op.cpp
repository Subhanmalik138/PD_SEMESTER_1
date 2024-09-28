#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int, int);
int main()
{
	gotoxy(25, 7);
	cout << "MY NAME IS SUBHAN MALIK";
	gotoxy(20, 20);
	cout << "  ";

}
void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}