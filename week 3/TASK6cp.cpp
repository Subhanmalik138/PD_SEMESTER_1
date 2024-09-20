#include<iostream>
using namespace std;
int main()
{
	cout << "ENTER THE SIZE OF THE FERTILIZER BAG IN POUNDS:$";
	float bag;
	cin >> bag;
	cout << "ENTER THE COST OF THE BAG:$";
	float cost;
	cin >> cost;
	cout << "ENTER THE AREA IN SQURE FEET THAT CAN BE COVErD BY TH BAG:$";
	float area;
	cin >> area;
	float div;
	div = cost / bag;
	float j;
	j = cost /area ;
	cout << "COST OF FERTILIZER PER POUND :$" << div << endl;
	cout << "COST OF FERTILIZER PER SQUARE FOOT  $" << j;

}