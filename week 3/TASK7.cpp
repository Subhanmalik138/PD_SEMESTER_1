#include<iostream>
using namespace std;
int main()
{
	cout << "ENTER THE NAME OF MOVIE :";
	string name;
	cin >> name;
	cout << "ENTER THE ADULT TICKET PRICE :  $";
	int adult;
	cin >> adult;
	cout << "ENTER THE CHILD TICKET PRICE:  $";
	int child;
	cin >> child;
	cout << "ENTER THE NUMBER OF ADULT TICKETS SOLD :";
	int sold;
	cin >> sold;
	cout << "ENTER THE NUMBER OF CHILD TICKETS SOLD :";
	int ticket;
	cin >> ticket;
	cout << "ENTER THE PERCENTAGE OF THE AMOUNT TO BE DONATED TO CHARITY % :";
	int charity;
	cin >> charity;
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	int f;
	f = adult * sold;
	int g;
	g = child * ticket;
	int l;
	l = g + f;
	float o;
	o = charity * 0.01;
	float t;
	t = o * l;
	int k;
	k = l - t;

	
	cout << "MOVIE : " << name<<endl;
	cout << "TOTAL AMOUNT GENERATED FROM TICKETS : $" << l<<endl;
	cout << "TOTAL AMOUT DONATED TO CHARITY : $" << t << endl;
	cout << "REMAING AMOUNT LEFT : $" << k << endl;
	cout << "THANKS ";

	

}