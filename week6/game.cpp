#include<iostream>
#include<Windows.h>
using namespace std;

void gotoxy(int x, int y);
void maze();
void player();
void playerrase();
void playerleftmove();
void playerrightmove();
void playerup();
void playerdown();


void enemy1();
void changeDirection();
void enemy1move();
void enemy1rase();

void enemy2();
void changedirection2();
void enemy2move();
void enemy2rase();



void enemy3();
void changedirection3();
void enemy3move();
void enemy3rase();

void enemy4();
void enemy4move();
void directionchange();
void enemy4rase();



int px = 28, py = 32;

int e1X = 10, e1Y = 5;
string eDirection = "down";
int e2X = 15, e2Y = 8;
string edirection2 = "right";
int e3X = 15, e3Y = 20;
string edirection3 = "digonal";
int e4X = 70, e4Y = 15;
string  edirection4 = "up";



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
        if (GetAsyncKeyState(VK_UP))
        {
            playerup();
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            playerdown();
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
    if (eDirection == "down")
    {
        e1Y++;
    }
    else if (eDirection == "up")
    {
        e1Y--;
    }
    changeDirection();
    enemy1();
    
}

void changeDirection()
{
    if (e1Y == 40 && eDirection == "down")
    {
        eDirection = "up";
    }
    else if (e1Y == 3 && eDirection == "up")
    {
        eDirection = "down";
    }
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
    if (edirection2 == "right")
    {
        e2X++;
    }
    else if (edirection2 == "left")
    {
        e2X--;
    }
    changedirection2();
    
    enemy2();
   
}

void  changedirection2()
{
    if (e2X == 45 && edirection2 == "right")
    {
        edirection2 = "left";
    }
    else if (e2X == 10 && edirection2 == "left")
    {
        edirection2 = "right";
    }
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
    if (edirection3 == "digonal")
    {
        e3X++;
        e3Y++;
      
    }
    else if (edirection3 == "nondigonal")
    {
        e3X--;
        e3Y--;

        
    }
    changedirection3();

    enemy3();
   
}
void changedirection3()
{
    if (e3Y==35 && edirection3 == "digonal")
    {
        edirection3 = "nondigonal";
    }
    else if (e3Y==10 && edirection3 == "nondigonal")
    {
        edirection3 = "digonal";
    }
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

    
    if (edirection4 == "down")
    {
        e4Y++;
    }
    else if (edirection4 == "up")
    {
        e4Y--;
    }
    directionchange();
    enemy4();
    



}
void directionchange()
{
    if (e4Y == 40 && edirection4 == "down")
    {
        edirection4 = "up";
    }
    else if (e4Y == 10 && edirection4 == "up")
    {
        edirection4 = "down";
    }

}




void maze()
{

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
    cout << "|||||||||";

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
    cout << "           ";

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
void playerup()
{
    if (py > 3)
    {
        playerrase();
        py = py - 3;
        player();
    }
}
void playerdown()
{
    if (py < 45)
    {
        playerrase();
        py = py + 3;
        player();
    }
}

