
/*LIBRARY MANAGEMENT SYSTEM*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct library
{
char bk_name[15];
char author[20];
int pages;
float price;
};

int main()
{
struct library l[100];
char ar_nm[20],bk_nm[30];
int i,j, keepcount;
i=j=keepcount = 0;
printf("\n *******Welcome library management system******* \n");
while(j!=8)
{
printf("\n\n1.Add book information\n");
printf("2. Display book information \n");
printf("3. Display list of all books of given author \n");
printf("4. Display details of the specified book\n");
printf("5. Display list of the count of books in the library\n");
printf("6. Display list of authors\n");
printf("7. Display highest price of books\n");
printf("8. Exit");

printf ("\n\nEnter one of the above : ");
scanf("%d",&j);

switch (j)
{
/* Add book */
case 1:

printf ("Enter book name = ");
scanf ("%s",l[i].bk_name);

printf ("Enter author name = ");
scanf ("%s",l[i].author);

printf ("Enter pages = ");
scanf ("%d",&l[i].pages);

printf ("Enter price = ");
scanf ("%f",&l[i].price);
keepcount++;
i++;

break;
case 2:
printf("you have entered the following information\n");
for(i=0; i<keepcount; i++)
{
printf (" book name: %s\n",l[i].bk_name);

printf (" author name: %s\n",l[i].author);

printf (" pages: %d\n",l[i].pages);

printf (" price: %f\n",l[i].price);

printf("*************************\n");
}
break;

case 3:
printf ("Enter author name : ");
scanf ("%s",ar_nm);
for (i=0; i<keepcount; i++)
{

if (strcmp(ar_nm, l[i].author) == 0)
{


printf (" book name: %s\n",l[i].bk_name);

printf(" author: %s\n",l[i].author);

printf(" pages: %d\n",l[i].pages);

printf(" price: %f\n",l[i].price);
}

}
break;

case 4:
printf ("Enter book name : ");
scanf ("%s",bk_nm);
for (i=0; i<keepcount; i++)
{
if (strcmp(bk_nm, l[i].bk_name) == 0)
{



printf(" author: %s\n",l[i].author);

printf (" book name: %s\n",l[i].bk_name);

printf(" pages: %d\n",l[i].pages);

printf(" price: %f\n",l[i].price);
}

}
break;

case 5:
printf(" No of books in library : %d\n", keepcount);
break;

case 6:
	printf ("List of authors: \n");
	for (i=0;i<keepcount;i++)
	{
	    printf ("%s \n",l[i].author);
	}
	break;

case 7:
	printf ("Highest Price Book : ");
float book = 0;
	for (i=0;i<keepcount;i++)
	{
	    if(book < l[i].price);
	        book = l[i].price;
	}
	printf("%f", book);
	break;
case 8:
	exit(0);
	break;
	default: printf("you have entered invalid option");
	break;
}
}
return 0;

}
