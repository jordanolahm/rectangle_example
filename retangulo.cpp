#include "retangulo.hpp"
#include <math.h>

// Construtor Default
Retangulo::Retangulo() : width{10.0}, height{10.0} {}

// Construtor recebe dados do retangulo
Retangulo::Retangulo(double newWidth, double newHeight)
    : height{newHeight}, width{newWidth} {
        count ++; 
    }

double Retangulo::getWidth() { return width;}

double Retangulo::getHeight() { return height;}

void Retangulo:: setWidth (double newWidth) {
    width = newWidth;
}

void Retangulo::setHeight(double newHeight) {
    height = newHeight;
}

double Retangulo::calcularArea() {
    return width * height;
}

double Retangulo::calcularPerimetro() {
    return 2 * (width + height);
}

double Retangulo::pitagoras() {
    return sqrt(pow(width,2) + pow(height,2));
}

int Retangulo::getCount() {
    return count;
}
