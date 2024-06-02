//passing pointer to structure as a argument
#include<stdio.h>
struct point{
    int x;
    int y;
};
void print(struct point *ptr){
printf("%d %d\n",ptr->x,ptr->y);
}
int main()
{
    struct point p1={23,46};
    struct point p2={41,56};
    print(&p1);
    print(&p2);
    return 0;
}