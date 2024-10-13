#include <iostream>
using namespace std;

int main() {
   
    int h, x, y;
    cout << "ENTER HEIGHT :";

    cin >> h;
    cout << "ENTER HRIZONTAL DISTANCE : ";
    cin >> x;
    cout << "ENTER VERTICAL DISTANCE : ";
    cin >> y;

    
    bool inside = false;
    bool onBorder = false;

    
    if (x >= 0 && x <= h && y >= 0 && y <= 3 * h) {
        inside = true;
        
        if (x == 0 || x == h || y == 0 || y == 3 * h) {
            onBorder = true;
        }
    }

   
    if (x >= h && x <= 3 * h && y >= 2 * h && y <= 4 * h) {
        inside = true;
        
        if (x == h || x == 3 * h || y == 2 * h || y == 4 * h) {
            onBorder = true;
        }
    }

    if (onBorder) {
        cout << "border" << endl;
    }
    else if (inside) {
        cout << "inside" << endl;
    }
    else {
        cout << "outside" << endl;
    }

    return 0;
}
