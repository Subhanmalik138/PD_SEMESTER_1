#include<iostream>
#include<string>



using namespace std;
string grade(float result);
float percentage(float english, float chemistry, float math, float ss, float bio);

int main()
{
	cout << "ENTER STUDENT NAME : ";
	string name;
	cin >> name;

	cout << "ENTER ENGLISH  NUMBERS OUT OF 100 : ";
	float english;
	cin >> english;
	cout<<"ENTER CHENMISTRY MARKS OUT OF 100 : ";
	float chemmistry;
	cin >> chemmistry;
	cout << "ENTER MATHS MARKS OUT OF 100  : ";
	float math;
	cin >> math;
	cout << "ENTER S.SCIENCE MARKS OUT OF 100 : ";
	float ss;
	cin >> ss;
	cout << "ENTER BILOGY MARKS OUT OF 100 : ";
	float bio;
	cin >> bio;
	float result = percentage(english, chemmistry, math, ss, bio);
	string grad = grade(result);


	cout << "STUDENT NAME : " << name<<endl<<"PERCENTAGE : "<<result<<"%" << endl << grad;





}


float percentage(float english, float chemistry, float math, float ss, float bio)
{
	float sum = english + chemistry + math + ss + bio;
	float total = 500;
	float percen;
	percen = (sum / total) * 100;
	return percen;


}string grade(float result)
{
	string resut;
	if(result>=90 && result<=100)
	{ 
		resut = "GRADE : A+";

	}
	if (result >= 80 && result < 90)
	{
		resut = "GRADE : A";
	}
	if (result >= 90 && result <= 100)
	{
	}
	if (result >= 70 && result <80)
	{
		resut = "GRADE : B+";
	}
	if (result >= 60 && result <70)
	{
		resut = "GRADE : B";
	}
	if (result >= 50 && result <60)
	{
		resut = "GRADE : C+";
	}
	if (result >= 40 && result <50)
	{
		resut = "GRADE : C";
	}
	if (result >= 35 && result < 40)
	{
		resut = "GRADE : D";

	}
	if (result < 35)
	{
		resut = "GRADE : F ";

	}
	return resut;
}