#include <stdio.h>
#include <stdlib.h>

int foo(int*a,int*b)
{
    return *a-2**b;
}

int main()
{
    int tab[] = {1,0,3,3,4,3,-4,-4,1,1};
    int *wsk=tab-1;
    int b = *(wsk+=4); //b=
    int c = b+3; // b=  , c=
    int d = foo(&b,&c); // b=  , c=  , d=
    int e = (wsk+=-1)[3]; // b=  , c=  , d=  , e=
    c = d + (b+=5); // b=  , c=  , d=  , e=
    e= (--c)-(d++);  // b=  , c=  , d=  , e=
    b = *wsk + e; // b=  , c=  , d=  , e=
    e = (d -= 2) + (c += 2); // b=  , c=  , d=  , e=
    return 0;
}
