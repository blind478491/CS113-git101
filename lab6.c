#include <stdio.h>
// void addTen(int number[], int n)
void addTen(int *number, int n){
    // number = 00;
    // int number[] = {4 , 5 , 6 ,7 ,8 ,9};
    for (int i = 0; i < n ){
        printf("[%p] = %d\n" , number + i , *(number + i));*(number+i) += 10;
    }
}
int main()
{
    int number[] = {4,5,6,7,8,9};
    int n = 6;
    addTen(number , n);
    for (int i = 0; i < n ; i++){
        printf("[%p] = %d\n" , number + i , *(number))
    }
    addTwenty(&n);
    printf("n = %d\n" , n);
}