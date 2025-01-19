#pragma hdrstop

#include "Resolution.h"

#pragma package(smart_init)

Resolution::Resolution()
    : width(0)
    , height(0)
{
}

Resolution::Resolution(int a_width, int a_height)
    : width(a_width)
    , height(a_height)
{
}

bool Resolution::operator ==(const Resolution &rhs) const
{
    if (this == &rhs) {
        return true;
    }

    return width == rhs.width && height == rhs.height;
}

bool Resolution::operator <(const Resolution &rhs) const
{
    if (this == &rhs) {
        return false;
    }

    if (width < rhs.width) {
        return true;
    }
    else if (width == rhs.width) {
        return height < rhs.height;
    }

    return false;
}
