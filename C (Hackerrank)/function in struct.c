#include<stdio.h>
struct point
{
    int x;
    int y;
};
void display(int ,int);
int main()
{
    struct point p ={2,3};
    display(p.x,p.y);
    return 0;
}
void display(int a,int b)
{
    printf("%d%d",a,b);
}