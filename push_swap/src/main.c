#include "../push_swap.h"


void print(int *pila, int size){
int i = 0;
while(i < size){
    printf("%d\n",pila[i]);
    i ++;
}
}
void init(int argc , int *size_a, int *size_b){
  size_a[0] = argc-1;
  size_a[1] = size_a[0];
  size_b[0] = 0;
}

int main(int argc, char **argv){

int *pila_a = malloc((argc - 2) * sizeof(int));
int *size_a = malloc(2*sizeof(int));
int *pila_b = malloc((argc - 2) * sizeof(int));
int *size_b = malloc(sizeof(int));

init(argc,size_a,size_b);
int i = 1;

while(i < argc){
  pila_a[i-1] = atoi(argv[i]);
    i++;
}


sort(pila_a,size_a,pila_b,size_b);
printf("pila b -- \n");
print(pila_b,size_b[0]);
printf("pila a -- \n");
print(pila_a,size_a[0]);
//rra(pila_a,argc-1);
}