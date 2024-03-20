package exercicios;
import java.util.Scanner;

public class Exercicio3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		//Escreva um programa em Java que solicita 10 números ao usuário, através de um laço for, e ao final
		//mostre os dois maiores números digitados pelo usuário.
		
		Scanner scan = new Scanner(System.in);
		
		int numeros = 10;
		int maiorNumero;
		
		System.out.println("Digite 10 números");
		
		for(int contador = 1; contador <= numeros; contador++) {
			System.out.println("Número " + contador + ":");
			numeros = scan.nextInt();
		}
	}

}
