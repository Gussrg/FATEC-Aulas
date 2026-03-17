package com.aula5.estatica;

// Carrinho HAS-MANY Produto
public class Carrinho {
    
    private Produto[] carrinho;

    public static final int QT_MAX = 5;

    private int topo; // controla quantos elementos existem

    public Carrinho(){
        carrinho = new Produto[QT_MAX];
        topo = 0;
    }

    public void empilharProduto(Produto p){
        if(p == null){
            System.err.println("Produto nulo");
            return;
        }

        if(estaCheio()){
            System.err.println("Stack overflow");
            return;
        }
        
        carrinho[topo++] = p;
    }

    public boolean estaVazio(){
        return topo == 0;
    }

    public boolean estaCheio(){
        return topo >= QT_MAX;
    }

    public Produto removerProduto(){
        if(estaVazio()){
            System.err.println("Stack underflow");
            return null;
        }
        
        return carrinho[--topo];
    }

    public Produto espiar(int ix){
        if(ix < 0 || ix >= topo){
            System.err.println("Índice inválido");
            return null;
        }

        return carrinho[ix];
    }

    public double calcularValorTotal(){
        double soma = 0;
        for (int i = 0; i < topo; i++){
            soma += carrinho[i].getValor();
        }
        return soma;
    }

    public void listarProduto(){
        for(int i = 0; i < topo; i++){
            carrinho[i].mostrar();
        }
    }
}