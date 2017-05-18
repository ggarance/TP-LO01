#include <stdio.h>
#include <stdlib.h>
#define MAX 4

int recherchePosition(int x, int n, int tab[])
{
    int i=0;
    while ((tab[i]<x) && (i<=n))
        i++;
    return i;

}

void insereEntier( int x, int position, int tab[], int n)       // si n=MAX
{
    //if(n==MAX){
      //  n=n-1;//La valeur dans la case d'indice n=MAX est supprimé pour conserver un tableau avec un nombre de valeur =<MAX.
    //}

    int i=0;
    for (i=n; i>=position;i--)
        tab[i+1]=tab[i];
    tab[position]=x;
}


int main()
{
    int position, n=0,entier,i;
    int continuer;
    int tab[MAX];
    /*tab[0]=20;
    tab[1]=22;
    tab[2]=24;*/

   /* position= recherchePosition(21, 3, tab);
    printf("%d\n",position);
    insereEntier( 21, position, tab, 3);
    printf("%d", tab[2]);*/

    do{
            printf("Entrez un entier svp\n");
            scanf("%d",&entier);
            position=recherchePosition(entier,n,tab);
            insereEntier(entier, position, tab, n);
            n++;
            for(i=0;i<n;i++)
                printf("\n%d",tab[i]);
            printf("\nPour continuer, tapez 1\n");
            scanf("%d",&continuer);
            } while((continuer==1)&&(n<MAX));*















    return 0;

}
