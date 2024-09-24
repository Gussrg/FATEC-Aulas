package Prova;

public class Comando {
    private int valor;
    private Acao acao;
    
    public Comando(int valor, Acao acao) {
        this.valor = valor;
        this.acao = acao;
    }
    public int getValor() {
        return valor;
    }
    public Acao getAcao() {
        return acao;
    }

    public void mostrar(){
        System.out.println("valor: " + valor + "Ação: " + acao);
    }
    
    public void executar(){
        switch (acao.ordinal()) {
            case 0: //zerar
                valor = 0;
                break;
            case 1: //incrementar
                valor++;
                break;
            case 2: //decrementar
                valor --;
                break;
            case 3: //duploincremento
                valor ++;
                valor ++;
                break;
            default:
                System.out.println("Ação inválida!");
                break; 
        
        }
    }


}
