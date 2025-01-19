#ifndef RESOLUTION_SERVICE_H
#define RESOLUTION_SERVICE_H

#include <vcl.h>
#pragma hrdstop

#include <vector>

#include "Resolution.h"

class ResolutionService
{
public:
    ResolutionService();

    int NumberOfResolutions() const;
    const Resolution& ResolutionAtIndex(int index) const;

private:
    std::vector<Resolution> m_resolutions;
};

#endif

