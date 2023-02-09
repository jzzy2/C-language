#include<stdio.h>

int main(){
	// ESPINA JOHN CARLO BSCS-1-YA-1
	
	//data types
	int enternumber1, enternumber2, enternumber3;
	
	
	printf("Enter number 1: ");
	scanf("%d", &enternumber1);
	
	printf("Enter number 2: ");
	scanf("%d", &enternumber2);
	
	printf("Enter number 3: ");
	scanf("%d", &enternumber3);
	// IF ELSE STATEMENT
	if (enternumber1 >= enternumber2 && enternumber1 >= enternumber3){
		printf("the largest number: %d",enternumber1);	
	} else if  (enternumber2 >= enternumber3 && enternumber2 >= enternumber1){
		printf("the largest number: %d",enternumber2);
	}else{ printf("the largest number: %d ",enternumber3);
}
	
	
	
	
	return 0;
}
