# include<stdio.h>
int main(){
char firstName[30];
printf("enter the firstName\n");
scanf("%s",&firstName);
printf("%s",firstName);

char lastName[30];
printf("enter the lastName\n");
scanf("%s",&lastName);
printf("%s",lastName);

char regNo[20];
printf("enter your regNo\n");
scanf("%s",&regNo);
printf("%s",regNo);
//marks scored by the student in different units.

float introduction_to_programming;
printf("enter marks scored in introduction_to_programming\n");
scanf("%f",&introduction_to_programming);
printf("%f",introduction_to_programming);

float networking;
printf("enter marks scored in networking\n");
scanf("%f",&networking);
printf("%f",networking);

float accounting;
printf("enter marks scored in accounting\n");
scanf("%f",&accounting);
printf("%f",accounting);
 
 float operatingSystem;
 printf("enter marks scored in operatingSystem\n");
 scanf("%f",&operatingSystem);
 printf("%f", operatingSystem);
 
 float computerApplication;
 printf("enter marks scored in computerApplication\n");
 scanf("%f",&computerApplication);
 printf("%f",computerApplication);
return 0;
}