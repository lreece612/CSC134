#include <cstdio>

#define MEOW 3.14

int main() {
    #if (33 < 34)
        printf("yo\n");
    #elif (3+3 == 6)
        printf("hey\n");
    #endif

    printf("%f", MEOW);
}
