#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>

using namespace std;

class Car
{
private:
    string brand;  
    string model;  
    int yearModel;  
public:
    void setBrand(string newBrand);  //asetetaan auton merkki
    void setModel(string newModel);  //asetetaan auton malli
    void setYearModel(int newYear);    //asetetaan auton vuosimalli
    void printData();  
};
#endif
