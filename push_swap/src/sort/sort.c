#include "../../push_swap.h"

int check(int *pila_a , int *size_a ){
    if(size_a[0] != size_a[1])
        return 0;
    int i = 0;
    while( i < size_a[0] && pila_a[i] < pila_a[i + 1]){
        i ++;
    }
    if ( i == size_a[0]-1){
        return 1;
    }
    else{
        return 0;
    }
}

int maxim(int *pila, int *size){
    int i = 0;
    int max = -23343545;
    int indice = 0;

    while(i<size[0]){
        if(pila[i] > max){
            max = pila[i];
            indice = i;
        }
        i ++;
    }

    return indice;
}

void sort_tre_numeri(int *pila_a , int *size_a ){
    int max = maxim(pila_a,size_a);
    int move = 0;
    
    if(max == 0){
        rab(pila_a,size_a[0]);
        move ++;
    }
    else if(max == 1){
        rrab(pila_a,size_a[0]);
        move++;
    }

    if(pila_a[0] > pila_a[1]){
        sab(pila_a,size_a[0]);
        move++;
    }

}

void sort(int *pila_a , int *size_a , int *pila_b , int*size_b){
    
    if(check(pila_a,size_a)){
        return;
    }
    int move = 0;
    int max;
    int i;
     
        while( size_a[0] > 1 ){
            if ( pila_a[0] > pila_a[1]){
                sab(pila_a,size_a[0]);
                pb(pila_a,size_a,pila_b,size_b);
                move += 2;
            }
            else{
                 pb(pila_a,size_a,pila_b,size_b);
                 move ++;
            }
        }

        while( size_b[0] > 0){
            i = 0;
            max = maxim(pila_b,size_b);
            if (max <= (size_b[0] / 2)){
                while(i < max ){
                    rab(pila_b,size_b[0]);
                    move ++;
                    i++;
                }
            }
            else{
                while(i < size_b[0] - max){
                    rrab(pila_b,size_b[0]);
                    move ++;
                    i++;
                }
            }
            pa(pila_a,size_a,pila_b,size_b);
            
            move ++;
        }
        printf(" hai fatto %d mosse \n" ,move);
}