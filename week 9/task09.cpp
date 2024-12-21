#include <iostream>
using namespace std;
// Header
string password(string[], string);
bool valid(string);
main()
{
    // Declaration
    string moves[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    string finalpassword;
    string pin;
    bool isValid;
    // Taking input
    cout << "Enter four digit password: " << endl;
    cin >> pin;
    // Calling of function
    isValid = valid(pin);
    if (isValid)
    {
        finalpassword = password(moves, pin);
        cout << finalpassword;
    }
    else
    {
        cout << "Invalid Input";
    }
}
bool valid(string pin)
{
    for (int i = 0; i < 4; i++)
    {

        if (pin[i] != '0' && pin[i] != '1' && pin[i] != '2' && pin[i] != '3' && pin[i] != '4' && pin[i] != '5' && pin[i] != '6' && pin[i] != '7' && pin[i] != '8' && pin[i] != '9')
        {
            return false;
        }
    }
    return true;
}
string password(string moves[10], string pin)
{
    // Declaration
    string pass = ""; // Storing password in the string
    int count;        // For index of moves
    for (int i = 0; i < 4; i++)
    {
        count = i + (pin[i] - '0');//Substracting 0 to convert char into int(Using ASCII approach)
        if (count > 9)
        {
            count = 0 + (count - 10);
        }
        pass = pass + moves[count] + ",";
    }
    return pass;
}