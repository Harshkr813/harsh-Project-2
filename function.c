/*#include<stdio.h>

void printhelloworld();

int main (){
    printhelloworld();
    return 0;
}

void printhelloworld(){
    printf("hello world\n");
}*/

/*FUNCTION
#include<stdio.h>
 
void namaste();
void bonjour();

int main (){
    printf("enter i for indian and f for french: ");
    char ch;
    scanf("%c",&ch);

    if(ch == 'i'){
        namaste();
     } else{
        bonjour();
        
    }
    return 0;
}

void namaste(){
    printf("namaste\n");
}
void bonjour(){
    printf("bonjour\n");
}*/

/*#include<stdio.h>
void calculateprice(float value);
 
int main (){
    float value = 100.0;
    calculateprice(value);
    return 0;
    
}

void calculateprice(float value){
    value=value+(0.18*value);
    printf("final price is %f",value);
}*/

/*SQUARE OF A NUMBER
#include<stdio.h>
#include<math.h>
float calculateSquare(float n);

int main (){
    float n = 5;
    printf("square is %f",pow(n,2));

    return 0;
}

float calculateSquare(float n){
    return pow(n,2);
}

/*AREA OF SQUARE, CIRCLE, RECTANGLE
#include<stdio.h>
float areaofSquare(float side);
float areaofCircle(float radius);
float areaofRectangle(float a, float b);

int main (){
    float side = 4.0;
    float a = 5.0;
    float b = 4.0;
    float radius = 7.0;
    printf("area of square is %f\n",areaofSquare(side));
    
    printf("area of a rectangle is %f\n",areaofRectangle(a,b));
   
    printf("area of square is %f\n",areaofCircle(radius));
    return 0;
}

float areaofSquare(float side){
    return side*side;
}
float areaofCircle(float radius){
    return 3.14*radius*radius;
}
float areaofRectangle(float a, float b){
    return a * b;
}*/

/*#include<stdio.h>

float convertTemp(float celsius);
 
int main(){
    float far = convertTemp(0);
    printf("far : %f",far);
    return 0;
}

float convertTemp(float celsius){
    float far = celsius * (9.0/5.0) + 32;
    return far;
}*/

/*#include<stdio.h>

int calcPercentage(int science, int math, int sst);

int main (){
    int sc = 70;
    int math = 90;
    int sst = 90;

    printf("percentage is : %d", calcPercentage(sc, math, sst));
    return 0;
}

int calcPercentage(int science, int math, int sst){
    return ((science + math + sst)/3);
}*/



//FIBONACCI SEQUENCE
//0,1,1,2,3,5,8,13,21....... or (0+1=0,1+1=2,2+3=5......)

#include<stdio.h>

int fib(int n);

int main(){
    printf("%d",fib(6));
    return 0;
}

int fib(int n){
        if(n == 0){
            return 0;
        }
        if(n == 1){
            return 1;
        }
    
    int fibNm1 = fib(n-1);
    int fibNm2 = fib(n-2);
    int fibN = fibNm1 + fibNm2;
   // printf("fib of %d is : %d\n",n,fibN);
    return fibN;
}
