package com.aula4;


public class Endereco {

    private Logradouro logr;
    private EnderecoCidade cidade;
    private Estado estado;

    public Endereco(EnderecoCidade cidade, Estado estado, Logradouro logradouro) {
        this.cidade = cidade;
        this.estado = estado;
        this.logr = logradouro;
    }

    public void mostrarInfo(){
        System.out.println("Cidade: " + cidade.enderecoCidade());
        System.out.println("Logradouro: " + logr.logradouro());
        System.out.println("Estado: " + estado);
    }

}
