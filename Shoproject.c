#include<stdio.h>
int main ()
{
    int a , Bill ;
    printf("                \n\n\n\n\n\n\n\n                                               Welcome to my shop \n");
    printf("                                                      We have  \n");


    printf("                          |------------------|-------------------|----------------------|\n");
    printf("                              Product Name          Quantity               Rate          \n");
    printf("                          |------------------|-------------------|----------------------|\n");
    printf("                                 Shirt                1000            minimum 500 BDT    \n");
    printf("                          |------------------|-------------------|----------------------|\n");
    printf("                                T-Shirt               1000            minimum 300 BDT    \n");
    printf("                          |------------------|-------------------|----------------------|\n");
    printf("                                Panjabi               2000            minimum 900 BDT    \n");
    printf("                          |------------------|-------------------|----------------------|\n");
    printf("                                 Pajama               2000            minimum 300 BDT    \n");
    printf("                          |------------------|-------------------|----------------------|\n");
    printf("                                  Pant                2000            minimum 900 BDT    \n");
    printf("                          |------------------|-------------------|----------------------|\n");
    printf("    To Buy Shirt   Press 1 \n");
    printf("    To Buy T-Shirt Press 2 \n");
    printf("    To Buy Panjabi Press 3 \n");
    printf("    To Buy Pajama  Press 4 \n");
    printf("    To Buy Pant    Press 5 \n");
    scanf(              "%d",&a);
    if (a==1)
    {
        printf("                         |------------------|-------------------|----------------------|\n");
        printf("                             Product Name          Quantity               Rate          \n");
        printf("                         |------------------|-------------------|----------------------|\n");
        printf("                              Full Sleeve            500             minimum 700 BDT    \n");
        printf("                         |------------------|-------------------|----------------------|\n");
        printf("                              Half Sleeve            500             minimum 500 BDT    \n");
        printf("                         |------------------|-------------------|----------------------|\n");
        printf("                                         Which one do you want ??? \n");
        printf("    To Buy Full Sleeve Shirt Press 1 \n");
        printf("    To Buy Half Sleeve Shirt Press 2 \n");
        scanf("%d",&a);
        if (a==1)
        {
            printf(" How many Full Sleeve Shirt do you want ??? \n");
            scanf("%d",&a);
            Bill =a*700;
            printf(" Your bill is = %d ",Bill);

        }
        else if (a==2)
        {
            printf(" How many Half Sleeve Shirt do you want ??? \n");
            scanf("%d",&a);
            Bill =a*500;
            printf(" Your bill is = %d ",Bill);

        }
        else
        {
            printf(" Wrong Input ");
        }

    }
    else if (a==2)
    {
        printf("                       |------------------|-------------------|----------------------|\n");
        printf("                           Product Name          Quantity               Rate          \n");
        printf("                       |------------------|-------------------|----------------------|\n");
        printf("                            Full Sleeve            500              minimum 500 BDT   \n");
        printf("                       |------------------|-------------------|----------------------|\n");
        printf("                            Half Sleeve            500              minimum 300 BDT   \n");
        printf("                       |------------------|-------------------|----------------------|\n");
        printf("                                         Which one do you want ??? \n");
        printf("    To Buy Full Sleeve T-Shirt Press 1 \n");
        printf("    To Buy Half Sleeve T-Shirt Press 2 \n");
        scanf("%d",&a);
        if (a==1)
        {
            printf(" How many Full Sleeve T-Shirt do you want ??? \n");
            scanf("%d",&a);
            Bill =a*500;
            printf(" Your bill is = %d ",Bill);

        }
        else if (a==2)
        {
            printf(" How many Half Sleeve T-Shirt do you want ??? \n");
            scanf("%d",&a);
            Bill =a*300;
            printf(" Your bill is = %d ",Bill);

        }
        else
        {
            printf(" Wrong Input ");
        }

    }




    else if (a==3)
    {

        printf("                      |------------------|-------------------|---------------------|----------------------|\n");
        printf("                           Product Name        Colour               Quantity                 Rate          \n");
        printf("                      |------------------|-------------------|---------------------|----------------------|\n");
        printf("                                               Black                   1000              minimum 900 BDT   \n");
        printf("                      |      Panjabi     |-------------------|---------------------|----------------------|\n");
        printf("                                               White                   1000              minimum 1000 BDT  \n");
        printf("                      |------------------|-------------------|---------------------|----------------------|\n");
        printf("                                         Which one do you want ??? \n");
        printf("    To Buy Black Panjabi Press 1 \n");
        printf("    To Buy White Panjabi Press 2 \n");
        scanf("%d",&a);
        if (a==1)
        {
            printf(" How many Black Panjabi do you want ??? \n");
            scanf("%d",&a);
            Bill =a*900;
            printf(" Your bill is = %d ",Bill);

        }
        else if (a==2)
        {
            printf(" How many White Panjabi do you want ??? \n");
            scanf("%d",&a);
            Bill =a*1000;
            printf(" Your bill is = %d ",Bill);

        }
        else
        {
            printf(" Wrong Input ");
        }
    }
    else if (a==4)
    {
        printf("                         |------------------|-------------------|----------------------|\n");
        printf("                             Product Name          Quantity               Rate          \n");
        printf("                         |------------------|-------------------|----------------------|\n");
        printf("                               Narrow               1000             minimum 300 BDT    \n");
        printf("                         |------------------|-------------------|----------------------|\n");
        printf("                                Loose               1000             minimum 300 BDT    \n");
        printf("                         |------------------|-------------------|----------------------|\n");
        printf("                                         Which one do you want ??? \n");
        printf("    To Buy  Narrow Pajama Press 1 \n");
        printf("    To Buy Loose Pajama Press 2 \n");
        scanf("%d",&a);
        if (a==1)
        {
            printf(" How many Narrow Pajama do you want ??? \n");
            scanf("%d",&a);
            Bill =a*300;
            printf(" Your bill is = %d ",Bill);

        }
        else if (a==2)
        {
            printf(" How many Loose Pajama do you want ??? \n");
            scanf("%d",&a);
            Bill =a*300;
            printf(" Your bill is = %d ",Bill);

        }
        else
        {
            printf(" Wrong Input ");
        }

    }
    else if (a==5)
    {
        printf("                         |------------------|-------------------|----------------------|\n");
        printf("                             Product Name          Quantity               Rate          \n");
        printf("                         |------------------|-------------------|----------------------|\n");
        printf("                               Narrow               1000             minimum 900 BDT    \n");
        printf("                         |------------------|-------------------|----------------------|\n");
        printf("                                Loose               1000             minimum 900 BDT    \n");
        printf("                         |------------------|-------------------|----------------------|\n");
        printf("                                         Which one do you want ??? \n");
        printf("    To Buy  Narrow Pant Press 1 \n");
        printf("    To Buy Loose Pant Press 2 \n");
        scanf("%d",&a);
        if (a==1)
        {
            printf(" How many Narrow Pant do you want ??? \n");
            scanf("%d",&a);
            Bill =a*900;
            printf(" Your bill is = %d ",Bill);

        }
        else if (a==2)
        {
            printf(" How many Loose Pant do you want ??? \n");
            scanf("%d",&a);
            Bill =a*900;
            printf(" Your bill is = %d ",Bill);

        }
        else
        {
            printf(" Wrong Input ");
        }

    }

    else
    {
        printf(" Wrong Input ");
    }
    return 0 ;
}
