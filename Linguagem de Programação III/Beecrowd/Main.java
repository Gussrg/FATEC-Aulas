import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        
        Scanner sc = new Scanner(System.in);
        System.out.println("Digite o valor monetário:");
        double valor = sc.nextDouble();
        int centavos, resto;
        int notas100, notas50, notas20, notas10, notas5, notas2;
        int moedasUm, moedas50, moedas25, moedas10, moedas5, moedas1;
        centavos = (int) Math.round(valor * 100);
        notas100 = centavos / 10000;   
        resto = centavos % 10000;
        notas50 = resto / 5000;
        resto = resto % 5000;
        notas20 = resto / 2000;
        resto = resto % 2000;
        notas10 = resto / 1000;
        resto = resto % 1000;
        notas5 = resto / 500;
        resto = resto % 500;
        notas2 = resto / 200;
        resto = resto % 200;
        moedasUm = resto / 100;
        resto = resto % 100;
        moedas50 = resto / 50;
        resto = resto % 50;
        moedas25 = resto / 25;
        resto = resto % 25;
        moedas10 = resto / 10;
        resto = resto % 10;
        moedas5 = resto / 5;
        resto = resto % 5;
        moedas1 = resto / 1;
        System.out.println("NOTAS:");
        System.out.println(notas100 + " nota(s) de R$ 100.00");
        System.out.println(notas50 + " nota(s) de R$ 50.00");
        System.out.println(notas20 + " nota(s) de R$ 20.00");
        System.out.println(notas10 + " nota(s) de R$ 10.00");
        System.out.println(notas5 + " nota(s) de R$ 5.00");
        System.out.println(notas2 + " nota(s) de R$ 2.00");
        System.out.println("MOEDAS:");
        System.out.println(moedasUm + " moeda(s) de R$ 1.00");
        System.out.println(moedas50 + " moeda(s) de R$ 0.50");
        System.out.println(moedas25 + " moeda(s) de R$ 0.25");
        System.out.println(moedas10 + " moeda(s) de R$ 0.10");
        System.out.println(moedas5 + " moeda(s) de R$ 0.05");
        System.out.println(moedas1 + " moeda(s) de R$ 0.01");

        sc.close();
    }
    
}
