#include <vcl.h>
#pragma hdrstop

#include <memory>

#include "Ra2IniService.h"

#pragma package(smart_init)

void Ra2IniService::UpdateResolution(const Resolution &res)
{
    std::auto_ptr<TIniFile> iniFile(LoadRa2IniFile());
    iniFile->WriteString("Video", "ScreenWidth", IntToStr(res.width));
    iniFile->WriteString("Video", "ScreenHeight", IntToStr(res.height));
}

TIniFile* Ra2IniService::LoadRa2IniFile()
{
    AnsiString filename = ExtractFilePath(Application->ExeName) + "RA2.ini";
    return new TIniFile(filename);
}




