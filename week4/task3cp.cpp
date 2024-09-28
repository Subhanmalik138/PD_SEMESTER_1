#include<iostream>
using namespace std;
void aggregate(int , int , float,string,int );
void menu( );
int main()
{
	system("cls");
	menu();
	string name;
	cout << "ENTER YOUR NAME : ";
	cin >> name;
	cout << "ENTER YOUR ROLL NUMBER : ";
	int r;
	cin >> r;
	cout << "ENTER YOUR MATRIC MARKS : ";
	float a;
	cin >> a;
	cout << "ENTER YOUR INTER MARKS";
	float b;
	cin >> b;
	cout << "ENTER YOUR ECAT MARKS";
	float c;
	cin >> c;
	aggregate(a, b, c,name,r);

}
void menu()
{
	cout << "                                    ###      ###     ########       ##########            "  << endl;
	cout << "                                    ###      ###     ##            ##   ##    ##         "<< endl;
	cout << "                                    ###      ###     ##                 ##               "<< endl;
	cout << "                                    ###      ###     ########           ##              " << endl;
	cout << "                                    ###      ###     ##                 ##              "  << endl;
	cout << "                                       ######        ########           ##               " << endl;
}
void aggregate(int x, int y, float z,string q,int e)
{
	float l;
	l = (x * 0.027 + y * 0.027 + z * 0.1);
	cout << q << " YOUR ROLL NUMBER IS : " << e << endl;
	cout << "YOUR AGGREGATE  IS : " << l << endl;
}