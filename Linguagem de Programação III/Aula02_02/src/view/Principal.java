package view;

import business.Cachorro;
import business.Gato;

public class Principal {

	public static void main(String[] args) {
		Gato gato1 = new Gato("Tom");
		System.out.println(gato1.miar());
		System.out.println(gato1.brincar());

		Cachorro cao1 = new Cachorro("Snoopy");
		System.out.println(cao1.latir());
		System.out.println(cao1.brincar());
		
		Gato gato2 = new Gato("Garfield");
		System.out.println(gato2.miar());
		System.out.println(gato2.brincar());

		Cachorro cao2 = new Cachorro("Rin-tin-tin");
		System.out.println(cao2.latir());
		System.out.println(cao2.brincar());
		
	}

}
