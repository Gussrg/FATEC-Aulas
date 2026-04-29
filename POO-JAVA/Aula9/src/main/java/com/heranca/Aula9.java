
package com.heranca;

public class Aula9 {

    public static void main(String[] args) {
        Gato g = new Gato("Frajola");
        g.dormir(); //dormir() vem do animal
        Cachorro c = new Cachorro("REX","BULLDOG");
        c.dormir();
        c.emitirSom();
        g.emitirSom();
        Animal a = new Animal("Generico");
        Cachorro[] cs = new Cachorro[2];
        Animal[] as = new Animal[2];
        System.out.println(null instanceof Object);

    }
}
