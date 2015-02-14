#ifndef INTEGER_H
#define INTEGER_H

#include "object.h"

struct integer {
    struct object super;
    struct {
        struct integer * (*new) (void);
        void (*initialize) (struct integer *integer);
        const char * (*to_string) (void);
        const int (*get_number) (struct integer *this);
        void (*set_number) (struct integer *this, int number);
        int number;
    } this;
};

extern struct integer Integer;

#endif
