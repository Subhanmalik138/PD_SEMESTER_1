#include<iostream>
using namespace std;
float meter(float length, float width, float height);
float centimeter(float lenght, float width, float height);
float kilometer(float lenght, float width, float height);
float miliimeter(float lenght, float width, float height);
int main()
{
	while (true)

	{
		
		cout << "ENTER THE VALUE OF LENGHT";
		float lenght;
		cin >> lenght;
		cout << "ENTER THE VALUE OF WIDTH";
		float width;
		cin >> width;
		cout << "ENTER THE VALUE OF HEIGHT";
		float height;
		cin >> height;
		cout << "ENTER THE OUTPUT DESIRED UNIT (meter(M,m),centimeter(CM,cm),kilometer(KM,km),milimeter(MM,mm)";
		string character;
		cin >> character;
		if (character == "meter" || character=="M"  || character=="m")
		{
			float mete = meter(lenght, width, height);
			cout << "THE VOLUME OF PYRAMID IS : " << mete << " CUBIC METER"<<endl;
		}

		if (character == "centimeter" || character=="CM" || character=="cm")
		{
			float cente = centimeter(lenght, width, height);
			cout << "THE VOLUME OF PYRAMID IS : " << cente << " CUBIC CENTIMETER" << endl;
		}
		if (character == "kilometer" || character=="KM" || character=="km")
		{
			float kilo = kilometer(lenght, width, height);
			cout << "THE VOLUME OF PYRAMID IS : " << kilo/1000000000 << " CUBIC KILOMETER"<<endl;

		}
		if (character == "milimeter" || character=="MM" || character=="mm")
		{
			float mili = miliimeter(lenght, width, height);
			cout << "THE VOLUME OF PYRAMID IS : " << mili << " CUBIC MILIMETER"<<endl;
		}
		
	}
}

float meter(float length, float width, float height)
{
	float volume;
	volume = (length * width * height) / 3;
	return volume;
}
float centimeter(float lenght, float width, float height)
{
	float volume;
	volume = ((lenght * width * height) / 3)*1000000;
	
	return volume;


}
float kilometer(float lenght, float width, float height)
{
	float volume;
	volume =((lenght * width * height) / 3);
	return volume;
}
float miliimeter(float lenght, float width, float height)
{
	float volume;
	volume =((lenght * width * height) / 3)*1000000000;
	return volume;


}