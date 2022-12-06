#include <iostream>
#include "lib.h"

using namespace std;


int main() {
    char a;
    cin >>a;
    if (maiuscola (a) || minuscola (a)){
        cout<<"vero"<<endl;
        cout<<a;
    } else {
        cout <<"falso";
    }
    
    return 0;
}
