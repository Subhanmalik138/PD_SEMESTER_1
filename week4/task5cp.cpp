#include<iostream>
using namespace std;
void check(int);
int main()
{
	cout << "ENTER SPEED OF VECHICAL (kph) : ";
	float a;
	cin >> a;
	check(a);
}
void check(int x)
{
	

	if (x > 100)cout << "Halt… YOU WILL BE CHALLENGED!!!";
	if (x > 0)cout << "Perfect! You’re going good.";
	else cout << "ENTER VALID SPEED";
}