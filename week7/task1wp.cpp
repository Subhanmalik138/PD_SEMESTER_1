#include<iostream>
using namespace std;

void print(int number);

int main()
{
	int number;
	cout << "ENTER THE NUMBER OF ROW :";
	cin >> number;

	print(number);
}
void print(int number)
{
	
	for (int row = 1; row <= number; row++)
	{
		for (int col = 1; col <= row; col++)
		{
			cout << "+";
		}
		cout << endl;
	}
}