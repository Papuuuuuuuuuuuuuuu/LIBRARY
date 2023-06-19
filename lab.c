#include<stdio.h>
struct hasini
{
    char a[100],b[100];
    int n,l,z;
    int bid,bf;
}s[100];
int in=0,j,bcount=0;
int main()
{
    int o,p,q,r,x,y,aid=111,apass=000,f=0,m,n,choice;
    char a[100],b[100];
    printf("HELLO!!!...WHAT's YOUR NAME:\t");
    scanf("%s",s[in].a);
    printf("\n       ...WELCOME TO LIBRARY...   %s\t\n",s[in].a);
    sowmi:
    printf("\n(1)ADMIN:\n");
    printf("(2)STUDENT:\n");
    printf("(3)EXIT:\n");
    printf("WHO YOU ARE:");
    scanf("%d",&n);
    if(n==1)
    {
        jaya:
        printf("\nADMIN ID:");
        scanf("%d",&x);
        printf("ADMIN PASSWARD:");
        scanf("%d",&y);
        if(aid==x&&apass==y)
        {
            printf("\n(1)ADD BOOKS:\n");
            printf("(2)REPORT BOOKS:\n");
            printf("(3)LOGOUT:\n");
            printf("ENTER YOUR CHOICE:");
            scanf("%d",&n);
            if(n==1)
            {
                printf("\nNUMBER OF BOOKS TO ADD: ");
                scanf("%d",&m);
                for(int i=0;i<m;i++)
                {
                 printf("\nBOOK NAME: ");
                 scanf("%s",s[in].a);
                 printf("AUTHOR NAME: ");
                 scanf("%s",s[in].b);
                 printf("BOOK ID: %d",s[in].bid=100+in);
                 printf("\n...BOOKS ARE ADDED SUCCESSFULLY....\n");
                 bcount++;
                 s[in].bf=1;
                 in++;
                }
                goto sowmi;
            }
            else if(n==2)
            {
                 for(j=0;j<=bcount;j++)
                        {  
                            if(s[j].bf)
                             printf("\nBOOK NAME: %s -> AUTHOR NAME: %s ->\nID: %d   ",s[j].a,s[j].b,s[j].bid);
                        }
                goto sowmi;
            }
            else
            {
                goto sowmi;
            }
        }
        else
        {
         printf("\nINVALID ID AND PASSWARD...\n");
         goto jaya;
        }
        
    }
    else if(n==2)
    {
        parthu:
        printf("\n(1)SIGN UP:\n");
        printf("(2)LOG IN:\n");
        printf("(3)EXIT:\n");
        printf("ENTER YOUR CHOICE:");
        scanf("%d",&s[in].n);
        {
            if(s[in].n==1)
            {
                printf("\nNAME:");
                scanf("%s",a);
                printf("GENDER:");
                scanf("%s",b);
                printf("Id:");
                scanf("%d",&o);
                printf("PASSWARD:");
                scanf("%d",&p);
                printf("sign up successed\n");
                goto parthu;
            }
            else if(s[in].n==2)
            {
                printf("\nID:");
                scanf("%d",&q);
                printf("PASSWARD:");
                scanf("%d",&r);
                if(o==q&&p==r)
                {
                    while(1)
                    {
                    printf("\n(1)VIEW BOOKS:\n");
                    printf("(2)LEND BOOKS:\n");
                    printf("(3)RETURN BOOKS:\n");
                    printf("(4)LOGOUT:\n");
                     printf("ENTER YOUR CHOICE:");
                     scanf("%d",&s[in].n);
                     if(s[in].n==1)
                     {
                          for(j=0;j<=bcount;j++)
                        {  
                            if(s[j].bf)
                             printf("\nBOOK NAME: %s -> AUTHOR NAME: %s ->\nID: %d\n   ",s[j].a,s[j].b,s[j].bid);
                        }
                     }
                     else if(s[in].n==2)
                     {
                         printf("\nENTERED BOOK ID: ");
                         scanf("%d",&choice);
                         for(int i=0;i<bcount;i++)
                         {
                             if(s[i].bid==choice)
                             {
                                  printf("\nBOOK NAME: %s\n",s[i].a);
                            printf("AUTHOR NAME: %s\n",s[i].b);
                        printf("BOOK ID: %d\n",s[i].bid);
                        printf(" \n.....BOOK LENDED.....\n");
                        s[i].bf=0;
                        break;
                        
                             }
                         }
                     }
                     else if(s[in].n==3)
                     {
                       printf("\nENTERED BOOK ID: ");
                         scanf("%d",&choice);
                         for(int i=0;i<bcount;i++)
                         {
                             if(s[i].bid==choice)
                             {
                                  printf("\nBOOK NAME: %s\n",s[i].a);
                            printf("AUTHOR NAME: %s\n",s[i].b);
                        printf("BOOK ID: %d\n",s[i].bid);
                        printf("\n...BOOKS ARE RETURNED...\n");
                        s[i].bf=1;
                        break;
                             }
                         }
                     }
                     else
                     {
                         goto parthu;
                     }
                    }
                }
            }
            else
            {
               goto sowmi;
            }
        }
        
        
    }else
    {
        printf("\n....THANK YOU !!! SEE YOU AGAIN....");
    }
    return 0;
}

