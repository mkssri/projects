#include <stdio.h>

typedef struct collection {
    int a;
    int b;
    char c;
} collection_t;

int main(){

    collection_t coll1;
    collection_t coll2;

    coll1.a = 10;
    coll1.b = 20;
    coll1.c = 'a';
    
    coll2.a = 11;
    coll2.b = 21;
    coll2.c = 'b';

    printf("coll1.a: %d, coll1.b: %d , coll1.c: %c\n", coll1.a, coll1.b, coll1.c);
    printf("coll2.a: %d, coll2.b: %d , coll2.c: %c\n", coll2.a, coll2.b, coll2.c);

    return 0;
}
