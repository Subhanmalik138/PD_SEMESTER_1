#include<iostream>
using namespace std;
main()
{ 
cout<<"NUMBERS OF SQUARE FEET YOU CAN PAINT : ";
int feet;
cin>> feet;
cout << "WIDHT OF THE SINGLE WALL : ";
int width;
cin>> width;
cout<< "HEIGHT OF SINGLE WALL : ";
int height;
cin>>height;
int mul;
mul= width*height;
int div;
div=feet/mul;
cout<<"NUMBERS OF WALL YOU CAN PAINTS : "<<div;
}



