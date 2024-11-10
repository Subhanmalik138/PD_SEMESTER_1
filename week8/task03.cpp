#include <iostream>
using namespace std;
//Header
bool isEven(string,int);
int counter(string );
main()
{
    //Declaration
    string word;
    bool even;
    int index;
    //Input
    cout<<"Enter a string: ";
    cin>>word;
    //Output
    index=counter(word);
    even=isEven(word,index);
    cout<<even;
}
int counter(string word)
{
    int idx=0,count=0;
    while(word[idx]!='\0')
    {
        idx++;
        count++;
    }
    return count;
}
bool isEven(string word,int index)
{
    if(index%2==0)
    {
        return true;
    }
    return false;
}