#include <stdio.h>
int main (){
	int a1[10][10],a2[10][10],sum[10][10],row1,col1,row2,col2;
	
	printf("enter the number of rows and columns for matrix 1");
	scanf("%d%d",&row1,&col1);
	printf("enter the values to be entered to matrix 1 : \n");
	
	for(int i=0;i<row1;i++){
	for(int j=0;j<col1;j++){
		scanf("%d",&a1[i][j]);					//----------matrix 1-----//
		}
	}

	printf("enter the number of rows and columns for matrix 2");
	scanf("%d%d",&row2,&col2);
	printf("enter the values to be entered to matrix 2 : \n");

	for(int i=0;i<row2;i++){
	for(int j=0;j<col2;j++){
		scanf("%d",&a2[i][j]);
		}							//----------matrix2------//
	}
	
	printf("the values of matrix 1 are \n");
	
	for(int i=0;i<row1;i++){
	for(int j=0;j<col1;j++){
		printf("%d  ",a1[i][j]);
		}
	printf("\n");
	}
	
	printf("the values of matrix 2 are \n");
	
	for(int i=0;i<row2;i++){
	for(int j=0;j<col2;j++){
		printf("%d  ",a2[i][j]);
		}
	printf("\n");
	}
	
	//-------------------------------------------sum---------------------------------------
	if((row1==row2)&&(col1==col2)){
	
	for(int i=0;i<row1;i++){
	for(int j=0;j<col1;j++){
		sum[i][j]=a1[i][j]+a2[i][j];
		}
	}
	
	printf("the values of sum matrix is \n\n");
	
	for(int i=0;i<row1;i++){
	for(int j=0;j<col1;j++){
		printf("%d  ",sum[i][j]);
		}
	printf("\n");
	}
	//----------------------------------------diagonal-finding----------------------------------
	printf("the diagonal values are :");
	for(int i=0;i<row1;i++){
	for(int j=0;j<col1;j++){
		if(i==j)
		printf("%d  ",sum[i][j]);
		}
	}
	printf("\n");
	}
	
	//------------------------------------------non-sqr-matrix-----------------------------------
	else
	{
	  printf("rows and cols doesnt match and isnt a square matrix \n");
	}
	return 0;
}
