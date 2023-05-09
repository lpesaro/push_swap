#include "../../push_swap.h"


void sab(int *a , int size){
    int temp;
    if(size < 1){
        return;
    }
    temp = a[0];
    a[0] = a[1];
    a[1] = temp;
}


void rrab(int *a , int size){
    int temp;
    int i;
    if(size < 1){
        return;
    }
    i = size ;
    temp = a[size - 1];

    while(i--){
        a[i] = a[i-1];
    }
    a[0] = temp;
   
}


void rab(int *a , int size){
    int temp;
    int i;
    if(size < 1){
        return;
    }
    i = 0;
    temp = a[0];

    while(i < size){
        a[i] = a[i+1];
        i++;
    }
    a[size-1] = temp;
   

}

void pb(int *pila_a , int *size_a , int *pila_b , int *size_b){

if(size_a[0] == 0){
    return;
}
int i ;
i= size_b[0]++;
while(i > 0){
   
   pila_b[i] = pila_b[i-1];

i --;    
}
pila_b[0] = pila_a[0];

size_a[0]--;
rab(pila_a,size_a[0] + 1);

}

void pa(int *pila_a , int *size_a , int *pila_b , int *size_b){

if(size_b[0] == 0){
    return;
}
int i ;
i= size_a[0]++;
while(i > 0){
   
   pila_a[i] = pila_a[i-1];

i --;    
}
pila_a[0] = pila_b[0];

size_b[0]--;
rab(pila_b,size_b[0] + 1);

}

void ss(int*pila_a,int *size_a,int*pila_b,int*size_b){
    sab(pila_a,size_a[0]);
    sab(pila_b,size_b[0]);
}

void rr(int*pila_a,int*size_a,int*pila_b,int*size_b){
    rab(pila_a,size_a[0]);
    rab(pila_b,size_b[0]);
}

void rrr(int*pila_a,int*size_a,int*pila_b,int*size_b){
    rrab(pila_a,size_a[0]);
    rrab(pila_b,size_b[0]);
}
