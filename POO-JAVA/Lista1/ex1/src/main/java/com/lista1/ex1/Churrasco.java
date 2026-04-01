package com.lista1.ex1;

public class Churrasco {

    double qtdCarne;

    public double verificarConsumo(Pessoa pessoa){
        if((pessoa.vegetariana) || pessoa.idade >= 0 && pessoa.idade <=3){
            qtdCarne = 0;
        }
        if(pessoa.idade <= 12){
            qtdCarne = 1;
        }
        else{
            qtdCarne = 2;
        }
        return qtdCarne;
        
    }

}
