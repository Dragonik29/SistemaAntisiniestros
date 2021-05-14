#pragma once
namespace SistemaAntisiniestrosModel {
	using namespace System;

	public ref class Usuario {
	private:
		/*Atributos o Datos*/
		String^ Nombre;
		String^ ApellidoPaterno;
		String^ ApellidoMaterno;
		int		DNI;
		String^ Genero;
		String^ TipoUsuario;
		String^ Login;
		String^ Contrasenha;
		int		Telefono;

	public:
		/*Metodos o Funciones*/
		Usuario();
	};
}
