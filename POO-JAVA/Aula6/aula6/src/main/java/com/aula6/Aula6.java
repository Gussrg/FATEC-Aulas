package com.aula6;

import java.util.HashMap;
import java.util.Map;

public class Aula6 {

    public static void main(String[] args) {

        //double soma = Calculadora.somar(new Dupla<Double>(2.0,5.0));
        //System.out.println("soma: " + soma);

        // Produto p1 = new Produto("Lapis", TipoProduto.BUGIGANGA,15);

        Produto p2 = new Produto("Coca Zero Lata", TipoProduto.ALIMENTO, 6);
        Produto p3 = new Produto("Pen drive", TipoProduto.ELETRONICO, 80);
        Produto p4 = new Produto("Caneta", TipoProduto.BUGIGANGA, 25);
        Produto p5 = new Produto("Caderno", TipoProduto.BUGIGANGA, 71);
        Produto p6 = new Produto("Fofura", TipoProduto.ALIMENTO, 15);
        Produto p7 = new Produto("CD VIRGEM", TipoProduto.ELETRONICO, 15);

        Carrinho c = new Carrinho();

        Map<String, String> registro = new HashMap<>();
        registro.put("nome", "LAPIS");
        registro.put("tipo", "BUGIGANGA");
        registro.put("valor", "10");

        try {
            //Aqui, tenta-se criar o produtoto p1. Se no if do transformar a saida foir encontrada
            //a linha debaixo é executada. Se no if referido não houver resposta, uma exception é lançada
            //e a linha debaixo não executa (executa o catch)
            Produto p1 = new Produto(registro);
            c.inserirProduto(p1);

        } catch (Exception ex) {
            //O ex é um objeto criado pelo Java com todas as informações sobre o erro.
            System.out.println("Produto invalido");
        }

        c.removerProduto();
        c.mostrarTodos();
        c.removerProduto();
    }
}