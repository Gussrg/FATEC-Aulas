import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
        
      
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int c = scanner.nextInt();

        if(a>b && a>c){
            System.out.printf("%d eh o maior%n", a);
        } else if (b>a && b>c){
            System.out.printf("%d eh o maior%n", b);
        } else {
            System.out.printf("%d eh o maior%n", c);
        }     
        scanner.close();
 
    }
 
}