#include <iostream>
using namespace std;
// Header
int common(string, string);
main()
{
    //Declaration
    string str1,str2;
    int commonCount=0;
    //Taking inputs
    cout<<"Enter first string: ";
    cin>>str1;
    cout<<"Enter second string: ";
    cin>>str2;
    //Output
    commonCount=common(str1,str2);
    cout<<commonCount;
}
int common(string str1,string str2)
{
    //Declaration
    int count=0;
    for (int i=0;str1[i]!='\0';i++)
    {
        for(int j=0;str2[j]!='\0';j++)
        {
            if (str1[i]==str2[j])
            {
                count++;
                str2[j]=' ';//Turning the identical character as space so it is not counted twice
                break;//So the char of str1 is not counted twice if there is also a char same as it
            }
        }
    }
    return count;
}
