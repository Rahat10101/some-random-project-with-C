//#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
//#include<dos.h>
#include<time.h>

int book_count=0;
struct Book
{
    char bname[30];
    char wname[30];
    int quantity;
    int bprice;
    int rack;
};

struct Book book[30];

int book_search()
{
    system("Cls");
    char s[100];
    scanf("%s",s);
    if (strcmp(s,book[book_count].bname) == 0)
    {
        int a;
        system("Cls");
        printf("Book's Name        : %s\n",book[book_count].bname);
        printf("Book's Writer Name : %s\n",book[book_count].wname);
        printf("Quantity           : %d\n",book[book_count].quantity);
        printf("Book's Price       : %d\n",book[book_count].bprice);
        printf("Rack No.           : %d\n",book[book_count].rack);
        printf("Press 0 for back to main menu  ");
        scanf("%d",&a);
        if(a==0)
        {
            admin_menu();
        }

    }
}


int reader_menu()
{
    system("Cls");
    int a;
    printf(" 1 . As a guest ...\n");
    printf(" 2 . As a member ...\n");
    printf(" Press 1 for Guest / Press 2 f[or member ...\n");
    scanf("%d",&a);
    if(a==1)
    {
        book_list();
    }
    else if(a==2)
    {
        member_id();
    }
}

int  book_list()
{
    system("Cls");
    int a;
    printf(" Book Name     : %s \n", book[book_count].bname);
    printf(" Writer's Name : %s \n", book[book_count].wname);
    printf(" Quantity      : %d \n", book[book_count].quantity);
    printf(" Book Price    : %d \n", book[book_count].bprice);
    printf(" Rack No.      : %d \n", book[book_count].rack);
    usleep(900000000);
    printf(" Press 1 for back to main menu ... ");
    scanf("%d",&a);
    if(a==1)
    {
        admin_menu();
    }
}
int  book_list1()
{
    system("Cls");
    int a,i;
    for(i=0;i<book_count;i++)
    {
    printf(" Book Name     : %s \n", book[i].bname);
    printf(" Writer's Name : %s \n", book[i].wname);
    printf(" Quantity      : %d \n", book[i].quantity);
    printf(" Book Price    : %d \n", book[i].bprice);
    printf(" Rack No.      : %d \n", book[i].rack);
    }
    usleep(900000000);
    printf(" Press 1 for back to main menu ... ");
    scanf("%d",&a);
    if(a==1)
    {
        book_list1();
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

int admin_menu()
{
    system("Cls");
    int a;
    printf("                             Admin Menu  \n\n");
    printf("1. Add book \n");
    printf("2. Delete Book \n");
    printf("3. View Book List \n");
    printf("4. View Member List \n");
    printf("5. Add Member \n");
    printf("6. Edit Book Record \n");
    printf("7. View Member List \n");
    printf("8. Search Book \n");
    printf(" Enter your Choice ... \n");

    scanf("%d",&a);

    if(a==1)
    {
        add_book();
    }
    else if(a==2)
    {
        delete_book();
    }
    else if(a==3)
    {
        book_list();
    }
    else if(a==4)
    {
        member_list();
    }
    else if(a==5)
    {
        add_member();
    }
    else if(a==6)
    {
        edit_book_record();
    }
    else if(a==7)
    {
        member_list();
    }
    else if(a==8)
    {
        book_search();
    }
    else if(a=='e' || a=='E')
    {

    }
}
int add_book()
{
    system("Cls");
    printf("Enter Book name : \n");
    scanf("%s",&book[book_count].bname);
    printf("\n");
    printf("Enter Writer name : \n");
    scanf("%s",&book[book_count].wname);
    printf("Enter Book quantity :");
    scanf("%d",&book[book_count].quantity);
    printf("\n");
    printf("Enter Book Price :");
    scanf("%d",&book[book_count].bprice);
    printf("\n");
    printf("Enter Book's Rack No :");
    scanf("%d",&book[book_count].rack);
    printf("\n");
   book_count++;
    admin_menu();
}
int delete_book()
{
    system("Cls");
}
int member_list()
{
    system("Cls");
}
int edit_book_record()
{
    system("Cls");
    int a;
    printf(" Press 1 for edit Book name ...\n");
    printf(" Press 2 for edit Writer's name ...\n");
    printf(" Press 3 for edit Book's Quantity ...\n");
    printf(" Press 4 for edit Book's price ...\n");
    printf(" Press 5 for edit Rack No. \n");
    printf(" Press 0 for Back to main menu ...\n");
    scanf("%d",&a);
    if(a==1)
    {
        printf("Edit Book name :");
        gets(book[book_count].bname);
        admin_menu();
    }
    else if(a==2)
    {
        printf("Edit Book's Writer name :");
        gets(book[book_count].wname);
        admin_menu();
    }
    else if(a==3)
    {
        printf("Edit Book's Quantity :");
        scanf("%d",book[book_count].quantity);
        admin_menu();
    }
    else if(a==4)
    {
        printf("Edit Book's Price :");
        scanf("%s",book[book_count].bprice);
        admin_menu();
    }
    else if(a==5)
    {
        printf("Edit Book's Rack No :");
        scanf("%s",book[book_count].rack);
        admin_menu();
    }
    else if(a==0)
    {
        admin_menu();
    }

}
int add_member()
{
    system("Cls");
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
            book_list1();
        }
    }

}
int main()
{
    int a;
    printf("                             Welcome to our Library ... \n\n\n\n");
    printf("                            Press any key to continue ... \n\n\n\n");
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
