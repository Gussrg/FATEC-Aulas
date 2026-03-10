package com.aula4;

public class Main {
    public static void main(String[] args) {

        Bateria bat = new Bateria(10);
        Celular cel = new Celular(bat);
        Cel.ligar();
        Cel.mostrar();
        //Endereco end = 
        //    new Endereco(new EnderecoCidade("Cubatao"))
        //        ,Estado.sp, new logradouro("Av. Nove de abril"); 
        //Aluno a = new Aluno(end, new NomeAluno("Rafael"));
        //a.monstrarInfo();
    }
}