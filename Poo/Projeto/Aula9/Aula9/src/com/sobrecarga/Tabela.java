package com.sobrecarga;

public class Tabela {
    public static String inserir(Cliente cliente){
        String sql = "INSERT INTO Cliente(nome,cpf) ";
        sql = sql = "VALUES(\"" + cliente.getNome()+"\",";
        sql += "\"" + cliente.getCpf() + "\");";
        return sql;

    }
    public static String inserir(Produto produto){
        String sql = "";
        return sql;
    }

}
