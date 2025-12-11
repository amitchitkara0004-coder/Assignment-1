
//  QUESTION - 1
#include<stdio.h>
int main(){
    float len,wid;
    printf("enter the length of rectangle:");
    scanf("%f",&len);
    printf("enter the width of rectangle:");
    scanf("%f",&wid);
    printf("the area of rectangle is %.2f * %.2f = %.2f",len,wid,len*wid);
    return 0;
}




//QUESTION- 2
#include<stdio.h>
int main(){
    float rad;
    printf("the raduis of the circle is:");
    scanf("%f",&rad);
    float sqrad= rad*rad;
    printf("the area of circle is %.2f\n",3.14*sqrad);
    return 0;
}


#include<stdio.h>
int main(){
    float hie,rad;
    printf("enter the hieght of cylinder:");
    scanf("%f",&hie);
    printf("enter the raduis of cylinder");
    scanf("%f",&rad);
    float sqrad=rad*rad*hie;
    printf("the volume of cylinder is :%.2f",3.14285714*sqrad);
    return 0;
}





// QUESTION - 3
#include<stdio.h>
int main(){
    float cel;
    printf("enter the temprature:");
    scanf("%f",&cel);
    printf("the temprature in farhneit is: %.2f",1.8*cel+32);
    return 0;
}





//QUESTION - 4
#include<stdio.h>
int main(){
    float p,r,t;
    printf("enter the princial amount:");
    scanf("%f",&p);
    printf("enter the rate of intrest:");
    scanf("%f",&r);
    printf("enter the number of years:");
    scanf("%f",&t);
    printf("the simple intrest is :%.2f",p*r*t/100);
    return 0;
}


