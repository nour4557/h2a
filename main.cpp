#include <iostream>
#include <memory>
#include "car.h"
#include "rectangle.h"
#include "student.h"

using namespace std;
int main()
{
    Car car;
    car.setBrand("porsche");
    car.setModel("spider");
    car.setYearModel(2013);
    car.printData();
    cout << endl;

    Rectangle *rectangle = new Rectangle;
    rectangle->setWidth(7);
    rectangle->setHeight(5);
    cout << "Area: " << rectangle->getArea() << endl;
    cout << "Circumference: " << rectangle->getCircum() << endl;
    delete rectangle;
    rectangle = nullptr;
    cout << endl;

    unique_ptr<Student> student(new Student);
    student->setName("lina");
    student->setStudentNumber(77288);
    student->setAverage(5.2);
    cout << "Name: " << student->getName() << endl;
    cout << "Student number: " << student->getStudentNumber() << endl;
    cout << "Average: " << student->getAverage() << endl;
    return 0;
}
