package com.aula6;

import java.util.ArrayList;

public class Carrinho {

    private ArrayList<Produto> carrinho;

    public Carrinho(){
        if(carrinho.isEmpty()){
            System.out.println("Vazio!");
            return;
        }
        carrinho = new ArrayList<>();

    }

    public void inserirProduto(Produto p){
        if (p == null){
            System.out.println("Produto invalido");
            return;
        }

        carrinho.add(p);
    }

    public Produto removerProduto(){
        Produto produto = carrinho.getLast();
        carrinho.removeLast();
        return produto;
    }

    public void mostrarTodos(){
        //For each(Enhanced for): Esta estrutura de loop percorre os elementos e não os indices.
        for(Produto produto : carrinho){
            produto.mostrar();
        }
    }

    public double calcularPreco(){
        double soma = 0;

        for(Produto produto : carrinho){
            soma += produto.getValor();
        }
        return soma;
    }
}
