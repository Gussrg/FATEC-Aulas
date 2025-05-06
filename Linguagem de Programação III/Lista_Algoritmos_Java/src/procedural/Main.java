package procedural;

import java.util.Scanner;

public class Main {
	
	static Scanner scanner = new Scanner(System.in);
	
	public static void main(String[] args) {
		
		int opt;
		do {
			System.out.println("******Lista de exercícios em Java!******");
			System.out.println();
			System.out.println("======Escolha uma das opções abaixo!======");
			System.out.println();
			System.out.println("1 - Antecessor/sucessor");
			System.out.println("2 - Reajustar 10%");
			System.out.println("3 - Desconto de 9%");
			System.out.println("4 - Salário com desconto de 8%");
			System.out.println("5 - Dividir premio em 3");
			System.out.println("6 - Salário com desconto INSS ");
			System.out.println("7 - Valor do veículo");
			System.out.println("8 - Salário reajustado");
			System.out.println("0 - Encerrar programa");
			opt = scanner.nextInt();
				
				switch(opt) {
				case 1:
					ex01();
					break;
				case 2:
					ex02();
					break;
				case 3:
					ex03();
					break;
				case 4:
					ex04();
					break;
				case 5:
					ex05();
					break;
				case 6:
					ex06();
					break;
				case 7:
					ex07();
					break;
				case 8:
					ex08();
					break;
				case 0:
					System.out.println("Encerrando o programa...");
					break;
				default:
					System.out.println("Opção inválida, entre novamente:");
					break;
				}
			
			}while(opt != 0);
			
			scanner.close();	
		
	}
	
	static void ex01() {		
	// Receba um número inteiro e exiba o seu antecessor e sucessor.
	
		int number;		
		
		System.out.println("Digite um número inteiro");	
		number = scanner.nextInt();
		
		System.out.println("Antecessor: " + (number - 1));
		System.out.println("Sucessor: " + (number + 1));		
	}	
	
	static void ex02(){
		//Receba um número e exiba esse valor com reajuste de 10%.
		
		float number;
		
		System.out.println("Digite um valor para reajustar em 10%");
		number = scanner.nextFloat();
		System.out.println("O valor reajustado é: " + (number *1.1));
	}
	
	static void ex03() {
		//Receba o preço de um produto e calcule o novo preço com desconto de 9%.
		
		float price = 100.0f;
		System.out.println("Digite o valor do produto:");
		price = scanner.nextFloat();
		System.out.println("O valor com desconto de 9%% é de: R$" + (price *0.91));
	}
	
	static void ex04() {
		//Leia o número de dias trabalhados por um encanador (R$30/dia) e imprima a quantia líquida com desconto de 8%.
		
		int dias;
		//float salario;
		System.out.println("Entre com o número de dias trabalhados:");
		dias = scanner.nextInt();
		System.out.println("O salário, já com desconto de 8% é: R$" + (dias *30)*0.92);
		
	}
	
	static void ex05() {
		//Divida R$780.000,00 entre 3 ganhadores (46%, 32% e o restante) e imprima os valores.
		
		System.out.println("O valor de R$780.000,00 dividido entre os três ganhadores será:");
		System.out.println("Primeiro ganhador: R$" + 780000 * 0.46);
		System.out.println("Segundo ganhador: R$" + 780000 * 0.32);
		System.out.println("Terceiro ganhador: R$" + 780000 * 0.22);
	}
	
	static void ex06() {
		//Calcule o salário líquido de um professor, recebendo via teclado o valor da hora aula, número de aulas e desconto do INSS.
		
		float vl_aula = .0f, discount;
		int aulas;
		
		System.out.println("Insira o valor da hora aula:");
		vl_aula = scanner.nextFloat();
		System.out.println("Insira a quantidade de aulas ministradas:");
		aulas = scanner.nextInt();
		System.out.println("Insira o valor percentual do desconto do INSS:");
		discount = scanner.nextFloat();
		System.out.println("O salário líquido é: R$" + (vl_aula * aulas) * (1 - discount / 100));
	}
	
	static void ex07() {
		//Calcule o custo final de um carro com base no preço de fábrica, percentual do distribuidor e dos impostos.
		
		float vl_fabrica, dist_lucro, roubo;
		
		System.out.println("Digite o valor de fábrica do veículo: ");
		vl_fabrica = scanner.nextFloat();
		System.out.println("Digite o valor percetual de lucro do distrubuidor: ");
		dist_lucro = scanner.nextFloat();
		System.out.println("Digite o valor percentual dos impostos ");
		roubo = scanner.nextFloat();
		
		System.out.println("O valor final do veículo é " + (vl_fabrica * (1 + dist_lucro / 100)) * (1 + roubo / 100));
		
	}
	
	static void ex08() {
		//• Reajuste de salário com base em faixas: < 800 → 15%, 800 a 1000 → 10%, > 1000 → 5%.
		
		double salario, reajuste;
		
		System.out.println("Entre com o valor do salário: ");
		salario = scanner.nextDouble();
			
		if (salario < 800) {
			reajuste = salario * 1.15;
			System.out.println("O salario reajustado em 15% é de R$%.2f" + reajuste);
			
			if (salario <=1000) {
				reajuste = salario * 1.10;
				System.out.printf(" O salário reajustado em 10% é de R$%.2f" + reajuste);
				
			}
			
		} else {
			reajuste = salario * 1.05;
			System.out.printf("O salário reajustado em 5% é de R$%.2f " + reajuste);
		}	
		
		
	}
}
	