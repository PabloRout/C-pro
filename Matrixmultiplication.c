#include<stdio.h>
int main(){
    //here we take input the matricx row and column 
    int r1,r2,c1,c2;
    printf("enter the first matrix row and column respectivilly\n");
    scanf(" %d %d",&r1,&c1);
    printf("enter the second matrix row and column respectivilly\n");
    scanf(" %d %d",&r2,&c2);

    // now we cheak for this two matrix the multiplication is possible or not

    if(c1 != r2){
        printf("the matrix multiplication not possible\n");
    }
    else{
        //here we defie the twomatrix and a result matrix to store the multiplid matrix
        int matrix1[r1][c1];
        int matrix2[r2][c2];
        int matrix3[r1][c2];
        
        for(int i = 0;i<r1;i++){
            for(int j = 0;j<c2;j++){
                matrix3[i][j] = 0;
            }
        }

        //now we just enter the information of the two matrix and display it
        printf("\nenter the first matrix information\n");
        for(int i = 0;i<r1;i++){
            for(int j = 0;j<c1;j++){
                printf("enter the %d th rows %d th columns value\n",i,j);
                scanf(" %d",&matrix1[i][j]);
            }
        }
        printf("\nthe first matrix you enter is given below\n");
        for(int i = 0;i<r1;i++){
            for(int j = 0;j<c1;j++){
                printf("%d\t",matrix1[i][j]);
            }
            printf("\n");
        }
        printf("\nenter the second matrix information\n");
        for(int i = 0;i<r2;i++){
            for(int j = 0;j<c2;j++){
                printf("enter the %d th rows %d th columns value\n",i,j);
                scanf(" %d",&matrix2[i][j]);
            }
        }
        printf("\nthe second matrix you enter is given below\n");
        for(int i = 0;i<r2;i++){
            for(int j = 0;j<c2;j++){
                printf("%d\t",matrix2[i][j]);
            }
            printf("\n");
        }

        //now we just multiply it and store the value in our reslt matrix which is matrix3
        for(int i = 0;i<r1;i++){
            for(int j = 0;j<c2;j++){
                for(int k = 0;k<c1;k++){
                    matrix3[i][j] = matrix3[i][j] + matrix1[i][k] * matrix2[k][j];
                }
            }
        }

        //now we just display the result

        printf("\nthe ans is given below\n");
        for(int i = 0;i<r1;i++){
            for(int j = 0;j<c2;j++){
                printf("%d\t",matrix3[i][j]);
            }
            printf("\n");
        }

    }
    return 0;
}