package com.aula5.estatica;

public class Produto {

    private String nome;
    private TipoProduto tipo;
    private double valor;

    public Produto(String nome, TipoProduto tipo, double valor) {
        this.nome = nome;
        this.tipo = tipo;
        this.valor = valor;
    }

    public String getNome(){
        return nome;
    }

    public TipoProduto getTipo(){
        return tipo;
    }

    public double getValor(){
        return valor;
    }

    public void mostrar(){
        System.out.println("Nome: " + nome);
        System.out.println("Tipo: " + tipo);
        System.out.println("Valor: " + valor);
        System.out.println("-------------------");
    }
}