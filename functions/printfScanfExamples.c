#include <stdio.h>

int main()
{
    //exmaple for return value of scanf
    int inum;
    int number =  scanf("%d",&inum);
    printf("NUMBER:%d",number);
    
    //exmaple for return value of printf
    int number2 = printf("hello world\n");
    printf("%d",number2);
    return 0;
}
