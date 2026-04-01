package business;

public class Manutencao {
	
	private String dataUltimaManutencao, tipoServico;
	
	public String getDataUltimaManutencao() { return dataUltimaManutencao; }
	public void setDataUltimaManutencao(String dataUltimaManutencao) { this.dataUltimaManutencao = dataUltimaManutencao; }

	public String getTipoServico() { return tipoServico; }
	public void setTipoServico(String tipoServico) { this.tipoServico = tipoServico; }

	public Manutencao(String dataUltimaManutencao, String tipoServico) {
		this.dataUltimaManutencao = dataUltimaManutencao;
		this.tipoServico = tipoServico;
	}
	@Override
	public String toString() {
		return String.format("última manutenção: %s; serviço realizado: %s", dataUltimaManutencao, tipoServico);
	}
	
}
