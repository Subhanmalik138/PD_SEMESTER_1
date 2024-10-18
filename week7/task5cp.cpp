#include<iostream>
using namespace std;


int triangle(int n);

int main() {
    int n; 
    cout << "Enter the triangle number: ";
    cin >> n; 

    
    cout << "The number of dots in triangle " << n << " is: " << triangle(n) << endl;

    return 0;
}

int triangle(int n) {
   
    return (n * (n + 1)) / 2;
}
