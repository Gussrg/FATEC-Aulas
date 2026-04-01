package com.aula6;

public class Calculadora {

    public static double somar(Dupla<Double> numeros){
        return numeros.getPrimeiro() + numeros.getSegundo();
    }

    public static double somarAux(double x, double y){
        return x + y;
    }
}
