#ifndef SSSIZE_H
#define SSSIZE_H

#include "ssprependfunction.h"

/**Size and clear*/
class SSSize : public SSPrependFunction
{
public:
    SSCONSTRUCTORS(SSSize, SSPrependFunction)
    int size() const { return get().size(); }
    int lenght() const { return size(); }
    void clear() { operator=(""); }
};

#endif // SSSIZE_H
