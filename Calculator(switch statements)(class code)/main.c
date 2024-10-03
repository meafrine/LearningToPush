#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    char oper;
    printf("Key in the first integer\n");
    scanf("%d", &num1);

    printf("Key in the second integer\n");
    scanf("%d", &num2);

    printf("Key in the operator  (+,-,*,/,%,)\n");
    scanf("%c", &oper);

    switch(oper){
    case '+':{
    printf("the sum is %d\n",num1+num2);
    break;
    }

        case '-':{
    printf("the subtracton is %d\n",num1-num2);
    break;
    }

        case '*':{
    printf("the product is %d\n",num1*num2);
    break;
    }

        case '/':{
        if(num2!=0){
    printf("the quotient is %d\n",num1/num2);
    }
    else{
    printf("Error: division by zero");
    }
    break;
    }


        case '%':{
        if(num2!=0){
    printf("the modulus is %d\n",num1%num2);
    }
    else{
    printf("Error: division by zero");
    }
    break;
    }

    default:{printf("you have keyed in the wrong operator");

    }

    }


    return 0;
}
