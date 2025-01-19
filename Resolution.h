#ifndef RESOLUTION_H
#define RESOLUTION_H

struct Resolution
{
    int width;
    int height;

    Resolution();
    Resolution(int width, int height);
    bool operator ==(const Resolution &rhs) const;
    bool operator <(const Resolution &rhs) const;
};

#endif

