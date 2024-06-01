package br.fatec.mvc.tarefa.models;

public class Fundo {
    private String ticker;
    private String tipo;

    public Fundo(String ticker, String tipo, float quantidade) {
        this.ticker = ticker;
        this.tipo = tipo;
        this.quantidade = quantidade;
    }

    private float quantidade;

    public String getTicker() {
        return ticker;
    }

    public void setTicker(String ticker) {
        this.ticker = ticker;
    }

    public String getTipo() {
        return tipo;
    }

    public void setTipo(String tipo) {
        this.tipo = tipo;
    }

    public float getQuantidade() {
        return quantidade;
    }

    public void setQuantidade(float quantidade) {
        this.quantidade = quantidade;
    }
}
