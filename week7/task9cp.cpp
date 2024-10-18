#include<iostream>
#include<iomanip> 
using namespace std;

int main() {
    int cargoCount;
    cout << "Enter the number of cargo for transportation: ";
    cin >> cargoCount;

    int minibusTons = 0, truckTons = 0, trainTons = 0;
    double totalTons = 0;
    double totalCost = 0;

    for (int i = 0; i < cargoCount; i++) {
        int tonnage;
        cout << "Enter the tonnage for cargo " << (i + 1) << ": ";
        cin >> tonnage;

        totalTons += tonnage;

       
        if (tonnage <= 3) {
            minibusTons += tonnage;
            totalCost += tonnage * 200; 
        }
        else if (tonnage > 3 && tonnage <= 11) {
            truckTons += tonnage;
            totalCost += tonnage * 175; 
        }
        else {
            trainTons += tonnage;
            totalCost += tonnage * 120; 
        }
    }

    double averagePrice = totalCost / totalTons;


    double minibusPercentage = (minibusTons / totalTons) * 100;
    double truckPercentage = (truckTons / totalTons) * 100;
    double trainPercentage = (trainTons / totalTons) * 100;

 
    cout << fixed << setprecision(2);  
    cout << "Average price per ton: " << averagePrice << " USD" << endl;
    cout << "Percentage of cargo by minibus: " << minibusPercentage << "%" << endl;
    cout << "Percentage of cargo by truck: " << truckPercentage << "%" << endl;
    cout << "Percentage of cargo by train: " << trainPercentage << "%" << endl;

    return 0;
}
