#include <stdio.h>

int Add(int a, int b)
{
    return a+b;
}

int Sub(int a, int b)
{
    return a-b;
}

int Mul(int a, int b)
{
    return a*b;
}

int Div(int a, int b){
    if(a==0 || b ==0){
        printf("Can't div_func on 0 \n");
        return -1;
    }else{
        return a/b;
    }
}

int Div_rest(int a, int b){
    if(a==0 || b ==0){
        printf("Can't div_func on 0 \n");
        return -1;
    }else{
        return a%b;
    }
}

int q_a_func(void){
    char cal[4] = " ";
    int result = 0, a=0, b=0;
    char operater = ' ';

    printf("Enter the modification (+,-,x,/,%%) : ");
    scanf("%s",cal);
    sscanf(cal, "%d%c%d",&a,&operater,&b);
    switch (operater)
    {
    case '+': result = Add(a,b);break;
    case '-': result = Sub(a,b);break;
    case 'x': result = Mul(a,b);break;
    case '/': result = Div(a,b);break;
    case '%': result = Div_rest(a,b);break;
    default: printf("Enter wrong calculation symbol\n"); return -1;
    }
    return printf("result : %d\n",result); ;
}

int main(void)
{
    q_a_func();
    return 0;
}