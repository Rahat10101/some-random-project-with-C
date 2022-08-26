//#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
//#include<dos.h>
#include<time.h>
int book_count=6;
struct book
{
    char bname[30];
    char wname[30];
    int quantity[30];
    int price[10];
    int rack[10]
};
struct book b[100];





int book_list0()
{

    //system("Cls");

    strcpy(b[0].bname," Name\t");
    strcpy(b[0].wname," Writer Name\t");
    strcpy(b[0].quantity," Quantity\t");
    strcpy(b[0].price," Book Price\t");
    strcpy(b[0].rack," Rack No \t");

    strcpy(b[1].bname," c\t");
    strcpy(b[1].wname," Denis\t");
    strcpy(b[1].quantity," 100\t");
    strcpy(b[1].price," 500\t");
    strcpy(b[1].rack," 1 \t");

    strcpy(b[2].bname," c\t");
    strcpy(b[2].wname," lol \t");
    strcpy(b[2].quantity," 100\t");
    strcpy(b[2].price," 500 \t");
    strcpy(b[2].rack," 1 \t");

    strcpy(b[3].bname," c\t");
    strcpy(b[3].wname," Rahat \t");
    strcpy(b[3].quantity," 100 \t");
    strcpy(b[3].price," 300 \t");
    strcpy(b[3].rack," 1 \t");

    strcpy(b[4].bname," c\t");
    strcpy(b[4].wname,"  Lol \t");
    strcpy(b[4].quantity," 100 \t");
    strcpy(b[4].price," 500 \t");
    strcpy(b[4].rack," 1 \t");

    strcpy(b[5].bname," c\t");
    strcpy(b[5].wname," lol\t");
    strcpy(b[5].quantity," 100\t");
    strcpy(b[5].price," 500 \t");
    strcpy(b[5].rack," 1 \t");



}
int edit_book_record()
{


}
int abook_list()
{
    int i;
    printf("                           Book List \n\n");
    printf("|----------------|-------------------|-------------|-----------------|-------------|\n");
    printf("    Book Name         Writer Name       Quantity         Price           Rack No    \n");
    printf("|----------------|-------------------|-------------|-----------------|-------------|\n");
    for(i=0; i<book_count; i++)
    {
        printf("     %s              %s               %d             %d              %d \n",b[i].bname,b[i].wname,b[i].quantity,b[i].price,b[i].rack);
    }
}
int rbook_list()
{
    system("Cls");
    int i;
    printf("                           Book List \n\n");
    printf("|----------------|-------------------|-------------|-----------------|-------------|\n");
    printf("    Book Name         Writer Name       Quantity         Price           Rack No    \n");
    printf("|----------------|-------------------|-------------|-----------------|-------------|\n");
    for(i=0; i<book_count; i++)
    {
        printf("     %s              %s               %d             %d              %d \n",b[i].bname,b[i].wname,b[i].quantity,b[i].price,b[i].rack);
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
        abook_list();
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

int book_search()
{

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

int add_member()
{
    system("Cls");
}

int member_list()
{
    system("Cls");
}

int delete_book()
{
    system("Cls");
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
        rbook_list();
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
