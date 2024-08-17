package com.aula2;

public class Main {
    public static void main(String[] args) {
        Contador c = new Contador();
        c.incrementar();
        c.incrementar();
        c.decrementar();
        c.mostrar();
        
        Quadrado q = new Quadrado(5);
       // q.lado = 5;
        System.out.println("a área é: " + q.calcularArea());
        System.out.println("o perimetro é: " + q.calcularPerimetro());
      

        Revolver t = new Revolver(2,5 );
        // t.qtMaxima = 5;
        t.mostrarBalas();
        t.recarregar();
        t.mostrarBalas();
        t.recarregar();
        t.mostrarBalas();
        t.atirar();
        t.atirar();
        t.mostrarBalas();
        t.recarregar();
        t.recarregar();
        t.recarregar();
        t.mostrarBalas();
        t.recarregar();
        t.recarregar();
        t.recarregar();
        t.mostrarBalas();
    }

}
