#include<iostream>
using namespace std;
int main()
{
	cout << "NUMBER OF MINUTES:";
	int min;
	cin >> min;
	int b;
	b = min * 60;
	cout << "ENTER thE NUMBER OF FRAMES PER SECOND:";
	int frame;
	cin >> frame;
	int d;
	d = frame * b;
	cout << "TOTAL NUMBER OF FRAMES:"<<d;
}