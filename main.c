#include <stdio.h>
#include <stdlib.h>
#define MAXM 2
#define MAXN 2
#define MAXP 2


void addition(int A[][MAXN],int B[][MAXN],int C[][MAXN], int m,int n){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            C[i][j]=A[i][j]+B[i][j];
    }
}

void soustraction(int A[][MAXN],int B[][MAXN],int C[][MAXN], int m,int n){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            C[i][j]=A[i][j]-B[i][j];
    }
}
void produit(int A[][MAXN],int B[][MAXP],int C[][MAXN], int m,int n,int p){
    int i,j,k;
    for(i=0;i<m;i++){
        for(j=0;j<p;j++){
            for(k=0;k<n;k++)
                C[i][j]+=A[i][k]*B[k][j];}


            }

    }


int main()
{

    int C[MAXN][MAXN];
    int A[MAXM][MAXN];
    int B[MAXN][MAXP];
    //B[0][0]=5;
    //A[0][0]=5;
    //addition(A,B,C,1,1);
    //printf("%d\n",C[0][0]);
    int i,j;
    for(i=0;i<MAXM;i++){//matrice A et affichage matrice A
        for(j=0;j<MAXN;j++)
            scanf("%d",&A[i][j]);}
    for(i=0;i<MAXM;i++){
            printf("\n");
            for(j=0;j<MAXN;j++)
                printf("\t%d",A[i][j]);}

    for(i=0;i<MAXN;i++){//matrice B et affichage matrice B
        for(j=0;j<MAXP;j++)
            scanf("%d",&B[i][j]);}
    for(i=0;i<MAXN;i++){
            printf("\n");
            for(j=0;j<MAXP;j++)
                printf("\t%d",B[i][j]);}

    produit(A,B,C,MAXM,MAXN,MAXP);

    for(i=0;i<MAXN;i++){
            printf("\n");
            for(j=0;j<MAXN;j++)
                printf("\t%d",C[i][j]);}


    return 0;
}
