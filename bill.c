#include <stdio.h>
void main()
{
    int amt;
    float dis,tot;
    printf("Enter the Amount\n");
    scanf("%d",&amt);
    if(amt<5000)
    {
        dis=0;
    }
    else if(amt==5000&&amt<=10000)
    {
        dis=amt/10;
    }
    else if(amt==1001&&amt<=50000)
    {
        dis=(20*amt)/dis;
    }
    else if(amt==50001&&amt<=100000)
    {
        dis=(30*amt)/100;
    }
    else
    {
        dis=(40*amt)/100;
    }
    tot=amt-dis;
    printf("Bill amount = %d\n",amt);
    printf("Discount = %.2f\n",dis);
    printf("************************\n");
    printf("Total = %.2f\n",tot);
    printf("************************\n");
}

