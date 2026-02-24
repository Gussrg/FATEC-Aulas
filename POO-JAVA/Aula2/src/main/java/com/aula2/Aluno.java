package com.aula2;

public class Aluno {

    NomeAluno nomeAluno; 
    RAAluno raAluno;
    Curso curso;

    public Aluno(NomeAluno nomeAluno, RAAluno raAluno, Curso curso) {
        //this. na frente do nome indica atributo
        this.nomeAluno = nomeAluno;
        this.raAluno = raAluno;
        this.curso = curso;
    }

    public void mostrar() {
        System.out.println("NOME: " + nomeAluno.nome());
        System.out.println("RA: " + raAluno.ra());
        System.out.println("Curso: " + curso);
    }

    public void opinar() {
        switch (curso) {
            case ADS -> {
                System.out.println("CURSO DE COBOL");
                System.out.println("CURSO DE ECONOMIA");
            }
            case SI -> System.out.println("CURSO DE DESIGN");
            case CD -> System.out.println("CURSO DE NERD");
            case RH -> System.out.println("CURSO DE SOFT SKILL");
            default -> System.out.println("ALGO AI");
        }
    }

}
