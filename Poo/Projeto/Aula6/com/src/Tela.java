package Aula6.com.src;

import java.util.Scanner;

public class Tela {
    public static Calculadora obteCalculadora() {
        System.out.println("Digite um numero:");
        Scanner sc = new Scanner(System.in);
        double x = sc.nextDouble();
        System.out.println("Digite outro numero");
        int y = sc.nextInt();
        sc.close();
        return new Calculadora(x,y);

    }


    public static void menuCalculadora(Opcao opc){
        Calculadora calc = null;
        if (opc != Opcao.EXIT){}
        switch (opc) {
            case ADD:
                System.out.println(calc.somar());
               break;
            case SUB:
                System.out.println(calc.subtrair());
                break;
            case MUL:
                System.out.println(calc.multiplicar());
                break;
            case DIV:
                try{
                    System.out.println(calc.dividir());
                }catch (Exception e){
                   System.out.println("Não pode dividir por zero!");
                   telaInicial();
                }
                break;        
            default:
                System.out.println("Encerrando...");
            }         
        
    }

    public static void telaInicial(){
          
    
        System.out.println("----CALCULADORA----");
        System.out.println("digite uma opcao");
        System.out.println("1 - Somar");
        System.out.println("2 - Subtrair");
        System.out.println("3 - Multiplicar");
        System.out.println("4 - Dividir");
        System.out.println("Qualquer outro - Sair");
        Scanner sc = new Scanner(System.in);
        int opc = sc.nextInt();
        Opcao op = Opcao.converter(opc);
        menuCalculadora(op);
        sc.close();
    }

}

