package com.aula2;

public class Revolver {

    int qtAtual, qtMaxima;

    Revolver(int qtAtual, int qtMaxima){
        this.qtAtual = qtAtual;
        this.qtMaxima = qtMaxima;
    }

    void atirar(){
        if(qtAtual>0){
            qtAtual --;
        }else{
            System.out.println("Não há munição, recarregue!");
        }

    }
    void recarregar(){
        if (qtAtual < qtMaxima){
            qtAtual++;
        }else{
            System.out.println("Quantidade máxima de munição, atire sem moderação!");
        }

    }
    void mostrarBalas(){
        System.out.println("A quantidade de balas é: " + qtAtual);

    }

}
