#include<iostream>
#include<Windows.h>
using namespace std;
void gotoxy(int, int);
int main()
{
	cout << "TEXT";
	gotoxy(15, 15);
	cout << "MY NAME IS SUBHAN MALIK";
}
void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}