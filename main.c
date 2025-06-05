#include<stdio.h>
int main()
{
    int r1,c1;
    printf("Enter row size of array one : ");
    scanf("%d",&r1);
    printf("Enter column size of array one : ");
    scanf("%d",&c1);
    int r2,c2;
    printf("Enter row size of array two : ");
    scanf("%d",&r2);
    printf("Enter column size of array two : ");
    scanf("%d",&c2);
    int arr1[r1][c1];
    int arr2[r2][c2];
    for(int i=0;i<r1;i++){          //input matrix 1
        for(int j=0;j<c1;j++){
            printf("Enter Element (%d,%d) of matrix one : ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    for(int i=0;i<r2;i++){           //input matrix 2
        for(int j=0;j<c2;j++){
            printf("Enter Element (%d,%d) of matrix two : ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("This is the first matrix: \n");
    for(int i=0;i<r1;i++){        //print matrix 1
        for(int j=0;j<c1;j++){
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    printf("This is the second matrix: \n");
    for(int i=0;i<r2;i++){      //print matrix 2
        for(int j=0;j<c2;j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    if(c1==r2){

       int res[r1][c2];          
        for(int i=0;i<r1;i++){         //loop for multiply of matrix and store in res matrix 
            for(int j=0;j<c2;j++){
                res[i][j]=0;
                for(int k=0;k<c1;k++){
                 res[i][j]+=arr1[i][k]*arr2[k][j];
                }
            }
        }
     printf("This resultant matrix is : \n");
        for(int i=0;i<r1;i++){          //loop for display the res matrix
            for(int j=0;j<c2;j++){
                printf("%d ",res[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("Multiply is not possible");
    }
    return 0;
}
