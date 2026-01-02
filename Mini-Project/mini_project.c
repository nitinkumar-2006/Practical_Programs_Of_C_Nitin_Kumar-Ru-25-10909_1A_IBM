// Display size of all C data types and limits from `limits.h`,`float.h`
#include <stdio.h>
#include <limits.h>
#include <float.h>
int main() {
    printf("C Data Types Size and Limits:\n\n");

    // Integer types
    printf("char:\n");
    printf("  Size: %zu bytes\n", sizeof(char));
    printf("  Min: %d\n", CHAR_MIN);
    printf("  Max: %d\n\n", CHAR_MAX);

    printf("short:\n");
    printf("  Size: %zu bytes\n", sizeof(short));
    printf("  Min: %d\n", SHRT_MIN);
    printf("  Max: %d\n\n", SHRT_MAX);

    printf("int:\n");
    printf("  Size: %zu bytes\n", sizeof(int));
    printf("  Min: %d\n", INT_MIN);
    printf("  Max: %d\n\n", INT_MAX);

    printf("long:\n");
    printf("  Size: %zu bytes\n", sizeof(long));
    printf("  Min: %ld\n", LONG_MIN);
    printf("  Max: %ld\n\n", LONG_MAX);

    printf("long long:\n");
    printf("  Size: %zu bytes\n", sizeof(long long));
    printf("  Min: %lld\n", LLONG_MIN);
    printf("  Max: %lld\n\n", LLONG_MAX);

    // Floating-point types
    printf("float:\n");
    printf("  Size: %zu bytes\n", sizeof(float));
    printf("  Min: %.10e\n", FLT_MIN);
    printf("  Max: %.10e\n", FLT_MAX);
    printf("  Precision: %d digits\n\n", FLT_DIG);

    printf("double:\n");
    printf("  Size: %zu bytes\n", sizeof(double));
    printf("  Min: %.10e\n", DBL_MIN);
    printf("  Max: %.10e\n", DBL_MAX);
    printf("  Precision: %d digits\n\n", DBL_DIG);

    printf("long double:\n");
    printf("  Size: %zu bytes\n", sizeof(long double));
    printf("  Min: %.10Le\n", LDBL_MIN);
    printf("  Max: %.10Le\n", LDBL_MAX);
    printf("  Precision: %d digits\n", LDBL_DIG);

    return 0;
}
            