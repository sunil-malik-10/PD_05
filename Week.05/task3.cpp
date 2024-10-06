#include <iostream>
using namespace std;

float taxCalculator(char , int );

int main() 
{
    char vehicle_type;
    int price;

    cout << "Enter the vehicle type code (M,E,S,V,T): ";
    cin >> vehicle_type;
    cout << "Enter the price of the vehicle: ";
    cin >> price;

    float tax = taxCalculator(vehicle_type, price);
    cout << "The final price of a vehicle of type " << vehicle_type << " after adding the tax is $" << tax + price << endl;

    return 0;
}

float taxCalculator(char vehicle_type, int price) 
{
    if (vehicle_type == 'M') 
    {
        return price * 0.06; 
    }
    if (vehicle_type == 'E') 
    {
        return price * 0.08; 
    }
    if (vehicle_type == 'S')
    {
        return price * 0.10; 
    }
    if (vehicle_type == 'V') 
    {
        return price * 0.12;
        
    }
    if (vehicle_type == 'T') 
    {
        return price * 0.15; 
    }

    return 0; 
}
