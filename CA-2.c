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

   int p[50],br[50],ar[50],i,n,w[50],pr[50],tat[50],pr[50];

   /* Taking inputs from the user */

   printf("\n\n\nEnter the number of processes: ");
   scanf("%d" , &n);
   printf("\nEnter the arrival time and burst time: ");
   for (i=0;i<n;i++)
    {
        printf("\nP[%d]:" , i+1);
        scanf("%d" , &ar[i]);
        scanf("%d", &br[i]);
        p[i]=i+1;
   }


   //return main();
}
