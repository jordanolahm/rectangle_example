#include <iostream>
#include "retangulo.hpp"

int main() {

    //definicao classe
    Retangulo R1; 

    //definicao variaveis de leitura
    double novoWidth; 
    double novoHeight;

    //iteracao com usuario
    std::cout << "Digite largura do retangulo: ";
    std::cin >> novoWidth;
    R1.setWidth(novoWidth);

    std::cout << "Digite altura do retangulo: ";
    std::cin >> novoHeight;
    R1.setHeight(novoHeight);

    // Imprime a largura e a altura do retângulo
    std::cout << "Largura: " << R1.getWidth() << std::endl;
    std::cout << "Altura: " << R1.getHeight() << std::endl;

    // Calcula a área do retângulo
    std::cout << "Area do retangulo: " << R1.calcularArea() << std::endl;
    std::cout << "Perimetro do retangulo: " << R1.calcularPerimetro() << std::endl;
    std::cout << "Calcula Diagonal: " << R1.pitagoras() << std::endl;


    // Usando o construtor que recebe dados do retângulo
    double newHeight = 5.0;
    double newWidth = 8.0;
    
    // Instancia com variaveis de entrada
    Retangulo R2(newHeight, newWidth);
    Retangulo R3(2,9); 
    Retangulo R4(3,6); 
    Retangulo R5(5,7); 

    std::cout << "Retangulo 2: Altura = " << R2.getHeight() << ", Largura = " << R2.getWidth() << std::endl;

    // Calcula a área do retângulo
    std::cout << "Area do retangulo: " << R2.calcularArea() << std::endl;
    std::cout << "Perimetro do retangulo: " << R2.calcularPerimetro() << std::endl;
    std::cout << "Calcula Diagonal: " << R2.pitagoras() << std::endl;

    //Total de retangulos
    std::cout << "Total de Retangulos criados: " << Retangulo::getCount()<< std::endl;

    return 0;
}
