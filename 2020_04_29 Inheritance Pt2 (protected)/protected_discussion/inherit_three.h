
#ifndef INHERIT_THREE_H
#define INHERIT_THREE_H

#include "sample_base.h"

class inherit_three : public sample_base {
public:
    inherit_three();
    inherit_three(const inherit_three& orig);
    virtual ~inherit_three();
private:

};

#endif /* INHERIT_THREE_H */

