import java.util.Scanner;

public class Main{
	
	
	public int[] numeros = {10,20,30};
	
	public static void main(String args[]) {
		Scanner scanner = new Scanner (System.in);
		int pontos = 0;
		System.out.println("Bem-Vindo! Pressuone S para continuar.");
		String string = scanner.nextLine();
		if(string.equals("s")) {
			System.out.println("Qual a capital do Brasil?");
			string = scanner.nextLine();
			if(string.equals("Brasilia")){
				pontos++;
				System.out.println("Voce pontuou!");
				System.out.println("Voce deseja continuar? (s) ou desistir? (d)");
				string = scanner.nextLine();
				if(string.equals("s")) {
					//proxima pergunta
					System.out.println("Em qual continente fica o Brasil");
					string = scanner.nextLine();
					if(string.equals("America")) {
						pontos++;
						System.out.println("Voce pontuou!");
						System.out.println("Voce deseja continuar? (s) ou desistir? (d)");
						string = scanner.nextLine();
						if(string.equals("s")) {
							//proxima pergunta
							System.out.println("Em qual America fica o Brasil?");
							string = scanner.nextLine();
							if(string.equals("America do Sul")) {
								pontos++;
								System.out.println("Voce pontuou!");
								System.out.println("Voce chegou ao final do jogo, sua pontuacao final e de:"+pontos);
								}else {
									System.out.println("Game Over! Sua pontuacao foi de: "+pontos);
								}
								
						}else {
							System.out.println("Game Over! Sua pontuacao foi de: "+pontos);
						}
					}
				}else {
					System.out.println("Game Over! Sua pontuacao foi de: "+pontos);
				}
			}else {
				System.out.println("Game Over! Sua pontuacao foi de: "+pontos);
			}
		}else {
			System.out.println("Acabou o jogo .... Voce pontou: 0");
		}
	}
  }
