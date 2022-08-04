/*
Geonhee Choi
Project3 problem


*/
#include <stdio.h>
#include<stdlib.h>
int main()
{
  int max_city;//number of city
  int input_drone; //number of drone
  int curr_ini; //initial dron's statue
  int td;  //travel distance

  printf("Input maximum city (N)");
  scanf("%d",&max_city);   //read  number of city

  if(max_city<1&& max_city>100){
    printf("invalid number");
    exit(EXIT_FAILURE);
  }
    
  int city_visit[100]= {0}; //initial array
    
  printf("Input number of drone(M)");
  scanf("%d",&input_drone);

  if(input_drone<1 && input_drone>100){
    printf("invalid drone");
    exit(EXIT_FAILURE);
  }
    
  int i=0;

  if(max_city>=1 && max_city<=100 && input_drone>= 1 &&input_drone<=100){
    //check input validation
    printf("current loc printf travel distance\n");
    while(i<input_drone){
      // By while we can  read curr_ini,std
      scanf("%d%d", &curr_ini,&td);
      if((1>curr_ini || curr_ini > max_city) || (1>td || td > max_city)){
        printf("Invalid inputs");
        exit(EXIT_FAILURE);
      }
      int temp = curr_ini;//make temp variable
	int j;
      for(j=0;j<max_city;j++){
        if(temp>=1 && temp<=max_city){
          city_visit[temp-1]=1;
          temp +=td;
        }
      }
    
      temp=curr_ini-td; //suntract drone's initial location (current location)-travel distance
      if(temp>=1 && temp<=max_city){
      city_visit[temp-1]=1;   //make city array as 1
      }
    i++;
  }//end while
  printf("Cities reached by a drone:");
}else 
  printf("Invalid reason"); //if does not meet at condition print out invalid reason
     
  for(i=0;i<=max_city;i++){  
    if(city_visit[i]==1){
      //print out array
      printf("%d ",i+1);
    }
  }
  printf("\n");       
  return 0;
}
