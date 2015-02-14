#include "integer.h"
#include "object.h"

#include <stdlib.h>

const char *integer_to_string(void)
{
    return "Integer";
}

const int integer_get_number(struct integer *this)
{
    return this->this.number;
}

void integer_set_number(struct integer *this, int number)
{
    this->this.number = number;
}

struct integer *integer_new(void);
void integer_initialize(struct integer *integer)
{
    integer->this.new = integer_new;
    integer->this.initialize = integer_initialize;
    integer->this.to_string = integer_to_string;
    integer->this.get_number = integer_get_number;
    integer->this.set_number = integer_set_number;
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
        .to_string = integer_to_string,
        .get_number = integer_get_number,
        .set_number = integer_set_number
    }
};
