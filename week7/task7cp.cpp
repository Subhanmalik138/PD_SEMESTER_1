#include<iostream>
using namespace std;


bool isPrime(int number);

int primorial(int n);

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

   
    cout << "The Primorial of " << n << " is: " << primorial(n) << endl;

    return 0;
}


bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}


int primorial(int n) {
    int count = 0;
    int product = 1; 
    int num = 2; 

    while (count < n) {
        if (isPrime(num)) {
            product *= num; 
            count++; 
        }
        num++;
    }

    return product; 
}
