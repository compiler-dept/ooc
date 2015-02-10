#ifndef INTEGER_H
#define INTEGER_H

#include "object.h"

struct integer {
    struct object super;
    struct {
        struct integer * (*new) (void);
        void (*initialize) (struct integer *integer);
        const char * (*to_string) (void);
        int number;
    } this;
};

extern struct integer Integer;

#endif
