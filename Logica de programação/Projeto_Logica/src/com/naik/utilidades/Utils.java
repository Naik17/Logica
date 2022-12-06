package com.naik.utilidades;

public class Utils {
	
	private int idade = 26;
	public double peso = 70.5;
	public float peso2 = 70.5f;
	public String nome = "Naik";
	
	public Utils(double peso,String nome) {
		this.nome = nome;
		this.peso = peso;
		//System.out.println(this.nome);
		//System.out.println(nome);
	}
	
	public  void HelloWorld() {
		idade = 30;
		PrintPrivado();
	}
	
	public int pegaIdade() {
		return idade;
	}
	
	private void PrintPrivado() {
		System.out.println("Mensagem privada");
	}

}
