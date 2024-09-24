package com.sim1;

public class Comando {
    private Acao acao;
    private int valor;

    public Comando (){
        acao = Acao.ZERAR;
        valor = 0;
    }

    /* public Comando(Acao acao, int valor) {
        this.acao = acao;
        this.valor = valor;
    } */

    public Acao getAcao() {
        return acao;
    }

    public int getValor() {
        return valor;
    }

    public void executar(){
        switch (acao) {
            case ZERAR:
                valor = 0;
                break;
            case INCREMENTAR:
                valor++;
                break;
            case DECREMENTAR:
                if (valor > 0)
                valor--;
                break;
            case DUPLOINCREMENTO:
                valor+=2;
        }
    }

    public void mostrar(){
        System.out.println(valor);
        System.out.println(acao);
    }
    
}
