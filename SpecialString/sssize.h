#ifndef SSSIZE_H
#define SSSIZE_H

#include "ssprependfunction.h"


class SSSize : public SSPrependFunction
{
public:
    SSCONSTRUCTORS(SSSize, SSPrependFunction)
    int size() const { return get().size(); }
};

#endif // SSSIZE_H
