package Aula3.com.aula3;

public class Aluno {
    private String nome, ra;
    private Curso curso;

    public Aluno(String nome, String ra, Curso curso){
        this.nome = nome;
        this.ra = ra;
        this.curso = curso;
    }

    public void mostrar(){
        System.out.println("Nome: " + nome);
        System.out.println("R.A: " + ra);
        System.out.println("Curso: " + curso);
    }

    public void verEstereotipo(){
        switch (curso) {
            case ADS:
                System.out.println("COBOLEIRO");
                break;
            case SI:
            System.out.println("DESIGNER");
                break;
            case CD:
                System.out.println("PYTHON");
                break;
            case LOG:
                System.out.println("CAMINÃO E CONTEINER");
                break;
            case RH:
                System.out.println("GUPY");
                break;
         
            default:
                System.out.println("Não sei");
        }
        public String getRa(){
            return ra;
        }
    
        public String getNome(){
            return nome;
        }
    
        public Curso getCurso(){
            return curso;
        }
    
        public void setNome(String nome){
            this.nome = nome;
        }
    
    }

}
