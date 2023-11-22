#include<stdio.h>
int main() {
    float radius,side,length,width;
    //circle
    printf("enter the radius  of the circle");
    scanf("%f",&radius);
    printf("area of circle:%.2f\n",3.14*radius*radius);
    printf("perimeter of circle;%.2f\n",2*3.14*radius);
    //square
    printf("enter the side of the square");
    scanf("%f",&side);
    printf("area of the square:%.2f\n",side*side);
    printf("perimeter of the square:%.2f\n",4*side);
    //rectangle
    printf("enter the length and width of the square");
    scanf("%f %f",&length,&width);
    printf("area of the rectangle:%.2f\n",length*width);
    printf("perimeter of the rectangle:%.2f",2*(length+width));
    return  0;

}
    
