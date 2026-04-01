package com.aula4;

public class Aula4 {

    public static void main(String[] args) {
        Bateria bat = new Bateria(10);
        Celular cel = new Celular(bat);
        cel.ligar();
        cel.mostrar();
        //Endereco end = 
        //    new Endereco(new EnderecoCidade("Cubatao")
        //                ,Estado.SP
        //                ,new Logradouro("Av. 9 de abril"));
        //Aluno a = new Aluno(end,new NomeAluno("Rafael"));
        //a.mostrarInfo();
    }
}
