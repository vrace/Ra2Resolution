#pragma hdrstop

#include <fstream>
#include <string>

#include "Ra2IniService.h"

#pragma package(smart_init)

bool Ra2IniService::UpdateResolution(const Resolution &res)
{
    std::vector<std::string> rows = LoadIniRows();
    return false;
}

std::vector<std::string> Ra2IniService::LoadIniRows()
{
    std::vector<std::string> rows;
    std::ifstream fs("RA2.ini");

    if (fs.is_open()) {
        std::string row;
        while (std::getline(fs, row)) {
            rows.push_back(row);
        }
    }

    return rows;
}


