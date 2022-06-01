package productos;

public class Impresora extends Productos {

	private TipoImpresion tipo;
	
	/**
	 * clase especial para enumerar los tipos
	 * @author Abel
	 *
	 */
	public enum TipoImpresion{
		Inyeccion, Laser
	}
	
	public Impresora() {
		super(0f, true);
	}
	
	public Impresora(Float precio, TipoImpresion tipo) {
		super(precio, true);
		this.tipo = tipo;
	}

	@Override
	public String toString() {
		return "Impresora: " + tipo + "->" + this.getPrecioOferta();
	}
	
}