#include <stdio.h>
#include <stdlib.h>

int tot=0,b=1;
void menu()
{
    printf("\n ::::::menu::::::\n");
    printf("  1. dosa 30\n");
    printf("  2. samosa 40\n");
    printf("  3. pizza 90 \n");
    printf("  4. panipuri 50\n");
    printf("  5. tea 10\n");
    printf("  0. exit\n");
}
void billing(int price, int c)
{
    int plt;
    if(c==5)
        printf("\nHow many cups:");
    else
        printf("\nHow many plates:");
    scanf("%d",&plt);
    tot=tot+(price*plt);

}
void order()
{
 menu();
 int ch,cash,rc,k;
    while(b)
    {
        printf("\nEnter your choice:");
        scanf("%d",&ch);

    switch(ch)
    {
case 1:
    billing(30,1);
    printf("\nOk..Nice Choice...\n Anything you want\n");
    menu();
    break;
case 2:
    billing(40,2);
    printf("\nOk..Nice Choice...\n Anything you want\n");
        menu();
    break;
case 3:
    billing(90,3);
    printf("\nOk..Nice Choice...\n Anything you want\n");
    menu();
    break;
case 4:
    billing(50,4);
    printf("\nOk..Nice Choice...\n Anything you want\n");
    menu();
    break;
case 5:
    billing(10,5);
    printf("\nOk..Nice Choice...\n Anything you want\n");
menu();
    break;
case 0:
    b=0;
    printf("\nyour bill is:%d\n",tot);
   k:
    printf("\nReceived cash:\n");
    scanf("%d",&cash);
    if(cash<tot)
    {
        tot=tot-cash;
        printf("sorry! you need %d more cash to pay\n",tot);
        goto k;
    }

    else if(cash>tot)
    {
        cash=cash-tot;
    printf("Return cash:%d\n",cash);
    rc=cash/2000;
    printf("\n%d notes of 2000\n",rc);
    cash=cash-(rc*2000);
    rc=cash/500;
    printf("\n%d notes of 500\n",rc);
    cash=cash-(rc*500);
    rc=cash/200;
    printf("\n%d notes of 200\n",rc);
    cash=cash-(rc*200);
    rc=cash/100;
    printf("\n%d notes of 100\n",rc);
    cash=cash-(rc*100);
    rc=cash/50;
    printf("\n%d notes of 50\n",rc);
    cash=cash-(rc*50);
    rc=cash/20;
    printf("\n%d notes of 20\n",rc);
    cash=cash-(rc*20);
    rc=cash/10;
    printf("\n%d notes of 10\n",rc);
    cash=cash-(rc*10);
    rc=cash/5;
    printf("\n%d notes of 5\n",rc);
    cash=cash-(rc*5);
    rc=cash/2;
    printf("\n%d notes of 2\n",rc);
    cash=cash-(rc*2);
    rc=cash/1;
    printf("\n%d notes of 1\n",rc);
    }
else
    printf(":::Thank you visit again:::\n");
    break;
default:
    printf("wrong choice\n");
    menu();

    }
    }
}
int main()
{
    printf("::::::::::::::WELCOME TO HOTEL HARSH::::::::::::::\n");
   order();

    return 0;
}


