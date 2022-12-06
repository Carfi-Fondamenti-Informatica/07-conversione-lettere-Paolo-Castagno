#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char a;
    cin >>a;
    if (maiuscola (&a)==true || minuscola (&a)==true){
        cout<< "vero" <<endl;
        cout<<a;
    } else {
        cout <<"falso";
    }
    
    return 0;
}
