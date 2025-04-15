package business;

import java.util.ArrayList;

public class Aula {
	private Professor professor;
	private Materia materia;
	private Disciplina disciplina;
	private ArrayList<Aluno> listaDeAluno;

	public Materia getMateria() { return materia; }
	public void setMateria(Materia materia) { this.materia = materia; }

	public Professor getProfessor() { return professor; }
	
	public Disciplina getDisciplina() { return disciplina; }
	
	public Aula(Professor professor, Disciplina disciplina) {
		this.professor = professor;
		this.disciplina = disciplina;
		this.materia = new Materia("");
		
		// instancia arraylist de alunos
		listaDeAluno = new ArrayList<Aluno>();
	}
	
	public void incluirAluno(Aluno aluno) {
		listaDeAluno.add(aluno);
	}
	
	public String retornarInfo() {
		String info = "Infos da aula de hoje: ";

		// retorna informações relacionadas à aula
		info += "\nDisciplina: " + disciplina.getCodigo();
		info += "\nProfessor: " + professor.getNome();
		info += "\nMateria: " + materia.getTopico();
		
		// percorre array de alunos, concatenando-os todos
		info += "\nAlunos Presentes: ";
        for (Aluno aluno : listaDeAluno) {
        	info += "\n- " + aluno.getMatricula() + " - " + aluno.getNome();
        }
        
        // retorna String contendo todas as informações da aula
		return info;
	}
	@Override
	public String toString() {
		return retornarInfo();
	}
	
	
	
}
