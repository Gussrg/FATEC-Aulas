package Exercicio.com.cartao;

public class Cartao {
    private cliente cliente;
    private String tipoCliente;
    private double valorFatura;

    public void cartao(double valorFatura, cliente cliente){
        

    }

    

    public double calcularDesconto(){
        switch (cliente){
            case silver:
            return 0.95*valorFatura;

            case gold:
            return 0.90*valorFatura;

            case platinum:
                return
        }
    }

    public double getValorFatura(){
        return valorFatura;

    }
    public tipoCliente getTipo(){
        return tipo;
    }

}
