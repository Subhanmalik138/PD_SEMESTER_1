#include<iostream>
using namespace std;
int main()
{
	cout << "ENTER THE NUMBER OF SIDES OF POLYGON :";
	float sides;
	cin >> sides;
	float b;
		b = sides - 2;
		float c;
		c = b * 180;
		cout << "THE SUM OF INTERNEL ANGLES OF POLYGON IS :" << c << " DEGREES";
	
}