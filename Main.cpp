#include <vcl.h>
#pragma hdrstop

#include <sstream>
#include <string>

#include "Main.h"

#pragma package(smart_init)
#pragma resource "*.dfm"
TMainForm *MainForm;

__fastcall TMainForm::TMainForm(TComponent* Owner)
    : TForm(Owner)
    , m_resolutionService(NULL)
    , m_iniService(NULL)
{
}

void __fastcall TMainForm::FormCreate(TObject *Sender)
{
    m_resolutionService = new ResolutionService();
    m_iniService = new Ra2IniService();

    int defaultIndex = 0;
    Resolution defaultRes(1024, 768);

    for (int i = 0; i < m_resolutionService->NumberOfResolutions(); i++) {
        const Resolution &res = m_resolutionService->ResolutionAtIndex(i);
        AnsiString resText = CreateResolutionText(res);
        ListBoxResolutions->Items->Add(resText);
        if (res == defaultRes) {
            defaultIndex = ListBoxResolutions->Items->IndexOf(resText);
        }
    }

    ListBoxResolutions->ItemIndex = defaultIndex;
}

void __fastcall TMainForm::FormDestroy(TObject *Sender)
{
    delete m_resolutionService;
    delete m_iniService;
}

void __fastcall TMainForm::ButtonOKClick(TObject *Sender)
{
    int index = ListBoxResolutions->ItemIndex;
    const Resolution &res = m_resolutionService->ResolutionAtIndex(index);
    m_iniService->UpdateResolution(res);
    Close();
}

AnsiString TMainForm::CreateResolutionText(const Resolution &res) const
{
    return Format("%d x %d", ARRAYOFCONST((res.width, res.height)));
}

