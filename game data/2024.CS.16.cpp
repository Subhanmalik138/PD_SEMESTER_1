#include <iostream>
#include <Windows.h>
#include <conio.h>
#include<cmath>
using namespace std;


char getCharAtxy(short int x, short int y);
void gotoxy(int x, int y);
// Main menu
void menu();
void machinegun();
// Level 1 maze
void printMaze1();
void gameinformation();


// Player actions
void playererase();
void player();
void playermoveleft();
void playermoveright();
void playermoveup();
void playermovedown();
// Bullet mechanics
void playerfirebulet();
void playerbulletmove();

void generatePill();
void printPill();
void erasePill();
void pillcollision();
// Enemy 1 behavior
void enemy1print();
void enemy1erase();
void enemy1movement(int playerX, int playerY);
void enemyi1direction(int playerX, int playerY);
void enimyfire1(int enemyX, int enemyY, int playerY);
void moveenemy1bullet();
void checkenemy1buletcollision();
// Enemy 2 behavior
void enemy2movement(int playerX, int playerY);
void enemy2erase();
void enemy2print();
void enemy2direction(int playerX, int playerY);
void enemie2fire(int enemyX, int enemyY, int playerY);
void moveenemy2bulet();
void checkenemy2buletcolliion();
// Machine gun1 
void machinegun1erase();
void machinegun1movement(int playerX, int playerY);
void machinegun1direction(int playerX, int playerY);
void tankpicfor();

void movemachinegun1bulet();
void checkmacinegun1blletcollison();
void machinegun1fire(int gunX, int gunY, int playerY);
//machine gun 2;
int mx2 = 120, my2 = 27;
string machinegun2direction = "up-left";
int machinegun2heath = 50;
int machinegun2playerbulletx = -1, machinegun2bllety = -1;
bool machinegun2bulltactive = false;
void machinegun2directionupdate();
void machinegun2movement(int playerX, int playerY);
void machinegun2fire(int gunX, int gunY, int playerY);
void movemachigun2bullet();
void checkmachinegun2bulletcollision();
void checkmchinegun2collision();
// Collision 
bool collision(int enemyX, int enemyY, int playerX, int playerY, int& enemyHealth, int& playerhealth);
// Player position
int px = 4, py = 30;

// Enemy 1 data
int e1x = 48, e1y = 15;
string direct1 = "down";
int enemy1count = 1;
// Enemy 1 bullet properties
int enemybuletx = -1, enemybllety = -1;
bool enemy1buletactive = false;
// Enemy 2 data
int e2x = 140, e2y = 5;
string direct2 = "down";
// Enemy 2 bullet properties
int enemy2buletx = -1, enemy2playerbullety = -1;
bool enemy2buletactive = false;
// Machine gun
string machinegundirection = "left";
int mx = 120, my = 15;
int machinegunhealth = 50;
// Machine Gun bullet properties
int  machinegun1buletx = -1, machinegun1playerbullety = -1;
bool machinegun1bulltactive = false;
// Bullet data
int playerbulletx[10];
int playerbullety[10];
bool playerbulletactive[10];
int playerbulletLimit = 10;


int pillx, pilly;
bool pillactive = false;

// Health and score
int playerhealth = 200;
int enemy1helth = 100;
int enemy2heath = 100;
int score = 0;

// Time
int timecount = 0;
int screenwidthsize = 150;
int screenheightsize = 30;

// Loading scenario
int lx = 100, ly = 100;


const string rest = "\033[0m";
const string r = "\033[31m";//red color cor
const string g = "\033[32m";//green color code;
const string y = "\033[33m";//yello
const string m = "\033[35m";//mangent
const string c = "\033[36m";//cyan color code
const string b = "\033[34m";//blue
const string w = "\033[37m";//white color
int main()
{

    system("cls");
    tankpicfor();
    cout << b;
    gotoxy(lx = 66, ly = 35);
    cout << "LOADING GAME" << endl;
    cout << y;
    gotoxy(lx = 70, ly = 35);
    for (int i = 0; i <= 100; i++)//for loading funciotn
    {
        cout << "";
        gotoxy(lx = 70, ly = 36);
        cout << i << "%";
        cout << "";
        Sleep(30);
    }
    cout << c;
    gotoxy(lx = 65, ly = 37);
    system("pause");
    system("cls");
    while (true)
    {
        system("cls");
        menu();
        cout << c;
        gotoxy(lx = 73, ly = 18);
        cout << "SELECT ANY OPITON" << endl;
        gotoxy(lx = 73, ly = 19);
        cout << r;
        cout << "___________________" << endl;
        gotoxy(lx = 73, ly = 20);
        cout << c;
        cout << "1.START GAME " << endl;
        cout << r;
        gotoxy(lx = 73, ly = 21);
        cout << "___________________" << endl;
        gotoxy(lx = 73, ly = 22);
        cout << c;
        cout << "2.INFORMATION :" << endl;
        gotoxy(lx = 73, ly = 23);
        cout << r;
        cout << "___________________" << endl;
        gotoxy(lx = 73, ly = 24);
        cout << c;
        cout << "3.Exit " << endl;
        gotoxy(lx = 73, ly = 25);
        cout << r;
        cout << "___________________" << endl;
        string opiton;
        gotoxy(lx = 73, ly = 26);
        cin >> opiton;
        if (opiton == "1")
        {
            while (true)
            {

                system("cls");
                printMaze1();
                player();


                while (true)
                {

                    gotoxy(4, 38);
                    cout << g << "Player Health: " << r << max(0, playerhealth) << " ";
                    cout << g << "ZARCKIT Health: " << r << max(0, enemy1helth) << " ";
                    cout << g << "FALLCON Health: " << r << max(0, enemy2heath) << " ";
                    cout << g << "Machine Gun 1 HEALTH: " << r << max(0, machinegunhealth) << " ";
                    cout << g << "Machine Gun 2 HEALTH: " << r << max(0, machinegun2heath) << " ";
                    gotoxy(4, 39);
                    cout << g << "Score: " << r << score << " ";
                    cout << g << "Bullets: " << r << playerbulletLimit << " ";

                    if (playerhealth <= 0)
                    {
                        system("cls");

                        cout << g;
                        gotoxy(45, 5);
                        cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                        cout << r;
                        gotoxy(50, 6);
                        cout << " $$$$$$\\   $$$$$$\\  $$\\      $$\\ $$$$$$$$\\        $$$$$$\\  $$\\    $$\\ $$$$$$$$\\ $$$$$$$\\  " << endl;
                        gotoxy(50, 7);
                        cout << "$$  __$$\\ $$  __$$\\ $$$\\    $$$ |$$  _____|      $$  __$$\\ $$ |   $$ |$$  _____|$$  __$$\\ " << endl;;
                        gotoxy(50, 8);
                        cout << "$$ /  \\__|$$ /  $$ |$$$$\\  $$$$ |$$ |            $$ /  $$ |$$ |   $$ |$$ |      $$ |  $$ |" << endl;
                        gotoxy(50, 9);
                        cout << "$$ |$$$$\\ $$$$$$$$ |$$\\$$\\$$ $$ |$$$$$\\          $$ |  $$ |\\$$\\  $$  |$$$$$\\    $$$$$$$  |" << endl;
                        gotoxy(50, 10);
                        cout << "$$ |\\_$$ |$$  __$$ |$$ \\$$$  $$ |$$  __|         $$ |  $$ | \\$$\\$$  / $$  __|   $$  __$$< " << endl;
                        gotoxy(50, 11);
                        cout << "$$ |  $$ |$$ |  $$ |$$ |\\$  /$$ |$$ |            $$ |  $$ |  \\$$$  /  $$ |      $$ |  $$ |" << endl;
                        gotoxy(50, 12);
                        cout << "\\$$$$$$  |$$ |  $$ |$$ | \\_/ $$ |$$$$$$$$\\        $$$$$$  |   \\$  /   $$$$$$$$\\ $$ |  $$ |" << endl;
                        gotoxy(50, 13);
                        cout << " \\______/ \\__|  \\__|\\__|     \\__|\\________|       \\______/     \\_/    \\________|\\__|  \\__|" << endl;
                        gotoxy(45, 14);
                        cout << g;
                        cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                        cout << b;
                        gotoxy(lx = 66, ly = 20);
                        cout << "YOUR SCORE IS :  ";
                        cout << y;

                        cout << score;
                        gotoxy(lx = 66, ly = 33);
                        cout << r;
                        cout << "GAME EXITING :  ";
                        cout << y;

                        for (int i = 0; i <= 100; i++)
                        {
                            cout << "";
                            gotoxy(80, 33);
                            cout << i << "%";
                            cout << "";
                            Sleep(30);
                        }
                        cout << c;
                        gotoxy(lx = 65, ly = 35);
                        system("pause");
                        exit(0);
                    }

                    if (machinegunhealth <= 0 && enemy1helth <= 0 && enemy2heath <= 0)
                    {
                        system("cls");
                        cout << r;
                        gotoxy(45, 5);

                        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                        gotoxy(50, 6);
                        cout << g;
                        cout << " $$\\     $$\\  $$$$$$\\  $$\\   $$\\       $$\\      $$\\  $$$$$$\\  $$\\   $$\\ " << endl;
                        gotoxy(50, 7);
                        cout << " \\$$\\   $$  |$$  __$$\\ $$ |  $$ |      $$ | $\\  $$ |$$  __$$\\ $$$\\  $$ |" << endl;
                        gotoxy(50, 8);
                        cout << "  \\$$\\ $$  / $$ /  $$ |$$ |  $$ |      $$ |$$$\\ $$ |$$ /  $$ |$$$$\\ $$ |" << endl;
                        gotoxy(50, 9);
                        cout << "   \\$$$$  /  $$ |  $$ |$$ |  $$ |      $$ $$ $$\\$$ |$$ |  $$ |$$ $$\\$$ |" << endl;
                        gotoxy(50, 10);
                        cout << "    \\$$  /   $$ |  $$ |$$ |  $$ |      $$$$  _$$$$ |$$ |  $$ |$$ \\$$$$ |" << endl;
                        gotoxy(50, 11);
                        cout << "     $$ |    $$ |  $$ |$$ |  $$ |      $$$  / \\$$$ |$$ |  $$ |$$ |\\$$$ |" << endl;
                        gotoxy(50, 12);
                        cout << "     $$ |     $$$$$$  |\\$$$$$$  |      $$  /   \\$$ | $$$$$$  |$$ | \\$$ |" << endl;
                        gotoxy(50, 13);
                        cout << "     \\__|     \\______/  \\______/       \\__/     \\__| \\______/ \\__|  \\__|" << endl;
                        gotoxy(45, 14);
                        cout << r;
                        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                        cout << b;
                        gotoxy(lx = 66, ly = 20);
                        cout << "YOUR SCORE IS :  ";
                        cout << y;

                        cout << score;
                        gotoxy(lx = 66, ly = 33);
                        cout << r;
                        cout << "GAME EXITING :  ";
                        cout << y;

                        for (int i = 0; i <= 100; i++)
                        {
                            cout << "";
                            gotoxy(80, 33);
                            cout << i << "%";
                            cout << "";
                            Sleep(30);
                        }
                        cout << c;
                        gotoxy(lx = 65, ly = 35);
                        system("pause");
                        exit(0);

                    }


                    if (GetAsyncKeyState(VK_UP)) playermoveup();
                    if (GetAsyncKeyState(VK_DOWN)) playermovedown();
                    if (GetAsyncKeyState(VK_LEFT)) playermoveleft();
                    if (GetAsyncKeyState(VK_RIGHT)) playermoveright();
                    if (GetAsyncKeyState(VK_ESCAPE)) system("pause");
                    if (_kbhit())
                    {
                        char key = _getch();
                        if (key == ' ') playerfirebulet();
                    }
                    if (timecount % 100 == 0 && !pillactive) {
                        generatePill();
                    }

                    playerbulletmove();


                    pillcollision();
                    checkenemy1buletcollision();
                    checkenemy2buletcolliion();
                    checkmacinegun1blletcollison();
                    checkmchinegun2collision();

                    enemy1movement(px, py);
                    enemy2movement(px, py);
                    machinegun1movement(px, py);
                    machinegun2movement(px, py);
                    movemachigun2bullet();
                    checkmachinegun2bulletcollision();


                    moveenemy1bullet();
                    moveenemy2bulet();
                    movemachinegun1bulet();


                    printPill();


                    timecount++;

                    Sleep(70);
                }
            }
        }

        else if (opiton == "2")
        {
            while (true)
            {
                system("cls");
                menu();
                gameinformation();
                cout << r;
                gotoxy(lx = 60, ly = 23);
                system("pause");
                cout << rest;

                break;
            }


        }
        else if (opiton == "3")
        {
            exit(0);
        }
        else
        {
            cout << y;
            gotoxy(lx = 73, ly = 28);
            cout << "INVALID OPTION :" << endl;
            Sleep(1500);

        }
    }

}

void player() {
    cout << r;
    gotoxy(px, py + 1);
    cout << "000  (P)====:: ";
    gotoxy(px, py + 2);
    cout << g << "/ ~~~~~~~~~\\  ";
    gotoxy(px, py + 3);
    cout << "\\O.O.O.O.O / ";
    cout << rest;
}


void playererase() {
    gotoxy(px, py + 1);
    cout << "               ";
    gotoxy(px, py + 2);
    cout << "              ";
    gotoxy(px, py + 3);
    cout << "             ";
}

void playermoveleft() {
    if (px > 3 &&
        getCharAtxy(px - 2, py) == ' ' &&
        getCharAtxy(px - 2, py + 1) == ' ' &&
        getCharAtxy(px - 2, py + 2) == ' ' &&
        getCharAtxy(px - 2, py + 3) == ' ') {
        playererase();
        px -= 3;
        player();
    }
}

void playermoveright() {
    if (px < screenwidthsize &&
        getCharAtxy(px + 16, py) == ' ' &&
        getCharAtxy(px + 16, py + 1) == ' ' &&
        getCharAtxy(px + 16, py + 2) == ' ' &&
        getCharAtxy(px + 16, py + 3) == ' ') {
        playererase();
        px += 3;
        player();
    }
}

void playermoveup() {
    if (py > 4 &&
        getCharAtxy(px, py - 2) == ' ' &&
        getCharAtxy(px + 5, py - 2) == ' ' &&
        getCharAtxy(px + 10, py - 2) == ' ' &&
        getCharAtxy(px + 15, py - 2) == ' ') {
        playererase();
        py -= 3;
        player();
    }
}

void playermovedown() {
    if (py < screenheightsize &&
        getCharAtxy(px, py + 5) == ' ' &&
        getCharAtxy(px + 5, py + 5) == ' ' &&
        getCharAtxy(px + 10, py + 5) == ' ' &&
        getCharAtxy(px + 15, py + 5) == ' ') {
        playererase();
        py += 3;
        player();
    }
}


void tankpicfor()
{

    const int consoleWidth = 100;
    const int consoleHeight = 30;
    const int textWidth = 88;
    const int textHeight = 24;


    int startX = (consoleWidth - textWidth) / 2;
    int startY = (consoleHeight - textHeight) / 2;



    cout << r;
    gotoxy(startX, startY + 1); cout << "                                         .-=*@@@=@@@@=@@@@@@#@@@@                                               " << endl;
    gotoxy(startX, startY + 2); cout << "                                    @@@@@@@@.- +%:  %#%%%###*@ ##@@@                                            " << endl;
    gotoxy(startX, startY + 3); cout << "                                     -. .::+-*: -==+==    :   .+*.--@@@@@@@@@@@@@@@.                            " << endl;
    gotoxy(startX, startY + 4); cout << "                                   @@#*##:.=.::@-+====+@*-*.@-@*#@@@@@@@@-**+      @%                           " << endl;
    gotoxy(startX, startY + 5); cout << "                               :.:.=@...= :+:- %.+:+:* *::=.%%*@-             %@@@@@@@-                         " << endl;
    gotoxy(startX, startY + 6); cout << "         @@@@@@@@@  @+@@%@@@@@@@@@%=+:-#   =  .@ + @  %@- +==  ..+%+    @@@@#@@+    :%@@@@                      " << endl;
    gotoxy(startX, startY + 7); cout << "        .         @@@@@@@@@*#+*+++.-====@@@@@@@+:=@@@@          .   #@@#**==== ::=@@.   .-@@:.. :..-           " << endl;
    cout << g;
    gotoxy(startX, startY + 8); cout << "     *@@@@@@@@@@@@:.==**+++.+=++#*@@%@@@**++*=+#%*+++* @%- @.+@  @#  @**+=-=+*=*###.--.. ..--%*##@%@*@*        " << endl;
    gotoxy(startX, startY + 9); cout << "     @.-        @ @=#==-==+++.=#+    .  : .  =    -    @  #  #   @  @=--+@#@*++**+%:+=+@@%#*#@@@@-@@@          " << endl;
    gotoxy(startX, startY + 10); cout << "    @          @*=# +**++++++*#@ =-:...:. ...:... .  %         .   @+@:++#  @++==**:+=-+--+*#%=## %*@          " << endl;
    gotoxy(startX, startY + 11); cout << "    @@@@@@@@@@@@-= @- *-==+:*** :=::::-:::--- =  :-  @@@@@@@@@@@@@@% :%:% - #++-=+*-+==+=-=  :-+#.@**+@        " << endl;
    gotoxy(startX, startY + 12); cout << "    *@*#+*=##.-#-*@==@= @=+:%# ----.:::::::-=:+=-=:  @ =--.:+ *=-:=+ +:+@@ @@++++*+:++++=-*##%* + @#@@@        " << endl;
    gotoxy(startX, startY + 13); cout << "    *@+. :.:-=-@%.=*#+-@#@+@+ ==-=-.:-::::.:-...::: -@@%%@@@@@@@@#=+@#% +#@#++*++*#:+=++=:@#*#+#@.%#+          " << endl;
    gotoxy(startX, startY + 14); cout << "      @%-%-*=-* @=:+=*%#- %* -====:::.::.*    #.::=  @-.          .+=@#.%==*+*#-+*+:++*+===*@#*#@:@@@          " << endl;
    gotoxy(startX, startY + 15); cout << "      :@@@@#@**#-@+ ====##              :   .:       @%##%@@@@@@@@%*.=#. +**-=:=***-++=::---+++-+:-+ =         " << endl;
    gotoxy(startX, startY + 16); cout << "         @#:.:::  *@: ==+=@@@@@@@@@@@@@%* @- *       **#*++==+===*+*:-+@=##-*+****+-*=++++++++++++#= +         " << endl;
    gotoxy(startX, startY + 17); cout << "          +@@@#*#+-:@@:..-*#%%=++++++++*%*%%%@@@@@@@@@=:--=+=+====-=* ==+-#*++*.**+:++++++++++++=*@@@*         " << endl;
    gotoxy(startX, startY + 18); cout << "             @@@#+*+= #@%   +##@=*=+++++*++==-===++=====-*====+*-%%%#@.-*=:-=+*=**+:++=========+%@=            " << endl;
    gotoxy(startX, startY + 19); cout << "               @@@@@%@# +@@.*--#=%+*===+=+++++=++=++++++-**###+#+=---+% -.%.++++***==+=====+++#@=               " << endl;
    gotoxy(startX, startY + 20); cout << "                 -@@@*#*+-=@%.-*#=+%++=++==+++++*+=++++++*::----:---=:-@:-@@-**.*+-.:=.:.:::==+ @               " << endl;
    gotoxy(startX, startY + 21); cout << "                    @@@@=+   @@+=+++#%#++#-+=:+-=+:-++-==-*+:-===+*###*%+ +. -*=#*##+*##*#%*% @@-               " << endl;
    gotoxy(startX, startY + 22); cout << "                       @@@@%#--*@%++**=#%######**##+**+#****#.+++*+=**+#@-+:+% =+#%@%###*===% @+                " << endl;
    gotoxy(startX, startY + 23); cout << "                          @@@%*:::*%#++*++****###*#####%%%@@@@#::==+=*#**#%-=-@..:-    - .@-+@=                " << endl;
    gotoxy(startX, startY + 24); cout << "                             @@@@@@%*%##*++******#%%@@%%####*%@@@*+==-=-+=*@+ @:  *-* =@@++@@                   " << endl;
    gotoxy(startX, startY + 25); cout << "                                   @@@@@@@@@@@@@@@@@#**+=------=+%@@%+++=-=-=+ *%@@.%@@:#*@:                    " << endl;
    gotoxy(startX, startY + 26); cout << "                                       ..--+*+=+===--:.....:::--::.+@@*+#=#%+#@   +=*:#@@+                      " << endl;
    gotoxy(startX, startY + 27); cout << "                                ...:-------:::::.           .. .::..  *@@@@@@@%@@%:==@@:                        " << endl;



}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void machinegun()
{
    cout << r;
    gotoxy(mx, my);
    cout << "o===[0]";
    cout << g;
    gotoxy(mx, my + 1);
    cout << "    |0|";
    gotoxy(mx, my + 2);
    cout << "    /v\\";
    cout << rest;
}


void machinegun1erase() {
    gotoxy(mx, my);
    cout << "       ";
    gotoxy(mx, my + 1);
    cout << "       ";
    gotoxy(mx, my + 2);
    cout << "       ";
}


void machinegun1direction(int playerX, int playerY)
{

    if (collision(mx, my, playerX, playerY, machinegunhealth, playerhealth)) {
        if (machinegundirection == "left") {
            machinegundirection = "right";
        }
        else {
            machinegundirection = "left";
        }
    }
    else {

        if (mx <= 115 && machinegundirection == "left") {
            machinegundirection = "right";
        }
        if (mx >= 135 && machinegundirection == "right") {
            machinegundirection = "left";
        }
    }
}


void machinegun1movement(int playerX, int playerY)
{
    if (machinegunhealth <= 0)
    {
        machinegun1erase();
        return;
    }

    machinegun1erase();


    if (machinegundirection == "left")
    {
        mx -= 2;
    }
    else if (machinegundirection == "right")
    {
        mx += 2;
    }


    machinegun1direction(playerX, playerY);


    machinegun1fire(mx, my, playerY);


    machinegun();
}
void machinegun2()
{
    cout << r;
    gotoxy(mx2, my2);
    cout << "o===[0]";
    cout << g;
    gotoxy(mx2, my2 + 1);
    cout << "    |0|";
    gotoxy(mx2, my2 + 2);
    cout << "    /v\\";
    cout << rest;
}

void machinegun1erase2() {
    gotoxy(mx2, my2);
    cout << "       ";
    gotoxy(mx2, my2 + 1);
    cout << "       ";
    gotoxy(mx2, my2 + 2);
    cout << "       ";
}
void machinegun2directionupdate() {
    if (my2 <= 1 && (machinegun2direction == "up-left" || machinegun2direction == "up-right")) {
        if (machinegun2direction == "up-left") machinegun2direction = "down-left";
        else machinegun2direction = "down-right";
    }
    if (my2 >= screenheightsize - 3 && (machinegun2direction == "down-left" || machinegun2direction == "down-right")) {
        if (machinegun2direction == "down-left") machinegun2direction = "up-left";
        else machinegun2direction = "up-right";
    }

    if (mx2 <= 1 && (machinegun2direction == "up-left" || machinegun2direction == "down-left")) {
        if (machinegun2direction == "up-left") machinegun2direction = "up-right";
        else machinegun2direction = "down-right";
    }
    if (mx2 >= screenwidthsize - 8 && (machinegun2direction == "up-right" || machinegun2direction == "down-right")) {
        if (machinegun2direction == "up-right") machinegun2direction = "up-left";
        else machinegun2direction = "down-left";
    }

    
    if (rand() % 10 < 3) { 
        int randDir = rand() % 4;
        if (randDir == 0) machinegun2direction = "up-left";
        else if (randDir == 1) machinegun2direction = "up-right";
        else if (randDir == 2) machinegun2direction = "down-left";
        else machinegun2direction = "down-right";
    }
}

void machinegun2movement(int playerX, int playerY) {
    if (machinegun2heath <= 0) {
        machinegun1erase2();
        return;
    }

    machinegun1erase2();

    
    machinegun2directionupdate();

    int nextX = mx2;
    int nextY = my2;

    
    if (machinegun2direction == "up-left") {
        nextX--; nextY--;
    }
    else if (machinegun2direction == "up-right") {
        nextX++; nextY--;
    }
    else if (machinegun2direction == "down-left") {
        nextX--; nextY++;
    }
    else if (machinegun2direction == "down-right") {
        nextX++; nextY++;
    }

   
    if (nextX > 0 && nextX < screenwidthsize - 8 &&
        nextY > 0 && nextY < screenheightsize - 3 &&
        getCharAtxy(nextX, nextY) == ' ' &&
        getCharAtxy(nextX, nextY + 1) == ' ' &&
        getCharAtxy(nextX, nextY + 2) == ' ') {
        mx2 = nextX;
        my2 = nextY;
    }
    else {
       
        if (machinegun2direction == "up-left") machinegun2direction = "down-right";
        else if (machinegun2direction == "up-right") machinegun2direction = "down-left";
        else if (machinegun2direction == "down-left") machinegun2direction = "up-right";
        else if (machinegun2direction == "down-right") machinegun2direction = "up-left";
    }

    machinegun2fire(mx2, my2, playerY);
    machinegun2();
}


void machinegun2fire(int gunX, int gunY, int playerY)
{
    if (!machinegun2bulltactive && abs(gunY - playerY) <= 3) {
        machinegun2playerbulletx = gunX - 1;
        machinegun2bllety = gunY + 1;
        machinegun2bulltactive = true;
    }
}
void movemachigun2bullet()
{
    if (machinegun2bulltactive) {

        gotoxy(machinegun2playerbulletx, machinegun2bllety);
        cout << " ";


        char nextChar = getCharAtxy(machinegun2playerbulletx - 1, machinegun2bllety);
        if (machinegun2playerbulletx <= 1 || nextChar == '#' || nextChar == '|') {
            machinegun2bulltactive = false;
        }
        else {

            machinegun2playerbulletx--;
            cout << r;
            gotoxy(machinegun2playerbulletx, machinegun2bllety);
            cout << "<";
            cout << rest;
        }
    }
}
void checkmachinegun2bulletcollision()
{
    if (machinegun2bulltactive &&
        px < machinegun2playerbulletx + 1 && px + 16 > machinegun2playerbulletx &&
        py <= machinegun2bllety && py + 3 >= machinegun2bllety) {
        playerhealth -= 10;
        machinegun2bulltactive = false;
        gotoxy(machinegun2playerbulletx, machinegun2bllety);
        cout << " ";
    }
}
void checkmchinegun2collision()
{
    for (int i = 0; i < playerbulletLimit; i++) {
        if (playerbulletactive[i] &&
            playerbulletx[i] >= mx2 && playerbulletx[i] <= mx2 + 8 &&
            playerbullety[i] >= my2 && playerbullety[i] <= my2 + 3) {
            machinegun2heath -= 10;
            playerbulletactive[i] = false;
            gotoxy(playerbulletx[i], playerbullety[i]);
            cout << " ";

            if (machinegun2heath <= 0) {
                score += 100;
                machinegun1erase2();
            }
        }
    }
}




void enemy1print() {
    cout << m;
    gotoxy(e1x, e1y);
    cout << "          eee";
    gotoxy(e1x, e1y + 1);
    cout << "e:=======O||)E";
    gotoxy(e1x, e1y + 2);
    cout << y;
    cout << "      e/ ~~~~~~~~~\\";
    gotoxy(e1x, e1y + 3);
    cout << "      e\\O.O.O.O.O / ";
    cout << b;
}

void enemy1erase() {
    gotoxy(e1x, e1y);
    cout << "                   ";
    gotoxy(e1x, e1y + 1);
    cout << "                   ";
    gotoxy(e1x, e1y + 2);
    cout << "                   ";
    gotoxy(e1x, e1y + 3);
    cout << "                   ";
}

void enemyi1direction(int playerX, int playerY) {

    if (collision(e1x, e1y, playerX, playerY, enemy1helth, playerhealth)) {
        if (direct1 == "up") {
            direct1 = "down";
        }
        else {
            direct1 = "up";
        }
    }
    else {

        if (e1y <= 3 && direct1 == "up") {
            direct1 = "down";
        }
        if (e1y >= 30 && direct1 == "down") {
            direct1 = "up";
        }
    }
}

void enemy1movement(int playerX, int playerY)
{
    if (enemy1helth <= 0)
    {
        if (enemy1count != 0)
        {
            enemy1erase();
            enemy1count = 0;
            e1x = 0, e1y = 0;
        }

        return;
    }

    enemy1erase();


    if (direct1 == "up")
    {
        e1y -= 2;
    }
    else if (direct1 == "down")
    {
        e1y += 2;
    }


    enemyi1direction(playerX, playerY);


    enimyfire1(e1x, e1y, playerY);


    enemy1print();
}

void enemy2print() {
    cout << r;
    gotoxy(e2x, e2y);
    cout << "  ____________";
    gotoxy(e2x, e2y + 1);
    cout << " ::=======O||)E";
    gotoxy(e2x, e2y + 2);
    cout << y;
    cout << "       / ~~~~~~~~~\\";
    gotoxy(e2x, e2y + 3);
    cout << "       \\O.O.O.O.O / ";
    cout << rest;
}


void enemy2erase() {
    gotoxy(e2x, e2y);
    cout << "                    ";
    gotoxy(e2x, e2y + 1);
    cout << "                    ";
    gotoxy(e2x, e2y + 2);
    cout << "                    ";
    gotoxy(e2x, e2y + 3);
    cout << "                    ";
}


void enemy2movement(int playerX, int playerY)
{
    if (enemy2heath <= 0)
    {
        enemy2erase();

        return;
    }

    enemy2erase();


    if (direct2 == "up")
    {
        e2y--;
    }
    else if (direct2 == "down")
    {
        e2y++;
    }


    enemy2direction(playerX, playerY);


    enemie2fire(e2x, e2y, playerY);

    enemy2print();
}


void enemy2direction(int playerX, int playerY)
{

    if (collision(e2x, e2y, playerX, playerY, enemy2heath, playerhealth)) {
        if (direct2 == "up") {
            direct2 = "down";
        }
        else {
            direct2 = "up";
        }
    }
    else {

        if (e2y <= 5 && direct2 == "up") {
            direct2 = "down";
        }
        if (e2y >= 28 && direct2 == "down") {
            direct2 = "up";
        }
    }
}

void menu()
{
    gotoxy(41, 5);
    cout << g;
    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    gotoxy(47, 6);
    cout << r;
    cout << " $$\\      $$\\  $$$$$$\\  $$$$$$$\\        $$$$$$$$\\  $$$$$$\\  $$\\   $$\\ $$$$$$$$\\ " << endl;
    gotoxy(47, 7);
    cout << " $$ | $\\  $$ |$$  __$$\\ $$  __$$\\       \\____$$  |$$  __$$\\ $$$\\  $$ |$$  _____|" << endl;
    gotoxy(47, 8);
    cout << " $$ |$$$\\ $$ |$$ /  $$ |$$ |  $$ |          $$  / $$ /  $$ |$$$$\\ $$ |$$ |      " << endl;
    gotoxy(47, 9);
    cout << " $$ $$ $$\\$$ |$$$$$$$$ |$$$$$$$  |         $$  /  $$ |  $$ |$$ $$\\$$ |$$$$$\\    " << endl;
    gotoxy(47, 10);
    cout << " $$$$  _$$$$ |$$  __$$ |$$  __$$<         $$  /   $$ |  $$ |$$ \\$$$$ |$$  __|   " << endl;
    gotoxy(47, 11);
    cout << " $$$  / \\$$$ |$$ |  $$ |$$ |  $$ |       $$  /    $$ |  $$ |$$ |\\$$$ |$$ |      " << endl;
    gotoxy(47, 12);
    cout << " $$  /   \\$$ |$$ |  $$ |$$ |  $$ |      $$$$$$$$\\  $$$$$$  |$$ | \\$$ |$$$$$$$$\\ " << endl;
    gotoxy(47, 13);
    cout << " \\__/     \\__|\\__|  \\__|\\__|  \\__|      \\________| \\______/ \\__|  \\__|\\________|" << endl;
    gotoxy(41, 14);
    cout << g;
    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << rest;
}
char getCharAtxy(short int x, short int y)

{

    CHAR_INFO ci;

    COORD xy = { 0, 0 };

    SMALL_RECT rect = { x, y, x, y };

    COORD coordBufSize;

    coordBufSize.X = 1;

    coordBufSize.Y = 1;

    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
        : ' ';

}



void printMaze1()
{
    const char maze[44][168] = {
        "#######################################################################################################################################################################",
        "#######################################################################################################################################################################",
        "###                          |00000|                                      |000000000|                                                                      ##FINISH ###",
        "###                          #######                                      ###########                                                                      ## LINE  ###",
        "###                          |00000|                                      |000000000|                                                                      ############",
        "###                          |00000|                                      |000000000|                                                                               ###",
        "###                          #######                                      ###########                                                                               ###",
        "###                          |00000|                                      |000000000|                                                                               ###",
        "###                          #######                                      ###########                                                                               ###",
        "###                          |00000|                                      |000000000|                                                                               ###",
        "###                          #######                                      ###########                                                                               ###",
        "###                          |00000|                                      |000000000|                                                                               ###",
        "###                          #######                                      ###########                                                                               ###",
        "###                                                                                                                                                                 ###",
        "###                                                                                                                                                                 ###",
        "###                                                                                                                                                                 ###",
        "###                                                                                                                                                                 ###",
        "###                                                                                                                                                                 ###",
        "###                                                                                                                    ##########                                   ###",
        "###                                                                                                                    ##########                                   ###",
        "###                                                                                                                                                                 ###",
        "###                                                                                                                                                                 ###",
        "###                                                                                                                                                                 ###",
        "###                                                                                                                                                                 ###",
        "###                                                                                                                                                                 ###",
        "###                                                                                                                                                                 ###",
        "###                          #######                                      ###########                                                                               ###",
        "###                          |00000|                                      |000000000|                                                                               ###",
        "###                          #######                                      ###########                                                                               ###",
        "###                          |00000|                                      |000000000|                                                                               ###",
        "###                          #######                                      ###########                                                                               ###",
        "###                          |00000|                                      |000000000|                                                                               ###",
        "###                          #######                                      ###########                                                                               ###",
        "###                          |00000|                                      |000000000|                                                                     #############",
        "###                          #######                                      ###########                                                                     ##        ###",
        "###                          |00000|                                      |000000000|                                                                     ##        ###",
        "#######################################################################################################################################################################",
        "#######################################################################################################################################################################",
        "###                                                                                                                                                                 ###",
        "###                                                                                                                                                                 ###",
        "###                                                                                                                                                                 ###",
        "#######################################################################################################################################################################"
    };

    for (int i = 0; i < 44; i++) {
        for (int j = 0; maze[i][j] != '\0'; j++) {

            if (maze[i][j] == '#') {
                cout << "\033[1;34m" << maze[i][j] << "\033[0m";
            }
            else if (maze[i][j] == '|') {
                cout << "\033[1;35m" << maze[i][j] << "\033[0m";
            }
            else if (maze[i][j] == '0') {
                cout << "\033[1;31m" << maze[i][j] << "\033[0m";
            }
            else if (maze[i][j] == '@') {
                cout << "\033[1;35m" << maze[i][j] << "\033[0m";
            }
            else {
                cout << maze[i][j];
            }
        }
        cout << endl;
    }
}

bool collision(int enemyX, int enemyY, int playerX, int playerY, int& enemyHealth, int& playerhealth)
{

    if (playerX < enemyX + 16 && playerX + 16 > enemyX &&
        playerY < enemyY + 3 && playerY + 3 > enemyY)
    {

        playerhealth -= 20;
        enemyHealth -= 35;
        return true;
    }
    return false;
}
void generatePill() {
    pillx = -1;
    pilly = -1;

    while (pillx < 0 || pilly < 0 || getCharAtxy(pillx, pilly) != ' ') {
        pillx = rand() % screenwidthsize;
        pilly = rand() % screenheightsize;
    }

    pillactive = true;
}

void printPill()
{
    if (pillactive)
    {
        gotoxy(pillx, pilly);
        cout << g;
        cout << "(+)";
        cout << rest;
    }
}

void erasePill()
{
    gotoxy(pillx, pilly);
    cout << "   ";
    pillactive = false;
}
void playerfirebulet() {
    for (int i = 0; i < playerbulletLimit; i++) {
        if (!playerbulletactive[i]) {
            playerbulletx[i] = px + 16;
            playerbullety[i] = py + 1;
            playerbulletactive[i] = true;
            break;
        }
    }
}

void playerbulletmove() {
    for (int i = 0; i < playerbulletLimit; i++) {
        if (playerbulletactive[i]) {

            gotoxy(playerbulletx[i], playerbullety[i]);
            cout << " ";


            playerbulletx[i] += 2;


            if (playerbulletx[i] > screenwidthsize) {
                playerbulletactive[i] = false;
                continue;
            }


            char nextChar = getCharAtxy(playerbulletx[i], playerbullety[i]);
            if (nextChar == '#' || nextChar == '|' || nextChar == '@' || nextChar == '0') {
                playerbulletactive[i] = false;
                continue;
            }


            gotoxy(playerbulletx[i], playerbullety[i]);
            cout << "O";

            // Check for collisions with Enemy 1
            if (playerbulletx[i] >= e1x && playerbulletx[i] <= e1x + 16 &&
                playerbullety[i] >= e1y && playerbullety[i] <= e1y + 3) {
                enemy1helth -= 10;
                playerbulletactive[i] = false;
                if (enemy1helth <= 0) {
                    score += 100;
                    if (enemy1count != 0)
                    {
                        enemy1erase();
                        enemy1count = 0;
                        e1x = 0, e1y = 0;
                    }
                }
                continue;
            }

            // Check for collisions with Enemy 2
            if (playerbulletx[i] >= e2x && playerbulletx[i] <= e2x + 16 &&
                playerbullety[i] >= e2y && playerbullety[i] <= e2y + 3) {
                enemy2heath -= 10;
                playerbulletactive[i] = false;
                if (enemy2heath <= 0) {
                    score += 100;
                    enemy2erase();
                }
                continue;
            }

            // Check for collisions with Machine Gun 1
            if (playerbulletx[i] >= mx && playerbulletx[i] <= mx + 8 &&
                playerbullety[i] >= my && playerbullety[i] <= my + 3) {
                machinegunhealth -= 10;
                playerbulletactive[i] = false;
                if (machinegunhealth <= 0) {
                    score += 100;
                    machinegun1erase();
                }
                continue;
            }

            // Check for collisions with Machine Gun 2
            if (playerbulletx[i] >= mx2 && playerbulletx[i] <= mx2 + 8 &&
                playerbullety[i] >= my2 && playerbullety[i] <= my2 + 3) {
                machinegun2heath -= 10;
                playerbulletactive[i] = false;
                if (machinegun2heath <= 0) {
                    score += 100;
                    machinegun1erase2();
                }
            }
        }
    }
}

void pillcollision()
{
    if (pillactive &&
        px < pillx + 1 && px + 16 > pillx &&
        py < pilly + 1 && py + 3 > pilly) {
        playerhealth = 100;
        score += 300;
        erasePill();
    }
}
void gameinformation()
{
    cout << y;
    gotoxy(lx = 60, ly = 15);
    cout << "UP :  USE UP ARROW TO MOVE :" << endl;
    gotoxy(lx = 60, ly = 16);
    cout << "DOWN : USE DOWN ARROW TO MOVE :" << endl;
    gotoxy(lx = 60, ly = 17);
    cout << "LEFT : USE LEFT ARROW TO MOVE LEFT :" << endl;
    gotoxy(lx = 60, ly = 18);
    cout << "RIGTH : USE RIGHT ARROW TO MOVE " << endl;
    gotoxy(lx = 60, ly = 19);
    cout << "FIRE : USE SPACEBUTTON TO FIRE " << endl;
    cout << rest;
}
void enimyfire1(int enemyX, int enemyY, int playerY)
{

    if (!enemy1buletactive && abs(enemyY - playerY) <= 3)
    {
        enemybuletx = enemyX - 1;
        enemybllety = enemyY + 1;
        enemy1buletactive = true;
    }
}
void moveenemy1bullet() {
    if (enemy1buletactive) {

        gotoxy(enemybuletx, enemybllety);
        cout << " ";


        char nextChar = getCharAtxy(enemybuletx - 2, enemybllety);
        if (enemybuletx <= 1 || nextChar == '#' || nextChar == '|') {
            enemy1buletactive = false;
        }
        else {

            enemybuletx -= 2;

            cout << y;
            gotoxy(enemybuletx, enemybllety);
            cout << "0";
            cout << rest;
        }
    }
}
void checkenemy1buletcollision()
{
    if (enemy1buletactive &&
        px < enemybuletx + 1 && px + 16 > enemybuletx &&
        py <= enemybllety && py + 3 >= enemybllety)
    {

        playerhealth -= 25;
        enemy1buletactive = false;
        gotoxy(enemybuletx, enemybllety);
        cout << " ";
    }
}
void enemie2fire(int enemyX, int enemyY, int playerY)
{
    if (!enemy2buletactive && abs(enemyY - playerY) <= 3)
    {
        enemy2buletx = enemyX - 1;
        enemy2playerbullety = enemyY + 1;
        enemy2buletactive = true;
    }
}
void machinegun1fire(int gunX, int gunY, int playerY)
{
    if (!machinegun1bulltactive && abs(gunY - playerY) <= 3)
    {
        machinegun1buletx = gunX - 1;
        machinegun1playerbullety = gunY + 1;
        machinegun1bulltactive = true;
    }
}
void moveenemy2bulet() {
    if (enemy2buletactive) {

        gotoxy(enemy2buletx, enemy2playerbullety);
        cout << " ";


        char nextChar = getCharAtxy(enemy2buletx - 2, enemy2playerbullety);
        if (enemy2buletx <= 1 || nextChar == '#' || nextChar == '|' || nextChar == '@') {
            enemy2buletactive = false;
        }
        else {
            // Move the bullet to the left
            enemy2buletx -= 2;

            cout << y;
            gotoxy(enemy2buletx, enemy2playerbullety);
            cout << "0";
            cout << rest;
        }
    }
}

void movemachinegun1bulet() {
    if (machinegun1bulltactive) {

        gotoxy(machinegun1buletx, machinegun1playerbullety);
        cout << " ";


        char nextChar = getCharAtxy(machinegun1buletx - 2, machinegun1playerbullety);
        if (machinegun1buletx <= 1 || nextChar == '#' || nextChar == '|' || nextChar == '@')
        {
            machinegun1bulltactive = false;
        }
        else {

            machinegun1buletx -= 2;

            cout << r;
            gotoxy(machinegun1buletx, machinegun1playerbullety);
            cout << "=";
            cout << rest;
        }
    }
}
void checkenemy2buletcolliion()
{
    if (enemy2buletactive &&
        px < enemy2buletx + 1 && px + 16 > enemy2buletx &&
        py <= enemy2playerbullety && py + 3 >= enemy2playerbullety)
    {
        playerhealth -= 25;
        enemy2buletactive = false;
        gotoxy(enemy2buletx, enemy2playerbullety);
        cout << " ";
    }
}
void checkmacinegun1blletcollison()
{
    if (machinegun1bulltactive &&
        px <  machinegun1buletx + 1 && px + 16 >  machinegun1buletx &&
        py <= machinegun1playerbullety && py + 3 >= machinegun1playerbullety)
    {
        playerhealth -= 10;
        machinegun1bulltactive = false;
        gotoxy(machinegun1buletx, machinegun1playerbullety);
        cout << " ";
    }
}
