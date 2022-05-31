package productos;

public class Principal {

	public static void main(String[] args) {
		
		Ordenador o1 = new Ordenador();
		Ordenador o2 = new Ordenador(500f, "Windows");
		
		System.out.println(o1);
		System.out.println(o2);

	}

}
