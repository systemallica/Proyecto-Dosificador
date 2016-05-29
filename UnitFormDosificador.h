//---------------------------------------------------------------------------

#ifndef UnitFormDosificadorH
#define UnitFormDosificadorH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include "TDeposito.h"
#include <Vcl.Menus.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TFormDosificador : public TForm
{
__published:	// IDE-managed Components
	TButton *Button_Simulacion;
	TTimer *Timer1;
	TDeposito *Deposito1;
	TDeposito *Deposito2;
	TDeposito *Deposito3;
	TDeposito *Deposito4;
	TDeposito *Deposito5;
	TLabel *Label1;
	TMainMenu *MainMenuDosificador;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TGroupBox *GroupBoxControlPanel;
	TButton *ButtonFormulas;
	TMenuItem *Archivo1;
	TMenuItem *Vistas1;
	TMenuItem *Simulacin1;
	TMenuItem *Formulas1;
	TButton *ButtonConfigurarDepositos;
	TShape *Shape1;
	TShape *Shape2;
	TShape *Shape3;
	TShape *Shape4;
	TShape *Shape5;
	TPaintBox *PaintBoxDep1;
	TPaintBox *PaintBoxDep2;
	TPaintBox *PaintBoxDep3;
	TPaintBox *PaintBoxDep4;
	TPaintBox *PaintBoxDep5;
	TPaintBox *PaintBoxBasc;
	TShape *ShapeValvulaBasc;
	TImage *Image1;
	TShape *Shape6;
	TShape *ShapeMezcladora;
	TImage *Image2;
	TShape *Shape8;
	TButton *Button1;
	void __fastcall Button_SimulacionClick(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall ButtonFormulasClick(TObject *Sender);
	void __fastcall Simulacin1Click(TObject *Sender);
	void __fastcall Formulas1Click(TObject *Sender);
	void __fastcall ButtonConfigurarDepositosClick(TObject *Sender);
	void __fastcall FormPaint(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);


private:	// User declarations
public:		// User declarations
	__fastcall TFormDosificador(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormDosificador *FormDosificador;
//---------------------------------------------------------------------------
#endif
