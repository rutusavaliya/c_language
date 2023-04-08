#include<stdio.h>
struct bil
{
    float rate,qty,Amount,Discount,Bil,Gst,Netbil;
    char productname[50];
    int codeno;
};

int main()
{
    struct bil a[5];
    int i;
    for(i=0;i<3;i++)
   
     {
        printf(" enter the code number :");
        scanf("%d",&a[i].codeno);
         printf(" enter the productname:");
        scanf("%s",&a[i].productname);
        printf(" enter the rate :");
        scanf("%f",&a[i].rate);
        printf(" enter the qty :");
        scanf("%f",&a[i].qty);
        printf("-----------------------------------\n");
        
     }

     printf("codeno\tproductname\trate\tqty\tAmount\t\tDiscount\tBil\tGst\tNetbil\n");
     for(i=0;i<3;i++)

     {
        a[i].Amount =a[i].rate *a[i].qty;
        a[i].Discount =a[i].Amount * 0.05;
        a[i].Bil=a[i].Amount - a[i].Discount;
       a[i].Gst =a[i].Bil * 0.18;
        a[i].Netbil =a[i].Bil+ a[i].Gst;

        printf("%d\t%s\t\t%.2f\t%.2f\t%.2f\t%.2f\t\t%.2f\t%.2f\t%.2f\n",a[i].codeno,a[i].productname,a[i].rate,a[i].qty,a[i].Amount,a[i].Discount,a[i].Bil,a[i].Gst,a[i].Netbil);
    }


}

