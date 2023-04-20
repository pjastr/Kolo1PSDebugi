#include <stdio.h>
#include <stdlib.h>

int foo(int*a,int*b)
{
    return *a-2**b;
}

int main()
{
    int tab[] = {1,1,5,5,2,3,-4,-4,1,1};
    int *wsk=tab-1;
    int b = *(wsk+=4); //b=
    int c = b+3; // b=  , c=
    int d = foo(&b,&c); // b=  , c=  , d=
    int e = (wsk+=-1)[4]; // b=  , c=  , d=  , e=
    c = d + (b+=4); // b=  , c=  , d=  , e=
    e= (--c)-(b++);  // b=  , c=  , d=  , e=
    b = *wsk + e; // b=  , c=  , d=  , e=
    d = (e -= -2) + (b += 3); // b=  , c=  , d=  , e=
    return 0;
}
