package Lista1.com.exercicios;

public class Main {
    public static void main(String[] args) {

        /*Exerc´ıcio 1. Dada a classe Pessoa que possui os atributos: String nome,
String sexo, int idade, boolean vegetariana. Fa¸ca agora uma classe Churrasco
que possua: Atributos: qtdCarne(double); M´etodo: verificarConsumo():
Recebe via parˆametro uma Pessoa e com isto define a consuma¸c˜ao m´edia de
carne (quantidade de carne consumida) pessoas de 0 a 3 anos n˜ao consomem,
vegetarianos tamb´em n˜ao. Pessoas de 4 a 12 anos consomem 1 kilo de carne e
de 13 anos em diante 2 kilos de carne. */
        
        Pessoa p1 = new Pessoa("Maria", "Feminino", 35, true);

        System.out.println("Nome: " + p1.nome);
        System.out.println("Sexo: " + p1.sexo);
        System.out.println("Idade: " + p1.idade);
        System.out.println("Vegetariana: " + p1.vegetariana);
    }
}
