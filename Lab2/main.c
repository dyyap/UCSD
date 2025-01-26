#include <unistd.h>
   
int myAdd(int a, int b){
        sleep(0.5);
        return a+b;
}

int myMult(int a, int b){
    sleep(1);
    return a*b;
}