package productos;

public class Principal {

	public static void main(String[] args) {
		
		Ordenador o1 = new Ordenador();
		Ordenador o2 = new Ordenador(500f, "Windows");
		
		Impresora i1 = new Impresora(250f, Impresora.TipoImpresion.Laser);
		
		
		System.out.println(o1);
		System.out.println(o2);
		System.out.println(i1);

	}

}
