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

void __fastcall TForm1::FormClick(TObject *Sender)
{
        ;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
        if (Label1 -> Visible == false)
        {
        Label1 -> Visible = true;
        Button1 -> Caption = "Schowam siê!";
        }
        else
        {
        Label1 -> Visible = false;
        Button1 -> Caption = "Poka¿ê siê!";
        }
}
//---------------------------------------------------------------------------
 