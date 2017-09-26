#include "stdio.h"
#include "vec.h"

double vec_dot(const struct vec* v1, const struct vec* v2)
{
    return v1->a*v2->a + v1->b*v2->b;
}

void vec_print(const struct vec* self, const char *extra)
{
    printf("vec: %s {a: %g b: %g}\n",
           extra, self->a, self->b);
}
