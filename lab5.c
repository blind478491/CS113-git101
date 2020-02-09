#include <stdio.h>
int main()
{
    int x = 100;
    int a = 0144;
    int b = 0x64;
    // printf("x = %d\n" , x );
    // printf("reference x = %lu\n" , &x);
    // printf("reference x = %p\n" , &x);

    int number[] = { 4,5,6,7,8};
    printf("reference number = %p\n" , number);
    printf("reference &number[0] = %p\n" , &number[0]);
    printf("index 2 = %d\n", number[2]);
    printf("reference &number[2] = %p\n" , number + 2);

    int *ptr = &x;
    int *arrPtr;
    arrPtr = x; //100
    
    printf("ptr = %p , value = %d \n" , ptr , *ptr);
    // number[2] = 500;
    *(arrPtr+3000) = 500;
    printf("arrPtr + 2 = %p , value = %d \n", arrPtr + 3000 , *(arrPtr+3000));

    int number[] = {4 , 5, 6 ,7 ,8};
    for (int * ptr = number; ptr <= &number[4]; ptr++)
    

}
