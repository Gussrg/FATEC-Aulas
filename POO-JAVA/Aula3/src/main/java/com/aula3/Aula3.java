package com.aula3;

//import com.teste.Foo;


public class Aula3 {
    public static void main(String[] args) {
        Sapo s1 = new Sapo();
        Sapo s2 = new Sapo();
        Sapo s3 = new Sapo();

        System.out.println(s1.getQtPulo());
        System.out.println(s2.getQtPulo());
        System.out.println(s3.getQtPulo());
        System.out.println("Total de sapos: " + Sapo.getQtSapo());

        Revolver r = new Revolver(3,6);
        r.recarregar();
        r.recarregar();
        r.recarregar();
        r.recarregar();
        r.recarregar();
        r.recarregar();
        r.atirar();
        r.atirar();
        r.atirar();
        r.atirar();
        r.mostrar();

       /*Foo f = new Foo();
        f.x = 9; //Escrita
        int variavel = f.x + 1 //Leitura
        System.out.println(variavel);
        System.out.println(f.x); //Leitura

        f.setY(4);
        int var2 = f.getY() +1;
        System.out.println(f.getY());
        System.out.println(var2);

        f.z = 3;
        System.out.println(f.z); */

    }

}
