#include<iostream>
using namespace std;
void flowerShop(int red, int white, int tulip);

int main()
{
	cout << "ENTER THE QUANTITY OF RED ROSE : ";
	int R;
	cin >> R;
	cout << "ENTER THE QUANTITY OF WHITE ROSE ; ";
	int w;
	cin >> w;
	cout << "ENTER THE QUANTITY OF TULIP : ";
	int t;
	cin >> t;
	flowerShop(R, w, t);

}
void flowerShop(int red, int white, int tulip)
{
	int q;
	q = red * 2 + white * 4.10 + tulip * 2.5;
	if (q > 200)
	{
		int y;
		y = q * 0.2;
		int u;
		u = q - y;
		cout << "YOUR TOTAL PRICE IS : " << u;

	}
	else cout << "YOUR TOTAL PRICE IS : " << q;

}