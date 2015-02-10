#include "object.h"

#include <stdlib.h>

const char *object_to_string(void)
{
    return "Object";
}

struct object *object_new(void);
void object_initialize(struct object *object)
{
    object->new = object_new;
    object->initialize = object_initialize;
    object->to_string = object_to_string;
}

struct object *object_new(void)
{
    struct object *object = malloc(sizeof(struct object));
    object_initialize(object);

    return object;
}

struct object Object = {
   .new = object_new,
   .initialize = object_initialize,
   .to_string = object_to_string
};
