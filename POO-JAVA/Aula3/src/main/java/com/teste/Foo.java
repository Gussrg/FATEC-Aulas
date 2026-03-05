package com.teste;

public class Foo {

    public int x;
    private int y;
    int z;

    public void metodo1(){
        System.out.println("metodo 1");
    }
    void metodo2(){
        System.out.println("metodo 2");
    }
    //Getter
    public int getY() {
        return y;
    }
    //Setter
    public void setY(int y) {
        this.y = y;
    }

}
