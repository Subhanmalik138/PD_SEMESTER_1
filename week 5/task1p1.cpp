#include<iostream>
using namespace std;
int v1 = 10;
int v2 = 20;
int sum()
{
	v1 = 40;
	return v1 + v2;

}
int main()
{
	int x = v1;
	v1 = 100;
	x = 20;
	v2 = sum();
	cout << v1 << v2;
}