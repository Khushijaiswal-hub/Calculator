//CALCULATOR
#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int a,b;
char o;
printf("enter your operator= ");
scanf("%c",&o);
printf("enter the value of a= ");
scanf("%d",&a);
printf("enter the vlaue of b= ");
scanf ("%d",&b);
if(o=='+'){
printf (" sum= %d",a+b);
}
else if (o=='-'){
printf("subs= %d",a-b);
}
 else if(o=='%'){
printf(" div= %d",a%b) ;}
getch();
}



