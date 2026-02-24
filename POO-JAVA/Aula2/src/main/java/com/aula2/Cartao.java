package com.aula2;

public class Cartao {
    double valorFatura;
    Fidelidade fidelidade;

    public Cartao(Fidelidade fidelidade, double valorFatura) {
        this.fidelidade = fidelidade;
        this.valorFatura = valorFatura;
    }

    void descontar(){
        switch (fidelidade) {
            case GOLD -> {
                valorFatura = valorFatura * 0.98;
            }
            case PLATINUM -> {
                valorFatura = valorFatura * 0.97;
            }
            case BLACK -> {
                valorFatura = valorFatura * 0.95;
            }
        }
    }

    void mostrar(){
        System.out.println("VALOR FATURA: " + valorFatura);
    }

}
