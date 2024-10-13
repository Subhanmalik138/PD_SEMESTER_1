#include <iostream>
#include <string>
 
using namespace std;

int main() {
    string month;
    int stays;

    cout << "Enter month: ";
    cin >> month;
    cout << "Enter number of stays: ";
    cin >> stays;

    
    double studioPricePerNight = 0.0;
    double apartmentPricePerNight = 0.0;

    
    if (month == "may" || month == "october") {
        studioPricePerNight = 50;
        apartmentPricePerNight = 65;

        
        if (stays > 14) {
            studioPricePerNight *= 0.70;  
        }
        else if (stays > 7) {
            studioPricePerNight *= 0.95;  
        }

    }
    else if (month == "june" || month == "september") {
        studioPricePerNight = 75.20;
        apartmentPricePerNight = 68.70;

        
        if (stays > 14) {
            studioPricePerNight *= 0.80;  
        }

    }
    else if (month == "july" || month == "august") {
        studioPricePerNight = 76;
        apartmentPricePerNight = 77;

    }
    else {
        cout << "Invalid month!" << endl;
        return 1;  
    }

    
    if (stays > 14) {
        apartmentPricePerNight *= 0.90;  
    }

    double totalStudioPrice = studioPricePerNight * stays;
    double totalApartmentPrice = apartmentPricePerNight * stays;

 
    
    cout << "Apartment: " << totalApartmentPrice << "$." << endl;
    cout << "Studio: " << totalStudioPrice << "$." << endl;

    return 0;
}
