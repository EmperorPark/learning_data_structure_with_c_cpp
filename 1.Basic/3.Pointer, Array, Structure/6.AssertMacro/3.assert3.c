#if defined (NDEBUG)
    #define assert(expr)    ((void) 0)
#else
    #define assert(expr)
        if(!(expr)) {
            
        }