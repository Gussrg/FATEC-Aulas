package business;

public class Manutencao {
	
	private String dataUltimaManutencao, tipoServico;
	
	public String getDataUltimaManutencao() { return dataUltimaManutencao; }
	public String getTipoServico() { return tipoServico; }
	
	public Manutencao(String dataUltimaManutencao, String tipoServico) {
		this.dataUltimaManutencao = dataUltimaManutencao;
		this.tipoServico = tipoServico;
	}

	@Override
	public String toString() {
		return "ultima manutencao: " + dataUltimaManutencao + "; servico: " + tipoServico;
	}
}
