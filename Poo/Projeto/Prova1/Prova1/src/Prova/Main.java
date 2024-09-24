package Prova;

public class Main {
    public static void main(String[] args) {
        
        Comando comando = new Comando(2, Acao.DUPLOINCREMENTO);
        
        // Exibindo o estado inicial
        comando.mostrar();
        
        // Executando a ação definida
        comando.executar();
        
        // Exibindo o estado após a execução
        comando.mostrar();
    }

}
