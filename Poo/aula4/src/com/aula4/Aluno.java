package com.aula4;

public class Aluno {
	private NomeAluno nome;
	private String ra;
	private Curso curso;
	
	public Aluno(NomeAluno nome, String ra, Curso curso) {
		this.nome = nome;
		this.ra = ra;
		this.curso = curso;
	}

	public NomeAluno getNome() {
		return nome;
	}

	public void setNome(NomeAluno nome) {
		this.nome = nome;
	}

	public String getRa() {
		return ra;
	}

	public void setRa(String ra) {
		this.ra = ra;
	}

	public Curso getCurso() {
		return curso;
	}

	public void setCurso(Curso curso) {
		this.curso = curso;
	}
}
