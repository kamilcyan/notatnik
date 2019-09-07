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
#include <Vcl.ToolWin.hpp>
#include <Unit2.h>
#include <System.ImageList.hpp>
#include <Vcl.ImgList.hpp>

#define max_n_znakow 20
typedef int TTablica[max_n_znakow];
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel4;
	TActionList *ActionList1;
	TAction *Otworz;
	TAction *Nowy;

	TOpenDialog *OpenDialog1;
	TMainMenu *MainMenu1;
	TMenuItem *Plik1;
	TMenuItem *Otworz1;
	TMenuItem *Zamknij1;
	TAction *Zapisz;
	TSaveDialog *SaveDialog1;
	TStatusBar *StatusBar1;
	TAction *Statystyki;
	TAction *Zamknij;
	TMenuItem *Strona1;
	TMenuItem *Nowa1;
	TMenuItem *Zamknij2;
	TMenuItem *Policz1;
	TToolBar *ToolBar1;
	TToolButton *New;
	TToolButton *ToolButton2;
	TToolButton *ToolButton3;
	TToolButton *ToolButton4;
	TToolButton *ToolButton5;
	TImageList *ImageList1;
	TStatusBar *StatusBar3;
	TPopupMenu *PopupMenu1;
	TMenuItem *Zamknij3;
	TMenuItem *Statystyki1;
	TMenuItem *Zamknij4;
	TMenuItem *Zapisz2;
	TPageControl *PageControl1;
	TStatusBar *StatusBar2;
	TPanel *Panel1;
	TFontDialog *FontDialog1;
	TToolButton *ToolButton1;
	TMenuItem *Edytuj1;
	TAction *Edytuj;
	TMenuItem *Edytuj2;
	void __fastcall OtworzExecute(TObject *Sender);
	void __fastcall NowyExecute(TObject *Sender);
	void __fastcall ZapiszExecute(TObject *Sender);
	void __fastcall StatystykiExecute(TObject *Sender);
	void __fastcall ZamknijExecute(TObject *Sender);

	void __fastcall Update(TObject *Sender);
	void __fastcall FontDialog1Apply(TObject *Sender, HWND Wnd);
	void __fastcall ToolButton1Click(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
	//void DodajZakladke(TPageControl *APageControl);
	void _fastcall WyodrebnijString();
	TStringList *Tokenize (String s,String delimiter);
	void LiczZnaki(TStringList *slowa , TTablica &TablicaWynikowa );
};




//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
