#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
#include<time.h>
int book_count=5;
int member_count=5;
int taken_book=0;
struct book
{
    char bname[30];
    char wname[30];
    int quantity;
    int price;
    int rack;
};
struct book b[100];

struct member
{
    char mname[30];
    char address[30];
    long long int num;
};
struct member m[25];

struct taken
{
    char bname[30];
    char uname[30];
};
struct taken p[100];

int book_list0()
{

    strcpy(b[0].bname,"c");
    strcpy(b[0].wname,"Denis");
    b[0].quantity=10;
    b[0].price=100;
    b[0].rack=1;

    strcpy(b[1].bname,"c");
    strcpy(b[1].wname,"lol");
    b[1].quantity=10;
    b[1].price=100;
    b[1].rack=1;

    strcpy(b[2].bname,"c");
    strcpy(b[2].wname,"Rahat");
    b[2].quantity=10;
    b[2].price=100;
    b[2].rack=1;

    strcpy(b[3].bname,"c");
    strcpy(b[3].wname,"lol");
    b[3].quantity=10;
    b[3].price=100;
    b[3].rack=1;

    strcpy(b[4].bname,"c");
    strcpy(b[4].wname,"lol");
    b[4].quantity=10;
    b[4].price=100;
    b[4].rack=1;
}

int member_list0()
{

    strcpy(m[0].mname," Rahat");
    strcpy(m[0].address,"Savar");
    m[0].num=01714444464;

    strcpy(m[1].mname,"Raju");
    strcpy(m[1].address,"Savar");
    m[1].num=01714444464;

    strcpy(m[2].mname,"Asif");
    strcpy(m[2].address,"Savar");
    m[2].num=01714444464;

    strcpy(m[3].mname,"Nafu");
    strcpy(m[3].address,"Savar");
    m[3].num=01714444464;

    strcpy(m[4].mname,"Bolod");
    strcpy(m[4].address,"Savar");
    m[4].num=01714444464;
}

int edit_member_record()
{
    system("Cls");
    int i,a,x,n;
    printf("                           Member List \n\n");
    printf("|--------|----------------|-------------------|---------------|\n");
    printf("    No       Member Name         Address         Phone Number  \n");
    printf("|--------|----------------|-------------------|---------------|\n");
    for(i=0; i<member_count; i++)
    {
        printf("   %d        %s           %s             %lld            \n",i,m[i].mname,m[i].address,m[i].num);
    }

    printf(" Which Member do you want to edit ??? \n");
    scanf("%d",&x);

    printf("1 . Member Name ? \n");
    printf("2 . Member Address ? \n");
    printf("3 . Phone Number ?\n");
    scanf("%d",&a);
    if(a==1)
    {
        scanf("%s",m[x-1].mname);

    }
    else if(a==2)
    {
        scanf("%s",m[x-1].address);
    }
    else if(a==3)
    {
        scanf("%lld",&m[x-1].num);
    }

    printf(" To return to main menu press 0 ...");
    scanf("%d",&n);
    if(n==0)
    {
        admin_menu();
    }

}

int abook_search()
{
    system("Cls");
    int i,a;
    char o[30];
    printf(" Enter the Book name which you want to search :");
    scanf("%s",o);
    printf("|--------|----------------|-------------------|-------------|-----------------|-------------|\n");
    printf("    No       Book Name         Writer Name       Quantity         Price           Rack No    \n");
    printf("|--------|----------------|-------------------|-------------|-----------------|-------------|\n");
    for(i=0; i<book_count; i++)
    {
        if(strcmp(o,b[i].bname)==0)
        {
            printf("    %d         %s              %s             %d          %d         %d \n",i,b[i].bname,b[i].wname,b[i].quantity,b[i].price,b[i].rack);
        }
    }
    printf(" Press 0 for back to main menu ... ");
    scanf("%d",&a);
    if(a==0)
    {
        admin_menu();
    }
}

int edit_book_record()
{
    system("Cls");
    int i,a,x,n;
    printf("  Edit Book Record \n");
    printf("                           Book List \n\n");
    printf("|--------|----------------|-------------------|-------------|-----------------|-------------|\n");
    printf("    No       Book Name         Writer Name       Quantity         Price           Rack No    \n");
    printf("|--------|----------------|-------------------|-------------|-----------------|-------------|\n");
    for(i=0; i<book_count; i++)
    {
        printf("     %d     %s              %s               %d             %d              %d \n",i,b[i].bname,b[i].wname,b[i].quantity,b[i].price,b[i].rack);
    }

    printf(" Which Book do you want to edit ??? \n");
    scanf("%d",&x);

    printf("1 . Book Name ? \n");
    printf("2 . Writer Name ? \n");
    printf("3 . Quantity ?\n");
    printf("3 . Price ?\n");
    printf("3 . Rack No ?\n");
    scanf("%d",&a);
    if(a==1)
    {
        scanf("%s",b[x-1].bname);

    }
    else if(a==2)
    {
        scanf("%s",b[x-1].wname);
    }
    else if(a==3)
    {
        scanf("%d",&b[x-1].quantity);
    }
    else if(a==4)
    {
        scanf("%d",&b[x-1].price);
    }
    else if(a==5)
    {
        scanf("%d",&b[x-1].rack);
    }
    printf(" To return to main menu press 0 ...");
    scanf("%d",&n);
    if(n==0)
    {
        admin_menu();
    }

}

int add_member()
{
    system("Cls");
    int a;
    printf("Enter Member name : ");
    scanf("%s",&m[member_count].mname);
    printf("\n");
    printf("Enter Address : ");
    scanf("%s",&m[member_count].address);
    printf("Enter Phone Number :");
    scanf("%lld",&m[member_count].num);
    printf("\n");
    member_count++;
    printf(" Press 1 for add member // 2 for admin menu ...");
    scanf("%d",&a);
    if(a==1)
    {
        add_member();
    }
    else if(a==2)
    {
        admin_menu();
    }
}

int member_list()
{
    system("Cls");
    int i,a;
    printf("                           Member List \n\n");
    printf("|--------|----------------|-------------------|---------------|\n");
    printf("    No       Member Name         Address         Phone Number  \n");
    printf("|--------|----------------|-------------------|---------------|\n");
    for(i=0; i<member_count; i++)
    {
        printf("     %d     %s        %s         %lld            \n",i,m[i].mname,m[i].address,m[i].num);
    }
    printf(" Press 0 for back to main menu ...");
    scanf("%d",&a);
    if(a==0)
    {
        admin_menu();
    }
}

int abook_list()
{
    int i,a;
    printf("                           Book List \n\n");
    printf("|--------|----------------|-------------------|-------------|-----------------|-------------|\n");
    printf("    No       Book Name         Writer Name       Quantity         Price           Rack No    \n");
    printf("|--------|----------------|-------------------|-------------|-----------------|-------------|\n");
    for(i=0; i<book_count; i++)
    {
        printf("     %d     %s              %s               %d             %d              %d \n",i,b[i].bname,b[i].wname,b[i].quantity,b[i].price,b[i].rack);
    }
    printf(" Press 0 for back to main menu ...");
    scanf("%d",&a);
    if(a==0)
    {
        admin_menu();
    }
}

int add_book()
{
    system("Cls");
    int a;
    printf("Enter Book name : \n");
    scanf("%s",&b[book_count].bname);
    printf("\n");
    printf("Enter Writer name : \n");
    scanf("%s",&b[book_count].wname);
    printf("Enter Book quantity :");
    scanf("%d",&b[book_count].quantity);
    printf("\n");
    printf("Enter Book Price :");
    scanf("%d",&b[book_count].price);
    printf("\n");
    printf("Enter Book's Rack No :");
    scanf("%d",&b[book_count].rack);
    printf("\n");
    book_count++;
    printf(" Press 1 for add book // 2 for admin menu ...");
    scanf("%d",&a);
    if(a==1)
    {
        add_book();
    }
    else if(a==2)
    {
        admin_menu();
    }
}

int admin_menu()
{
    system("Cls");
    int a;
    printf("                             Admin Menu  \n\n");
    printf("1. Add book \n");
    printf("2. View Book List \n");
    printf("3. View Member List \n");
    printf("4. Add Member \n");
    printf("5. Edit Book Record \n");
    printf("6. Search Book \n");
    printf("7. Edit Member Record \n");
    printf(" Enter your Choice ... \n");

    scanf("%d",&a);

    if(a==1)
    {
        add_book();
    }
    else if(a==2)
    {
        abook_list();
    }
    else if(a==3)
    {
        member_list();
    }
    else if(a==4)
    {
        add_member();
    }
    else if(a==5)
    {
        edit_book_record();
    }
    else if(a==6)
    {
        abook_search();
    }
    else if(a==7)
    {
        edit_member_record();
    }
}

int admin_login()
{
    system("Cls");
    int a;
    char ID[100],password[100];
    printf(" User ID : ");
    scanf("%s",&ID);
    printf(" \n");
    printf(" Password : ");
    scanf("%s",&password);
    if(!strcmp(ID,"0"))
    {
        if(!strcmp(password,"0"))
        {
            printf(" Successful Login ...");
            admin_menu();
        }
    }
}

int take_book()
{
    system("Cls");
    int i,a,x;
    printf("                           Book List \n\n");
    printf("|--------|----------------|-------------------|-------------|-----------------|-------------|\n");
    printf("    No       Book Name         Writer Name       Quantity         Price           Rack No    \n");
    printf("|--------|----------------|-------------------|-------------|-----------------|-------------|\n");
    for(i=0; i<book_count; i++)
    {
        printf("     %d     %s              %s               %d             %d              %d \n",i,b[i].bname,b[i].wname,b[i].quantity,b[i].price,b[i].rack);
    }
    printf(" Which book do you want ??? ");
    scanf("%d",&x);
    if(b[x-1].quantity>0)
    {
        printf(" Your request has been accepted ...");
        b[x-1].quantity--;
    }
    printf(" %s this book is taken .",b[x-1].bname);
}

int rbook_search()
{
    system("Cls");
    int i,a;
    char o[30];
    printf(" Enter the Book name which you want to search :");
    scanf("%s",o);
    printf("|--------|----------------|-------------------|-------------|-----------------|-------------|\n");
    printf("    No       Book Name         Writer Name       Quantity         Price           Rack No    \n");
    printf("|--------|----------------|-------------------|-------------|-----------------|-------------|\n");
    for(i=0; i<book_count; i++)
    {
        if(strcmp(o,b[i].bname)==0)
        {
            printf("    %d         %s              %s             %d          %d         %d \n",i,b[i].bname,b[i].wname,b[i].quantity,b[i].price,b[i].rack);
        }
    }
    printf(" Press 0 for back to main menu ... ");
    scanf("%d",&a);
    if(a==0)
    {
        reader_menu();
    }
}

int rbook_list()
{
    system("Cls");
    int i,a;
    printf("                           Book List \n\n");
    printf("|--------|----------------|-------------------|-------------|-----------------|-------------|\n");
    printf("    No       Book Name         Writer Name       Quantity         Price           Rack No    \n");
    printf("|--------|----------------|-------------------|-------------|-----------------|-------------|\n");
    for(i=0; i<book_count; i++)
    {
        printf("     %d     %s              %s               %d             %d              %d \n",i,b[i].bname,b[i].wname,b[i].quantity,b[i].price,b[i].rack);
    }
    printf(" Press 0 for back to main menu ... ");
    printf(" Press 1 for Book Search ... ");
    printf(" Press 2 for Take Book ... ");
    scanf("%d",&a);
    if(a==0)
    {
        reader_menu();
    }

    else if(a==1)
    {
        rbook_search();
    }
    else if(a==2)
    {
        take_book();
    }
}

int member_id()
{
    system("Cls");
    int a;
    char ID[100],password[100];
    printf(" User ID : ");
    scanf("%s",&ID);
    printf(" \n");
    printf(" Password : ");
    scanf("%s",&password);
    if(!strcmp(ID,"1"))
    {
        if(!strcmp(password,"1"))
        {
            printf(" Successful Login ...");
            printf(" Press any key to continue ...");
            getch();
            rbook_list();
        }
    }
}

int gbook_search()
{
    system("Cls");
    int i,a;
    char o[30];
    printf(" Enter the Book name which you want to search :");
    scanf("%s",o);
    printf("|--------|----------------|-------------------|-------------|-----------------|-------------|\n");
    printf("    No       Book Name         Writer Name       Quantity         Price           Rack No    \n");
    printf("|--------|----------------|-------------------|-------------|-----------------|-------------|\n");
    for(i=0; i<book_count; i++)
    {
        if(strcmp(o,b[i].bname)==0)
        {

            printf("    %d         %s              %s             %d          %d         %d \n",i,b[i].bname,b[i].wname,b[i].quantity,b[i].price,b[i].rack);
        }
    }
    printf(" Press 0 for back to main menu ... ");
    scanf("%d",&a);
    if(a==0)
    {
        gbook_list();
    }
}

int gbook_list()
{
    system("Cls");
    int i,a;
    printf("                           Book List \n\n");
    printf("|--------|----------------|-------------------|-------------|-----------------|-------------|\n");
    printf("    No       Book Name         Writer Name       Quantity         Price           Rack No    \n");
    printf("|--------|----------------|-------------------|-------------|-----------------|-------------|\n");
    for(i=0; i<book_count; i++)
    {
        printf("     %d     %s              %s               %d             %d              %d \n",i,b[i].bname,b[i].wname,b[i].quantity,b[i].price,b[i].rack);
    }
    printf("N.B.: As you are guest you can't bring or buy a book , so get a book & a chair read & go ... \n\n");
    printf(" Press 0 for back to main menu ... / Press 1 for Search Book ...");
    scanf("%d",&a);
    if(a==0)
    {
        gbook_list();
    }

    else if(a==1)
    {
        gbook_search();
    }
}

int reader_menu()
{
    system("Cls");
    int a;
    printf(" 1 . As a guest ...\n");
    printf(" 2 . As a member ...\n");
    printf(" Press 1 for Guest / Press 2 for member ...\n");
    scanf("%d",&a);
    if(a==1)
    {
        gbook_list();
    }
    else if(a==2)
    {
        member_id();
    }
}

int main()
{
    int a;
    book_list0();
    member_list0();
    printf("                             Welcome to our CSE Library ... \n\n\n\n");
    printf("                            Press any key to continue ... \n\n\n\n");
    getch();
    system("Cls");
    printf(" 1 . Enter as a reader ...\n");
    printf(" 2 . Admin Login ...\n");
    printf(" Press 1 for Reader / Press 2 for Admin ...\n");
    scanf("%d",&a);
    if(a==1)
    {
        reader_menu();
    }
    else if(a==2)
    {
        admin_login();
    }

    return 0;
}
