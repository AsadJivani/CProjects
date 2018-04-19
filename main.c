#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(){
	int a;
 scanf("%d",&a);	
 int array[10]={1,2,3,4,5,6,7,8,9,10};
 int start=0;
 int end=9;
 int mid;
 int milagaya=0;
 while(start<=end){
 mid=(start+end)/2;	
 if(array[mid]==a)	
 {
	printf("Found !");
	milagaya=1;
	break;
 }	
 else if(a>array[mid]){
 		start=mid+1;  	
 }
 else if(a<array[mid]){
 		end=mid-1;
  }
}
if(milagaya==0){
	printf("Not Found !");
}
}
