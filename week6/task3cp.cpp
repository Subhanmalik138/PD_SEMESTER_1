#include<iostream>
using namespace std;
string zodic(int date, string month);

int main()
{
	cout << "ENTER YOUR BIRTH DATE :";
	int date;
	cin >> date;
	cout << "ENTER YOUR MONTH :";
    string month;
	cin >> month;
	string result = zodic(date, month);
	cout << result;


}
string zodic(int date, string month)
{
	string result;
	if ((date >= 21 || date <= 30) && month == "march" || ((date >= 1 || date <= 19) && month == "april"))
	{
		result = "ZODIAC SIGN : ARIES";
	}
	if ((date >= 20 || date <= 30) && month == "april" || ((date >= 1 || date <= 20) && month == "may"))
	{
		result = "ZODIAC SIGN : TAURAS";
	}
	if ((date >= 21 || date <= 30) && month == "may" || ((date >= 1 || date <= 20) && month == "june"))
	{
		result = "ZODIAC SIGN : GEMINI";
	}
	if ((date >= 21 || date <= 30) && month == "june" || ((date >= 1 || date <= 22) && month == "july"))
	{
		result = "ZODIAC SIGN : CANCER";
	}
	if ((date >= 23 || date <= 30) && month == "july" || ((date >= 1 || date <= 22) && month == "august"))
	{
		result = "ZODIAC SIGN : LEO";
	}
	if ((date >= 23 || date <= 30) && month == "august" || ((date >= 1 || date <= 22) && month == "september"))
	{
		result = "ZODIAC SIGN : VIRGO";
	}
	if ((date >= 23 || date <= 30) && month == "september" || ((date >= 1 || date <= 22) && month == "october"))
	{
		result = "ZODIAC SIGN : LIBRA";
	}
	if ((date >= 23 || date <= 30) && month == "october" || ((date >= 1 || date <= 21) && month == "november"))
	{
		result = "ZODIAC SIGN : SCORPIO";
	}
	if ((date >= 22 || date <= 30) && month == "november" || ((date >= 1 || date <= 21) && month == "december"))
	{
		result = "ZODIAC SIGN : SAGITTRAOUS";
	}
	if ((date >= 22 || date <= 30) && month == "decmeber" || ((date >= 1 || date <= 19) && month == "january"))
	{
		result = "ZODIAC SIGN : CAPRICON";
	}
	if ((date >= 20 || date <= 30) && month == "january" || ((date >= 1 || date <= 28) && month == "feburay"))
	{
		result = "ZODIAC SIGN : AQUARIES";
	}
	return result;
}