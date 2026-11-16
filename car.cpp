#include "car.h"

void Car::setBrand(string newBrand) // Aseta auton merkki
{
    brand = newBrand;
}
void Car::setModel(string newModel) //// Aseta auton malli
{
    model = newModel;
}
void Car::setYearModel(int newYear) //Aseta auton vuosimalli
{
    yearModel = newYear;
}
void Car::printData()
{
    cout << "Brand: " << brand << endl;  //tulostaa auton merkki
    cout << "Model: " << model << endl;   //tulostaa auton malli
    cout << "Year: " << yearModel << endl;  // tulostaa auton vuosimalli
}
