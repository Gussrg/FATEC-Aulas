package com.aula6;

import java.util.HashMap;

public class Produto {

    private String nome;
    private TipoProduto tipo;
    private double valor;

    //Throws novamente significa que aqui não será resolvida a exception
    public Produto(HashMap<String,String> registro)throws Exception{
        nome = registro.get("nome");
        tipo = TipoProduto.transformar(registro.get("tipo"));
        valor = Double.valueOf(registro.get("valor"));

    }

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
        
    }
}