/*
Geonhee Choi
Project 3 number 2 solution



*/
#include <stdio.h>

int fact(int n);    //function definition for factorial
void calculate_fact(int a[],int n, int b[]); // calculate_fact function definition





int fact(int n)
{  if (n <= 1) 
    return 1;
  else
    return n * fact(n - 1);

}  //calculate each factorial 



void calculate_fact(int a[],int n, int b[]){
      int j;
 
      for(j=0; j<n;j++){
          b[j]=fact(a[j]);   //function call from fact function
         
     }
}

int main()
{    
 
     int i,n; //make integer i , n
     
     printf("Enter the length of the array:\n");
     scanf("%d",&n);  // scanf maximum of number
     
     int  a[n];   // make 1 d array as a[n]
    int b[n];   //make 1d  array as  b[n]
     
     printf("Enter the element of the array:\n");
    for(i=0;i<n;i++)
    {
         scanf("%d", &a[i]);
             //scan a[i]
     }
  
        calculate_fact(a,n,b);  //call calculated each of array
    
   printf("Output\n");  //print out factorial
   
   for(i=0;i<n;i++){
       // print all output of factorial
     printf("%d\n",b[i]);
   }
    return 0;
}


