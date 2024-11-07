#include <stdio.h>

int change_num(int n){
    n = 15;

    return n;
}


int change_num_pointer(int *n){
    *n = 15;

    return *n;
}

int main(){

int x = 20;
int y;

y = change_num(x);
printf("without pointer %d\n", x);


y = change_num_pointer(&x);
printf("with pointer %d\n", x);

}