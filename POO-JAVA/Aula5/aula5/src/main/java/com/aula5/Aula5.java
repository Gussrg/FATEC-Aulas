package com.aula5;

import com.aula5.estatica.Carrinho;
import com.aula5.estatica.Produto;
import com.aula5.estatica.TipoProduto;

public class Aula5 {

    public static void main(String[] args) {

        Carrinho c = new Carrinho();
        Produto p1 = new Produto("Lapis", TipoProduto.BUGIGANGA,15);
        Produto p2 = new Produto("Coca Zero Lata",TipoProduto.ALIMENTO, 6);
        Produto p3 = new Produto("Pen drive",TipoProduto.ELETRONICO, 80);
        Produto p4 = new Produto("Caneta", TipoProduto.BUGIGANGA,25);
        Produto p5 = new Produto("Caderno", TipoProduto.BUGIGANGA,71);
        Produto p6 = new Produto("Fofura", TipoProduto.ALIMENTO,15);
        Produto p7 = new Produto("CD VIRGEM", TipoProduto.ELETRONICO,15);

        c.empilharProduto(p1);
        c.empilharProduto(p2);
        c.removerProduto();
        c.empilharProduto(p3);
        c.empilharProduto(p4);
        c.empilharProduto(p5);
        c.empilharProduto(p6);
        c.empilharProduto(p7);
        c.listarProduto();
        
        System.out.println("Valor total: R$ " + c.calcularValorTotal());
    }

}
