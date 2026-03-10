package com.aula4;

public class Endereco {

    private Logradouro logradouro;
    private EnderecoCidade cidade;
    private Estado estado;

    public Endereco(Logradouro logradouro, EnderecoCidade cidade, Estado estado) {
        this.logradouro = logradouro;
        this.cidade = cidade;
        this.estado = estado;
    }

    public void mostrarInfo(){
        System.out.println("Estado: " + estado);
        System.out.println("Logradouro: " + Logradouro.logradouro());
        System.out.println("Cidade: " cidade.enderecoCidade());
    }

}