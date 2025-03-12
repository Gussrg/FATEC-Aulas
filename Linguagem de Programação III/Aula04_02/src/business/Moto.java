package business;

public class Moto extends Veiculo {

	private boolean descansoAcionado;
	
	public boolean isDescansoAcionado() { return descansoAcionado; }
	
	public Moto(String modelo, String fabricante, int ano) {
		super(modelo, fabricante, ano);
	}

	@Override
	public void acelerar() {
		super.acelerar();
		descansoAcionado = false;
	}

	@Override
	public void desacelerar() {
		super.desacelerar();
		// atribui o retorno da validação (se a 
		// velocidade é 0, o apoio tem de estar acionado)  
		descansoAcionado = (velocidadeAtual == 0);
	}

	@Override
	public void parar() {
		super.parar();
		descansoAcionado = true;
	}
}
