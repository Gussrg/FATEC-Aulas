package COM.aula5;

public class Produto {
    private String nome;
    private double preco;
    private TipoProduto tipoProduto;
    
    public String getNome() {
        return nome;
    }

    public double getPreco() {
        return preco;
    }

    public TipoProduto getTipoProduto() {
        return tipoProduto;
    }

   public void mostrar(){
        System.out.println("Nome: " + nome);
        System.out.println("Preco: "+ preco);
        System.out.println("Tipo: "+tipoProduto);
        System.out.println("Codigo: "+tipoProduto.getCodigo());
   }

}
