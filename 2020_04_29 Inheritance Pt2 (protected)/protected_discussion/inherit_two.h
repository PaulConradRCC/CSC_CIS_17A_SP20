
#ifndef INHERIT_TWO_H
#define INHERIT_TWO_H

#include "sample_base.h"

class inherit_two : protected sample_base {
public:
    inherit_two();
    inherit_two(const inherit_two& orig);
    virtual ~inherit_two();
private:

};

#endif /* INHERIT_TWO_H */

