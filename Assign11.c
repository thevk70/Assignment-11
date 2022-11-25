// 1. Write a function to calculate LCM of two numbers. (TSRS)
// #include <stdio.h>
// int LCM(int n1,int n2)
// {
//     for (int i = 1; i <= n1*n2; i++)
//     {
//         if ((i%n1==0) && (i%n2==0))
//         {
//             return i;
//             break;
//         }
//     }
// }
// int main()
// {
//     int num1,num2;
//     printf("Enter two numbers:: ");
//     scanf("%d %d",&num1,&num2);
//     printf("LCM = %d",LCM(num1,num2));
//     return 0;
// }

// 2. Write a function to calculate HCF of two numbers. (TSRS)
// #include <stdio.h>
//  int LCM(int n1,int n2)
//  {
//      for (int i = 1; i <= n1*n2; i++)
//      {
//          if ((i%n1==0) && (i%n2==0))
//          {
//              return i;
//              break;
//          }
//      }
//  }
//  int HCF(int n1,int n2)
//  {
//     int hcf;
//     int lcm = LCM(n1,n2);
//     hcf = (n1*n2)/lcm;
//     return hcf;
//  }
// int main()
// {
//     int num1,num2;
//     printf("Enter two numbers:: ");
//     scanf("%d %d",&num1,&num2);
//     printf("HCF = %d",HCF(num1,num2));
//     return 0;
// }

// 3. Write a function to check whether a given number is Prime or not. (TSRS)
// #include <stdio.h>
// void Prime_or_not(int n)
// {
//     int flag = 0;
//     for (int i = 2; i <= n/2; i++)
//     {
//         if (n%i==0)
//         {
//             flag++;
//             break;
//         }     
//     }
//     if (flag == 1)
//     {
//         printf("Not prime.");
//     }
//     else
//     printf("Prime");
// }
// int main()
// {
//     int num;
//     printf("Enter a number:: ");
//     scanf("%d",&num);
//     Prime_or_not(num);
//     return 0;
// }

// 4. Write a function to find the next prime number of a given number. (TSRS)
// #include <stdio.h>
// int NextPrime(int n)
// {
//      int i,j;
//       for ( i = n+1; i; i++)
//       {
//          for ( j = 2; j; j++)
//          {
//             if (i%j==0)
//             {
//              break;
//             }  
//          }
//          if (i==j)
//          {
//              return i;
//          }
//       }
// }
// int main()
// {
//     int num;
//     printf("Enter number:: ");
//     scanf("%d",&num);
//     printf("%d",NextPrime(num));
//     return 0;
// }

// 5. Write a function to print first N prime numbers (TSRN)
// #include <stdio.h>
// void Prime(int n)
// {
//     int i,j;
//     for ( i = 1; i <= n; i++)
//     {
//         for ( j = 2; j < n; j++)
//         {
//             if (i%j==0)
//             {
//                 break;
//             }           
//         }
//         if (i==j)
//         {
//             printf(" %d ",i);
//         }      
//     }  
// }
// int main()
// {
//     int num;
//     printf("Enter number:: ");
//     scanf("%d",&num);
//     Prime(num);
//     return 0;
// }


// 6. Write a function to print all Prime numbers between two given numbers. (TSRN)
//  #include <stdio.h>
//  void Prime_No(int n1,int n2)
//  {
//     int i,j;
//      for ( i = n1+1; i < n2+1; i++)
//      {
//         for ( j = 2; j < n2+1; j++)
//         {
//            if (i%j==0)
//            {
//             break;
//            }  
//         }
//         if (i==j)
//         {
//             printf(" %d ",i);
//         }
//      }
//  }
//  int main()
//  {
//      int num1,num2;
//      printf("Enter two numbers:: ");
//      scanf("%d %d",&num1,&num2);
//      Prime_No(num1,num2);
//      return 0;
//  }


// 7. Write a function to print first N terms of Fibonacci series (TSRN)
// #include <stdio.h>
// void fib(int n)
// {
//     int n1=0,n2=1,n3;
//     printf("%d\t%d\t",n1,n2);
//     for (int i = 1; i < n; i++)
//     {
//         n3 =n1+n2;
//        printf("%d\t",n3);
//        n1 = n2;
//        n2 = n3;
//     }
// }
// int main()
// {
//     int num;
//     printf("Enter number:: ");
//     scanf("%d",&num);
//     fib(num);
//     return 0;
// }

// 8. Write a function to print PASCAL Triangle. (TSRN)
// #include <stdio.h>
// int fact(int n)
// {
//     int fact = 1;
//    if (n==0 || n==1)
//    {
//      return 1;
//    }
//    else
//    {
//       for (int i = 1; i <=  n; i++)
//       {
//         fact = fact*i;
//       }
//    }
//    return fact;
// }
// int comb(int n,int r)
// {
//     return fact(n)/( fact(n-r) * fact(r) );
// }
// void pascal(int n)
// {
//     for (int i = 0; i <= n; i++)
//     {
//         for (int k = 0; k <= n-i; k++)
//         {
//             printf("  ");
//         }
        
//         for (int j = 0; j <= i; j++)
//         {
//             printf(" %3d",comb(i,j));
//         }
//         printf("\n");
//     }
// }
// int main()
// {
//     int num;
//     printf("Enter a number:: ");
//     scanf("%d",&num);
//     pascal(num);
//     return 0;
// }

// 9. Write a program in C to find the square of any number using the function.
// #include <stdio.h>
// int square(int n)
// {
//     return n*n;
// }
// int main()
// {
//     int num;
//     printf("Enter number:: ");
//     scanf("%d",&num);
//     printf("Square = %d",square(num));
//     return 0;
// }

// 10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function.
// #include <stdio.h>
// long long fact(int n)
// {
//     long long fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//       fact *= i;
//     }
//     return fact;
// }
// float sum(int n)
// {
//     float sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         sum += fact(i) / i;
//     }
//     return sum;
// }
// int main()
// {
//     int num;
//     printf("Enter a number:: ");
//     scanf("%d",&num);
//     printf("Sum of series:: %f",sum(num));
//     return 0;
// }