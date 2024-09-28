#include<iostream>
using namespace std;
void check(float x, float b);
int main()
{
	cout << "ENTER HOURS ";
	float a;
	cin >> a;
	cout << "ENTER MIN";
	float d;
	cin >> d;
	check(a, d);

}
void check(float x, float b)
{
	float f;
	f = x * 60;
	if (f > b)cout << "LONGEST DURATION IS : " << x;
	if (f < b)cout << "LONGEST DURATION IS : " << b;

}