package Aula3.com.aula3;

public Disciplina(String nome, double p1, double p2){
   this.nome = nome;
   this.p1 = Math.max(0,p1);
   this.p2 = Math.max(0,p2);
}

public void mostrarStatus(){
   double media = 0.5*(p1 + p2);
   if(media >= 6)
       System.out.println("APROVADO");
   else
       System.out.print("REPROVADO");
}

public void mostrar(){
   System.out.println("Nome: " + nome);
   System.out.println("p1: " + p1);
   System.out.println("p2: " + p2);
}

//ESSE TIPO DE SET É PARA SER EVITADO
//USE APENAS SE ALGUMA FRAMEWORK PEDIR.
public void setP1(double p1){
   this.p1 = p1;
}

}
