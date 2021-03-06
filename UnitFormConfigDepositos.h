//---------------------------------------------------------------------------

#ifndef UnitFormConfigDepositosH
#define UnitFormConfigDepositosH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TFormConfigDepositos : public TForm
{
__published:	// IDE-managed Components
	TComboBox *ComboBoxDep;
	TComboBox *ComboBox2;
	TLabeledEdit *LabeledEdit1;
	TButton *ButtonGuardar;
	TButton *ButtonExit;
	TLabel *Label1;
	TLabel *LabelDeposito;
	TLabel *Label2;
	TColorBox *ColorBox;
	TLabel *Label3;
	void __fastcall ComboBoxDepChange(TObject *Sender);
	void __fastcall ButtonGuardarClick(TObject *Sender);
	void __fastcall ButtonExitClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormConfigDepositos(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormConfigDepositos *FormConfigDepositos;
//---------------------------------------------------------------------------
#endif
