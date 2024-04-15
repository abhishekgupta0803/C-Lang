//structure in structure
#include<stdio.h>
struct point
{
    int x;
    int y;
    
};
struct rect{
    
    struct point p1;
    struct point p2;
    
};
void main(){
    struct rect  r1;
    int length,width, area;
    r1.p1.x = 5;
    r1.p1.y = 10;
    
    r1.p2.x = 20;
    r1.p2.y = 25;
    
    width = r1.p2.x-r1.p1.x;
    length= r1.p2.y-r1.p1.y;
    
    area = length*width;
    printf("%d",area);
    
    
    return 0;
}