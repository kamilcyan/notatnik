//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <System.Actions.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.Menus.hpp>
#include <Unit2.h>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel4;
	TPageControl *PageControl1;

	TActionList *ActionList1;
	TAction *Action1;
	TAction *Action2;

	TOpenDialog *OpenDialog1;
	TMainMenu *MainMenu1;
	TMenuItem *Plik1;
	TMenuItem *Otworz1;
	TMenuItem *Nowy1;
	TMenuItem *Zamknij1;
	TAction *Action3;
	TSaveDialog *SaveDialog1;
	void __fastcall Action1Execute(TObject *Sender);
	void __fastcall Action2Execute(TObject *Sender);
	void __fastcall Action3Execute(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
	//void DodajZakladke(TPageControl *APageControl);

};




//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif