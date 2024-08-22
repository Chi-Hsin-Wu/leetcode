#include<stdio.h>
#include<stdbool.h>

#define QUEUE_EMPTYE_LENGTH 10
#define EMPTY (-1)
#define INT_MIN (-12345)
#define QUEUE_EMPTY INT_MIN

int a[QUEUE_EMPTYE_LENGTH];
int head,tail=-1;

bool enqueue(int value){
    if(tail>=QUEUE_EMPTYE_LENGTH-1) return false;
    else{
        tail++;
        a[tail]=value;
        return true;
    }
}

int dequeue(){
    if(tail==EMPTY) return QUEUE_EMPTY;
    else{
        int result=a[head+1];
        for(int i=1;i<tail;i++){
            a[i-1]=a[i];
        }
        tail--;
        return result;
    }
}
int main()
{
    enqueue(1);
    enqueue(4);
    enqueue(3);
    dequeue();

    int t;
    while((t=dequeue())!=QUEUE_EMPTY){
        printf("t = %d\n", t);
    }
    return 0;
}
