#include <iostream>
using namespace std;
// Header
int timeRequired(string[],int);
main()
{
    // Declarations
    int square;
    int time;
    cout<<"Enter number of squares:";
    cin>>square;
    //Declaring array
    string colors[square];
    // Taking inputs
    cout << "Enters colors (ine at a time): "<<endl;
    for (int i=0;i<square;i++)
    {
        cin >> colors[i];
    }
    // Output
    time = timeRequired(colors,square);
    cout << time << " seconds";
}
int timeRequired(string colors[],int square)
{
    // Declaration
    int counter = 2;//time for first square
    for (int i = 1; i<square; i++)
    {
        counter=counter+2;
        if (colors[i] != colors[i-1]) // When color is changed
        {
            counter ++;
        }
    }
    return counter;
}
