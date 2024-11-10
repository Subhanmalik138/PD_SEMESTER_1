#include <iostream>
using namespace std;
//Header
float priceCalculator(string[],float [],string,float);
main()
{
    //Declaration
    string fruit[4]={"peach    ", "apple    ", "guava   ", "watermelon"};
    float price[4]={60, 70, 40, 30};
    string fruitname;
    float weight,finalprice;
    //Showing prices
    cout<<"Fruit\t\tPrice"<<endl;
    for (int i=0;i<4;i++)
    {
        cout<<fruit[i]<<"\t"<<price[i]<<endl;
    }
    //Taking input
    cout<<"Enter the name of fruit: ";
    cin>>fruitname;
    cout<<"Enter quantity in kgs: ";
    cin>>weight;
    //Calculating final price
    finalprice=priceCalculator(fruit,price,fruitname,weight);
    cout<<"Rs. "<<finalprice;
}
float priceCalculator(string fruit[4],float price[4],string fruitname,float weight)
{
    //Declaration
    float cost;
    for (int i=0;i<4;i++)
    {
        if(fruitname==fruit[i])
        {
            cost=price[i]*weight;
        }
    }
        return cost;

}