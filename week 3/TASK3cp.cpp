#include<iostream>
using namespace std;
int main()
{
	cout << "ENTER INTIAL VElOCITY (ms^-1):";
	float intial;
	cin >> intial;
	cout << "ENTER ACCELERATION(ms^-2) :";
	float acce;
	cin >> acce;
	cout << "ENTER TIME (S)";
	float time;
	cin >> time;
	float d;
	d = acce* time;
	float h;
	h = d + intial;
	cout << "FINAL VELOCITY IS :" << h;
}