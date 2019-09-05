//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H

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

class TDocument : public TTabSheet
{
public:
 TDocument(TPageControl *APageControl);
 __fastcall TDocument();
 void LoadFromFile(String AFileName);
 void DodajZakladke(TPageControl *APageControl);
 void SaveToFile(String AFileName);
 TRichEdit *RichEdit;
 String FileName;
};

//---------------------------------------------------------------------------
#endif
