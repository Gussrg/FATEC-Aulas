
package com.aula10;


public class ORM {

    public static String trocar(String sql){
        char[] palavra = sql.toCharArray();
        int tamanho = sql.length();
        palavra[tamanho - 1] = ')';
        return new String(palavra);
    }

    public static void inserir(Tabela t){

        String sql = "INSERT INTO " + t.getNomeTabela() + "(";

        String[] campos = t.getCampos();

        for(String campo : campos){
            sql = sql + campo + ",";
        }

        sql = trocar(sql);

        sql = sql + " VALUES(";

        for(String campo : campos){
            sql = sql + "?,";
        }

        sql = trocar(sql);
        System.out.println(sql);

    }

}
