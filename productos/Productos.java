package productos;

public class Productos {

	private Float precio;
	private Boolean enOferta;
	
	/**
	 * Primer constructor de la clase donde damos valores a las variables
	 */
	public Productos(){
		precio= 0f;
		enOferta = true;
	}
	
	/**
	 * Constructor de la clase a la cual le pasamos parametros
	 * @param precio
	 * @param enOferta
	 */
	public Productos(Float precio, Boolean enOferta){
		this.precio = precio;
		this.enOferta = enOferta;
	}

	/**
	 * 
	 * @return nos devuelve el precio con el IVA aplicado
	 */
	public Float getPrecioOferta() {
		return precio * 1.21f * 0.85f;
	}

	public Float getPrecio() {
		return precio;
	}

	public Boolean getEnOferta() {
		return enOferta;
	}
	
	
}