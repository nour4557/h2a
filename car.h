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
    void setBrand(string newBrand);
    void setModel(string newModel);
    void setYearModel(int newYear);
    void printData();
};
#endif
