package alienigenas;

public class Peludos extends Humano {

	private TipoCabello tipo;
	
	public enum TipoCabello{
		Moreno, Rubio, Pelirrojo, Castaño
	}

	
	public Peludos(String nombre, TipoCabello tipo){
		super(nombre, 30);
		this.tipo = tipo;
		
	}
	
	public TipoCabello getTipo() {
		return tipo;
	}

	@Override
	public String toString() {
		return "Soy un humano " + tipo + " y me llamo " + this.getNombre();
	}
	
	
	
}
