#include<iostream>
#include<Windows.h>
using namespace std;

void gotoxy(int x, int y);
void maze();
void player();
void playerrase();
void playerleftmove();
void playerrightmove();


void enemy1();
void enemy1move();
void enemy1rase();

void enemy2();
void enemy2move();
void enemy2rase();

void enemy3();
void enemy3move();
void enemy3rase();

void enemy4();
void enemy4move();
void enemy4rase();

int px = 28, py = 32;

int e1X = 4, e1Y = 0;
int e2X = 22, e2Y = 0;
int e3X = 45, e3Y = 0;
int e4X = 70, e4Y = 0;

float speed1 = 1.5, speed2 = 2, speed3 = 3, speed4 = 4;
float counter1 = 0, counter2 = 0, counter3 = 0, counter4 = 0;
int main()
{
    system("cls");
    maze();
    player();
    while (1)
    {
        if (GetAsyncKeyState(VK_LEFT))
        {
            playerleftmove();
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            playerrightmove();
        }
        
        if (counter1 >= speed1) 
        {
            enemy1move();
            counter1 = 0;
        }

        if (counter2 >= speed2) 
        {
            enemy2move();
            counter2 = 0;
        }

        if (counter3 >= speed3) 
        {
            enemy3move();
            counter3 = 0;
        }

        if (counter4 >= speed4) 
        {
            enemy4move();
            counter4 = 0;
        }

        
        counter1++;
        counter2++;
        counter3++;
        counter4++;

        Sleep(50);
    }

    return 0;
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}


void enemy1()
{
    gotoxy(e1X, e1Y);
    cout << "   #### ";
    gotoxy(e1X, e1Y + 1);
    cout << "  /====\\";
    gotoxy(e1X, e1Y + 2);
    cout << "  |||||| ";
    gotoxy(e1X, e1Y + 3);
    cout << "((      ))";
    gotoxy(e1X, e1Y + 4);
    cout << "  |||||| ";
    gotoxy(e1X, e1Y + 5);
    cout << "((      ))";
    gotoxy(e1X, e1Y + 6);
    cout << "  \\====/";
    gotoxy(e1X, e1Y + 7);
    cout << "  ##### ";
    gotoxy(e1X, e1Y + 8);
    cout << "   | | ";
    gotoxy(e1X, e1Y + 9);
    cout << "    O  ";
}

void enemy1rase()
{
    for (int i = 0; i < 10; i++) {
        gotoxy(e1X, e1Y + i);
        cout << "           ";
    }
}

void enemy1move()
{
    enemy1rase();
    e1Y = e1Y + 1;
    if (e1Y == 33)
    {
        e1Y = 0;
    }
    enemy1();
}


void enemy2()
{
    gotoxy(e2X, e2Y);
    cout << "   #### ";
    gotoxy(e2X, e2Y + 1);
    cout << "  /====\\";
    gotoxy(e2X, e2Y + 2);
    cout << "  |||||| ";
    gotoxy(e2X, e2Y + 3);
    cout << "((      ))";
    gotoxy(e2X, e2Y + 4);
    cout << "  |||||| ";
    gotoxy(e2X, e2Y + 5);
    cout << "((      ))";
    gotoxy(e2X, e2Y + 6);
    cout << "  \\====/";
    gotoxy(e2X, e2Y + 7);
    cout << "  ##### ";
    gotoxy(e2X, e2Y + 8);
    cout << "   | | ";
    gotoxy(e2X, e2Y + 9);
    cout << "    O  ";
}

void enemy2rase()
{
    for (int i = 0; i < 10; i++) {
        gotoxy(e2X, e2Y + i);
        cout << "           ";
    }
}

void enemy2move()
{
    enemy2rase();
    e2Y = e2Y + 1;
    if (e2Y == 33)
    {
        e2Y = 0;
    }
    enemy2();
}


void enemy3()
{
    gotoxy(e3X, e3Y);
    cout << "   #### ";
    gotoxy(e3X, e3Y + 1);
    cout << "  /====\\";
    gotoxy(e3X, e3Y + 2);
    cout << "  |||||| ";
    gotoxy(e3X, e3Y + 3);
    cout << "((      ))";
    gotoxy(e3X, e3Y + 4);
    cout << "  |||||| ";
    gotoxy(e3X, e3Y + 5);
    cout << "((      ))";
    gotoxy(e3X, e3Y + 6);
    cout << "  \\====/";
    gotoxy(e3X, e3Y + 7);
    cout << "  ##### ";
    gotoxy(e3X, e3Y + 8);
    cout << "   | | ";
    gotoxy(e3X, e3Y + 9);
    cout << "    O  ";
}

void enemy3rase()
{
    for (int i = 0; i < 10; i++) {
        gotoxy(e3X, e3Y + i);
        cout << "           ";
    }
}

void enemy3move()
{
    enemy3rase();
    e3Y = e3Y + 1;
    if (e3Y == 33)
    {
        e3Y = 0;
    }
    enemy3();
}


void enemy4()
{
    gotoxy(e4X, e4Y);
    cout << "   #### ";
    gotoxy(e4X, e4Y + 1);
    cout << "  /====\\";
    gotoxy(e4X, e4Y + 2);
    cout << "  |||||| ";
    gotoxy(e4X, e4Y + 3);
    cout << "((      ))";
    gotoxy(e4X, e4Y + 4);
    cout << "  |||||| ";
    gotoxy(e4X, e4Y + 5);
    cout << "((      ))";
    gotoxy(e4X, e4Y + 6);
    cout << "  \\====/";
    gotoxy(e4X, e4Y + 7);
    cout << "  ##### ";
    gotoxy(e4X, e4Y + 8);
    cout << "   | | ";
    gotoxy(e4X, e4Y + 9);
    cout << "    O  ";
}

void enemy4rase()
{
    for (int i = 0; i < 10; i++) {
        gotoxy(e4X, e4Y + i);
        cout << "           ";
    }
}

void enemy4move()
{
    enemy4rase();
    e4Y = e4Y + 1;
    if (e4Y == 33)
    {
        e4Y = 0;
    }
    enemy4();
}


void maze()
{
    cout << "###                |                   |                        |                      ###" << endl;
    cout << "###                |                   |                        |                      ###" << endl;
    cout << "###                |                   |                        |                      ###" << endl;
    cout << "###                |                   |                        |                      ###" << endl;
    cout << "###                |                   |                        |                      ###" << endl;
    cout << "###                |                   |                        |                      ###" << endl;
    cout << "###                |                   |                        |                      ###" << endl;
    cout << "###                |                   |                        |                      ###" << endl;
    cout << "###                |                   |                        |                      ###" << endl;
    cout << "###                |                   |                        |                      ###" << endl;
    cout << "###                |                   |                        |                      ###" << endl;
    cout << "###                |                   |                        |                      ###" << endl;
    cout << "###                |                   |                        |                      ###" << endl;
    cout << "###                |                   |                        |                      ###" << endl;
    cout << "###                |                   |                        |                      ###" << endl;
    cout << "###                |                   |                        |                      ###" << endl;
    cout << "###                |                   |                        |                      ###" << endl;
    cout << "###                |                   |                        |                      ###" << endl;
    cout << "###                |                   |                        |                      ###" << endl;
    cout << "###                |                   |                        |                      ###" << endl;
    cout << "###                |                   |                        |                      ###" << endl;
    cout << "###                |                   |                        |                      ###" << endl;
    cout << "###                |                   |                        |                      ###" << endl;
    cout << "###                |                   |                        |                      ###" << endl;
    cout << "###                |                   |                        |                      ###" << endl;
    cout << "###                |                   |                        |                      ###" << endl;
    cout << "###                |                   |                        |                      ###" << endl;
    cout << "###                |                   |                        |                      ###" << endl;
    cout << "###                |                   |                        |                      ###" << endl;
    cout << "###                |                   |                        |                      ###" << endl;
    cout << "###                |                   |                        |                      ###" << endl;
    cout << "###                |                   |                        |                      ###" << endl;
    cout << "###                |                   |                        |                      ###" << endl;
    cout << "###                |                   |                        |                      ###" << endl;
    cout << "###                |                   |                        |                      ###" << endl;
    cout << "###                |                   |                        |                      ###" << endl;
    cout << "###                |                   |                        |                      ###" << endl;
    cout << "###                |                   |                        |                      ###" << endl;
    cout << "###                |                   |                        |                      ###" << endl;
    cout << "###                |                   |                        |                      ###" << endl;
    cout << "###                |                   |                        |                      ###" << endl;
    cout << "###                |                   |                        |                      ###" << endl;
    cout << "############################################################################################" << endl;
    cout << "############################################################################################" << endl;
}

void player()
{
    gotoxy(px, py);
    cout << "    O    ";
    gotoxy(px, py + 1);
    cout << "   |||   ";
    gotoxy(px, py + 2);
    cout << " /     \\  ";
    gotoxy(px, py + 3);
    cout << "(0      0)  ";
    gotoxy(px, py + 4);
    cout << "||      ||  ";
    gotoxy(px, py + 5);
    cout << "(0      0)  ";
    gotoxy(px, py + 6);
    cout << "|########|  ";
}
void playerrase()
{
    gotoxy(px, py);
    cout << "         ";
    gotoxy(px, py + 1);
    cout << "         ";
    gotoxy(px, py + 2);
    cout << "           ";
    gotoxy(px, py + 3);
    cout << "            ";
    gotoxy(px, py + 4);
    cout << "             ";
    gotoxy(px, py + 5);
    cout << "             ";
    gotoxy(px, py + 6);
    cout << "             ";
}
void  playerleftmove()
{
    if (px > 7)
    {
        playerrase();
        px = px - 3;
        player();
    }
}
void  playerrightmove()
{
    if (px < 72)
    {

        playerrase();
        px = px + 3;
        player();
    }

}

