#include <iostream>
using namespace std;
// Header
bool contains7(int[],int);
main()
{
    // Declaration
    int size;
    bool presenceof7;
    // Taking inputs
    cout<<"Enter size of array: ";
    cin>>size;
    //Declaring array
    int numbers[size];
    cout << "Enter numbers: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
    }
    presenceof7 = contains7(numbers,size);
    if (presenceof7)
    {
        cout << "BOOM!";
    }
    else//When 7 is not found
    {
        cout << "There is no 7 in the array";
    }
}
bool contains7(int numbers[],int size)
{
    int oneDigit;
    for (int i = 0; i < size; i++)
    {
        oneDigit = numbers[i];
        while(oneDigit>0)
        {
           if (oneDigit % 10 == 7)  // Check if last digit is 7
            {
                return true;
            }
            oneDigit /= 10;  // Remove last digit
        }
    }
    return false;
}