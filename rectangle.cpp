#include "rectangle.h"
void Rectangle::setWidth(double newWidth) //asetetaan leveys
{
    width = newWidth;  //tallennetaan uusi leveys
}
void Rectangle::setHeight(double newHeight)  //asetetaan korkeus
{
    height = newHeight;  //tallennetaan uusi korkeus
}
double Rectangle::getArea() const  
{
    return width * height;  //lasketaan pinta-ala
}
double Rectangle::getCircum() const 
{
    return 2 * (width + height); //lasketaan ympärysmitta
}
