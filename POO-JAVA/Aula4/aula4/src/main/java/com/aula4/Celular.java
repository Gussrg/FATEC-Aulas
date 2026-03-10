package com.aula4;

public class Celular {

    private Bateria bateria;
    private Status status;

    public Celular(Bateria bateria, Status status) {
        this.bateria = bateria;
        this.status = status.DESLIGADO;
    }
    public void mostrar(){
        if(Status.ligado(status) && !bateria.ehVazio()){
            System.out.println("OLÁ, USUÁRIO");
            bateria.descarregar();
        }
    }

    public void ligar(){
        if(Status.desligado(status) && !bateria.ehVazio()){
            status = Status.LIGADO;
            mostrar();
            bateria.descarregar();
        }
    }

      public void desligar(){
        if(Status.desligado(status) && !bateria.ehVazio()){
            status = Status.DESLIGADO;
        }
    }

    public void recarregar(){
        bateria.carregar();
    }

}
