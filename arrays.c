/*
#include<stdio.h>
int main (){

int number[5]={10,20,30,40,50};
for(int i=0;i<=4;i++){

    printf("%d\n",number[i]);
}
return 0;
}
*/

//******************************************************
//******************************************************

/*
#include<stdio.h>
int main (){
    int a[100],n,i;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Array elements are: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    return 0;
}
*/
//-------------------------------------------------------------------------------------------------------------------
/*
#include<stdio.h>
int main (){
    int arr[5];
    for(int i=0;i<5;i++)
        scanf("%d",&arr[i]);

    for(int i=0;i<5;i++)
        printf("\n%d",arr[i]);
    
    return 0;
}
*/

/*
 #include<stdio.h>
 int main(){
    int a[5],i,sum=0;
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    
        sum+=a[i];
    }
    printf("sum = %d\n",sum);
    printf("avg = %f",(float)sum/5);
    return 0;
 }
*/

/*
#include<stdio.h>
int main (){
    int a[5]={10,20,50,60,1},i,max=a[0];
    for(i=1;i<5;i++)
    if(a[i]>max) max=a[i];
    printf("%d",max);
    return 0;
}
*/

//PPS LAB ARRAYS
//1. Write a C program to read and display n elements of a one-dimensional array.

/*#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int arr[n],i;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
       // for(int i=0;i<n;i++){
        //printf("%d\n",arr[i]);  
        }
   // }
     printf("%d\n",arr[i]); 
    return 0;
}*/

