#include <iostream>
#include <cmath>
using namespace std;

string projectTimeCalculation(int neededHours, int days, int workers);

int main() {
    
    int neededHours, days, workers;
    cin >> neededHours >> days >> workers;

   
    cout << projectTimeCalculation(neededHours, days, workers) << endl;

    return 0;
}
string projectTimeCalculation(int neededHours, int days, int workers)
{

    int trainingDays = days * 0.1;
    int availableDays = days - trainingDays;
    int hoursPerDay = 8 + 2;
    int totalAvailableHours = availableDays * hoursPerDay * workers;


    int hoursLeft = totalAvailableHours - neededHours;


    if (hoursLeft >= 0) {
        return "Yes! " + to_string(std::floor(hoursLeft)) + " hours left.";
    }
    else {
        return "Not enough time! "; +to_string(std::floor(std::abs(hoursLeft))) + " hours needed.";
    }
}