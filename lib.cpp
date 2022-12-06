#include "lib.h"

bool caratteri(char &x){
    if(x >= 65 && x <= 90){
        x += 32;
        return true;
    }else if(x >= 97 && x <= 122){
        x -= 32;
        return true;
    }else
        return false;
}


