// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>
#include<stdbool.h>

#define STACK_LENGTH 5
#define EMPTY (-1)
#define INT_MIN (-12345)
#define STACK_EMPTY INT_MIN

int a[STACK_LENGTH];
int top=EMPTY;

bool push(int value){
    if(top>=STACK_LENGTH+1) return false;
    else{
        top=top+1;
        a[top]=value;
        return true;
    }
}

int pop(){
    if(top==EMPTY) return STACK_EMPTY;
    int result=a[top];
    top=top-1;
    return result;
}


int main()
{
    push(56);
    push(32);
    push(65);
    pop(65);
    int t;
    while((t=pop())!=STACK_EMPTY){
        printf("t = %d\n", t);
    }
    return 0;
}
