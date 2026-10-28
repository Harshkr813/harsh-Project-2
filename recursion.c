/*#include<stdio.h>
 
void printHW(int count);

int main (){
    printHW(5);
    return 0;
}

//recursive function 
void printHW(int count){
    if(count == 0){
        return;
    }
    printf("Hello world\n");
    printHW(count-1);
}*/

/*#include<stdio.h>

int sum(int n);

int main(){
    printf("sum is : %d",sum(5));
    return 0;
}

//recursive function
int sum(int n){
    if(n == 1){
        return 1;
    }
    int sumNm1 = sum(n-1); //sum of 1 to n
    int sumN = sumNm1 + n;
    return sumN;
}*/

#include<stdio.h>

int fact(int n);

int main (){
    printf("factorial is : %d",fact(5));
    return 0;
}

int fact(int n){
    if(n == 0){
        return 1;
    }
    int factNm1 = fact(n-1);
    int factN = factNm1 * n;
    return factN;
}

