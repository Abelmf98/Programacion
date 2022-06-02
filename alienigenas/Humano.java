package alienigenas;

import alienigenas.Peludos.TipoCabello;

public class Humano {

	private String nombre;
	private Integer edad;
	
	
	public Humano(String nombre, Integer edad) {
		this.nombre = nombre;
		this.edad = edad;
	}

	public String morir() {
		return "¡Has fallado pringao!";
	}
	public String getNombre() {
		return nombre;
	}

	public Integer getEdad() {
		return edad;
	}

	@Override
	public String toString() {
		return "Soy Humano y me llamo " + nombre + " y tengo " + edad + " años. " + morir();
	}
	
	
	
	
}
