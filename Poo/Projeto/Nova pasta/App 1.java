import com.sim1.Comando;
import com.sim1.Fita;

public class App {
    public static void main(String[] args) throws Exception {
        Comando c1 = new Comando();
        Comando c2 = new Comando();
        Comando c3 = new Comando();
        Fita f = new Fita();
        f.inserir(c1);
        f.inserir(c2);
        f.inserir(c3);
        System.out.println(f.contadoresZerados());
    }
}
