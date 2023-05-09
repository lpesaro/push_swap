
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <errno.h>

typedef struct s_move {
	int move;
}	t_move;

void sab(int *a,int size);
void rab(int *a , int size);
void rrab(int *a , int size);
void pb(int *pila_a , int *size_a , int *pila_b , int *size_b);
void pa(int *pila_a , int *size_a , int *pila_b , int *size_b);
void rr(int *pila_a , int *size_a , int *pila_b , int *size_b);
void rrr(int *pila_a , int *size_a , int *pila_b , int *size_b);
void ss(int *pila_a ,int* size_a, int *pila_b,int *size_b );
void sort(int *pila_a , int *size_a , int *pila_b , int*size_b);
void sort_tre_numeri(int *pila_a , int *size_a );
void upmax( int *pila_b , int*size_b);
#endif