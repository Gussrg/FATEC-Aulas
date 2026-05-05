package com.aula10;

// Perfil eh um subtipo de Rootable
//Perfil < Rootable
public interface Perfil extends Rootable {

    //public final eh implicito
    static int MAX_TENTATIVAS = 5;
    //public abstract implicito
    void paginaPrincipal();

    void dashboard();

    void login();

    //default indica metodo concreto
    default void sobre(){
        System.out.println("POSSO DESDE O JAVA 8");
    }

}
