#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void check(int,int,int,int);


int main()
{
	cout << "ENTER EXAM STARTUP TIME (hours) : ";
	int start;
	cin >> start;
	cout << "ENTER STARTUP TIME (min) : ";
	int statmin;
	cin >> statmin;
	cout << "STUDENT TIME OF ARRIVAL (hours) : ";
	int arival;
	cin >> arival;
	cout << "STUDENT TIME OF ARIVAL (min) : ";
	int min;
	cin >> min;
	check(start, statmin, arival, min);

}
void check(int firsthour,int firstmint,int second,int secmin)

{
	int difference_of_houre = second - firsthour;
	int diffecnce_min = secmin - firstmint;

	int positve_v = abs(difference_of_houre);
	int positve_min = abs(diffecnce_min);
	if (difference_of_houre < 0 || diffecnce_min<0)
	{
		cout << "EARLY :" << endl<<"YOU COME " << to_string(positve_v)<<"hh" << ":" << to_string(positve_min) <<"mm" << "  EARLY  ";
	}
	if (difference_of_houre == 0 && diffecnce_min==0)
	{
		cout << "YOU COME ONTIME";

	}
	if (difference_of_houre > 0 || diffecnce_min > 0)
	{
		cout << "YOU ARE LATE :" << endl << to_string(positve_v)<<"hh" << ":" << to_string(positve_min)<<"mm";
	}



}