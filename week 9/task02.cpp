#include <iostream>
using namespace std;
//Header 
int discountCalculator(string[],string);
main()
{
    //Declaration
    string movies[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
    string moviename;
    int finaldiscount;
    //Taking input
    cout<<"Enter a movie name(Gladiator, StarWars, Terminator, TakingLives, TombRider): " ;
    cin>>moviename;
    //Calculating discout
    finaldiscount=discountCalculator(movies,moviename);
    cout<<finaldiscount<<" %";
}
int discountCalculator(string movies[4],string moviename)
{
    //Discount
    int discount;
    for (int i=0;i<5;i++)
    {
        if(moviename==movies[i])
        {
            if(i%2==1)
            {
                discount=5;
            }
            else
            {
                discount=10;
            }
        }
    }
    return discount;

}