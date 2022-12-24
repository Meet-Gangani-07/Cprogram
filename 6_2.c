//THIS PROGRAM IS CREATED BY 22CE048
#include<stdio.h>
int main()
{
    int num,power,i=0,ans=1;
    printf("Enter the value of base :");
    scanf("%d",&num);
    printf("Enter power of the number :");
    scanf("%d",&power);
    while(i<power)
    {
        ans=ans*num;
        i++;
    }
    printf("%d^%d=%d",num,power,ans);
    printf("\nTHIS PROGRAM IS CREATED BY 22CE048");
    return 0;
}
