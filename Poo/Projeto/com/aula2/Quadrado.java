package com.aula2;

public class Quadrado {
    
    double lado;
    
    //this.lado -> atributo
    //lado -> parametro
    Quadrado(double lado){
        this.lado = Math.max(lado,0);
    }

    //OBS: Se houver calculo, o metodo não é void
    double calcularArea(){
        
        return lado*lado;

    }
    double calcularPerimetro(){
       return 4*lado;

    }
}
