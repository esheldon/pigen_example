#ifndef _PIGEN_EXAMPLE_POINT_HEADER

struct vec {
    double a;
    double b;
};


double vec_dot(const struct vec* v1, const struct vec* v2);
void vec_print(const struct vec* self, const char *extra);

#endif
