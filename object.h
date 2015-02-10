#ifndef OBJECT_H
#define OBJECT_H

struct object {
    struct object * (*new) (void);
    void (*initialize) (struct object *object);
    const char * (*to_string) (void);
};

extern struct object Object;

#endif
