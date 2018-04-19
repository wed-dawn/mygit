
//
//  main.c
//  c_p1
//
//  Created by dawnsun on 2018/3/29.
//  Copyright © 2018年 dawnsun11. All rights reserved.
//

/*1-2
 #include <stdio.h>
 int main(void){
 int num;
 num=100;
 printf("the number %d\n",num);
 return num;
 }*/
/*2.12-4
 #include <stdio.h>
 void smile(void);
 int main(void){
 smile();smile();smile();
 printf("\n");
 smile();smile();
 printf("\n");
 smile();
 return 0;
 }
 void smile(void){
 printf("Smile!");
 }
 #include "stdio.h"
 void one_three(void);
 void two(void);
 int main(void){
 printf("starting now:\n");
 one_three();
 }
 void one_three(void){
 printf("one\n");
 two();
 printf("three\ndone");
 }
 void two(void){
 printf("two\n");
 }*/
#include "stdio.h"
int main(void){
    float weight;
    float value;
    printf("你的体重等于多少相等重量的白金？\n");
    printf("Let us check it out");
    printf("Enter your weight in pounds:");
    scanf("%f",&weight);
    value=1700.0*weight*14.5833;
    printf("$%.2f\n",value);
    
}

