#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
void acceptAmount(float amo[],float p[],int i,int nu,int j)
{
    amo[i]=amo[i]+nu*p[j];
printf("The bill amount for purchase is :%.2f lakhs",amo[i]);
}
void Manager1(int n,float amo[n])
{   system("cls");
    float suma;
    suma=0;
    for(int i=0;i<=n-1;i++)
    suma=suma+amo[i];
    printf("\n    The total amount collected is:%.2f L",suma);
}

//funtion-2-manger-2-no of cars purchased by dealers
void Manager2(int n,int dnoa[n],int dno,int nano[n],int altroz[n],int nexon[n],int harrier[n],int nexonev[n],int tigor[n]) //Manager2(n,dnoa,dno,nano,altroz,nexon,harrier,nexonev,tigor,amo);
{
   int f=-1,i=0,j;
   for(i=0;i<n;i++)
   {
       if(dno==dnoa[i])
       {
           f=0;
           j=i;
       }
   }
   if(f==0)
   {
       printf("\nDEALER NO :%d",dno);
       printf("\n******************************");
       printf("\nProducts bought :");
       printf("\n\nNANO'S:%d",nano[j]);
       printf("\nALTROZ:%d",altroz[j]);
       printf("\nNEXON:%d",nexon[j]);
       printf("\nHARRIER:%d",harrier[j]);
       printf("\nNEXON EV:%d",nexonev[j]);
       printf("\nTIGOR EV:%d",tigor[j]);
       printf("\n******************************");
   }
   else{
        printf("\n******************************");
   printf("\nDEALER'S ID NOT FOUND!! \n  Check if you have entered DEALER ID properly");}
}

//function-3-manager-3-highest and least no of cars purchased and the dealer who bought it
void Manager3(int n,int dnoa[n],int nano[n],int altroz[n],int nexon[n],int harrier[n],int nexonev[n],int tigor[n],float amo[n],int q[6],char it[6][10])
{  system("cls");
    int sno,j,i;
     printf("\n************************************************************\n");
                    printf("\nSno\t Item Name\t Available Quantity\t\n");
                    printf("\n************************************************************\n");
                    for(j=0;j<=5;j++)
                        { printf("%d\t%s\t\t %d\t\t\t\n",(j+1),it[j],q[j]);
                        }
                    printf("\n************************************************************\n");
    printf("\nEnter S.No of Item To find:");
    scanf("%d",&sno);
    int hi,sm;
    if(sno==1)
    {
        hi=nano[0];
        sm=nano[0];
        j=0;
        for(i=0;i<=n-2;i++)
        {
            if(hi<nano[i+1])
            {
                hi=nano[i+1];
                j=i+1;
            }
        }
        printf("\nThe highest quantity is bought by dealer id :%d",dnoa[j]);
        printf("\nThe highest quantity is:%d",hi);
    printf("\n\n************************************************************\n");
    j=0;
    for(i=0;i<=n-2;i++)
    {
        if(nano[i+1]<sm&&nano[i+1]!=0)
        {
            sm=nano[i+1];
            j=i+1;
        }
    }
    printf("\nThe least quantity is bought by dealer id :%d",dnoa[j]);
    printf("\nThe least quantity is:%d",sm);
}
else if(sno==2)
{
    hi=altroz[0];
        sm=altroz[0];
        j=0;
        for(i=0;i<=n-2;i++)
        {
            if(hi<altroz[i+1])
            {
                hi=altroz[i+1];
                j=i+1;
            }
        }
        printf("\nThe highest quantity is bought by dealer id :%d",dnoa[j]);
        printf("\nThe highest quantity is:%d",hi);
 printf("\n\n************************************************************\n");
    j=0;
    for(i=0;i<=n-2;i++)
    {
        if(altroz[i+1]<sm&&altroz[i+1]!=0)
        {
            sm=altroz[i+1];
            j=i+1;
        }
    }
    printf("\nThe least quantity is bought by dealer id :%d",dnoa[j]);
    printf("\nThe least quantity is:%d",sm);
}
else if(sno==3)
{
    hi=nexon[0];
        sm=nexon[0];
        j=0;
        for(i=0;i<=n-2;i++)
        {
            if(hi<nexon[i+1])
            {
                hi=nexon[i+1];
                j=i+1;
            }
        }
        printf("\nThe highest quantity is bought by dealer id :%d",dnoa[j]);
        printf("\nThe highest quantity is:%d",hi);
 printf("\n\n************************************************************\n");
    j=0;
    for(i=0;i<=n-2;i++)
    {
        if(nexon[i+1]<sm&&nexon[i+1]!=0)
        {
            sm=nexon[i+1];
            j=i+1;
        }
    }
    printf("\nThe least quantity is bought by dealer id :%d",dnoa[j]);
    printf("\nThe least quantity is:%d",sm);
}
else if (sno==4)
{
    hi=harrier[0];
        sm=harrier[0];
        j=0;
        for(i=0;i<=n-2;i++)
        {
            if(hi<harrier[i+1])
            {
                hi=harrier[i+1];
                j=i+1;
            }
        }
        printf("\nThe highest quantity is bought by dealer id :%d",dnoa[j]);
        printf("\nThe highest quantity is:%d",hi);
 printf("\n\n************************************************************\n");
    j=0;
    for(i=0;i<=n-2;i++)
    {
        if(harrier[i+1]<sm&&harrier[i+1]!=0)
        {
            sm=harrier[i+1];
            j=i+1;
        }
    }
    printf("\nThe least quantity is bought by dealer id :%d",dnoa[j]);
    printf("\nThe least quantity is:%d",sm);
}
else if(sno==5)
{
    hi=nexonev[0];
        sm=nexonev[0];
        j=0;
        for(i=0;i<=n-2;i++)
        {
            if(hi<nexonev[i+1])
            {
                hi=nexonev[i+1];
                j=i+1;
            }
        }
        printf("\nThe highest quantity is bought by dealer id :%d",dnoa[j]);
        printf("\nThe highest quantity is:%d",hi);
 printf("\n\n************************************************************\n");
    j=0;
    for(i=0;i<=n-2;i++)
    {
        if(nexonev[i+1]<sm&&nexonev[i+1]!=0)
        {
            sm=nexonev[i+1];
            j=i+1;
        }
    }
    printf("\nThe least quantity is bought by dealer id :%d",dnoa[j]);
    printf("\nThe least quantity is:%d",sm);
}
else if(sno==6)
{
    hi=tigor[0];
        sm=tigor[0];
        j=0;
        for(i=0;i<=n-2;i++)
        {
            if(hi<tigor[i+1])
            {
                hi=tigor[i+1];
                j=i+1;
            }
        }
        printf("\nThe highest quantity is bought by dealer id :%d",dnoa[j]);
        printf("\nThe highest quantity is:%d",hi);
 printf("\n\n************************************************************\n");
    j=0;
    for(i=0;i<=n-2;i++)
    {
        if(tigor[i+1]<sm&&tigor[i+1]!=0)
        {
            sm=tigor[i+1];
            j=i+1;
        }
    }
    printf("\nThe least quantity is bought by dealer id :%d",dnoa[j]);
    printf("\nThe least quantity is:%d",sm);
}
else
{ printf("\n   ENTER PROPER S.No !!");
}
}
//function-4-manager-4-reminder
void Manager4(int n,char it[n][10])
{   int j;
    system("cls");
     FILE *fp;
     fp=fopen ("stock.txt","r");
     int q[6];
    printf("\n************************************************************\n");
                    printf("\nSno\t Item Name\t Available Quantity\t\n");
                    printf("\n************************************************************\n");
                    for(j=0;j<=5;j++)
                        { printf("%d\t%s\t\t",(j+1),it[j]);
                          fscanf(fp,"%d",&q[j]);
                          printf("%d\n",q[j]);
                        }
                        fclose(fp);
                    printf("\n************************************************************\n");
}
void main()
{
    int n,i,j,dno,sno,nu,o;
    char c;
    char dp[6];
     FILE *fp;
     fp=fopen ("password.txt","r");
     fscanf(fp,"%s",dp);
     fclose(fp);
    char pa[6]={"0"},np[6];
    int ch1,ch2;
    int q[6]={200,100,250,50,125,110};
    fp=fopen ("stock.txt","w");
                      for (int f=0;f<6;f++)
                      {  fprintf(fp,"%d\t",q[f]);
                         }
                         fclose(fp);
    float p[6]={2.5,5.44,7,13.84,13.99,10.58};
    char it[6][10]={"NANO","ALTROZ","NEXON","HARRIER","NEXONEV","TIGOREV"};
    printf("Enter the no of dealers for the day:");
    scanf("%d",&n);
    int dnoa[n],nano[n],altroz[n],nexon[n],harrier[n],nexonev[n],tigor[n];
    float amo[n];
   for (i=0;i<n;i++)
   {
        dnoa[i]=0;
        amo[i]=0;
        nano[i]=0;
        altroz[i]=0;
        harrier[i]=0;
        nexon[i]=0;
        nexonev[i]=0;
        tigor[i]=0;

   }
       while(strcmp(dp,pa)==1)
    {   system("cls");
        printf("\n***************************");
        printf("\n\t    MENU        ");
        printf("\n***************************\n");
        printf("\n\t1 ----> MANAGER\n\t2 ----> DEALER\n\t3 ----> EXIT\n");
        scanf("%d",&o);
        switch (o)
        {   case 1 :
            system("cls");
            printf("\n******************************");
            printf("\n      MANAGER'S PORTAL        ");
            printf("\n******************************\n");
            printf("\n\t1 ----> LOGIN\n\t2 ----> RESET PASSWORD\n");
            scanf("%d",&ch1);
            if(ch1==1)
            {
                printf("\nEnter Password to Continue:(default password-0123)");
                scanf("%s",&pa);
                fp=fopen ("password.txt","r");
                fscanf(fp,"%s",dp);
                fclose(fp);
                if(strcmp(pa,dp)==0)
                {
                    c='Y';
                    while(c=='Y'||c=='y')
                    {   system("cls");
                        printf("\n***********************************************");
                        printf("\n\t\t    MENU        ");
                        printf("\n***********************************************\n");
                        printf("\n\t1 ----> VIEW MONEY RECEIVED \n\n\t2 ----> VIEW PRODUCTS PURCHASED BY DEALER ");
                        printf("\n\n\t3 ----> VIEW HIGHEST AND LEAST PURCHASE\n\n\t4 ----> VIEW STOCK AVAILABLE \n\n\t5 ----> CLOSE APPLICATION\n");
                        printf("\n***********************************************\n");
                        scanf("%d",&ch2);
                        if(ch2==1)
                        {Manager1(n,amo);
                        }
                        else if(ch2==2)
                        {   system("cls");
                            printf("\nEnter The Dealers ID to search:");
                            scanf("%d",&dno);
                           Manager2(n,dnoa,dno,nano,altroz,nexon,harrier,nexonev,tigor);
                        }
                        else if(ch2==3)
                       { Manager3(n,dnoa,nano,altroz,nexon,harrier,nexonev,tigor,amo,q,it);
                       }
                       else if(ch2==4)
                       { Manager4(n,it);
                       }
                       else if(ch2==5)
                       return ;
                       else
                       printf("\nINVALID Input");
                       printf("\n\n\tY ----> TO RETURN TO MENU \n\tN ----> TO EXIT MANAGER PORTAL\n");
                       scanf(" %c",&c);
                       if(c=='n'||c=='N')
                      { strcpy(pa,"0");
                      }
                    }
                }
                else
                {
                    printf("\nPassword is Wrong!!");
                    printf("\nTry Resetting It...");
                    getch();
                    strcpy(pa,"0");
                }
            }
            else if(ch1==2)
            {
                printf("Enter New Password: ");
                scanf("%s",&dp);
                fp=fopen ("password.txt","w");
                fprintf(fp,"%s",dp);
                fclose(fp);

            }
            else
            printf("INVALID Input!!");
            break;
            case 2 :
          {   for(i=0;i<=n-1;i++)
            {
                                c='Y';
                system("cls");
                printf("\n*************************************");
                printf("\n\t   DEALER'S PORTAL        ");
                printf("\n*************************************\n");
                printf("\nEnter Dealer number of %d dealer:",i+1);
                scanf("%d",&dno);
                dnoa[i]=dno;
                while(c=='Y'||c=='y')
                {   system("cls");
                    printf("\nDealer number:%d",dnoa[i]);
                    printf("\n\n************************************************************\n");
                    printf(" Sno\t Item Name\t Available Quantity\t Cost(Lakhs)");
                    printf("\n************************************************************\n");
                    for(j=0;j<=5;j++)
                        { printf("%d\t%s\t\t %d\t\t\t %.2f\n",(j+1),it[j],q[j],p[j]);
                        }
                    printf("\n************************************************************\n");
                    printf("\nEnter Serial number of Product:");
                    scanf("%d",&sno);
                    if (sno>0&&sno<7)
                    {
                    printf("\nEnter the Quantity :");
                    scanf("%d",&nu);
                    for(j=0;j<=5;j++)
                    {
                        if(j==sno-1)
                        {
                            if(nu>0&&nu<=q[j])
                            {
                                    q[j]=q[j]-nu;
                                    acceptAmount(amo,p,i,nu,j);
                                    if(sno==1)
                                    nano[i]=nano[i]+nu;
                                    else if(sno==2)
                                    altroz[i]=altroz[i]+nu;
                                    else if(sno==3)
                                    nexon[i]=nexon[i]+nu;
                                    else if(sno==4)
                                    harrier[i]=harrier[i]+nu;
                                    else if(sno==5)
                                    nexonev[i]=nexonev[i]+nu;
                                    else if(sno==6)
                                    tigor[i]=tigor[i]+nu;
                            }

                        else
                          printf("\nRequired Quantity not in Stock\n   COME BACK LATER !!\n");
                        }
                    }


                    printf("\nDo You Want to Continue(Y/N):");
                    scanf(" %c", &c);

                    if(c=='N'||c=='n')
                    { system("cls");
                      printf("\n*************************************");
                      printf("\n\t\tBILL");
                      printf("\n*************************************\n");
                         if(nano[i]>0)
                            printf("\nNANO     \t%d * %.2f  L = %.2f L",nano[i],p[0],nano[i]*p[0]);
                         if(altroz[i]>0)
                            printf("\nALTROZ      \t%d * %.2f  L = %.2f L",altroz[i],p[1],altroz[i]*p[1]);
                         if(nexon[i]>0)
                            printf("\nNEXON     \t%d * %.2f  L = %.2f L",nexon[i],p[2],nexon[i]*p[2]);
                         if(harrier[i]>0)
                            printf("\nHARRIER \t%d * %.2f L = %.2f L",harrier[i],p[3],harrier[i]*p[3]);
                         if(nexonev[i]>0)
                            printf("\nNEXONEV \t%d * %.2f L = %.2f L",nexonev[i],p[4],nexonev[i]*p[4]);
                         if(tigor[i]>0)
                            printf("\nTIGOREV \t%d * %.2f L = %.2f L",tigor[i],p[5],tigor[i]*p[5]);
                      printf("\n_____________________________________");
                      printf("\nThe Net Amount: %.2f Lakhs",amo[i]);

                      fp=fopen ("stockbought.txt","a");
                     fprintf(fp,"Dealer id :%d - %d,%d,%d,%d,%d,%d\n",dno,nano[i],altroz[i],nexon[i],harrier[i],nexonev[i],tigor[i]);
                     fclose(fp);

                      fp=fopen ("stock.txt","w");
                      for (int f=0;f<6;f++)
                      {  fprintf(fp,"%d\t",q[f]);
                         }
                         fclose(fp);
                    }
                    getch();
                }
                else
                {printf("\nProduct not available \n CHECK S.NO\n");
                getch();}
               }
            }

           }
           break;
           case 3 :return;
           default:printf("Enter proper choice :)");
                  getch();


}
    }

   return ;
}
