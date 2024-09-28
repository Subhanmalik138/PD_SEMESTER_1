#include<iostream>
using namespace std;

void holidays(int n);

int main()
{
	cout << "ENTER HOLIDAYS : ";
	int a;
	cin >> a;
	holidays(a);
}
void holidays(int n)
{
	int working;
	working = 365 - n;
	int time;
	time = (working * 63) + (n * 127);
	int y;
	y = 30000 - time;
	cout << "TOTAL TIME TO SLEEP : " << "TOM SLEEP WELL : " << endl;
	cout << y;

}