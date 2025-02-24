#include<stdio.h>
//function to calculate area of a rectangle
float calculatearea(float length,float width){
  return length * width;
}
int main(){
  float length,width,area;
  //input lenth and width of the rectangle
  printf("enter the length of the rectangle: ");
  scanf("%f",&length);
  printf("enter the width of the rectangle: ");
  scanf("%f",&width);
  //call the function to calculate the area 
  area=length * width;
  //display the result
  printf("the area if the rectangle is :%.2f\n",area);
  return 0;
}
