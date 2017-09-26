#include "vec.h"

double vec_dot(const struct vec* p1, const struct vec* p2)
{
    return p1->a*p2->a + p1->b*p2->b;
}
