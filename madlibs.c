#include <stdio.h>
#include <stdlib.h>

int main(){

char color[20];
char flower[20];
char celeb[20];

printf("Enter a color: ");
scanf("%s", color);
printf("Enter a Flower: ");
scanf("%s", flower);
printf("Enter a Person: ");
scanf("%s", celeb);

printf("Roses are %s\n", color);
printf("%s are blue\n", flower);
printf("I love %s\n", celeb);



    return 0;
}