#include <stdlib.h>
#include <stdio.h>
int main() {
	int matrix1 [3][3]  = {{1,2,3},{4,5,6},{7,8,9}};
	int matrix2 [3][3]  = {{1,2,4},{5,6,7},{8,9,10}}; 
	int row = sizeof(matrix1)/sizeof(matrix1[0]);
	int column = sizeof(matrix2[0])/sizeof(matrix2[0][0]  );  
	int count = sizeof(matrix1[0])/sizeof(matrix1[0][0]  );  
	int matrix3 [row][column]; 
	for(int r = 0;r<row;r++){
		for(int c = 0;c<column;c++){
			int sum = 0;
			for(int k = 0; k<count;k++){
				sum += matrix1[r][k] *matrix2[k][c];
			}
			matrix3[r][c] = sum; 
		}  
	}
	for(int r = 0;r<row;r++){
		for(int c = 0; c<column;c++){
			printf("%d ",matrix3[r][c]); 
		} 
		printf("\n" );  
	} 
	return 0;
}
