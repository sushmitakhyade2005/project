#include<stdio.h>
#include<conio.h>
struct product
{
    int id;
    char name[20];
    int qty;
    int price;
    int total;
};
void main()
{
    struct product p[5];
    int i, searchid,found=0;
    int total=0;
    FILE *fp;
    clrscr();
    fp=fopen("product.txt","w");
    printf("\n Enter 5 product details");
    for(i=0;i<5;i++)
    {
	printf("\nEnter the product id,name,qty,price");
	scanf("%d%s%d%d",&p[i].id,p[i].name,&p[i].qty,&p[i].price);
	p[i].total=p[i].qty*p[i].price;
	total=total+p[i].total;
	fprintf(fp,"%d%s%d%d%d",p[i].id,p[i].name,p[i].qty,p[i].price,p[i].total);
	fclose(fp);
    }
    fp=fopen("product .txt","w");
    printf("\n-------product details------");
    printf("\nid\tname\tqty\tprice\ttotal\n");
    for(i=0;i<5;i++)
    {
       printf("%d\t",p[i].id);
       printf("%s\t",p[i].name);
       printf("%d\t",p[i].qty);
       printf("%d\t",p[i].price);
       printf("%d\n",p[i].total);
       fprintf(fp,"%d%s%d%d%d",p[i].id,p[i].name,p[i].qty,p[i].price,p[i].total);
     }
     printf("\n-------------------------------");
     printf("\n\t\t\t    total bill=%d",total);
     fclose(fp);
     fp=fopen("product.txt","w");
     printf("\n Enter product id");
     scanf("%d",&searchid);
     fprintf(fp,"%d%s%d%d%d",p[i] .id,p[i].name,p[i].qty,p[i].price,p[i] .total);
    for(i=0;i<5;i++)
     if(p[i].id==searchid)
     {
       printf("product is found");
       printf("id:%d\nname:%s\nqty:%d\nprice:%d\ntotal:%d\n",p[i].id,p[i].name,p[i].qty,p[i].price,p[i].total);
       found=1;
     }
     if(found==0)
     {
	 printf("\n product not found");
     }
     fclose(fp);
}
     getch();

}