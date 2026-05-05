package com.simulado;


public class Aula7 {

    public static void main(String[] args) {
        try {
            double res = Calculadora.dividir(new Dupla<>(4.0,0.0));
            System.out.println(res);    
        } catch (Exception e) {
            System.out.println("Deu erro");
            System.err.println(e.getMessage());
        }
        
    }
}
