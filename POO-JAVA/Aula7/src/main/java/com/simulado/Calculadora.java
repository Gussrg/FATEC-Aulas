
package com.simulado;


public class Calculadora {

    public static double somar(Dupla<Double> numeros){
        return numeros.getPrimeiro() + numeros.getSegundo();
    }

    public static double subtrair(Dupla<Double> numeros){
        return numeros.getPrimeiro() - numeros.getSegundo();
    }

    public static double mult(Dupla<Double> numeros){
        return numeros.getPrimeiro() * numeros.getSegundo();
    }

    public static double dividir(Dupla<Double> numeros) throws Exception{
        if(numeros.getSegundo() == 0)
            throw new Exception("Nao ha divisao por 0");
            
        return numeros.getPrimeiro() / numeros.getSegundo();
    }

}
