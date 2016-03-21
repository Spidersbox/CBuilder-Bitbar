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
        TStringGrid *StringGrid1;
        TDrawGrid *DrawGrid1;
        TPanel *Panel2;
        TComboBox *DateBox;
        TComboBox *TypeBox;
        TEdit *SearchBox;
private:	// User declarations
public:		// User declarations
        __fastcall TBitbarForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TBitbarForm *BitbarForm;
//---------------------------------------------------------------------------
#endif
