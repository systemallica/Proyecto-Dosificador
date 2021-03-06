#include <vcl.h>
//---------------------------------------------------------------------------
 #define MAX_DESCRIPCION 10
 #define MAX_NOMBRE 10

//---------------------------------------------------------------------------

#ifndef UnitDatosH
#define UnitDatosH

class CValvula
{
	bool estado_valvula;
public:
	void Abrir (void);
	void Cerrar (void);
	bool ToggleValvula (void);
	bool EstadoValvula (void);
};

class CDeposito: public CValvula
{
	double cantidad;
	TColor color;

public:
	void Cantidad (int _cantidad);
	int Cantidad (void);
	void Color (TColor _color);
	TColor Color (void);
};

class CBascula: public CValvula
{
	double peso;

public:
	void Peso (double _peso);
	double Peso (void);

};

class CMateria
{
	int id;
	char descripcion[MAX_DESCRIPCION];
	int id_deposito;
public:
	void Id(int _id);
	int Id(void);

};

class CMezcladora: public CValvula
{
	bool motor_state;
	double cantidad;
public:
	void MotorOn(void);
	void MotorOff(void);
	bool MotorState(void);
	void Cantidad(double _cantidad);
	double Cantidad(void);
};

class CFormula    //Modificado para que compile
{
	int id_formula;
	int id_materia[3];
	double proporcion[3];

	char nombre[MAX_NOMBRE];
	char descripcion[MAX_DESCRIPCION];
public:
	void Nombre(char *_nombre);
	char* Nombre(void);

	void IdFormula(int _id_formula);
	int IdFormula(void);
	void IdMateria(int pos, int _id_materia);
	int IdMateria(int pos);

	void Proporcion(int pos, double _proporcion);
	double Proporcion(int pos);
};

void GuardarArchivo(void);
void LeerArchivo(void);

extern CDeposito deposito[5];
extern CMateria materia[5];
extern CFormula formula[5];
extern CBascula bascula;
extern CMezcladora mezcladora;

//---------------------------------------------------------------------------
#endif
