package alienigenas;

public class Principal {

	public static void main(String[] args) {
		Peludos p1 = new Peludos("Preciadete", Peludos.TipoCabello.Rubio);
		
		Calvos c1 = new Calvos("Jhonny Sins", 43 , 149);
		c1.ComprobarIq(c1.getIq());
		
		Humano h1 = new Humano("Porrillo", 25);
		
		
		System.out.println(p1);
		System.out.println(c1);
		System.out.println(h1);
	}
}
