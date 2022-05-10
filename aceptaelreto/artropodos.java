package aceptareto;

import java.util.Scanner;

public class artropodos {

	public static void main(String[] args) {
		Scanner teclado = new Scanner(System.in);
		//Variables globales
		int numCasos, insectos, aracnidos, crustaceos, escolpendra, aescolopendra, resultado;
		
		do {
			System.out.println("Introduce numero de casos: ");
			numCasos = teclado.nextInt();
		}while(numCasos<=0 || numCasos>10);
		
		while(numCasos>0) {
			
			//Insectos.
			System.out.println("\nIntroduce numero de insectos: ");
			insectos = teclado.nextInt();
			//Aracnidos.
			System.out.println("Introduce numero de aracnidos: ");
			aracnidos = teclado.nextInt();
			//Crustaceos.
			System.out.println("Introduce numero de crustaceos: ");
			crustaceos = teclado.nextInt();
			//Escolopendras.
			System.out.println("Introduce numero de escolopendras: ");
			escolpendra = teclado.nextInt();
			//Anillos de escolopendras.
			System.out.println("Introduce numero de anillos de escolopendras: ");
			aescolopendra = teclado.nextInt();
			
			numCasos--;
			
			resultado = (insectos*6)+(aracnidos*8)+(crustaceos*10)+(escolpendra*aescolopendra*2);
			
			System.out.print("\nNumero de patas en total: " + resultado);
		}

	}

}
