package com.aula4;

public class Bateria {

    private int carga;

    public Bateria(int carga) {
        this.carga = carga;
    }
    public void carregar(){
        if(!estaCheio())
            carga++;

    }

    public void descarregar(){
        if(!ehVazio())
            carga--;

    }

    public boolean ehVazio(){
        return (carga <= 0);
    }

    public boolean estaCheio(){
        return (carga >= 100);
    }

}
