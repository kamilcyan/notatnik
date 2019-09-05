//---------------------------------------------------------------------------

#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

 TDocument::TDocument(TPageControl *APageControl): TTabSheet(APageControl)
{
 PageControl = APageControl;
 Caption = "Nowy dokument";
 RichEdit = new TRichEdit(this);
 RichEdit->Parent = this;
 RichEdit->Align = alClient;
 RichEdit->WordWrap = false;
 RichEdit->ScrollBars = ssBoth;
}


 void TDocument::LoadFromFile(String AFileName)
{
 FileName = AFileName;
 RichEdit->Lines->LoadFromFile(FileName);
 Caption = ExtractFileName(FileName);
}

 void TDocument::SaveToFile(String AFileName)
{
FileName = AFileName;

 RichEdit->Lines->SaveToFile(FileName);

}