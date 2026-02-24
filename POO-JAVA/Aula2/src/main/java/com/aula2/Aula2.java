package com.aula2;

public class Aula2 {

    public static void main(String[] args) {
        Aluno a = new Aluno(new NomeAluno("Brenda")
                           ,new RAAluno("0050482423003")
                           ,Curso.ADS);
        a.mostrar();
        a.opinar();
        //Cartao c = new Cartao(Fidelidade.BLACK, 1000);
        //c.descontar();
        //c.mostrar();   
    }
}
