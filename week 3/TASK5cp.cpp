#include<iostream>
using namespace std;
int main()
{
	string name;
	cout << "ENTER YOUR NAME :";
	cin >> name;
	cout << "ENTER YOUR WEIGHT IN KG:";
	float kg;
	cin >> kg;
	float b;
	b = kg * 15;
	cout << name << " WIll need " << b << "  DAYS to lose " << kg << " kg of weight by folloing suggestions of doctor";
}