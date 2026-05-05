
package com.aula10;

public class Usuario implements Perfil {

    @Override
    public void paginaPrincipal() {
        System.out.println("Bem-vindo");
    }

    @Override
    public void dashboard() {
        System.out.println("Coisas de dashboard p/ usuario");
    }

    @Override
    public void login() {
        dashboard();
    }

    public void logoff(){
        System.out.println("Deslogar");
    }

}
