#include <iostream>
using namespace std;
// Header
void even_odd(int[], int);
main()
{
    // Declaration
    int numbers[3];
    int numberofTrans;
    // Taking input
    cout << "Enter numbers: ";
    for (int i = 0; i < 3; i++)
    {
        cin >> numbers[i];
    }
    cout << "Enter number of times even-odd transformation need to be done: ";
    cin >> numberofTrans;
    //Calling of function
    even_odd(numbers,numberofTrans);
}
void even_odd(int numbers[3], int numberofTrans)
{
    for (int j = 1; j <= numberofTrans; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            if (numbers[i] % 2 == 0) // When integer is even
            {
                numbers[i] = numbers[i] - 2;
            }
            else // When number is odd
            {
                numbers[i] = numbers[i] + 2;
            }
        }
    }
    // Giving output
    for (int i = 0; i < 3; i++)
    {
        cout << numbers[i]<<",";
    }
}