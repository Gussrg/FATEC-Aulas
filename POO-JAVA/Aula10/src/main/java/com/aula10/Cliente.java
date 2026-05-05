
package com.aula10;


public class Cliente implements Tabela{

    @Override
    public String getNomeTabela() {
        return "Cliente";
    }

    @Override
    public String[] getCampos() {
        String[] campos = new String[2];
        campos[0] = "nome";
        campos[1] = "cpf";
        return campos;
    }

}
