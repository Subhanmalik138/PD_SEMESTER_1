#include<iostream>
using namespace std;
main()
{ 
cout<<"ENTER FOUR DIGIT : ";
int a;
cin>>a;
int num;
num=a;
int sum=0;
int digit;
digit = num % 10;
sum = sum +digit;
num =num/10;
digit = num % 10;
sum = sum +digit;
num =num/10;
digit = num % 10;
sum = sum +digit;
num =num/10;
sum=num + sum;
cout<<"THE SUM OF FOUR DIGIT IS : "<< sum;
}