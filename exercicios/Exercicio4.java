package exercicios;

public class Exercicio4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		//Joãozinho recebeu R$ 50,00 de mesada e foi em uma loja de doces gastar todo o seu dinheiro, logo, 
		//enquanto o valor dos doces não igualar a R$ 50,00 ele foi adicionando itens no carrinho.
		
		int num = 5, count = 1;
        do {
            num += count;
            System.out.println(num);
        } while (count <= 3);
	}

}
