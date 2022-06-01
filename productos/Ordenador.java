package productos;

public class Ordenador extends Productos {

	private String so;
	
	
	public Ordenador() {
		super(0f, true);
	}
	
	/**
	 * Constructor de la Clase Ordenador que hereda de Productos
	 * @param precio
	 * @param enOferta
	 */
	public Ordenador(Float precio, String so) {
		super(precio, true);
		this.so = so;
	}

	@Override
	public String toString() {
		return "Ordenador: " + so + "->" + this.getPrecioOferta() + "€";
	}
	
	
}
