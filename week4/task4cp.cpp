#include<iostream>
using namespace std;
void check(int, int);
int main()
{
	cout << "ENTER THE NUMBER 1 :";
	int a;
	cin >> a;
	cout << "ENTER THE NUMBER 2 : ";
	int b;
	cin >> b;
	check(a, b);
}
void check(int x, int y)
{
	if (x = y)cout << "GIVEN NUMBER IS *TRUE*";
	else cout << "*FALSE*";
}