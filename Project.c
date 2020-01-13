#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
struct detail
{
 char n[80];
 char pc[6];	
};
struct detail A;
main()
{
 system("color a");	
 FILE *fp;
 fp=fopen("Project.txt","a+");
 char x[80],y[80],ch0,ch1,ch2,ch3;
 long int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0;
 long int a10=0,a11=0,a12=0,a13=0,a14=0,a15=0,ta;
 int z1=11490,z2=12999,z3=14490,z4=16740,z5=19490;
 int z6=20949,z7=25399,z8=28490,z9=32999,z10=39290;
 int z11=45740,z12=57399,z13=63490,z14=78999,z15=89490;
 int i,j,t,a[15],ch,q1,q2,q3,q4,q5,q6,ch4;
 int q7,q8,q9,q10,q11,q12,q13,q14,q15;
 for(i=0;i<15;i++)
 {
  a[i]=200;
 }
 printf("\n             ***** IPHONE STORE *****\n\n");
 printf("  ----------------------------------------------\n");
 printf("    S.No. |     NAME     |   RATE   | QUANTITY\n");
 printf("  ----------------------------------------------\n");
 printf("      1      IPHONE 4       %d       %d\n",z1,a[0]);
 printf("      2      IPHONE 4S      %d       %d\n",z2,a[1]);
 printf("      3      IPHONE 5       %d       %d\n",z3,a[2]);
 printf("      4      IPHONE 5C      %d       %d\n",z4,a[3]);
 printf("      5      IPHONE 5S      %d       %d\n",z5,a[4]);
 printf("      6      IPHONE SE      %d       %d\n",z6,a[5]);
 printf("      7      IPHONE 6       %d       %d\n",z7,a[6]);
 printf("      8      IPHONE 6+      %d       %d\n",z8,a[7]);
 printf("      9      IPHONE 6S      %d       %d\n",z9,a[8]);
 printf("     10      IPHONE 6S+     %d       %d\n",z10,a[9]);
 printf("     11      IPHONE 7       %d       %d\n",z11,a[10]);
 printf("     12      IPHONE 7+      %d       %d\n",z12,a[11]);
 printf("     13      IPHONE 8       %d       %d\n",z13,a[12]);
 printf("     14      IPHONE 8+      %d       %d\n",z14,a[13]);
 printf("     15      IPHONE X       %d       %d\n",z15,a[14]);
 printf("  ----------------------------------------------\n");
 printf("\n  To BUY, You have to register first :-");
 printf("\n\n       USERNAME = ");
 scanf("%s",&A.n);
 printf("   PASSWORD(Max.6) = ");
 for(t=0;t<6;t++)
 {
  ch0=getch();
  A.pc[t]=ch0;
  ch0='*';
  printf("%c",ch0);
 }
 printf("\n\n Choose your item (1-15) :- ");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1:
  {
   A:
   {
    printf("\n  -: IPHONE 4 :-\n");
    FILE *a1;
    a1=fopen("4.txt","r");
    while(fgets(x,80,a1)!=NULL)
    {
   	 printf("%s",x);
    }
    printf("\n\n You want to buy it. (Y/N) :- ");
    scanf("%s",&ch1);
    if(ch1=='Y'||ch1=='y')
    {
	 printf(" Enter Quantity you want (Max. %d) = ",a[0]);
	 scanf("%d",&q1);
	 a[0]=(a[0]-q1);
	 a1=a1+(q1*11490);
	 printf("\n\n You want to Buy More (Y/N) :- ");
	 scanf("%s",&ch3);
	 if(ch3=='Y'||ch3=='y')
	 {
	  FILE *abc;
	  abc=fopen("data.txt","r");
	  while(fgets(y,80,abc)!=NULL)
	  {
	   printf("%s",y);	
	  }
	  printf(" Choose any option from above list :- ");
	  scanf("%d",&ch4);
	  switch(ch4)
	  {
	   case 1:
	  	 goto A;
	  	 break;
	   case 2:
	  	 goto B;
	  	 break;
	   case 3:
	  	 goto C;
	  	 break;
	   case 4:
	  	 goto D;
	  	 break;
  	   case 5:
  	  	 goto E;
  	  	 break;
  	   case 6:
  	  	 goto F;
  	  	 break;
  	   case 7:
  	  	 goto G;
  	  	 break;
  	   case 8:
  	  	 goto H;
  	  	 break;
  	   case 9:
  	  	 goto I;
  	  	 break;
  	   case 10:
  	  	 goto J;
  	  	 break;
  	   case 11:
  	  	 goto K;
  	  	 break;
  	   case 12:
  	  	 goto L;
  	  	 break;
  	   case 13:
  	  	 goto M;
  	  	 break;
  	   case 14:
  	  	 goto N;
  	  	 break;
  	   case 15:
  	  	 goto O;
  	  	 break;
  	   default:
  	  	 printf("\n  -: INVALID OPTION :-\n");
	  }
	 }
	 else
	 if(ch3=='N'||ch3=='n')
	 {
	  
     }
	 else
	 {
	  printf("\n  -: INVALID CHOICE :-\n");
	 }
    }
    else
    if(ch1=='N'||ch1=='n')
    {
     printf("\n Want to Buy any other ITEM (Y/N) :- ");
     scanf("%s",&ch2);
     if(ch2=='Y'||ch2=='y')
     {
      FILE *abc;
	  abc=fopen("data.txt","r");
	  while(fgets(y,80,abc)!=NULL)
	  {
	   printf("%s",y);	
	  }	
      printf(" Choose any option from above list :- ");
	  scanf("%d",&ch4);
	  switch(ch4)
	  {
	   case 1:
	  	 goto A;
	  	 break;
	   case 2:
	  	 goto B;
	  	 break;
	   case 3:
	  	 goto C;
	  	 break;
	   case 4:
	  	 goto D;
	  	 break;
  	   case 5:
  	  	 goto E;
  	  	 break;
  	   case 6:
  	  	 goto F;
  	  	 break;
  	   case 7:
  	  	 goto G;
  	  	 break;
  	   case 8:
  	  	 goto H;
  	  	 break;
  	   case 9:
  	  	 goto I;
  	  	 break;
  	   case 10:
  	  	 goto J;
  	  	 break;
  	   case 11:
  	  	 goto K;
  	  	 break;
  	   case 12:
  	  	 goto L;
  	  	 break;
  	   case 13:
  	  	 goto M;
  	  	 break;
  	   case 14:
  	  	 goto N;
  	  	 break;
  	   case 15:
  	  	 goto O;
  	  	 break;
  	   default:
  	  	 printf("\n  -: INVALID OPTION :-\n");
	  }
     }
     else
     if(ch2=='N'||ch2=='n')
     {
      
     }
     else
     {
	  printf("\n  -: INVALID CHOICE :-\n");
     }
    }
    else
    {
     printf("\n  -: INVALID CHOICE :-\n");
    }
    break;
   }
  }
  case 2:
  {
   B:
   {
    printf("\n  -: IPHONE 4S :-\n");
    FILE *a1;
    a1=fopen("4s.txt","r");
    while(fgets(x,80,a1)!=NULL)
    {
   	 printf("%s",x);
    }
    printf("\n\n You want to buy it. (Y/N) :- ");
    scanf("%s",&ch1);
    if(ch1=='Y'||ch1=='y')
    {
	 printf(" Enter Quantity you want (Max. %d) = ",a[1]);
	 scanf("%d",&q2);
	 a[1]=(a[1]-q2);
	 a2=a2+(q2*12999);
	 printf("\n You want to Buy More (Y/N) :- ");
	 scanf("%s",&ch3);
	 if(ch3=='Y'||ch3=='y')
	 {
	  FILE *abc;
	  abc=fopen("data.txt","r");
	  while(fgets(y,80,abc)!=NULL)
	  {
	   printf("%s",y);	
	  }	
	  printf(" Choose any option from above list :- ");
	  scanf("%d",&ch4);
	  switch(ch4)
	  {
	   case 1:
	  	 goto A;
	  	 break;
	   case 2:
	  	 goto B;
	  	 break;
	   case 3:
	  	 goto C;
	  	 break;
	   case 4:
	  	 goto D;
	  	 break;
  	   case 5:
  	  	 goto E;
  	  	 break;
  	   case 6:
  	  	 goto F;
  	  	 break;
  	   case 7:
  	  	 goto G;
  	  	 break;
  	   case 8:
  	  	 goto H;
  	  	 break;
  	   case 9:
  	  	 goto I;
  	  	 break;
  	   case 10:
  	  	 goto J;
  	  	 break;
  	   case 11:
  	  	 goto K;
  	  	 break;
  	   case 12:
  	  	 goto L;
  	  	 break;
  	   case 13:
  	  	 goto M;
  	  	 break;
  	   case 14:
  	  	 goto N;
  	  	 break;
  	   case 15:
  	  	 goto O;
  	  	 break;
  	   default:
  	  	 printf("\n  -: INVALID OPTION :-\n");
	  }
	 }
	 else
	 if(ch3=='N'||ch3=='n')
	 {
	  
	 }
	 else
	 {
	  printf("\n  -: INVALID CHOICE :-\n");
	 }
    }
    else
    if(ch1=='N'||ch1=='n')
    {
     printf("\n Want to Buy any other ITEM (Y/N) :- ");
     scanf("%s",&ch2);
     if(ch2=='Y'||ch2=='y')
     {
      FILE *abc;
	  abc=fopen("data.txt","r");
	  while(fgets(y,80,abc)!=NULL)
	  {
	   printf("%s",y);	
	  }	
      printf(" Choose any option from above list :- ");
	  scanf("%d",&ch4);
	  switch(ch4)
	  {
	   case 1:
	  	 goto A;
	  	 break;
	   case 2:
	  	 goto B;
	  	 break;
	   case 3:
	  	 goto C;
	  	 break;
	   case 4:
	  	 goto D;
	  	 break;
  	   case 5:
  	  	 goto E;
  	  	 break;
  	   case 6:
  	  	 goto F;
  	  	 break;
  	   case 7:
  	  	 goto G;
  	  	 break;
  	   case 8:
  	  	 goto H;
  	  	 break;
  	   case 9:
  	  	 goto I;
  	  	 break;
  	   case 10:
  	  	 goto J;
  	  	 break;
  	   case 11:
  	  	 goto K;
  	  	 break;
  	   case 12:
  	  	 goto L;
  	  	 break;
  	   case 13:
  	  	 goto M;
  	  	 break;
  	   case 14:
  	  	 goto N;
  	  	 break;
  	   case 15:
  	  	 goto O;
  	  	 break;
  	   default:
  	  	 printf("\n  -: INVALID OPTION :-\n");
	  }
     }
     else
     if(ch2=='N'||ch2=='n')
     {
      
     }
     else
     {
	  printf("\n  -: INVALID CHOICE :-\n");
     }
    }
    else
    {
     printf("\n  -: INVALID CHOICE :-\n");
    }
    break;
   }
  }
  case 3:
  {
   C:
   {
    printf("\n  -: IPHONE 5 :-\n");
    FILE *a1;
    a1=fopen("5.txt","r");
    while(fgets(x,80,a1)!=NULL)
    {
   	 printf("%s",x);
    }
    printf("\n\n You want to buy it. (Y/N) :- ");
    scanf("%s",&ch1);
    if(ch1=='Y'||ch1=='y')
    {
	 printf(" Enter Quantity you want (Max. %d) = ",a[2]);
	 scanf("%d",&q3);
	 a[2]=(a[2]-q3);
	 a3=a3+(q3*14490);
	 printf("\n You want to Buy More (Y/N) :- ");
	 scanf("%s",&ch3);
	 if(ch3=='Y'||ch3=='y')
	 {
	  FILE *abc;
	  abc=fopen("data.txt","r");
	  while(fgets(y,80,abc)!=NULL)
	  {
	   printf("%s",y);	
	  }	
	  printf(" Choose any option from above list :- ");
	  scanf("%d",&ch4);
	  switch(ch4)
	  {
	   case 1:
	  	 goto A;
	  	 break;
	   case 2:
	  	 goto B;
	  	 break;
	   case 3:
	  	 goto C;
	  	 break;
	   case 4:
	  	 goto D;
	  	 break;
  	   case 5:
  	  	 goto E;
  	  	 break;
  	   case 6:
  	  	 goto F;
  	  	 break;
  	   case 7:
  	  	 goto G;
  	  	 break;
  	   case 8:
  	  	 goto H;
  	  	 break;
  	   case 9:
  	  	 goto I;
  	  	 break;
  	   case 10:
  	  	 goto J;
  	  	 break;
  	   case 11:
  	  	 goto K;
  	  	 break;
  	   case 12:
  	  	 goto L;
  	  	 break;
  	   case 13:
  	  	 goto M;
  	  	 break;
  	   case 14:
  	  	 goto N;
  	  	 break;
  	   case 15:
  	  	 goto O;
  	  	 break;
  	   default:
  	  	 printf("\n  -: INVALID OPTION :-\n");
	  }
	 }
	 else
	 if(ch3=='N'||ch3=='n')
	 {
	  
	 }
	 else
	 {
	  printf("\n  -: INVALID CHOICE :-\n");
	 }
    }
    else
    if(ch1=='N'||ch1=='n')
    {
     printf("\n Want to Buy any other ITEM (Y/N) :- ");
     scanf("%s",&ch2);
     if(ch2=='Y'||ch2=='y')
     {
      FILE *abc;
	  abc=fopen("data.txt","r");
	  while(fgets(y,80,abc)!=NULL)
	  {
	   printf("%s",y);	
	  }	
      printf(" Choose any option from above list :- ");
	  scanf("%d",&ch4);
	  switch(ch4)
	  {
	   case 1:
	  	 goto A;
	  	 break;
	   case 2:
	  	 goto B;
	  	 break;
	   case 3:
	  	 goto C;
	  	 break;
	   case 4:
	  	 goto D;
	  	 break;
  	   case 5:
  	  	 goto E;
  	  	 break;
  	   case 6:
  	  	 goto F;
  	  	 break;
  	   case 7:
  	  	 goto G;
  	  	 break;
  	   case 8:
  	  	 goto H;
  	  	 break;
  	   case 9:
  	  	 goto I;
  	  	 break;
  	   case 10:
  	  	 goto J;
  	  	 break;
  	   case 11:
  	  	 goto K;
  	  	 break;
  	   case 12:
  	  	 goto L;
  	  	 break;
  	   case 13:
  	  	 goto M;
  	  	 break;
  	   case 14:
  	  	 goto N;
  	  	 break;
  	   case 15:
  	  	 goto O;
  	  	 break;
  	   default:
  	  	 printf("\n  -: INVALID OPTION :-\n");
	  }
     }
     else
     if(ch2=='N'||ch2=='n')
     {
      
     }
     else
     {
	  printf("\n  -: INVALID CHOICE :-\n");
     }
    }
    else
    {
     printf("\n  -: INVALID CHOICE :-\n");
    }
    break;
   }
  }
  case 4:
  {
   D:
   {
    printf("\n  -: IPHONE 5C :-\n");
    FILE *a1;
    a1=fopen("5c.txt","r");
    while(fgets(x,80,a1)!=NULL)
    {
   	 printf("%s",x);
    }
    printf("\n\n You want to buy it. (Y/N) :- ");
    scanf("%s",&ch1);
    if(ch1=='Y'||ch1=='y')
    {
	 printf(" Enter Quantity you want (Max. %d) = ",a[3]);
	 scanf("%d",&q4);
	 a[3]=(a[3]-q4);
	 a4=a4+(q4*16740);
	 printf("\n You want to Buy More (Y/N) :- ");
	 scanf("%s",&ch3);
	 if(ch3=='Y'||ch3=='y')
	 {
	  FILE *abc;
	  abc=fopen("data.txt","r");
	  while(fgets(y,80,abc)!=NULL)
	  {
	   printf("%s",y);	
	  }	
	  printf(" Choose any option from above list :- ");
	  scanf("%d",&ch4);
	  switch(ch4)
	  {
	   case 1:
	  	 goto A;
	  	 break;
	   case 2:
	  	 goto B;
	  	 break;
	   case 3:
	  	 goto C;
	  	 break;
	   case 4:
	  	 goto D;
	  	 break;
  	   case 5:
  	  	 goto E;
  	  	 break;
  	   case 6:
  	  	 goto F;
  	  	 break;
  	   case 7:
  	  	 goto G;
  	  	 break;
  	   case 8:
  	  	 goto H;
  	  	 break;
  	   case 9:
  	  	 goto I;
  	  	 break;
  	   case 10:
  	  	 goto J;
  	  	 break;
  	   case 11:
  	  	 goto K;
  	  	 break;
  	   case 12:
  	  	 goto L;
  	  	 break;
  	   case 13:
  	  	 goto M;
  	  	 break;
  	   case 14:
  	  	 goto N;
  	  	 break;
  	   case 15:
  	  	 goto O;
  	  	 break;
  	   default:
  	  	 printf("\n  -: INVALID OPTION :-\n");
	  }
	 }
	 else
	 if(ch3=='N'||ch3=='n')
	 {
	  
	 }
	 else
	 {
	  printf("\n  -: INVALID CHOICE :-\n");
	 }
    }
    else
    if(ch1=='N'||ch1=='n')
    {
     printf("\n Want to Buy any other ITEM (Y/N) :- ");
     scanf("%s",&ch2);
     if(ch2=='Y'||ch2=='y')
     {
      FILE *abc;
	  abc=fopen("data.txt","r");
	  while(fgets(y,80,abc)!=NULL)
	  {
	   printf("%s",y);	
	  }	
      printf(" Choose any option from above list :- ");
	  scanf("%d",&ch4);
	  switch(ch4)
	  {
	   case 1:
	  	 goto A;
	  	 break;
	   case 2:
	  	 goto B;
	  	 break;
	   case 3:
	  	 goto C;
	  	 break;
	   case 4:
	  	 goto D;
	  	 break;
  	   case 5:
  	  	 goto E;
  	  	 break;
  	   case 6:
  	  	 goto F;
  	  	 break;
  	   case 7:
  	  	 goto G;
  	  	 break;
  	   case 8:
  	  	 goto H;
  	  	 break;
  	   case 9:
  	  	 goto I;
  	  	 break;
  	   case 10:
  	  	 goto J;
  	  	 break;
  	   case 11:
  	  	 goto K;
  	  	 break;
  	   case 12:
  	  	 goto L;
  	  	 break;
  	   case 13:
  	  	 goto M;
  	  	 break;
  	   case 14:
  	  	 goto N;
  	  	 break;
  	   case 15:
  	  	 goto O;
  	  	 break;
  	   default:
  	  	 printf("\n  -: INVALID OPTION :-\n");
	  }
     }
     else
     if(ch2=='N'||ch2=='n')
     {
      
     }
     else
     {
	  printf("\n  -: INVALID CHOICE :-\n");
     }
    }
    else
    {
     printf("\n  -: INVALID CHOICE :-\n");
    }
    break;
   }
  }
  case 5:
  {
   E:
   {
    printf("\n   -: IPHONE 5S :-\n");
    FILE *a1;
    a1=fopen("5s.txt","r");
    while(fgets(x,80,a1)!=NULL)
    {
   	 printf("%s",x);
    }
    printf("\n\n You want to buy it. (Y/N) :- ");
    scanf("%s",&ch1);
    if(ch1=='Y'||ch1=='y')
    {
	 printf(" Enter Quantity you want (Max. %d) = ",a[4]);
	 scanf("%d",&q5);
	 a[4]=(a[4]-q5);
	 a5=a5+(q5*19490);
	 printf("\n You want to Buy More (Y/N) :- ");
	 scanf("%s",&ch3);
	 if(ch3=='Y'||ch3=='y')
	 {
	  FILE *abc;
	  abc=fopen("data.txt","r");
	  while(fgets(y,80,abc)!=NULL)
	  {
	   printf("%s",y);	
	  }	
	  printf(" Choose any option from above list :- ");
	  scanf("%d",&ch4);
	  switch(ch4)
	  {
	   case 1:
	  	 goto A;
	  	 break;
	   case 2:
	  	 goto B;
	  	 break;
	   case 3:
	  	 goto C;
	  	 break;
	   case 4:
	  	 goto D;
	  	 break;
  	   case 5:
  	  	 goto E;
  	  	 break;
  	   case 6:
  	  	 goto F;
  	  	 break;
  	   case 7:
  	  	 goto G;
  	  	 break;
  	   case 8:
  	  	 goto H;
  	  	 break;
  	   case 9:
  	  	 goto I;
  	  	 break;
  	   case 10:
  	  	 goto J;
  	  	 break;
  	   case 11:
  	  	 goto K;
  	  	 break;
  	   case 12:
  	  	 goto L;
  	  	 break;
  	   case 13:
  	  	 goto M;
  	  	 break;
  	   case 14:
  	  	 goto N;
  	  	 break;
  	   case 15:
  	  	 goto O;
  	  	 break;
  	   default:
  	  	 printf("\n  -: INVALID OPTION :-\n");
	  }
	 }
	 else
	 if(ch3=='N'||ch3=='n')
	 {
	  
	 }
	 else
	 {
	  printf("\n  -: INVALID CHOICE :-\n");
	 }
    }
    else
    if(ch1=='N'||ch1=='n')
    {
     printf("\n Want to Buy any other ITEM (Y/N) :- ");
     scanf("%s",&ch2);
     if(ch2=='Y'||ch2=='y')
     {
      FILE *abc;
	  abc=fopen("data.txt","r");
	  while(fgets(y,80,abc)!=NULL)
	  {
	   printf("%s",y);	
	  }	
      printf(" Choose any option from above list :- ");
	  scanf("%d",&ch4);
	  switch(ch4)
	  {
	   case 1:
	  	 goto A;
	  	 break;
	   case 2:
	  	 goto B;
	  	 break;
	   case 3:
	  	 goto C;
	  	 break;
	   case 4:
	  	 goto D;
	  	 break;
  	   case 5:
  	  	 goto E;
  	  	 break;
  	   case 6:
  	  	 goto F;
  	  	 break;
  	   case 7:
  	  	 goto G;
  	  	 break;
  	   case 8:
  	  	 goto H;
  	  	 break;
  	   case 9:
  	  	 goto I;
  	  	 break;
  	   case 10:
  	  	 goto J;
  	  	 break;
  	   case 11:
  	  	 goto K;
  	  	 break;
  	   case 12:
  	  	 goto L;
  	  	 break;
  	   case 13:
  	  	 goto M;
  	  	 break;
  	   case 14:
  	  	 goto N;
  	  	 break;
  	   case 15:
  	  	 goto O;
  	  	 break;
  	   default:
  	  	 printf("\n  -: INVALID OPTION :-\n");
	  }
     }
     else
     if(ch2=='N'||ch2=='n')
     {
      
     }
     else
     {
	  printf("\n  -: INVALID CHOICE :-\n");
     }
    }
    else
    {
     printf("\n  -: INVALID CHOICE :-\n");
    }
    break;
   }
  }
  case 6:
  {
   F:
   {
    printf("\n   -: IPHONE SE :-\n");
    FILE *a1;
    a1=fopen("se.txt","r");
    while(fgets(x,80,a1)!=NULL)
    {
   	 printf("%s",x);
    }
    printf("\n\n You want to buy it. (Y/N) :- ");
    scanf("%s",&ch1);
    if(ch1=='Y'||ch1=='y')
    {
	 printf(" Enter Quantity you want (Max. %d) = ",a[5]);
	 scanf("%d",&q6);
	 a[5]=(a[5]-q6);
	 a6=a6+(q6*20949);
	 printf("\n You want to Buy More (Y/N) :- ");
	 scanf("%s",&ch3);
	 if(ch3=='Y'||ch3=='y')
	 {
	  FILE *abc;
	  abc=fopen("data.txt","r");
	  while(fgets(y,80,abc)!=NULL)
	  {
	   printf("%s",y);	
	  }	
	  printf(" Choose any option from above list :- ");
	  scanf("%d",&ch4);
	  switch(ch4)
	  {
	   case 1:
	  	 goto A;
	  	 break;
	   case 2:
	  	 goto B;
	  	 break;
	   case 3:
	  	 goto C;
	  	 break;
	   case 4:
	  	 goto D;
	  	 break;
  	   case 5:
  	  	 goto E;
  	  	 break;
  	   case 6:
  	  	 goto F;
  	  	 break;
  	   case 7:
  	  	 goto G;
  	  	 break;
  	   case 8:
  	  	 goto H;
  	  	 break;
  	   case 9:
  	  	 goto I;
  	  	 break;
  	   case 10:
  	  	 goto J;
  	  	 break;
  	   case 11:
  	  	 goto K;
  	  	 break;
  	   case 12:
  	  	 goto L;
  	  	 break;
  	   case 13:
  	  	 goto M;
  	  	 break;
  	   case 14:
  	  	 goto N;
  	  	 break;
  	   case 15:
  	  	 goto O;
  	  	 break;
  	   default:
  	  	 printf("\n  -: INVALID OPTION :-\n");
	  }
	 }
	 else
	 if(ch3=='N'||ch3=='n')
	 {
	  
	 }
	 else
	 {
	  printf("\n  -: INVALID CHOICE :-\n");
	 }
    }
    else
    if(ch1=='N'||ch1=='n')
    {
     printf("\n Want to Buy any other ITEM (Y/N) :- ");
     scanf("%s",&ch2);
     if(ch2=='Y'||ch2=='y')
     {
      FILE *abc;
	  abc=fopen("data.txt","r");
	  while(fgets(y,80,abc)!=NULL)
	  {
	   printf("%s",y);	
	  }	
      printf(" Choose any option from above list :- ");
	  scanf("%d",&ch4);
	  switch(ch4)
	  {
	   case 1:
	  	 goto A;
	  	 break;
	   case 2:
	  	 goto B;
	  	 break;
	   case 3:
	  	 goto C;
	  	 break;
	   case 4:
	  	 goto D;
	  	 break;
  	   case 5:
  	  	 goto E;
  	  	 break;
  	   case 6:
  	  	 goto F;
  	  	 break;
  	   case 7:
  	  	 goto G;
  	  	 break;
  	   case 8:
  	  	 goto H;
  	  	 break;
  	   case 9:
  	  	 goto I;
  	  	 break;
  	   case 10:
  	  	 goto J;
  	  	 break;
  	   case 11:
  	  	 goto K;
  	  	 break;
  	   case 12:
  	  	 goto L;
  	  	 break;
  	   case 13:
  	  	 goto M;
  	  	 break;
  	   case 14:
  	  	 goto N;
  	  	 break;
  	   case 15:
  	  	 goto O;
  	  	 break;
  	   default:
  	  	 printf("\n  -: INVALID OPTION :-\n");
	  }
     }
     else
     if(ch2=='N'||ch2=='n')
     {
      
     }
     else
     {
	  printf("\n  -: INVALID CHOICE :-\n");
     }
    }
    else
    {
     printf("\n  -: INVALID CHOICE :-\n");
    }
    break;
   }
  }
  case 7:
  {
   G:
   {
    printf("\n   -: IPHONE 6 :-\n");
    FILE *a1;
    a1=fopen("6.txt","r");
    while(fgets(x,80,a1)!=NULL)
    {
   	 printf("%s",x);
    }
    printf("\n\n You want to buy it. (Y/N) :- ");
    scanf("%s",&ch1);
    if(ch1=='Y'||ch1=='y')
    {
	 printf(" Enter Quantity you want (Max. %d) = ",a[6]);
	 scanf("%d",&q7);
	 a[6]=(a[6]-q7);
	 a7=a7+(q7*25399);
	 printf("\n You want to Buy More (Y/N) :- ");
	 scanf("%s",&ch3);
	 if(ch3=='Y'||ch3=='y')
	 {
	  FILE *abc;
	  abc=fopen("data.txt","r");
	  while(fgets(y,80,abc)!=NULL)
	  {
	   printf("%s",y);	
	  }	
	  printf(" Choose any option from above list :- ");
	  scanf("%d",&ch4);
	  switch(ch4)
	  {
	   case 1:
	  	 goto A;
	  	 break;
	   case 2:
	  	 goto B;
	  	 break;
	   case 3:
	  	 goto C;
	  	 break;
	   case 4:
	  	 goto D;
	  	 break;
  	   case 5:
  	  	 goto E;
  	  	 break;
  	   case 6:
  	  	 goto F;
  	  	 break;
  	   case 7:
  	  	 goto G;
  	  	 break;
  	   case 8:
  	  	 goto H;
  	  	 break;
  	   case 9:
  	  	 goto I;
  	  	 break;
  	   case 10:
  	  	 goto J;
  	  	 break;
  	   case 11:
  	  	 goto K;
  	  	 break;
  	   case 12:
  	  	 goto L;
  	  	 break;
  	   case 13:
  	  	 goto M;
  	  	 break;
  	   case 14:
  	  	 goto N;
  	  	 break;
  	   case 15:
  	  	 goto O;
  	  	 break;
  	   default:
  	  	 printf("\n  -: INVALID OPTION :-\n");
	  }
	 }
	 else
	 if(ch3=='N'||ch3=='n')
	 {
	  
	 }
	 else
	 {
	  printf("\n  -: INVALID CHOICE :-\n");
	 }
    }
    else
    if(ch1=='N'||ch1=='n')
    {
     printf("\n Want to Buy any other ITEM (Y/N) :- ");
     scanf("%s",&ch2);
     if(ch2=='Y'||ch2=='y')
     {
      FILE *abc;
	  abc=fopen("data.txt","r");
	  while(fgets(y,80,abc)!=NULL)
	  {
	   printf("%s",y);	
	  }	
      printf(" Choose any option from above list :- ");
	  scanf("%d",&ch4);
	  switch(ch4)
	  {
	   case 1:
	  	 goto A;
	  	 break;
	   case 2:
	  	 goto B;
	  	 break;
	   case 3:
	  	 goto C;
	  	 break;
	   case 4:
	  	 goto D;
	  	 break;
  	   case 5:
  	  	 goto E;
  	  	 break;
  	   case 6:
  	  	 goto F;
  	  	 break;
  	   case 7:
  	  	 goto G;
  	  	 break;
  	   case 8:
  	  	 goto H;
  	  	 break;
  	   case 9:
  	  	 goto I;
  	  	 break;
  	   case 10:
  	  	 goto J;
  	  	 break;
  	   case 11:
  	  	 goto K;
  	  	 break;
  	   case 12:
  	  	 goto L;
  	  	 break;
  	   case 13:
  	  	 goto M;
  	  	 break;
  	   case 14:
  	  	 goto N;
  	  	 break;
  	   case 15:
  	  	 goto O;
  	  	 break;
  	   default:
  	  	 printf("\n  -: INVALID OPTION :-\n");
	  }
     }
     else
     if(ch2=='N'||ch2=='n')
     {
      
     }
     else
     {
	  printf("\n  -: INVALID CHOICE :-\n");
     }
    }
    else
    {
     printf("\n  -: INVALID CHOICE :-\n");
    }
   }
   break;
  }
  case 8:
  {
   H:
   {
    printf("\n   -: IPHONE 6+ :-\n");
    FILE *a1;
    a1=fopen("6+.txt","r");
    while(fgets(x,80,a1)!=NULL)
    {
   	 printf("%s",x);
    }
    printf("\n\n You want to buy it. (Y/N) :- ");
    scanf("%s",&ch1);
    if(ch1=='Y'||ch1=='y')
    {
	 printf(" Enter Quantity you want (Max. %d) = ",a[7]);
	 scanf("%d",&q8);
	 a[7]=(a[7]-q8);
	 a8=a8+(q8*28490);
	 printf("\n You want to Buy More (Y/N) :- ");
	 scanf("%s",&ch3);
	 if(ch3=='Y'||ch3=='y')
	 {
	  FILE *abc;
	  abc=fopen("data.txt","r");
	  while(fgets(y,80,abc)!=NULL)
	  {
	   printf("%s",y);	
	  }	
	  printf(" Choose any option from above list :- ");
	  scanf("%d",&ch4);
	  switch(ch4)
	  {
	   case 1:
	  	 goto A;
	  	 break;
	   case 2:
	  	 goto B;
	  	 break;
	   case 3:
	  	 goto C;
	  	 break;
	   case 4:
	  	 goto D;
	  	 break;
  	   case 5:
  	  	 goto E;
  	  	 break;
  	   case 6:
  	  	 goto F;
  	  	 break;
  	   case 7:
  	  	 goto G;
  	  	 break;
  	   case 8:
  	  	 goto H;
  	  	 break;
  	   case 9:
  	  	 goto I;
  	  	 break;
  	   case 10:
  	  	 goto J;
  	  	 break;
  	   case 11:
  	  	 goto K;
  	  	 break;
  	   case 12:
  	  	 goto L;
  	  	 break;
  	   case 13:
  	  	 goto M;
  	  	 break;
  	   case 14:
  	  	 goto N;
  	  	 break;
  	   case 15:
  	  	 goto O;
  	  	 break;
  	   default:
  	  	 printf("\n  -: INVALID OPTION :-\n");
	  }
	 }
	 else
	 if(ch3=='N'||ch3=='n')
	 {
	  
	 }
	 else
	 {
	  printf("\n  -: INVALID CHOICE :-\n");
	 }
    }
    else
    if(ch1=='N'||ch1=='n')
    {
     printf("\n Want to Buy any other ITEM (Y/N) :- ");
     scanf("%s",&ch2);
     if(ch2=='Y'||ch2=='y')
     {
      FILE *abc;
	  abc=fopen("data.txt","r");
	  while(fgets(y,80,abc)!=NULL)
	  {
	   printf("%s",y);	
	  }	
      printf(" Choose any option from above list :- ");
	  scanf("%d",&ch4);
	  switch(ch4)
	  {
	   case 1:
	  	 goto A;
	  	 break;
	   case 2:
	  	 goto B;
	  	 break;
	   case 3:
	  	 goto C;
	  	 break;
	   case 4:
	  	 goto D;
	  	 break;
  	   case 5:
  	  	 goto E;
  	  	 break;
  	   case 6:
  	  	 goto F;
  	  	 break;
  	   case 7:
  	  	 goto G;
  	  	 break;
  	   case 8:
  	  	 goto H;
  	  	 break;
  	   case 9:
  	  	 goto I;
  	  	 break;
  	   case 10:
  	  	 goto J;
  	  	 break;
  	   case 11:
  	  	 goto K;
  	  	 break;
  	   case 12:
  	  	 goto L;
  	  	 break;
  	   case 13:
  	  	 goto M;
  	  	 break;
  	   case 14:
  	  	 goto N;
  	  	 break;
  	   case 15:
  	  	 goto O;
  	  	 break;
  	   default:
  	  	 printf("\n  -: INVALID OPTION :-\n");
	  }
     }
     else
     if(ch2=='N'||ch2=='n')
     {
      
     }
     else
     {
	  printf("\n  -: INVALID CHOICE :-\n");
     }
    }
    else
    {
     printf("\n  -: INVALID CHOICE :-\n");
    }
    break;
   }
  }
  case 9:
  {
   I:
   {
    printf("\n   -: IPHONE 6S :-\n");
    FILE *a1;
    a1=fopen("6s.txt","r");
    while(fgets(x,80,a1)!=NULL)
    {
   	 printf("%s",x);
    }
    printf("\n\n You want to buy it. (Y/N) :- ");
    scanf("%s",&ch1);
    if(ch1=='Y'||ch1=='y')
    {
	 printf(" Enter Quantity you want (Max. %d) = ",a[8]);
	 scanf("%d",&q9);
	 a[8]=(a[8]-q9);
	 a9=a9+(q9*32999);
	 printf("\n You want to Buy More (Y/N) :- ");
	 scanf("%s",&ch3);
	 if(ch3=='Y'||ch3=='y')
	 {
	  FILE *abc;
	  abc=fopen("data.txt","r");
	  while(fgets(y,80,abc)!=NULL)
	  {
	   printf("%s",y);	
	  }	
	  printf(" Choose any option from above list :- ");
	  scanf("%d",&ch4);
	  switch(ch4)
	  {
	   case 1:
	  	 goto A;
	  	 break;
	   case 2:
	  	 goto B;
	  	 break;
	   case 3:
	  	 goto C;
	  	 break;
	   case 4:
	  	 goto D;
	  	 break;
  	   case 5:
  	  	 goto E;
  	  	 break;
  	   case 6:
  	  	 goto F;
  	  	 break;
  	   case 7:
  	  	 goto G;
  	  	 break;
  	   case 8:
  	  	 goto H;
  	  	 break;
  	   case 9:
  	  	 goto I;
  	  	 break;
  	   case 10:
  	  	 goto J;
  	  	 break;
  	   case 11:
  	  	 goto K;
  	  	 break;
  	   case 12:
  	  	 goto L;
  	  	 break;
  	   case 13:
  	  	 goto M;
  	  	 break;
  	   case 14:
  	  	 goto N;
  	  	 break;
  	   case 15:
  	  	 goto O;
  	  	 break;
  	   default:
  	  	 printf("\n  -: INVALID OPTION :-\n");
	  }
	 }
	 else
	 if(ch3=='N'||ch3=='n')
	 {
	  
	 }
	 else
	 {
	  printf("\n  -: INVALID CHOICE :-\n");
	 }
    }
    else
    if(ch1=='N'||ch1=='n')
    {
     printf("\n Want to Buy any other ITEM (Y/N) :- ");
     scanf("%s",&ch2);
     if(ch2=='Y'||ch2=='y')
     {
      FILE *abc;
	  abc=fopen("data.txt","r");
	  while(fgets(y,80,abc)!=NULL)
	  {
	   printf("%s",y);	
	  }	
      printf(" Choose any option from above list :- ");
	  scanf("%d",&ch4);
	  switch(ch4)
	  {
	   case 1:
	  	 goto A;
	  	 break;
	   case 2:
	  	 goto B;
	  	 break;
	   case 3:
	  	 goto C;
	  	 break;
	   case 4:
	  	 goto D;
	  	 break;
  	   case 5:
  	  	 goto E;
  	  	 break;
  	   case 6:
  	  	 goto F;
  	  	 break;
  	   case 7:
  	  	 goto G;
  	  	 break;
  	   case 8:
  	  	 goto H;
  	  	 break;
  	   case 9:
  	  	 goto I;
  	  	 break;
  	   case 10:
  	  	 goto J;
  	  	 break;
  	   case 11:
  	  	 goto K;
  	  	 break;
  	   case 12:
  	  	 goto L;
  	  	 break;
  	   case 13:
  	  	 goto M;
  	  	 break;
  	   case 14:
  	  	 goto N;
  	  	 break;
  	   case 15:
  	  	 goto O;
  	  	 break;
  	   default:
  	  	 printf("\n  -: INVALID OPTION :-\n");
	  }
     }
     else
     if(ch2=='N'||ch2=='n')
     {
      
     }
     else
     {
	  printf("\n  -: INVALID CHOICE :-\n");
     }
    }
    else
    {
     printf("\n  -: INVALID CHOICE :-\n");
    }
    break;
   }
  }
  case 10:
  {
   J:
   {
    printf("\n   -: IPHONE 6S+ :-\n");
    FILE *a1;
    a1=fopen("6s+.txt","r");
    while(fgets(x,80,a1)!=NULL)
    {
   	 printf("%s",x);
    }
    printf("\n\n You want to buy it. (Y/N) :- ");
    scanf("%s",&ch1);
    if(ch1=='Y'||ch1=='y')
    {
	 printf(" Enter Quantity you want (Max. %d) = ",a[9]);
	 scanf("%d",&q10);
	 a[9]=(a[9]-q10);
	 a10=a10+(q10*39290);
	 printf("\n You want to Buy More (Y/N) :- ");
	 scanf("%s",&ch3);
	 if(ch3=='Y'||ch3=='y')
	 {
	  FILE *abc;
	  abc=fopen("data.txt","r");
	  while(fgets(y,80,abc)!=NULL)
	  {
	   printf("%s",y);	
	  }	
	  printf(" Choose any option from above list :- ");
	  scanf("%d",&ch4);
	  switch(ch4)
	  {
	   case 1:
	  	 goto A;
	  	 break;
	   case 2:
	  	 goto B;
	  	 break;
	   case 3:
	  	 goto C;
	  	 break;
	   case 4:
	  	 goto D;
	  	 break;
  	   case 5:
  	  	 goto E;
  	  	 break;
  	   case 6:
  	  	 goto F;
  	  	 break;
  	   case 7:
  	  	 goto G;
  	  	 break;
  	   case 8:
  	  	 goto H;
  	  	 break;
  	   case 9:
  	  	 goto I;
  	  	 break;
  	   case 10:
  	  	 goto J;
  	  	 break;
  	   case 11:
  	  	 goto K;
  	  	 break;
  	   case 12:
  	  	 goto L;
  	  	 break;
  	   case 13:
  	  	 goto M;
  	  	 break;
  	   case 14:
  	  	 goto N;
  	  	 break;
  	   case 15:
  	  	 goto O;
  	  	 break;
  	   default:
  	  	 printf("\n  -: INVALID OPTION :-\n");
	  }
	 }
	 else
	 if(ch3=='N'||ch3=='n')
	 {
	  
	 }
	 else
	 {
	  printf("\n  -: INVALID CHOICE :-\n");
	 }
    }
    else
    if(ch1=='N'||ch1=='n')
    {
     printf("\n Want to Buy any other ITEM (Y/N) :- ");
     scanf("%s",&ch2);
     if(ch2=='Y'||ch2=='y')
     {
      FILE *abc;
	  abc=fopen("data.txt","r");
	  while(fgets(y,80,abc)!=NULL)
	  {
	   printf("%s",y);	
	  }	
      printf(" Choose any option from above list :- ");
	  scanf("%d",&ch4);
	  switch(ch4)
	  {
	   case 1:
	  	 goto A;
	  	 break;
	   case 2:
	  	 goto B; 
	  	 break;
	   case 3:
	  	 goto C;
	  	 break;
	   case 4:
	  	 goto D;
	  	 break;
  	   case 5:
  	  	 goto E;
  	  	 break;
  	   case 6:
  	  	 goto F;
  	  	 break;
  	   case 7:
  	  	 goto G;
  	  	 break;
  	   case 8:
  	  	 goto H;
  	  	 break;
  	   case 9:
  	  	 goto I;
  	  	 break;
  	   case 10:
  	  	 goto J;
  	   	 break;
  	   case 11:
  	  	 goto K;
  	  	 break;
  	   case 12:
  	  	 goto L;
  	  	 break;
  	   case 13:
  	  	 goto M;
  	  	 break;
  	   case 14:
  	  	 goto N;
  	  	 break;
  	   case 15:
  	  	 goto O;
  	  	 break;
  	   default:
  	  	printf("\n  -: INVALID OPTION :-\n");
	  }
     }
	 else
     if(ch2=='N'||ch2=='n')
     {
      
     }
     else
     {
	  printf("\n  -: INVALID CHOICE :-\n");
     }
    }
    else
    {
     printf("\n  -: INVALID CHOICE :-\n");
    }
    break;
   }
  }
  case 11:
  {
   K:
   {
    printf("\n   -: IPHONE 7 :-\n");
    FILE *a1;
    a1=fopen("7.txt","r");
    while(fgets(x,80,a1)!=NULL)
    {
   	 printf("%s",x);
    }
    printf("\n\n You want to buy it. (Y/N) :- ");
    scanf("%s",&ch1);
    if(ch1=='Y'||ch1=='y')
    {
	 printf(" Enter Quantity you want (Max. %d) = ",a[10]);
	 scanf("%d",&q11);
	 a[10]=(a[10]-q11);
	 a11=a11+(q11*45740);
	 printf("\n You want to Buy More (Y/N) :- ");
	 scanf("%s",&ch3);
	 if(ch3=='Y'||ch3=='y')
	 {
	  FILE *abc;
	  abc=fopen("data.txt","r");
	  while(fgets(y,80,abc)!=NULL)
	  {
	   printf("%s",y);	
	  }	
	  printf(" Choose any option from above list :- ");
	  scanf("%d",&ch4);
	  switch(ch4)
	  {
	   case 1:
	  	 goto A;
	  	 break;
	   case 2:
	  	 goto B;
	  	 break;
	   case 3:
	  	 goto C;
	  	 break;
	   case 4:
	  	 goto D;
	  	 break;
  	   case 5:
  	  	 goto E;
  	  	 break;
  	   case 6:
  	  	 goto F;
  	  	 break;
  	   case 7:
  	  	 goto G;
  	  	 break;
  	   case 8:
  	  	 goto H;
  	  	 break;
  	   case 9:
  	  	 goto I;
  	  	 break;
  	   case 10:
  	  	 goto J;
  	  	 break;
  	   case 11:
  	  	 goto K;
  	  	 break;
  	   case 12:
  	  	 goto L;
  	  	 break;
  	   case 13:
  	  	 goto M;
  	  	 break;
  	   case 14:
  	  	 goto N;
  	  	 break;
  	   case 15:
  	  	 goto O;
  	  	 break;
  	   default:
  	  	 printf("\n  -: INVALID OPTION :-\n");
	  }
	 }
	 else
	 if(ch3=='N'||ch3=='n')
	 {
	  
	 }
	 else
	 {
	  printf("\n  -: INVALID CHOICE :-\n");
	 }
    }
    else
    if(ch1=='N'||ch1=='n')
    {
     printf("\n Want to Buy any other ITEM (Y/N) :- ");
     scanf("%s",&ch2);
     if(ch2=='Y'||ch2=='y')
     {
      FILE *abc;
	  abc=fopen("data.txt","r");
	  while(fgets(y,80,abc)!=NULL)
	  {
	   printf("%s",y);	
	  }	
      printf(" Choose any option from above list :- ");
	  scanf("%d",&ch4);
	  switch(ch4)
	  {
	   case 1:
	  	 goto A;
	  	 break;
	   case 2:
	  	 goto B;
	  	 break;
	   case 3:
	  	 goto C;
	  	 break;
	   case 4:
	  	 goto D;
	  	 break;
  	   case 5:
  	  	 goto E;
  	  	 break;
  	   case 6:
  	  	 goto F;
  	  	 break;
  	   case 7:
  	  	 goto G;
  	  	 break;
  	   case 8:
  	  	 goto H;
  	  	 break;
  	   case 9:
  	  	 goto I;
  	  	 break;
  	   case 10:
  	  	 goto J;
  	  	 break;
  	   case 11:
  	  	 goto K;
  	  	 break;
  	   case 12:
  	  	 goto L;
  	  	 break;
  	   case 13:
  	  	 goto M;
  	  	 break;
  	   case 14:
  	  	 goto N;
  	  	 break;
  	   case 15:
  	  	 goto O;
  	  	 break;
  	   default:
  	  	 printf("\n  -: INVALID OPTION :-\n");
	  }
     }
     else
     if(ch2=='N'||ch2=='n')
     {
      
     }
     else
     {
	  printf("\n  -: INVALID CHOICE :-\n");
     }
    }
    else
    {
     printf("\n  -: INVALID CHOICE :-\n");
    }
    break;
   }
  }
  case 12:
  {
   L:
   {
    printf("\n   -: IPHONE 7+ :-\n");
    FILE *a1;
    a1=fopen("7+.txt","r");
    while(fgets(x,80,a1)!=NULL)
    {
   	 printf("%s",x);
    }
    printf("\n\n You want to buy it. (Y/N) :- ");
    scanf("%s",&ch1);
    if(ch1=='Y'||ch1=='y')
    {
	 printf(" Enter Quantity you want (Max. %d) = ",a[11]);
	 scanf("%d",&q12);
	 a[11]=(a[11]-q12);
	 a12=a12+(q12*57399);
	 printf("\n You want to Buy More (Y/N) :- ");
	 scanf("%s",&ch3);
	 if(ch3=='Y'||ch3=='y')
	 {
	  FILE *abc;
	  abc=fopen("data.txt","r");
	  while(fgets(y,80,abc)!=NULL)
	  {
	   printf("%s",y);	
	  }	
	  printf(" Choose any option from above list :- ");
	  scanf("%d",&ch4);
	  switch(ch4)
	  {
	   case 1:
	  	 goto A;
	  	 break;
	   case 2:
	  	 goto B;
	  	 break;
	   case 3:
	  	 goto C;
	  	 break;
	   case 4:
	  	 goto D;
	  	 break;
  	   case 5:
  	  	 goto E;
  	  	 break;
  	   case 6:
  	  	 goto F;
  	  	 break;
  	   case 7:
  	  	 goto G;
  	  	 break;
  	   case 8:
  	  	 goto H;
  	  	 break;
  	   case 9:
  	  	 goto I;
  	  	 break;
  	   case 10:
  	  	 goto J;
  	  	 break;
  	   case 11:
  	  	 goto K;
  	  	 break;
  	   case 12:
  	  	 goto L;
  	  	 break;
  	   case 13:
  	  	 goto M;
  	  	 break;
  	   case 14:
  	  	 goto N;
  	  	 break;
  	   case 15:
  	  	 goto O;
  	  	 break;
  	   default:
  	  	 printf("\n  -: INVALID OPTION :-\n");
	  }
	 }
	 else
	 if(ch3=='N'||ch3=='n')
	 {
	  
	 }
	 else
	 {
	  printf("\n  -: INVALID CHOICE :-\n");
	 }
    }
    else
    if(ch1=='N'||ch1=='n')
    {
     printf("\n Want to Buy any other ITEM (Y/N) :- ");
     scanf("%s",&ch2);
     if(ch2=='Y'||ch2=='y')
     {
      FILE *abc;
	  abc=fopen("data.txt","r");
	  while(fgets(y,80,abc)!=NULL)
	  {
	   printf("%s",y);	
	  }	
      printf(" Choose any option from above list :- ");
	  scanf("%d",&ch4);
	  switch(ch4)
	  {
	   case 1:
	  	 goto A;
	  	 break;
	   case 2:
	  	 goto B;
	  	 break;
	   case 3:
	  	 goto C;
	  	 break;
	   case 4:
	  	 goto D;
	  	 break;
  	   case 5:
  	  	 goto E;
  	  	 break;
  	   case 6:
  	  	 goto F;
  	  	 break;
  	   case 7:
  	  	 goto G;
  	  	 break;
  	   case 8:
  	  	 goto H;
  	  	 break;
  	   case 9:
  	  	 goto I;
  	  	 break;
  	   case 10:
  	  	 goto J;
  	  	 break;
  	   case 11:
  	  	 goto K;
  	  	 break;
  	   case 12:
  	  	 goto L;
  	  	 break;
  	   case 13:
  	  	 goto M;
  	  	 break;
  	   case 14:
  	  	 goto N;
  	  	 break;
  	   case 15:
  	  	 goto O;
  	  	 break;
  	   default:
  	  	 printf("\n  -: INVALID OPTION :-\n");
	  }
     }
     else
     if(ch2=='N'||ch2=='n')
     {
      
     }
     else
     {
	  printf("\n  -: INVALID CHOICE :-\n");
     }
    }
    else
    {
     printf("\n  -: INVALID CHOICE :-\n");
    }
    break;
   }
  }
  case 13:
  {
   M:
   {
    printf("\n   -: IPHONE 8 :-\n");
    FILE *a1;
    a1=fopen("8.txt","r");
    while(fgets(x,80,a1)!=NULL)
    {
   	 printf("%s",x);
    }
    printf("\n\n You want to buy it. (Y/N) :- ");
    scanf("%s",&ch1);
    if(ch1=='Y'||ch1=='y')
    {
	 printf(" Enter Quantity you want (Max. %d) = ",a[12]);
	 scanf("%d",&q13);
	 a[12]=(a[12]-q13);
	 a13=a13+(q13*63490);
	 printf("\n You want to Buy More (Y/N) :- ");
	 scanf("%s",&ch3);
	 if(ch3=='Y'||ch3=='y')
	 {
	  FILE *abc;
	  abc=fopen("data.txt","r");
	  while(fgets(y,80,abc)!=NULL)
	  {
	   printf("%s",y);	
	  }	
	  printf(" Choose any option from above list :- ");
	  scanf("%d",&ch4);
	  switch(ch4)
	  {
	   case 1:
	  	 goto A;
	  	 break;
	   case 2:
	  	 goto B;
	  	 break;
	   case 3:
	  	 goto C;
	  	 break;
	   case 4:
	  	 goto D;
	  	 break;
  	   case 5:
  	  	 goto E;
  	  	 break;
  	   case 6:
  	  	 goto F;
  	  	 break;
  	   case 7:
  	  	 goto G;
  	  	 break;
  	   case 8:
  	  	 goto H;
  	  	 break;
  	   case 9:
  	  	 goto I;
  	  	 break;
  	   case 10:
  	  	 goto J;
  	  	 break;
  	   case 11:
  	  	 goto K;
  	  	 break;
  	   case 12:
  	  	 goto L;
  	  	 break;
  	   case 13:
  	  	 goto M;
  	  	 break;
  	   case 14:
  	  	 goto N;
  	  	 break;
  	   case 15:
  	  	 goto O;
  	  	 break;
  	   default:
  	  	 printf("\n  -: INVALID OPTION :-\n");
	  }
	 }
	 else
	 if(ch3=='N'||ch3=='n')
	 {
	  
	 }
	 else
	 {
	  printf("\n  -: INVALID CHOICE :-\n");
	 }
    }
    else
    if(ch1=='N'||ch1=='n')
    {
     printf("\n Want to Buy any other ITEM (Y/N) :- ");
     scanf("%s",&ch2);
     if(ch2=='Y'||ch2=='y')
     {
      FILE *abc;
	  abc=fopen("data.txt","r");
	  while(fgets(y,80,abc)!=NULL)
	  {
	   printf("%s",y);	
	  }	
      printf(" Choose any option from above list :- ");
	  scanf("%d",&ch4);
	  switch(ch4)
	  {
	   case 1:
	  	 goto A;
	  	 break;
	   case 2:
	  	 goto B;
	  	 break;
	   case 3:
	  	 goto C;
	  	 break;
	   case 4:
	  	 goto D;
	  	 break;
  	   case 5:
  	  	 goto E;
  	  	 break;
  	   case 6:
  	  	 goto F;
  	  	 break;
  	   case 7:
  	  	 goto G;
  	  	 break;
  	   case 8:
  	  	 goto H;
  	  	 break;
  	   case 9:
  	  	 goto I;
  	  	 break;
  	   case 10:
  	  	 goto J;
  	  	 break;
  	   case 11:
  	  	 goto K;
  	  	 break;
  	   case 12:
  	  	 goto L;
  	  	 break;
  	   case 13:
  	  	 goto M;
  	  	 break;
  	   case 14:
  	  	 goto N;
  	  	 break;
  	   case 15:
  	  	 goto O;
  	  	 break;
  	   default:
  	  	 printf("\n  -: INVALID OPTION :-\n");
	  }
     }
     else
     if(ch2=='N'||ch2=='n')
     {
      
     }
     else
     {
	  printf("\n  -: INVALID CHOICE :-\n");
     }
    }
    else
    {
     printf("\n  -: INVALID CHOICE :-\n");
    }
    break;
   }
  }
  case 14:
  {
   N:
   {
    printf("\n   -: IPHONE 8+ :-\n");
    FILE *a1;
    a1=fopen("8+.txt","r");
    while(fgets(x,80,a1)!=NULL)
    {
   	 printf("%s",x);
    }
    printf("\n\n You want to buy it. (Y/N) :- ");
    scanf("%s",&ch1);
    if(ch1=='Y'||ch1=='y')
    {
	 printf(" Enter Quantity you want (Max. %d) = ",a[13]);
	 scanf("%d",&q14);
	 a[13]=(a[13]-q14);
	 a14=a14+(q14*78999);
	 printf("\n You want to Buy More (Y/N) :- ");
	 scanf("%s",&ch3);
	 if(ch3=='Y'||ch3=='y')
	 {
	  FILE *abc;
	  abc=fopen("data.txt","r");
	  while(fgets(y,80,abc)!=NULL)
	  {
	   printf("%s",y);	
	  }	
	  printf(" Choose any option from above list :- ");
	  scanf("%d",&ch4);
	  switch(ch4)
	  {
	   case 1:
	  	 goto A;
	  	 break;
	   case 2:
	  	 goto B;
	  	 break;
	   case 3:
	  	 goto C;
	  	 break;
	   case 4:
	  	 goto D;
	  	 break;
  	   case 5:
  	  	 goto E;
  	  	 break;
  	   case 6:
  	  	 goto F;
  	  	 break;
  	   case 7:
  	  	 goto G;
  	  	 break;
  	   case 8:
  	  	 goto H;
  	  	 break;
  	   case 9:
  	  	 goto I;
  	  	 break;
  	   case 10:
  	  	 goto J;
  	  	 break;
  	   case 11:
  	  	 goto K;
  	  	 break;
  	   case 12:
  	  	 goto L;
  	  	 break;
  	   case 13:
  	  	 goto M;
  	  	 break;
  	   case 14:
  	  	 goto N;
  	  	 break;
  	   case 15:
  	  	 goto O;
  	  	 break;
  	   default:
  	  	 printf("\n  -: INVALID OPTION :-\n");
	  }
	 }
	 else
	 if(ch3=='N'||ch3=='n')
	 {
	  
	 }
	 else
	 {
	  printf("\n  -: INVALID CHOICE :-\n");
	 }
    }
    else
    if(ch1=='N'||ch1=='n')
    {
     printf("\n Want to Buy any other ITEM (Y/N) :- ");
     scanf("%s",&ch2);
     if(ch2=='Y'||ch2=='y')
     {
      FILE *abc;
	  abc=fopen("data.txt","r");
	  while(fgets(y,80,abc)!=NULL)
	  {
	   printf("%s",y);	
	  }	
      printf(" Choose any option from above list :- ");
	  scanf("%d",&ch4);
	  switch(ch4)
	  {
	   case 1:
	  	 goto A;
	  	 break;
	   case 2:
	  	 goto B;
	  	 break;
	   case 3:
	  	 goto C;
	  	 break;
	   case 4:
	  	 goto D;
	  	 break;
  	   case 5:
  	  	 goto E;
  	  	 break;
  	   case 6:
  	  	 goto F;
  	  	 break;
  	   case 7:
  	  	 goto G;
  	  	 break;
  	   case 8:
  	  	 goto H;
  	  	 break;
  	   case 9:
  	  	 goto I;
  	  	 break;
  	   case 10:
  	  	 goto J;
  	  	 break;
  	   case 11:
  	  	 goto K;
  	  	 break;
  	   case 12:
  	  	 goto L;
  	  	 break;
  	   case 13:
  	  	 goto M;
  	  	 break;
  	   case 14:
  	  	 goto N;
  	  	 break;
  	   case 15:
  	  	 goto O;
  	  	 break;
  	   default:
  	  	 printf("\n  -: INVALID OPTION :-\n");
	  }
     }
     else
     if(ch2=='N'||ch2=='n')
     {
      
     }
     else
     {
	  printf("\n  -: INVALID CHOICE :-\n");
     }
    }
    else
    {
     printf("\n  -: INVALID CHOICE :-\n");
    }
    break;
   }
  }
  case 15:
  {
   O:
   {
    printf("\n   -: IPHONE X :-\n");
    FILE *a1;
    a1=fopen("x.txt","r");
    while(fgets(x,80,a1)!=NULL)
    {
   	 printf("%s",x);
    }
    printf("\n\n You want to buy it. (Y/N) :- ");
    scanf("%s",&ch1);
    if(ch1=='Y'||ch1=='y')
    {
	 printf(" Enter Quantity you want (Max. %d) = ",a[14]);
	 scanf("%d",&q15);
	 a[14]=(a[14]-q15);
	 a15=a15+(q15*89490);
	 printf("\n You want to Buy More (Y/N) :- ");
	 scanf("%s",&ch3);
	 if(ch3=='Y'||ch3=='y')
	 {
	  FILE *abc;
	  abc=fopen("data.txt","r");
	  while(fgets(y,80,abc)!=NULL)
	  {
	   printf("%s",y);	
	  }	
	  printf(" Choose any option from above list :- ");
	  scanf("%d",&ch4);
	  switch(ch4)
	  {
	   case 1:
	  	 goto A;
	  	 break;
	   case 2:
	  	 goto B;
	  	 break;
	   case 3:
	  	 goto C;
	  	 break;
	   case 4:
	  	 goto D;
	  	 break;
  	   case 5:
  	  	 goto E;
  	  	 break;
  	   case 6:
  	  	 goto F;
  	  	 break;
  	   case 7:
  	  	 goto G;
  	  	 break;
  	   case 8:
  	  	 goto H;
  	  	 break;
  	   case 9:
  	  	 goto I;
  	  	 break;
  	   case 10:
  	  	 goto J;
  	  	 break;
  	   case 11:
  	  	 goto K;
  	  	 break;
  	   case 12:
  	  	 goto L;
  	  	 break;
  	   case 13:
  	  	 goto M;
  	  	 break;
  	   case 14:
  	  	 goto N;
  	  	 break;
  	   case 15:
  	  	 goto O;
  	  	 break;
  	   default:
  	  	 printf("\n  -: INVALID OPTION :-\n");
	  }
	 }
	 else
	 if(ch3=='N'||ch3=='n')
	 {
	  
	 }
	 else
	 {
	  printf("\n  -: INVALID CHOICE :-\n");
	 }
    }
    else
    if(ch1=='N'||ch1=='n')
    {
     printf("\n Want to Buy any other ITEM (Y/N) :- ");
     scanf("%s",&ch2);
     if(ch2=='Y'||ch2=='y')
     {
      FILE *abc;
	  abc=fopen("data.txt","r");
	  while(fgets(y,80,abc)!=NULL)
	  {
	   printf("%s",y);	
	  }	
      printf(" Choose any option from above list :- ");
	  scanf("%d",&ch4);
	  switch(ch4)
	  {
	   case 1:
	  	 goto A;
	  	 break;
	   case 2:
	  	 goto B;
	  	 break;
	   case 3:
	  	 goto C;
	  	 break;
	   case 4:
	  	 goto D;
	  	 break;
  	   case 5:
  	   	 goto E;
  	  	 break;
  	   case 6:
  	  	 goto F;
  	  	 break;
  	   case 7:
  	  	 goto G;
  	  	 break;
  	   case 8:
  	  	 goto H;
  	  	 break;
  	   case 9:
  	  	 goto I;
  	  	 break;
  	   case 10:
  	  	 goto J;
  	  	 break;
  	   case 11:
  	  	 goto K;
  	  	 break;
  	   case 12:
  	  	 goto L;
  	  	 break;
  	   case 13:
  	  	 goto M;
  	  	 break;
  	   case 14:
  	  	 goto N;
  	  	 break;
  	   case 15:
  	  	 goto O;
  	  	 break;
  	   default:
  	  	 printf("\n  -: INVALID OPTION :-\n");
	  }
     }
     else
     if(ch2=='N'||ch2=='n')
     {
      
     }
     else
     {
	  printf("\n  -: INVALID CHOICE :-\n");
     }
    }
    else
    {
     printf("\n  -: INVALID CHOICE :-\n");
    }
    break;
   }
  }
  default:
  {
   printf("\n    -: INVALID CHOICE :-\n");
  }
 }
 ta=(a1+a2+a3+a4+a5+a6+a7+a8+a9+a10+a11+a12+a13+a14+a15);	
 printf("\n      -----------------\n");
 printf("         YOUR BILL\n");
 printf("      -----------------\n");
 printf("\n    Username : %s",A.n);
 printf("\n    Password : %s",A.pc);
 printf("\n     AMOUNT  : %ld",ta);
 printf("\n      -----------------\n\n");
 
 fprintf(fp,"    -----------------\n");
 fprintf(fp,"       YOUR BILL\n");
 fprintf(fp,"    -----------------");
 fprintf(fp,"\n  Username : %s",A.n);
 fprintf(fp,"\n  Password : %s",A.pc);
 fprintf(fp,"\n   AMOUNT  : %ld",ta);
 fprintf(fp,"\n    -----------------\n\n");
 
 printf("\n  -: THANX! For Visiting :-");
 printf("\n\n\n    -: Remaining STOCK :-\n");
 printf("  ----------------------------------------------\n");
 printf("    S.No. |     NAME     |   RATE   | QUANTITY\n");
 printf("  ----------------------------------------------\n");
 printf("      1      IPHONE 4       11,490      %d\n",a[0]);
 printf("      2      IPHONE 4S      12,999      %d\n",a[1]);
 printf("      3      IPHONE 5       14,490      %d\n",a[2]);
 printf("      4      IPHONE 5C      16,740      %d\n",a[3]);
 printf("      5      IPHONE 5S      19,490      %d\n",a[4]);
 printf("      6      IPHONE SE      20,949      %d\n",a[5]);
 printf("      7      IPHONE 6       25,399      %d\n",a[6]);
 printf("      8      IPHONE 6+      28,490      %d\n",a[7]);
 printf("      9      IPHONE 6S      32,999      %d\n",a[8]);
 printf("     10      IPHONE 6S+     39,290      %d\n",a[9]);
 printf("     11      IPHONE 7       45,740      %d\n",a[10]);
 printf("     12      IPHONE 7+      57,399      %d\n",a[11]);
 printf("     13      IPHONE 8       63,490      %d\n",a[12]);
 printf("     14      IPHONE 8+      78,999      %d\n",a[13]);
 printf("     15      IPHONE X       89,490      %d\n",a[14]);
 printf("  ----------------------------------------------\n");
 getch();
}
