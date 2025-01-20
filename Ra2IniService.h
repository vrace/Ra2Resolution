#ifndef RA2_INI_SERVICE_H
#define RA2_INI_SERVICE_H

#include <IniFiles.hpp>

#include "Resolution.h"

class Ra2IniService
{
public:
    void UpdateResolution(const Resolution &res);

private:
    TIniFile* LoadRa2IniFile();
};

#endif

