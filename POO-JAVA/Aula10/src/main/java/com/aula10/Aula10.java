/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.aula10;

/**
 *
 * @author alexandre.oliveira
 */
public class Aula10 {

    public static void main(String[] args) {
        //Em tempo compilaçao: p eh Perfil
        //Em tempo de execuçao: p eh usuario.
        //Data hiding: Esconde os metodos do usuario
        //do compilador. Neste caso, o logoff eh
        //invisivel em tempo de compilaçao.
        //Perfil p = new Usuario();
        //A referencia do tipo Usuario eh recuperada
        //para p. O nome conceito eh Downcast.
        //Convidado c = (Convidado) p;
        //ClassCast exception: 
        //Erro em tempo de execuçao gravissimo 
        //c.paginaPagamento();

        //A referencia de k foi enfraquecida
        //em p2. O nome desse conceito eh Upcast.
        //Convidado k = new Convidado();
        //Perfil p2 = (Perfil) k;
        //p2.paginaPagamento();
        ORM.inserir(new Cliente());
        ORM.inserir(new Produto());

    }
}
