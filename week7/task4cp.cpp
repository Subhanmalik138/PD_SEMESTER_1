#include<iostream>
using namespace std;


void amplify(int num);

int main() {
    int num;
    cout << "Enter the upper bound: ";
    cin >> num; 

    amplify(num); 
    return 0;
}

void amplify(int num) {
    for (int i = 1; i <= num; i++) {
        if (i % 4 == 0) {
            cout << i * 10 << " "; 
        }
        else {
            cout << i << " "; 
        }
    }
    cout << endl; 
}
