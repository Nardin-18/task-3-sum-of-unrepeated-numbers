#include <stdio.h>
#include <stdlib.h>
int summation( int a[]){
    int sum =0;
    int n=0;
    for(n=0;n<20;n++){
    sum +=a[n];
    }
    printf("%d",sum);
    return sum;
}
int main()
{
    printf("Please enter a number \n");
    int n=0;
    int a[20];
    //int array[20];
    for (n=0;n<20;n++)
    {
    scanf("%d",&a[n]);}
    for (n=0;n<20;n++)
    {
        for ( int s=n+1;s<20;s++){
           if (a[n]==a[s]){
            a[s]='\0';
           }
        }
    }
    for (n=0;n<20;n++){
        printf("%d \t",a[n]);
    }
    printf("\n the sum of unrepeated numbers = %d ",summation(a) );
}
