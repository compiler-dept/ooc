#include <stdlib.h>
#include <stdio.h>

#include "object.h"
#include "integer.h"

int main(void)
{
    struct object *object = Object.new();
    struct integer *integer = Integer.this.new();

    printf("Object: %s\n", object->to_string());
    printf("Integer: %s\n", integer->super.to_string());
    printf("Integer: %s\n", integer->this.to_string());

    free(object);
    free(integer);
}
