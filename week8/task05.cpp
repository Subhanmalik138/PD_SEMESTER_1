#include <iostream>
using namespace std;
// Header
bool identicalsymbol(string[]);
main()
{
    // Declaration
    string array[4];
    bool identical;
    // Taking inputs
    cout << "Enter elements of array: " << endl;
    for (int i = 0; i < 4; i++)
    {
        cin >> array[i];
    }
    identical=identicalsymbol(array);
    cout<<identical;
}
bool identicalsymbol(string array[4])
{
    for (int i=0;i<3;i++)
    {
        if(array[i]!=array[i+1])
        {
            return false;
        }
    }
    return true;
}