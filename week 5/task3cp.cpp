#include<iostream>
using namespace std;
float truck(float price);
float van(float price);
float motorcycle(float price);
float electric(float price);
float sedan(float price);
int main()
{
	cout << "ENTER VEHCILE TYPE CODE(M,E,V,T,S) : ";
	string chara;
	cin >> chara;
	cout << "ENTER PRICE OF VECHICALES : ";
	float price;
	cin >> price;
	if (chara == "M")
	{
		int moto;
		moto = motorcycle(price);
		cout << "TOTAL PRICE WILL BE : $ " << moto;
	}
	if (chara == "E")
	{
		int elect;
		elect = electric(price);
		cout << "TOTAL PRICE WILL BE : $ " << elect;

	}
	if (chara == "V")
	{
		int ven;
		ven = van(price);
		cout << "TOTAL PRICE WILL BE :$ " << ven;
	}
	if (chara == "T")
	{
		int truc;
		truc = truck(price);
		cout << "TOTAL PRICE WILL BE : $ " << truc;
	}
	if (chara == "S")
	{
		int seda;
		seda = sedan(price);
		cout << "TOTAL PRICE WILL BE : $";
	}
}
float motorcycle(float price )
{
	int motor;
	motor = (price * 6) / 100;
	int sum;
	sum = motor + price;
	return sum;
}
float electric(float price)
{
	int motor;
	motor = (price * 8) / 100;
	int sum = motor + price;
	return sum;
}
float sedan(float price)
{
	int motor;
	motor = (price * 10) / 100;
	int sum;
	sum = motor + price;
	return sum;
}
float van(float price)
{
	int motor;
	motor = (price * 12) / 100;
	int sum;
	sum = motor + price;
	return sum;
}
float truck(float price)
{
	int motor;
	motor = (price * 15) / 100;
	int sum = motor + price;
	return sum;
}