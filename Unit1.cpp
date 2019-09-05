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
		TDocument *open;
	   open = new TDocument(PageControl1);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::OtworzExecute(TObject *Sender)
{
   if(OpenDialog1->Execute())
   {
	   TDocument *open;
	   open = new TDocument(PageControl1);

	   open->LoadFromFile(OpenDialog1->FileName);

   }

}
//---------------------------------------------------------------------------


void __fastcall TForm1::NowyExecute(TObject *Sender)
{
	TDocument *open;
	open = new TDocument(PageControl1);

}
//---------------------------------------------------------------------------



void __fastcall TForm1::ZapiszExecute(TObject *Sender)
{

	if( SaveDialog1->Execute() )
	{
		TDocument *save;
		TTabSheet *tab;
		 tab = PageControl1->ActivePage;
		 save = dynamic_cast<TDocument*>(tab);
		 save->SaveToFile(SaveDialog1->FileName);

	}
}
//---------------------------------------------------------------------------

void TForm1::WyodrebnijString()
{

	TTabSheet *tab;
	tab = PageControl1->ActivePage;
	TDocument *doc;
	doc = dynamic_cast<TDocument*>(tab);
	String text = doc->RichEdit->Text;
	int dlugCalosc = text.Length();



	TStringList* akapity =  Tokenize(text, "\n");
	TStringList* spacje =  Tokenize(text, " ");
	TStringList* zdania =  Tokenize(text, ".");



	int akapitySize = akapity->Count;
	int spacjeSize = spacje->Count;
	int zdaniaSize = zdania->Count;

	if(text.Length() != 0){

	StatusBar1->Panels->Items[0]->Text = "Ilosc znakow: " + IntToStr(dlugCalosc);
	StatusBar1->Panels->Items[1]->Text = "Ilosc wyrazow: " + IntToStr(spacjeSize);
	StatusBar1->Panels->Items[2]->Text = "Ilosc zdan: " + IntToStr(zdaniaSize);
	StatusBar1->Panels->Items[3]->Text = "Ilosc akapitow: " + IntToStr(akapitySize);
	}
	else {
	StatusBar1->Panels->Items[0]->Text = "Ilosc znakow: " + IntToStr(0);
	StatusBar1->Panels->Items[1]->Text = "Ilosc wyrazow: " + IntToStr(0);
	StatusBar1->Panels->Items[2]->Text = "Ilosc zdan: " + IntToStr(0);
	StatusBar1->Panels->Items[3]->Text = "Ilosc akapitow: " + IntToStr(0);
	}

	TTablica tabSlow;

	LiczZnaki(spacje , tabSlow);

	for(int i = 1; i<10; i++)
	{
		StatusBar2->Panels->Items[i]->Text = "Wartosc: " + IntToStr(tabSlow[i]);
	}

	for(int i = 10; i<20; i++)
	{
		StatusBar3->Panels->Items[i-10]->Text = "Wartosc: " + IntToStr(tabSlow[i-10]);
	}

}



TStringList *TForm1::Tokenize (String s,String delimiter)
{


 TStringList *StringList;
 int l; //length of s
 int start,delimp;
 String sub;
 StringList = new TStringList();
 start=0;
 if (s.Pos(delimiter)>0)
 {
 delimp = s.Pos(delimiter);
 do
 {
 l=s.Length();
 sub=s.SubString(start,delimp-1);
 if (sub != "") StringList->Add(sub);
 s=s.SubString(delimp+1,l-delimp);
 delimp = s.Pos(delimiter);
 } while (delimp != 0);
 StringList->Add(s); // dodanie tego co zosta�o na ko�cu
 }
 else StringList->Add(s);
 return StringList;
}


//---------------------------------------------------------------------------

void __fastcall TForm1::StatystykiExecute(TObject *Sender)
{
   WyodrebnijString();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::ZamknijExecute(TObject *Sender)
{
	TTabSheet *tab;
	tab = PageControl1->ActivePage;
	delete tab;
}
//---------------------------------------------------------------------------




void TForm1::LiczZnaki(TStringList *slowa , TTablica &TablicaWynikowa )
{
 int i, dl;
 // najpierw zainicjujmy tablic� wynik�w
 for (i = 1; i< max_n_znakow; i++)
 TablicaWynikowa[i] = 0;
 // nast�pnie policzmy odpowiednie s�owa
 for (i=0; i<slowa->Count; i++)
 {
 dl = (*slowa)[i].Length();
 if (dl > max_n_znakow)
 TablicaWynikowa[max_n_znakow-1] = TablicaWynikowa[max_n_znakow-1] + 1;
 else if (dl > 0)
 TablicaWynikowa[dl] = TablicaWynikowa[dl] + 1;
 }
}


