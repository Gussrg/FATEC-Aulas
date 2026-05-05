
package com.aula10;


public class Produto implements Tabela{

    @Override
    public String getNomeTabela() {
        return "Produto";
    }

    @Override
    public String[] getCampos() {
        String[] campos = new String[3];
        campos[0] = "nome";
        campos[1] = "valor";
        campos[2] = "qt";
        return campos;
    }

}
