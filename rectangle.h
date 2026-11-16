#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double width; //asetetaan leveys
    double height;  //asetetaan korkeus
public:
    void setWidth(double newWidth);   /asetetaan leveys
    void setHeight(double newHeight);  //asetetaan korkeus
    double getArea() const;  //lasketaan pinta-ala
    double getCircum() const; //lasketaan ympärysmitan
};
#endif
