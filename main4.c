#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(){

int n;
scanf("%d",&n);
print_recursive(n-1);

}


void print_recursive(int n) { 
    printf("%d\n", n);
    if (n > 1)
        print_recursive(n-1);
  
}

