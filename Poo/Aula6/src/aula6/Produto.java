package aula6;

public record Produto(String nome
		, Tipo tipo
		, double valor) {

	public boolean isEscolar() {
		return tipo == Tipo.ESCOLAR;
	}
	public void mostrar() {
		System.out.println("Nome: " + nome);
		System.out.println("Tipo: " + tipo);
		System.out.println("Valor: " + valor);
	}
	public double valor() {
		return valor;
	}
}
