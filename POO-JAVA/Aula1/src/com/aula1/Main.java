package com.aula1;
import java.util.Scanner;

public class Main {
     public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        Cachorro c = new Cachorro();
        c.nome = "BIDU";
        c.raca = "SRD";
        c.idade =7;
        c.latir();
        c.mostrarRaca();
        c.mostrarIdade();

        Cachorro d = new Cachorro();
        d.nome = "Rex";
        d.raca = "BULLDOG";
        d.idade = 4;
        d.latir();
        d.mostrarRaca();
        d.mostrarIdade();

        Cachorro e = new Cachorro();
        e.nome = sc.nextLine();
        e.raca = sc.nextLine();
        e.idade = sc.nextInt();
        sc.nextLine();
        e.latir(); 
        e.mostrarRaca();
        e.mostrarIdade();

        sc.close();
    }
}
