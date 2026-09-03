#include<iostream>
using namespace std;
void swapRef(int &a,int &b){int t=a; a=b;t=b;}
void swapPtr(int*a ,int *b){int t=*a;*a=*b;*b=t;}

int main(){
    int x=10, y=20;
    swapRef (x,y);
    cout<<"after swapRef:x="<<x<<"y="<<y<<endl ;
    swapPtr(&x,&y);
    cout<<"after swapPtr:x="<<x<<"y="<<y<<endl ;
    int &alias=x;
    alias=90;
    cout<<"x via="<<x<<endl ;
    return 0;
    
}