package productos;

public class Impresora extends Productos {

	private String tipo;
	
	/**
	 * clase especial para enumerar los tipos
	 * @author Abel
	 *
	 */
	public enum tipoImpresion{
		Inyeccion, Laser
	}
	
	public Impresora() {
		super(0f, true);
	}
	
	public Impresora(Float precio, String tipo) {
		super(precio, true);
		this.tipo = tipo;
	}

	@Override
	public String toString() {
		return "Impresora: " + tipoImpresion.Laser + "->" + this.getPrecioOferta();
	}
	
}
