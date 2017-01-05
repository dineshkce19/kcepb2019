#include <stdio.h>

//addition method to display sum without returning sum 
int addition(int number1 ,int number2){
    
    //performing addtion operation
    int sum = number1 + number2;
    
    //returning sum value of two numbers where addition function is called
    return sum;
}

int main()
{
    //reading two values
    int number1;
    int number2;
    
    scanf("%d",&number1);
    scanf("%d",&number2);
    
    //invoking addition function of two number passed as arguments 
    int sum = addition(number1,number2);
    printf("sum of %d and %d is %d",number1,number2,sum);
    
    return 0;
}
