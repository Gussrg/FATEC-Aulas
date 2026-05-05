
package com.simulado;

public class Moeda {

    private double valor;
    private Denom denominacao;

    public Moeda(Denom denominacao, double valor) {
        this.denominacao = denominacao;
        this.valor = valor;
    }

    public double getValor() {
        return valor;
    }

    public Denom getDenominacao() {
        return denominacao;
    }

    public void mostrar(){
        System.out.println("Valor: " + valor);
        System.out.println("Denom: " + denominacao);
    }

}
