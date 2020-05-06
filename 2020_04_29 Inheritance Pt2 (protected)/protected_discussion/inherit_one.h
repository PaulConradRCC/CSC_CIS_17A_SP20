#ifndef INHERIT_ONE_H
#define INHERIT_ONE_H

#include "sample_base.h"

class inherit_one : private sample_base {
public:
    inherit_one();
    inherit_one(const inherit_one& orig);
    virtual ~inherit_one();
private:

};

#endif /* INHERIT_ONE_H */

