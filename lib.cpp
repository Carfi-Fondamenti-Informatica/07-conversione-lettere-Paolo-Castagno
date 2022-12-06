#include "lib.h"

bool maiuscola (char &k){
    if (k>64 && k<91){
        k+=32;
        return true; 
    } else {
        return false;  
    }
    }


bool minuscola (char &k){
    if (k>96 && k<123){
        k-=32;
        return true;  
    } else {
        return false;  
    }
    
    }

