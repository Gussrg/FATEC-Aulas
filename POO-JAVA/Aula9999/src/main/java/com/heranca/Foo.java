
package com.heranca;

public class Foo {
    //LP? []
    public void algo(){
        System.out.println("algo");
    }
    //LP? [int]
    public void algo(int x){
        System.out.println("algo2");
    }
    //LP? [String,int]
    public void algo(String x, int y){
        System.out.println("algo2");
    }
    //LP? [int,String]
    public void algo(int x, String y){
        System.out.println("algo2");
    }    
    //LP? [Integer], Integer != int
    public void algo(Integer z){
        System.out.println("algo3");
    }

}
