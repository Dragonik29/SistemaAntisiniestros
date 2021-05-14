#pragma once
#include"Usuario.h"
namespace SistemaAntisiniestrosModel {
	using namespace System;

	public ref class Alerta {
	public:
		/*Atributos o Datos*/
		String^ DescripcionAlerta;
		Ubigeo^ ObjUbicacionAlerta;       /* UbicacionGeografica es una ubicacion asociada de Ubigeo */
		Usuario^ ObjUsuarioEncargado;            /* UsuarioAlerta es un usuario asociado a Usuario */
		int CodAlerta;

	private:
		/*Metodos o Funciones*/
		Alerta();
	};
}

