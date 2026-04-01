package com.aula6;

public enum TipoProduto {
    BUGIGANGA, ELETRONICO, ALIMENTO;

    public static TipoProduto transformar(String tipo)throws Exception{
        if(tipo.equals("ALIMENTO"))
            return ALIMENTO;

        if(tipo.equals("ELETRONICO"))
            return ELETRONICO;

        if(tipo.equals("BUGIGANGA"))
            return BUGIGANGA;

        throw new Exception("Conversão invalida");
    }

}
