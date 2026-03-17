package com.lista1.ex1;

public class Churrasco {

    boolean consumo;

    public void semConsumo(){
        if(Pessoa.idade < 3 || Pessoa.vegetariana == true){
            consumo = false;
        }
    }

    public void verificarConsumo(){
        if(semConsumo()){
            System.out.println("Não consome carne!");
        }
        
    }

}
