/*
#include<stdio.h>
int main(){
   // int arr[5]={2,4,6,8,1};
   // arr[4] = 100; //{2,4,6,8,100}
   // arr[1] = 1; //{2,1,6,8,100}
   // printf("%d",arr[1]);

  // float a[3] = {1.2,3.4,5.7};
  // printf("%f",a[2]);

  //char arr[4] = {'a','n','Y','%'};
 // printf("%c",arr[3]);

  return 0;  
}
*/

/*
#include<stdio.h>
int main (){
   int arr[5];
   arr[0] = 1;
   arr[1] = 3;
   arr[2] = 4;
   arr[3] = 10;
   arr[4] = 2;

   printf("%d",arr[0]);
   return 0;
}
*/

/*
#include<stdio.h>
int main () {
   int arr[3];
   printf("Enter first element: ");
   scanf("%d",&arr[0]);
   printf("Enter second element: ");
   scanf("%d",&arr[1]);
   printf("Enter third element: ");
   scanf("%d",&arr[2]);

   printf("%d",arr[1]);
   return 0;
}
*/

/*
#include<stdio.h>
int main (){
   int arr[5] = {2,4,6,8,1};

   for(int i=0;i<=4;i++){  //i = 0,1,2,3,4
      printf("%d\n",arr[i]);
   }
   return 0;
}
*/
 
/*
#include<stdio.h>
int main (){
   int arr[5];
   for(int i=0;i<=4;i++){ //i=0,1,2,3,4
      int a = i+1;
      printf("Enter element number %d\n",a);
      scanf("%d",&arr[i]);
   }
   printf("\n%d",arr[1]);
   return 0;
}
*/

/*
#include<stdio.h>
int main (){
   int arr[5];
   for(int i=0;i<=4;i++){ //i=0,1,2,3,4
      int a = i+1;
      printf("\nEnter element number %d: ",a);
      scanf("%d",&arr[i]);
   }
   for(int i=0;i<5;i++){
      printf("%d ",arr[i]);
   }
   return 0;
}
*/

/*
#include<stdio.h>
int main (){
int size = 10,b[size];
//printf("%d",size);
b[0] = 2;
printf("%d",b[0]);
return 0;
}
*/