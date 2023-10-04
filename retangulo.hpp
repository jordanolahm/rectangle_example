#ifndef RETANGULO_HPP
#define RETANGULO_HPP

class Retangulo {
    public:

        //default
        Retangulo(); 

        //construtor recebe dados
        Retangulo(double newWidth, double newHeight);
        
        // Getters
        double getWidth(); 
        double getHeight();

        // Setters
        void setWidth(double newWidth);
        void setHeight(double newHeight);

        //definição func
        double calcularArea();
        double calcularPerimetro();
        double pitagoras();

        // função membro que retorna o numero de retangulos
        static int getCount();

    private:
        double width;
        double height;
        static int count; 
};

#endif 