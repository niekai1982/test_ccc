//
// Created by nieka on 2017-1-2.
//

#ifndef TEST_CCC_OPERATION_H
#define TEST_CCC_OPERATION_H

#endif //TEST_CCC_OPERATION_H

#include "stdio.h"
#include "stdlib.h"

int add(int a, int b);
int mul(int a, int b);

inline void* wrMalloc( size_t size ) { return malloc(size); }
inline void wrFree( void * ptr ) { free(ptr); }
//template<class iT, class oT> void normalize( iT *I, oT *J, int n, oT nrm );

// platform independent aligned memory allocation (see also alFree)
void* alMalloc( size_t size, int alignment ) {
    const size_t pSize = sizeof(void*), a = alignment-1;
    void *raw = wrMalloc(size + a + pSize);
    void *aligned = (void*) (((size_t) raw + pSize + a) & ~a);
    *(void**) ((size_t) aligned-pSize) = raw;
    return aligned;
}

// platform independent alignned memory de-allocation (see also alMalloc)
void alFree(void* aligned) {
    void* raw = *(void**)((char*)aligned-sizeof(void*));
    wrFree(raw);
}
