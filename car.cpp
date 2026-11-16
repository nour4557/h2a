#include "car.h"

void Car::setBrand(string newBrand) // Asetetaan auton merkki
{
    brand = newBrand;
}
void Car::setModel(string newModel) //// Asetetaan auton malli
{
    model = newModel;
}
void Car::setYearModel(int newYear) //Asetetaan auton vuosimalli
{
    yearModel = newYear;
}
void Car::printData()
{
    cout << "Brand: " << brand << endl;  //tulostetaan auton merkki
    cout << "Model: " << model << endl;   //tulostetaan auton malli
    cout << "Year: " << yearModel << endl;  // tulostetaan auton vuosimalli
}
