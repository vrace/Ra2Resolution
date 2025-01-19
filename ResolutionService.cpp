#pragma hdrstop

#include <algorithm>

#include "ResolutionService.h"

#pragma package(smart_init)

ResolutionService::ResolutionService()
{
    DEVMODE devMode;
    devMode.dmSize = sizeof(devMode);

    int modeNum = 0;
    while (EnumDisplaySettings(NULL, modeNum++, &devMode)) {
        if (devMode.dmFields & (DM_PELSWIDTH | DM_PELSHEIGHT)) {
            Resolution res((int)devMode.dmPelsWidth, (int)devMode.dmPelsHeight);
            if (std::find(m_resolutions.begin(), m_resolutions.end(), res) == m_resolutions.end()) {
                m_resolutions.push_back(res);
            }
        }
    }

    std::sort(m_resolutions.begin(), m_resolutions.end());
}

int ResolutionService::NumberOfResolutions() const
{
    return (int)m_resolutions.size();
}

const Resolution& ResolutionService::ResolutionAtIndex(int index) const
{
    return m_resolutions[index];
}
