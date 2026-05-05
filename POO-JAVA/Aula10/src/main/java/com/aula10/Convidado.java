package com.aula10;

public class Convidado implements Perfil{

    @Override
    public void paginaPrincipal() {
        System.out.println("Pagina principal. Faça seu login");
    }

    @Override
    public void dashboard() {
        System.out.println("Erro 403 - Forbidden");
    }

    @Override
    public void login() {
        System.out.println("Insira usuario e senha");
    }

    public void paginaPagamento(){
        System.out.println("Pagamentos");
    }

}
