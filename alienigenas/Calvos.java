package alienigenas;

public class Calvos extends Humano {
	
	private Integer iq;
	
	public Calvos(String nombre, Integer edad, Integer iq) {
		super(nombre, edad);
		this.iq = iq < 150?null:iq;
	}

	public Integer getIq() {
		return iq;
	}
	
	public String ComprobarIq(Integer iq) {
		try {
			if(iq <150) {
				throw new Exception();
			}
			
		} catch (Exception e) {
			System.out.println(e.getMessage());
		}
		return null;
	}

	@Override
	public String toString() {
		return "Soy " + this.getNombre() + " y tengo " + this.getEdad() + " años";
	}
	
	

}
