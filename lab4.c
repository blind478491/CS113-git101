#include <stdio.h>
int addTen(int x)
{
    x = x + 10;
    return x;
}

int addTwenty();
int main()
{
    int x = 30;
    int y = addTen(x);
    printf("addTen main = %d" , y);
    int z =addTwenty();
    printf("addTwenty main = %d\n" , z);
}
int addTwenty(){
    x += 20;
    printf("x addTwenty = %d\n" , x);
    return x;
}