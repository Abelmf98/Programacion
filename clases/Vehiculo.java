package clases;

public class Vehiculo {

	private Float precio;
	private String nombre;
	
	public Vehiculo() {
		precio = 0f;
		nombre="";
	}
	
	/**
	 * contructor de la clase Vehiculo
	 * @param precio
	 * @param nombre
	 */
	public Vehiculo(Float precio, String nombre) {
		this.precio = precio;
		this.nombre = nombre;
	}

	public Float getPrecioIVA() {
		return precio * 1.21f;
	}

	public Float getPrecio() {
		return precio;
	}
	
	public String getNombre() {
		return nombre;
	}

}
