#include<iostream>
using namespace std;
void ticket(string, float);
int main()
{
	while (true)
	{
		cout << "ENTER THE NAME OF COUNTRY : " << endl << "(PAKISTAN,IRLAND,INDIA,ENGLAND,CANADA)  :";
		string name;
		cin >> name;
		cout << "TICKET PRICE  : $";
		float tic;
		cin >> tic;
		ticket(name, tic);
	}
}
void ticket(string a, float b)
{

	if (a == "pakistan"|| a== "PAKISTAN")
	{
		int q, k;
		q = b * 0.05;
		k = b - q;
		cout << "TOTAl PRICE YOUR HAVE TO PAY : $" << k<<endl;
	}
	if (a == "irland" || a == "IRLAND")
	{
		int q, k;
		q = b * 0.1;
		k = b - q;
		cout << "TOTAl PRICE YOUR HAVE TO PAY : $" << k<<endl;
	}
	if (a == "india" || a == "INDIA")
	{
		int q, k;
		q = b * 0.2;
		k = b - q;
		cout << "TOTAl PRICE YOUR HAVE TO PAY : $" << k<<endl;
	}
	if (a == "england" || a == "ENGLAND")
	{
		int q, k;
		q = b * 0.3;
		k = b - q;
		cout << "TOTAl PRICE YOUR HAVE TO PAY : $" << k<<endl;
	}
	if (a == "canada" || a == "CANADA")
	{
		int q, k;
		q = b * 0.45;
		k = b - q;
		cout << "TOTAl PRICE YOUR HAVE TO PAY : $" << k << endl;
	}
	else cout << "(ENTER VALID NAME OR PRICE)" << endl<<endl<<endl;
}