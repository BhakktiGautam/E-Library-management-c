
// E-LIBRARY MANAGEMENT SYSTEM
// AUTHOR: BHAKKTI GAUTAM
//DESCRIPTION:
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct librarybooks{
        char bookname[50];
        char author[50];
        int pages;
        int price;
};
int i=0;
struct librarybooks lb[100];
void addbookinfo()
{
        if(i>=100)
        {
            printf("LIBRARY STORAGE FULL\n");
            return;
        }
        printf("ENTER THE BOOK INFORMATION AS FOLLOWS:\n");
        printf("ENTER THE NAME OF BOOK:\n");
        scanf(" %[^\n]", lb[i].bookname);
        printf("\nENTER THE AUTHOR NAME OF ABOVE BOOK:\n");
        scanf("%[^\n]",lb[i].author);
        printf("\nENTER THE NUMBER OF PAGES IN ABOVE BOOK:\n");
        scanf(" %d",&lb[i].pages);
        printf("\nENTER THE PRICE OF ABOVE BOOK:");
        scanf(" %d",&lb[i].price);
        printf("BOOK ADDED SUCCESSFULLY\n");
        i++;
}
void displaybookinfo()
{
        int found=0;
        char bookname[50];
        printf("ENTER THE BOOK NAME OF THAT BOOK YOU WANT TO DISPLAY\n");
        scanf("%s",bookname);
        for( int j=0;j<i;j++)
        {
                if(strcmp(bookname,lb[j].bookname)==0)
                {
                        printf("\nTHE BOOKNAME IS %s\n",lb[j].bookname);
                        printf("\nTHE AUTHOR OF THE DISPLAYED BOOK IS %s\n",lb[j].author);
                        printf("\nTHE NUMBER OF PAGES IN THE BOOK IS %d\n",lb[j].pages);
                        printf("\nTHE PRICE OF DISPLAYED BOOK IS  %d\n",lb[j].price);
                        found=1;
                        break;
                }
        }
        if(found==0)
        {
                printf("THE BOOK NAME DOESN'T MATCH TO AVAILABLE BOOKS\n");
        }
}
void listofallbooks()
{
        if(i==0)
{
    printf("NO BOOKS AVAILABLE IN LIBRARY\n");
    return;
}
        printf("THE LIST OF ALL BOOKS AVAILABLE ARE:\n");
        printf("NAME OF BOOK\tAUTHOR\tNUMBER OF PAGES\tPRICE\n");
        for(int k=0;k<i;k++)
        {
                printf("\n%s\t%s\t%d\t%d\n",lb[k].bookname,lb[k].author,lb[k].pages,lb[k].price);
                
        }
}
void totalnumberofbooks()
{
        printf("THE TOTAL NUMBER OF BOOKS CAN BE KEPTS IS 100\n");
        printf("THE BOOKS PRESENT IN LIBRARY IS %d",i);
}
int main()
{
    int option;
        do{
        printf("ENTER THE SERIAL NUMBER OF OPERATION YOU WANT TO ATTEMPT\n");
        printf("1.ADD A BOOK INFORMATION\n2.DISPLAY A SPECIFIC BOOK INFORMATION\n3.LIST ALL THE BOOKS PRESENT IN LIBRARY\n4.GIVE THE TOTAL NUMBER OF BOOKS PRESENT IN LIBRARY\n5.EXIT THE LIBRARY\n");
        scanf("%d",&option);
        if(option==1)
        {
                addbookinfo();
        }
        else if(option==2)
        {
                displaybookinfo();
        }
        else if(option==3)
        {
                listofallbooks();
        }
        else if(option==4)
         {
                totalnumberofbooks();
        }
        else if(option==5)
        {
                break;
        }
        else
        {
                printf("INVALID CHOICE BY USER");
        }
        }
        while(option!=5);
return 0;
}




               

