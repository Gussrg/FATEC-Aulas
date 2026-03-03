package com.aula3;

public class Revolver {

    private int qtMunicao;
    private int qtMaxima;

    public Revolver (int qtMunicao, int qtMaxima){
        this.qtMaxima = Math.min(Math.max(6, qtMaxima),8);
        this.qtMunicao = Math.min(Math.max(0, qtMunicao),this.qtMaxima);
        
    }

    public void atirar(){
        if(qtMunicao > 0){
            qtMunicao --;
        }
    }

    public void recarregar(){
        if(qtMunicao < qtMaxima){
            qtMunicao++;
        }

    }
    public void mostrar(){
        System.out.println("Quantidade de munição: "+ qtMunicao);
        System.out.println("Quantidade maxima: " + qtMaxima);

    }

    

}
