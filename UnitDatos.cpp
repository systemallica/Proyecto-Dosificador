//---------------------------------------------------------------------------

#pragma hdrstop

#include "UnitDatos.h"
#include <stdio.h>
#include <string.h>

//VALVULA-----------------------------------------------------------------------

void CValvula::Abrir (void) {estado_valvula = true;}
void CValvula::Cerrar (void) {estado_valvula = false;}
bool CValvula::ToggleValvula (void) {estado_valvula = !estado_valvula; return estado_valvula;}
bool CValvula::EstadoValvula (void) {return estado_valvula;}

//DEPOSITO----------------------------------------------------------------------

void CDeposito::Cantidad (int _cantidad)
{
	cantidad = _cantidad;
}

int CDeposito::Cantidad (void)
{
	return (cantidad);
}

void CDeposito::Color (TColor _color)
{
	color = _color;
}

TColor CDeposito::Color (void)
{
	return color;
}

//FORMULAS--------------------------------------------------------------------

void CFormula::IdFormula(int _id_formula)
{
	id_formula = _id_formula;
}
int CFormula::IdFormula(void)
{
	return id_formula;
}
void CFormula::IdMateria(int pos, int _id_materia)
{
	id_materia[pos] = _id_materia;
}
int CFormula::IdMateria(int pos)
{
	return id_materia[pos];
}
void CFormula::Proporcion(int pos, double _proporcion)
{
	proporcion[pos] = _proporcion;;
}
double CFormula::Proporcion(int pos)
{
	return proporcion[pos];
}
void CFormula::Nombre(char *_nombre)
{
	strcpy(_nombre, nombre);
}
char* CFormula::Nombre(void)
{
	return nombre;
}
void GuardarArchivo(void)
{
	FILE* F;

	F = fopen("file_formulas.bin", "wb");

	if (!F) ShowMessage("Error abriendo el archivo");

	fwrite(formula, sizeof(CFormula), 5, F);

	fclose(F);
}
void LeerArchivo(void)
{
	FILE* F;

	F = fopen("file_formulas.bin", "rb");

	if (!F) ShowMessage("Error abriendo el archivo");

	fread(formula, sizeof(CFormula), 5, F);

	fclose(F);
}


//BASCULA-----------------------------------------------------------------------
void CBascula::Peso (double _peso ){peso = _peso;}
double CBascula::Peso (void) {return peso;}

//MEZCLADORA-----------------------------------------------------------------------
void CMezcladora::MotorOn(void) {motor_state = true;}
void CMezcladora::MotorOff(void){motor_state = false;}
bool CMezcladora::MotorState(void) {return motor_state;}
void CMezcladora::Cantidad(double _cantidad) {cantidad = _cantidad;}
double CMezcladora::Cantidad(void) {return cantidad;}


//DECLARACIÓN VARIABLES ---------------------------------------------------------------
CDeposito deposito[5];
CMateria materia[5];
CFormula formula[5];
CBascula bascula;
CMezcladora mezcladora;
//---------------------------------------------------------------------------
#pragma package(smart_init)
