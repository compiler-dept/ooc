#include "integer.h"
#include "object.h"

#include <stdlib.h>

const char *integer_to_string(void)
{
    return "Integer";
}

struct integer *integer_new(void);
void integer_initialize(struct integer *integer)
{
    integer->this.new = integer_new;
    integer->this.initialize = integer_initialize;
    integer->this.to_string = integer_to_string;
}

struct integer *integer_new(void)
{
    struct integer *integer = malloc(sizeof(struct integer));
    Object.initialize(&(integer->super));
    Integer.this.initialize(integer);

    return integer;
}

struct integer Integer = {
    .this = {
        .new = integer_new,
        .initialize = integer_initialize,
        .to_string = integer_to_string
    }
};
