package aula6;

public class Carrinho {
	private Produto [] produtos;
	
	public Carrinho(int tamanho) {
		produtos = new Produto[tamanho];
	}
	public void inserir(Produto p, int i) {
		if(i<0 || i >=produtos.length) {
			System.out.println("Erro");
			return;
		}
		if(p == null) {
			System.out.println("Produto nulo");
			return;
		}
		produtos[i] = p;
	}
	public void remover(int i) {
		if(i < 0 || i>=produtos.length) {
			System.out.println("Erro");
			return;
		}
		produtos[i] = null;
	}
	public void listar() {
		for(int i=0; i<produtos.length; i++) {
			//O metodo mostrar está sendo chamado para cada produto indexado por i
			produtos[i].mostrar();
		}
	}
		public double calcularTotal() {
			double soma = 0;
			for(int i=0; i<produtos.length; i++) {
				//pega o valor de cada produto indexado por i e soma
				soma = soma + produtos[i].valor();
			}
			return soma;
		}
	
}
