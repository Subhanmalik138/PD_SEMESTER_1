#include<iostream>
using namespace std;

void printDiamond(int); 

int main() {
    int rows; // Variable to store the number of rows
    cout << "ENTER ROWS: ";
    cin >> rows; 
    printDiamond(rows);
    return 0; 
}

void printDiamond(int number) {
    
    for (int row = 1; row <= number; row++) {
       
        for (int space = 1; space <= number - row; space++) {
            cout << " "; 
        }
        for (int star = 1; star <=  row - 1; star++) {
            cout << "+"; 
        }
        cout << endl; 
    }

}
