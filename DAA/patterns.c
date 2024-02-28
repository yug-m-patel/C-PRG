#include<stdio.h>
void main()
{
    // (1)Squre Matrix
    // for(int i=1;i<=3;i++)                                ***
    // {                                                    ***
    //     for(int j=1;j<=3;j++)                            ***
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    /*2)
       *
          **
          ***         */

    // for(int i=1;i<=3;i++)
    // {
    //     for(int j=1;j<=i;j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    /*3)
        ***
        **
        *
    */
    // for(int i=3;i>=1;i--)
    // {
    //  for(int j=1;j<=i;j++)
    //  {
    //      printf("*");
    //  }
    //  printf("\n");
    // }

    /* 4)
            *
           **
          *** 
    */
   //  int n=3;
//    for(int i=1;i<=n;i++)
//    {
//     for(int s=1;s<=n-i;s++)
//     {
//         printf(" ");
//     }
//     for(int j=1;j<=i;j++)
//     {
//         printf("*");
//     }
//     printf("\n");
//    }

   /*5)  
        ***
         **
          *
   */
//    for(int i=n;i>=1;i--)
//    {
//     for(int s=1;s<=n-i;s++)
//     {
//         printf(" ");
//     }
//     for(int j=1;j<=i;j++)
//     {
//         printf("*");
//     }
//     printf("\n");
//    }

   /*
   spiral of 
   123
   654
   789
   */
//   int c=1;
//   for(int i=1;i<=n;i++)
//   { 
//    if(c<=3 || c>=5)
//    {
//       for(int j=1;j<=n;j++)
//       {
//          printf("%d",c);
//          c+=1;
//       }
//    }
//    else
//    {
//       c+=2;
//       for(int j=1;j<=n;j++)
//       {
//          printf("%d",c);
//          c-=1;
//       }
//       c+=4;
//    }
//    printf("\n");
//   }
   // for(int i=1;i<=n;i++)
   // {
   //    for(int j=1;j<=i;j++)
   //    {
   //       printf("*");
   //    }
   //    printf("\n");
   // }
   // for(int i=n;i>=1;i--)
   // {
   //    for(int j=i-1;j>=1;j--)
   //    {
   //       printf("*");
   //    }
   //    printf("\n");
   // }
   
   // for(int i=1;i<=4;i++)
   // {
   //    for(int j=1;j<=i;j++)
   //    {
   //       if(i%2==0)
   //       {
   //          printf("#");
   //       }
   //       else
   //       {
   //          printf("*");
   //       }
         
   //    }
   //    printf("\n");
   // }
   int count=1;
   int flag =18;
   int n=4;
   for(int i=1;i<=n;i++)
   {
      for (int j=1;j<=2*(n);j++)
      {
         if( i==(n/4) || i-j==(n/2)|| i+j==(3*n/4) )
         {
            printf("*");
         }
         else
         {
            printf(" ");
         }
      }
      printf("\n");
   }




}
