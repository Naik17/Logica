
public class Main {
	
	public static void main(String[] args) {
		Utils h = new Utils();
		Utils.numero = 20;
		System.out.println(Utils.numero);
		
		/*
		Aqui ha criação de um novo objeto que apesar de usar a mesma classe não e o mesmo objto!
		Utils utils2 = new Utils();
		System.out.println(utils2.numero);
		*/
	}

}
