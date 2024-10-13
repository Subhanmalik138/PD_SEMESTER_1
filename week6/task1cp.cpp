#include<iostream>
using namespace std;
void check(string temperature, string humidty);
int main()
{
	cout << "ENTER TEMPERATURE (warm or cold) : ";
	string tem;
	cin >> tem;
	cout << "ENTER HUMIDITY (dry or humid) : ";
	string hum;
	cin >> hum;
	check(tem, hum);

}
void check(string temperature, string humidty)
{
	if (temperature == "warm" && humidty == "humid")
	{
		cout << "recmended activity is : swim";

	}
	if (temperature == "warm" && humidty == "dry")
	{
		cout << "recmended activity is : play tenis";

	}
	if (temperature == "cold" && humidty == "dry")
	{
		cout << "recmended activity is : play basket ball";

	}
	if (temperature == "cold" && humidty == "humid")
	{
		cout << "recmended activity is : watch TV";

	}
	


}