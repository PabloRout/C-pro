#include<stdio.h>
#include<math.h>
void area(float a,float b,float c);
void type(float a,float b,float c);
int main(){
   float a,b,c;
     printf("enter the three side of the triangle\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a<(b+c) && b<(a+c) && c<(a+b)){
    type(a,b,c);
    area(a,b,c);    
}else{
    
    printf("triangle is not possible for this measurment\n");
    
    }
    
   return 0; }
   void type(float a,float b,float c){
      if(a == b && b == c){
       printf("the triangle is Equilateral\n");
       } 
       else if( a != b && b!= c){
           printf("the triangle is Scalene\n");
           }
           else  if(a == b || b  == c || c == a){
               printf("the triangle is Isosceles\n");
               }
       
       }
   void area(float a,float b,float c){
     float s,area;
       s = (a+b+c)/2;
      area = sqrt(s*(s-a)*(s-b)*(s-c));
      printf("the area is = %f\n",area); 
       }
      