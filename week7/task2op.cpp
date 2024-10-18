#include <iostream>
using namespace std;

void print(int);

int main() {
    cout << "ENTER ROWS: ";
    int row;
    cin >> row;
    print(row);
}

void print(int number) {
 
    for (int row =number- 1; row >= 1; row--) {
       
        for (int space = 1; space <= number - row; space++) {
            cout << " ";
        }
        
        for (int star = 1; star <= 2 * row - 1; star++) {
            cout << "*";
        }
        cout << endl;
    }
}
