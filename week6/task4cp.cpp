#include<iostream>
using namespace std;
void calutation(string code1, string code2, float time);

int main()
{
	cout << "ENTER SERVICE CODE (R/r for Regular, P/p for Premium)  : ";
	string code;
	cin >> code;
	cout << "ENTER TIME OF THE CALL (D/d for DAY TIME ,N/n for NIGHT TIME : ";

	string code2;
	cin >> code2;
	cout << "ENTER CALL TIME : ";
	float time;
	cin >> time;
	calutation(code, code2, time);



}

void calutation(string code1, string code2, float time)
{
	if ((code1 == "R" || code1 == "r") && (code2 == "D" || code2 == "d"))
	{
		if (time >= 0 && time <= 50)
		{
			cout << "SERVICE TYPE : REGULAR" << endl;
			cout << "TIME USED : " << time << endl;
			cout << "AMOUNT DUE = 10.0 $";
		}
		if (time > 50)
		{
			float timecal = time - 50;
			float min = timecal * 0.20;
			float total = min + 10;

			cout << "SERVICE TYPE : REGULAR" << endl;
			cout << "TIME USED : " << time << endl;
			cout << "AMOUNT DUE = " << total;

		}


	}
	if ((code1 == "R" || code1 == "r") && (code2 == "N" || code2 == "n"))
	{
		if (time >= 0 && time <= 50)
		{
			cout << "SERVICE TYPE : REGULAR" << endl;
			cout << "TIME USED : " << time << endl;
			cout << "AMOUNT DUE = 10.0 $";
		}
		if (time > 50)
		{
			float timecal = time - 50;
			float min = timecal * 0.20;
			float total = min + 10;

			cout << "SERVICE TYPE : REGULAR" << endl;
			cout << "TIME USED : " << time << endl;
			cout << "AMOUNT DUE = " << total;

		}









	}
	if ((code1 == "P" || code1 == "p") && (code2 == "D" || code2 == "d"))
	{
		if (time >= 0 && time <= 75)
		{
			cout << "SERVICE TYPE : REGULAR" << endl;
			cout << "TIME USED : " << time << endl;
			cout << "AMOUNT DUE = 25.0 $";
		}
		if (time > 75)
		{
			float timecal = time - 50;
			float min = timecal * 0.10;
			float total = min + 25;

			cout << "SERVICE TYPE : REGULAR" << endl;
			cout << "TIME USED : " << time << endl;
			cout << "AMOUNT DUE = " << total;

		}

	}
	if ((code1 == "P" || code1 == "p") && (code2 == "N" || code2 == "n"))
	{
		if (time >= 0 && time <= 100)
		{
			cout << "SERVICE TYPE : REGULAR" << endl;
			cout << "TIME USED : " << time << endl;
			cout << "AMOUNT DUE = 25.0 $";
		}
		if (time > 100)
		{
			float timecal = time - 50;
			float min = timecal * 0.05;
			float total = min + 25;

			cout << "SERVICE TYPE : REGULAR" << endl;
			cout << "TIME USED : " << time << endl;
			cout << "AMOUNT DUE = " << total;

		}

	}
}


