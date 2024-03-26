package aula6;

public class Main {

	public static void main(String[] args) {
		
		/*Sapo s1 = new Sapo(); //pulo = 1, sapo = 1
		Sapo s2 = new Sapo(); //pulo = 1, sapo = 2
		Sapo s3 = new Sapo(); //pulo = 1, sapo = 3
		s2.pular();
		System.out.println(s1.getQtpulo());
		System.out.println(s2.getQtpulo());
		System.out.println(s3.getQtpulo());
		System.out.println(Sapo.getQtSapo()); */
		
		Produto p1 = new Produto("Livro 1",Tipo.ESCOLAR,60);
		Produto p2 = new Produto("Livro 2", Tipo.ESCOLAR,70);
		Produto p3 = new Produto("Caneta", Tipo.ESCRITORIO,20);
		Produto p4 = new Produto("Pen drive", Tipo.TECNOLOGIA,50);
		Produto p5 = new Produto("Disquete", Tipo.TECNOLOGIA,20);
		Carrinho c = new Carrinho(4);
		
		c.inserir(p1, 2);
		c.inserir(p2, 3);
		c.inserir(p3, 1);
		c.inserir(p4, 0);
		c.listar();
		System.out.println(c.calcularTotal());
		
	}

}
