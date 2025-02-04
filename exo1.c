# include <stdio.h>
int main(){
    int A,B,C,D,n;
    printf("entrer les valeurs de A, B ,C ,D.");
    scanf("%d %d %d %d", &A,&B,&C,&D);
        D=A;
        A=B;
        B=C;
        C=D;
       
    printf(" A = %d,B = %d,C = %d\n", A,B,C);
}