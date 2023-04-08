#include<stdio.h>
int coins()
{
     int amt ,coins,amt2000=0,amt500=0,amt200=0,amt100=0,amt50=0,amt20=0,amt10=0,coins5=0,coins2=0,coins1=0;
    printf(" enter the amt");
    scanf("%d",&amt);
    if(amt>=2000)
    {
        amt2000=amt/2000;
        amt=2000*2000;
    }
    if(amt>=500)
    {
        amt500=amt/500;
        amt=500*500;
    }
    if(amt>=200)
    {
        amt200=amt/200;
        amt=200*200;
    }
    if(amt>=100)
    {
        amt100=amt/100;
        amt=100*100;
    }
    if(amt>=50)
    {
        amt50=amt/50;
        amt=50*50;
    }
    if(amt>=20)
    {
        amt20=amt/20;
        amt=20*20;
    } 
    if(amt>=10)
    {
        amt10=amt/10;
        amt=10*10;
    }
    if(coins>=5)
    {
        coins5=coins/5;
        coins=5*5;
    } 
    if(coins>=2)
    {
        coins2=coins/2;
        coins=2*2;
    } 
    if(coins>=1)
    {
        coins1=coins/1;
        coins=1*1;
    } 
    else{
        amt=coins1*1;
    }
    
    printf(" total rupess of amt \n");
    printf("\namt2000 : %d",amt2000);
    printf("\namt500 : %d",amt500);
    printf("\namt200 : %d",amt200);
    printf("\namt100 : %d",amt100);
    printf("\namt50 : %d",amt50);
    printf("\namt20 : %d",amt20);
    printf("\namt10 : %d",amt10);
    printf("\ncoins5 : %d",coins5);
    printf("\ncoins2 : %d",coins2);
    printf("\ncoins1 : %d",coins1);
    

}


int main()
{
    coins();
}

