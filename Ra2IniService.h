#ifndef RA2_INI_SERVICE_H
#define RA2_INI_SERVICE_H

#include <vector>
#include <string>

#include "Resolution.h"

class Ra2IniService
{
public:
    bool UpdateResolution(const Resolution &res);

private:
    std::vector<std::string> LoadIniRows();
};

#endif

