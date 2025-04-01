#include<stdio.h>
int main(){
//"For West Benagl secondary Education"
float beng;
printf("Enter the Bengali marks");
scanf("%f",&beng);
float eng;
printf("Enter the English marks");
scanf("%f",&eng);
float math;
printf("Enter the marks of mathematics");
scanf("%f",&math);
float life ;
printf("Enter the marks of life science");
scanf("%f",&life );
float phy;
printf("Enter the physical science");
scanf("%f",&phy);
float his;
printf("Enter the history");
scanf("%f",&his);
float geo;
printf("Enter the Geography marks");
scanf("%f",&geo);
float sum;
sum=(beng+eng+math+life+phy+his+geo)/7;
printf("This is your  percentage is %f\n",sum);
printf("GRADE\n ");
if(sum>=90){
    printf("A+");
}
 else if(sum>=80){
    printf("A");
}
 else if(sum>=60){
    printf("B");
}
else if (sum>=40){
    printf("C");
}
else{
 printf("D");
}


    return 0;
}
