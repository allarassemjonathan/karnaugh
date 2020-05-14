#include <stdio.h>

int main()
{

int n;
int comp;
int pow;
int rep;


printf("entrer une valeur\n");
scanf("%d",&n);


rep=1;
for(int i=0;i<n;i++){
 rep=2*rep;
}



int E[2*pow];

for(int i=0;i<n;i++){
comp=0;

do{

pow=1;
for(int z=0;z<i;z++){
 pow=2*pow;
}



for(int j=0;j<pow;j++){
printf("0");
E[j]=0;
comp++;
}
for(int j=0;j<pow;j++){
E[j+pow]=1;
printf("1");
comp++;
}


}while(comp<rep);
printf("\n");
}

int tab[rep];

printf("entrer la valeur sortie du Systeme\n");

for(int i=0;i<rep;i++){

scanf("%d",&tab[i]);

}



for(int i=0;i<2*pow;i++){

printf("%d",E[i]);

}










}












