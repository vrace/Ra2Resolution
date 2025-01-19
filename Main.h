//---------------------------------------------------------------------------

#ifndef MAIN_H
#define MAIN_H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>

#include "ResolutionService.h"
#include "Ra2IniService.h"
//---------------------------------------------------------------------------
class TMainForm : public TForm
{
__published:	// IDE-managed Components
    TLabel *Label1;
    TListBox *ListBoxResolutions;
    TButton *ButtonOK;
    void __fastcall FormCreate(TObject *Sender);
    void __fastcall FormDestroy(TObject *Sender);
    void __fastcall ButtonOKClick(TObject *Sender);
private:	// User declarations
    ResolutionService *m_resolutionService;
    Ra2IniService *m_iniService;
    AnsiString CreateResolutionText(const Resolution &res) const;
public:		// User declarations
    __fastcall TMainForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMainForm *MainForm;
//---------------------------------------------------------------------------
#endif
