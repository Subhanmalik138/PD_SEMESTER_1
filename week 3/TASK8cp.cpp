#include<iostream>
using namespace std;
int main()
{
	cout << "EMTER VEGETABLE PRICE PER KILOGRAM (in Coin) : ";
	float vege;
	cin >> vege;
	cout << "ENTER FRUIT PRICE PER KILOGRAM (IN COIN) : ";
	float fruit;
	cin >> fruit;
	cout << "ENTER TOTAL KILGORAMS OF VEGETABLE : ";
	int kg;
	cin >> kg;
	cout << "ENTER TOTAL KILGORAMS OF FRUITS : ";
	int wei;
	cin >> wei;
	float l;
	l = vege * kg;
	float g;
	g = fruit * wei;
	float j;
	j = g + l;
	float o;
		o = j / 1.94;
		cout << "TOTAL EARNING IN RUPEES IS : " << o;


}