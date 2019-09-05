//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Action1Execute(TObject *Sender)
{
   if(OpenDialog1->Execute())
   {
	   TDocument *open;
	   open = new TDocument(PageControl1);

	   open->LoadFromFile(OpenDialog1->FileName);

   }

}
//---------------------------------------------------------------------------


void __fastcall TForm1::Action2Execute(TObject *Sender)
{
	TDocument *open;
	open = new TDocument(PageControl1);
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Action3Execute(TObject *Sender)
{

	if( SaveDialog1->Execute() )
	{
		TDocument *save;
		//save = new TDocument(PageControl1);

		TTabSheet *tab;
		 tab = PageControl1->ActivePage;
		 save = dynamic_cast<TDocument*>(tab);
		 save->SaveToFile(SaveDialog1->FileName);
	}
}
//---------------------------------------------------------------------------


