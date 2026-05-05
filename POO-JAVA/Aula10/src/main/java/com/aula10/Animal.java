package com.aula10;

public enum Animal {
    CACHORRO {
        @Override 
        public void emitirSom(){
            System.out.println("AU AU");
        }
    }, 
    GATO {
        @Override 
        public void emitirSom(){
            System.out.println("MIAU");
        }
    }, 
    PASSARO {
       @Override 
        public void emitirSom(){
            System.out.println("PIU");
        } 
    };

    public abstract void emitirSom();
}
