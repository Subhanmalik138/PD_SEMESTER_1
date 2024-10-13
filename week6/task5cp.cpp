#include<iostream>
#include<string>
using namespace std;
string caluculatiooffruit(string fruit, string day, float quantity);

int main()
{
	cout << "ENTER FRUIT : ";
	string fruit;
	cin >> fruit;
	cout << "ENTER DAY (monday or sunday)";
		string day;
		cin >> day;
	cout << "ENTER QUANTITY  :";
	float quantity;
		cin >> quantity;
		string result = caluculatiooffruit(fruit, day, quantity);
		cout << result;




 }


string caluculatiooffruit(string fruit, string day, float quantity)
{
	string result="ERROR";
	if (fruit == "banana")
	{
		if (day == "monday")
		{
			float total;
			total = quantity * 2.5;
			result =to_string (total);

		}
		if (day == "sunday")
		{
			float total;
			total = quantity * 2.70;
			result = to_string(total);
		}
	}
	if (fruit == "apple")
	{
		if (day == "monday")
		{
			float total;
			total = quantity * 1.20;
			result = to_string(total);

		}
		if (day == "sunday")
		{
			float total;
			total = quantity * 1.25;
			result = to_string(total);
		}
	}
	if (fruit == "orange")
	{
		if (day == "monday")
		{
			float total;
			total = quantity * 0.85;
			result = to_string(total);

		}
		if (day == "sunday")
		{
			float total;
			total = quantity * 0.95;
			result = to_string(total);
		}
	}
	if (fruit == "grape")
	{
		if (day == "monday")
		{
			float total;
			total = quantity * 1.45;
			result = to_string(total);

		}
		if (day == "sunday")
		{
			float total;
			total = quantity * 1.60;
			result = to_string(total);
		}
	}
	if (fruit == "kiwi")
	{
		if (day == "monday")
		{
			float total;
			total = quantity * 2.70;
			result = to_string(total);

		}
		if (day == "sunday")
		{
			float total;
			total = quantity * 3;
			result = to_string(total);
		}
	}
	if (fruit == "pineapple")
	{
		if (day == "monday")
		{
			float total;
			total = quantity * 5.50;
			result = to_string(total);
		}
		if (day == "sunday")
		{
			float total;
			total = quantity * 5.60;
			result = to_string(total);
		}
	}
	if (fruit == "grapes")
	{
		if (day == "monday")
		{
			float total;
			total = quantity * 3.85;
			result = to_string(total);

		}
		if (day == "sunday")
		{
			float total;
			total = quantity * 4.20;
			result = to_string(total);
		}
	}
	return result;
}