#include <stidio.h>


int main(){
	
	int intList[3][3];
	
	int row, col;
		for( row = 0; row<3;row++)
		{
			for(col = 0 ; col <  row;col++);
			printf("enter number: ");
			scanf("%i", & intList[row][col]);
			}	
		
	
	
	
	
	return 0;
}
