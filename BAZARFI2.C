// BIG BAZAR BILL.......
#include<stdio.h>
#include<conio.h>
void main()
{
char name[20],cno[10],address[5],pname[8][20];
int pid[5],i;
int Uprice[5],qty[5],total[5];
float dis,amount=0.0;
clrscr();
textcolor(RED + BLINK);
cprintf("*******************.........Big Bazar Shop Bill....*****************************");
textcolor(YELLOW);
cprintf("enter your name-");

gets(name);
textcolor(YELLOW);
cprintf("enter your cno-");
gets(cno);
textcolor(YELLOW);
cprintf("enter your address-");
gets(address);
printf("\n-----------------------------------------------------------------------------");
for(i=0;i<=7;i++)
{
textcolor(CYAN);
cprintf("product id- %d",i+1);
textcolor(LIGHTGREEN);
cprintf("\nproduct name-");
fflush(stdin);
scanf("%s",&pname[i]);
textcolor(MAGENTA);
cprintf("qty-");
fflush(stdin);
scanf("%d",&qty[i]);
textcolor(WHITE);
cprintf("Uprice-");
fflush(stdin);
scanf("%d",&Uprice[i]);
total[i]=qty[i]*Uprice[i];
textcolor(LIGHTRED);
cprintf("\t total-%d",total[i]);
amount=amount*total[i];
printf("\n---------------------------------------------------\n");
}
printf("\n---------------------------------------------------------\n");
textcolor(CYAN);
cprintf("sno : product name : qty : unit price : total");
printf("\n---------------------------------------------\n");
for(i=0;i<=7;i++)
{
printf("%d %10s  \t  %4d \t%4d   \t%5d\n",i+1,pname[i],qty[i],Uprice[i],total);
printf("\n-------------------------------------------------------------------------");
printf("\n\t\t\t\tamount-%.2f",amount);
dis=amount*(10.0/100.0);
amount=amount-dis;
printf("\n\tafter discount amount-%.2f",amount);
getch();
}
}

























































