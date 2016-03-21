//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "BitbarMain.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "trayicon"
#pragma resource "*.dfm"
TBitbarForm *BitbarForm;
//---------------------------------------------------------------------------
__fastcall TBitbarForm::TBitbarForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TBitbarForm::eXit1Click(TObject *Sender)
{
  Close();
}
//---------------------------------------------------------------------------
void __fastcall TBitbarForm::exit2Click(TObject *Sender)
{
  Close();
}
//---------------------------------------------------------------------------
void __fastcall TBitbarForm::Restore1Click(TObject *Sender)
{
  WindowState=wsNormal;
  Visible=true;
  WindowState=wsNormal;

}
//---------------------------------------------------------------------------
void __fastcall TBitbarForm::TrayIcon1Restore(TObject *Sender)
{
  WindowState=wsNormal;
  Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TBitbarForm::FormCloseQuery(TObject *Sender,
      bool &CanClose)
{
  if (MessageDlg("OK to close the program.\nCANCEL to minimize to tray.", mtConfirmation, TMsgDlgButtons() << mbOK << mbCancel,0) == mrCancel)
    CanClose = false;
  Hide();
}
//---------------------------------------------------------------------------

