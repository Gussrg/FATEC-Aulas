package Aula;

public class Gato extends Animal {

    private String raca;

    public Gato(String nome){
        //o Super é obrgatório na primeira linha do contrutor
        super(nome); // O construtor de animal é chamado
        this.raca = raca;
    }
    public void miar(){
        System.out.println("miau");
    }
    


}
