
//Swapping two numbers 

#include<stdio.h> 
 int main()    
 {    
	int a,b;
	printf("Enter two numbers to be swapped:\n")
	scanf("%d %d",&a,&b);      
	printf("Before swap a=%d b=%d",a,b);  
	int temp;    
	temp=a;  
	a=b;    
	b=temp;    
	printf("\nAfter swap a=%d b=%d",a,b);    
	return 0;  
 } 