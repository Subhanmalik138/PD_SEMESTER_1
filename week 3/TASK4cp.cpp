#include<iostream>
using namespace std;
int main()
{
	cout << "ENTER  IMPOSTER COUNT:";
	float impost;
	cin >> impost;
	cout << "ENTER PLaYER COUNTS:";
	float player;
	cin >> player;
	float c;
	c = impost/ player;
	float d;
	d = c * 100;
	cout << "CHANCE OF BEING AN IMPOSTER  " << d << " %";
}