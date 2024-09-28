#include<iostream>
using namespace std;
void tap(int x, int y);

int main()
{
	cout << "ENTER PERSON NUMBERS :";
	int person;
	cin >> person;
	cout << "ENTER TISSUE BANDLES : ";
	int bundles;
	cin >> bundles;
	tap(person, bundles);


}
void tap(int x, int y)
{
	int perpersontp;
	perpersontp = x * 57;
	int tsheet;
	tsheet = y * 500;
	int totaldays;
	totaldays = tsheet / perpersontp;
	if (totaldays > 0 && totaldays < 14)cout << "your tp will only last  " << totaldays << "you need to buy more tp";
	if (totaldays >= 14)cout << "your tp will last  " << totaldays<< "  no needs to buy more";

}