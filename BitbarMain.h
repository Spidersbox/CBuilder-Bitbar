//---------------------------------------------------------------------------

#ifndef BitbarMainH
#define BitbarMainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <Menus.hpp>
#include <Buttons.hpp>
#include "trayicon.h"
//---------------------------------------------------------------------------
class TBitbarForm : public TForm
{
__published:	// IDE-managed Components
        TMainMenu *MainMenu1;
        TMenuItem *File1;
        TMenuItem *Settings1;
        TMenuItem *Wallet1;
        TMenuItem *Help1;
        TPageControl *PageControl1;
        TPanel *Panel1;
        TTabSheet *TabOverview;
        TTabSheet *TabSendcoins;
        TTabSheet *TabReceivecoins;
        TTabSheet *TabTransactions;
        TTabSheet *TabAddressbook;
        TStringGrid *GridAddressbook;
        TDrawGrid *DrawGrid1;
        TPanel *Panel2;
        TComboBox *DateBox;
        TComboBox *TypeBox;
        TEdit *SearchBox;
        TStringGrid *GridReceive;
        TPanel *Panel3;
        TBitBtn *BitBtn1;
        TBitBtn *BitBtn2;
        TBitBtn *BitBtn3;
        TBitBtn *BitBtn4;
        TPanel *Panel4;
        TBitBtn *BitBtn5;
        TBitBtn *BitBtn6;
        TBitBtn *BitBtn7;
        TBitBtn *BitBtn8;
        TGroupBox *GroupBox1;
        TBitBtn *BitBtn9;
        TLabel *Label1;
        TLabel *Quant;
        TLabel *Label2;
        TLabel *Amt;
        TMenuItem *eXit1;
        TTrayIcon *TrayIcon1;
        TPopupMenu *PopupMenu1;
        TMenuItem *Restore1;
        TMenuItem *exit2;
        void __fastcall eXit1Click(TObject *Sender);
        void __fastcall TrayIcon1Restore(TObject *Sender);
        void __fastcall Restore1Click(TObject *Sender);
        void __fastcall exit2Click(TObject *Sender);
        void __fastcall FormCloseQuery(TObject *Sender, bool &CanClose);
private:	// User declarations
public:		// User declarations
        __fastcall TBitbarForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TBitbarForm *BitbarForm;
//---------------------------------------------------------------------------
#endif
