#include<stdio.h>
int setbit(int val ,int pos){
    val=val|(1<<pos);
    return val;
}
int main( ){
    int n=25;
    int pos=3;
    int s;
    s=setbit(n,pos);
    printf(" the value after set bit %d",s);
    return 0;
}