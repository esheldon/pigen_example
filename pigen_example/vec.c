#include "vec.h"

double vec_dot(const struct vec* v1, const struct vec* v2)
{
    return v1->a*v2->a + v1->b*v2->b;
}
