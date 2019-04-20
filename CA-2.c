// Main program for the CA-2

#include<stdio.h>
#include<windows.h>  // including all of the headers file required

int main()
{
   printf("Devloper Name : ");
   Sleep(500);
   printf("Aditya ");
   Sleep(500);
   printf("Kumar ");
   Sleep(500);
   printf("Singh");

   int ar[20],bt[20],p[20],wt[20],tat[20],pr[20],i,j,n,total=0,pos,temp,avg_wt,avg_tat;
   Sleep(500);
   printf("\n\t\t\t\t\t-----Priority using Formula-----");

   /* Taking inputs from the user */

   printf("\n\n\nEnter the number of processes: ");
   scanf("%d" , &n);
   printf("\nEnter the arrival time and burst time: ");
   for (i=0;i<n;i++)
    {
        printf("\nP[%d]: \nArrival time: " , i+1);
        scanf("%d" , &ar[i]);
        printf("\nBurst time: ");
        scanf("%d", &bt[i]);
        p[i]=i+1;
   }

   /* finding the waiting time and putting formula into in to find
   the priority*/

   for(i=0;i<n;i++)
    {
        wt[i]=0;    // waiting time for the first process is 0
        for(j=0;j<i;j++)
            wt[i]+=bt[j];

        total+=wt[i];
        pr[i]=1+wt[i]/bt[i];   // formula to calculate the priority of the process i
        p[i]=i+1;
         // contains the process number
   }

   /* sorting the process along with its properties using the
   selection sort*/

   for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(pr[j]<pr[pos])
                pos=j;
        }

        temp=pr[i];
        pr[i]=pr[pos];
        pr[pos]=temp;

        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;

        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
    }

    // avg waiting time

    avg_wt=total/n;
    total=0;

    // displaying the result
    printf("\nLoading Result.");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".");
    Sleep(500);
    printf(".");
    printf("\n\t\t\t\t\t\t----RESULT----\n");


    printf("\nProcess\t  Arrival Time\t    Burst Time    \tWaiting Time\tTurnaround Time\t\tPriority");
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];     //calculate turnaround time
        total+=tat[i];
        printf("\nP[%d]\t\t  %d\t\t  %d\t\t    %d\t\t\t%d  \t\t%d",p[i],ar[i],bt[i],wt[i],tat[i],pr[i]);
    }

    avg_tat=total/n;     //average turn around time
    printf("\n\nAverage Waiting Time=%d\n",avg_wt);
    printf("\nAverage Turnaround Time=%d\n",avg_tat);

    int u;

    printf("Choose : \n\t1. Return for another entry \n\t2. Exit");
    scanf("%d" , &u);
    switch(u)
        {
            case 1:
                return main();
                break;
            case 2:
                exit(0);
                break;
            default:
                printf("Exiting the simulation .. ");
                exit(0);
                break;

        }


   //return main();
}
