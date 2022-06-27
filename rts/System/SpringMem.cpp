#ifdef USE_MIMALLOC
    #include <mimalloc.h>
#else
    #ifdef _WIN32
        #include <malloc.h>
    #else
        #include <cstdlib>
    #endif
#endif

#include "SpringMem.h"


void* spring::AllocateAlignedMemory(size_t size, size_t alignment)
{
#ifdef _WIN32
    return _aligned_malloc(size, alignment);
#else
    void* ptr = nullptr;
    posix_memalign(&ptr, alignment, size);
    return ptr;
#endif
}

void spring::FreeAlignedMemory(void* ptr)
{
    if (ptr)
    {
#ifdef _WIN32
        _aligned_free(ptr);
#else
        std::free(ptr);
#endif
    }
}

void* spring::malloc(size_t size)
{
#ifdef USE_MIMALLOC
    return mi_malloc(size);
#else
    return std::malloc(size);
#endif
}

void spring::free(void* _Block)
{
#ifdef USE_MIMALLOC
    mi_free(_Block);
#else
    std::free(_Block);
#endif
}
