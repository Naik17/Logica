import com.naik.utilidades.Utils;

public class Main extends Utils{
	
	public Main(double peso, String nome) {
		super(peso, nome);
		// TODO Auto-generated constructor stub
	}

	/*
	 int,double,char,String,float
	 */

	
	public static void main(String[] args) {
		Main main = new Main(80.0,"Dargunberto");
		main.HelloWorld();
		
		/*
		Aqui ha criação de um novo objeto que apesar de usar a mesma classe não e o mesmo objto!
		Utils utils2 = new Utils();
		System.out.println(utils2.numero);s
		*/
	}

}
