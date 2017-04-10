//
// Created by nieka on 2017-1-1.
//
#include <stdio.h>
#include <iostream>
#include <stdlib.h>

//template<class iT, class oT> oT* rgbConvert( iT *I, int n, int d, int flag, oT nrm )
//{
//    oT *J = (oT*) malloc(n*(flag==0 ? (d==1?1:d/3) : d)*sizeof(oT));
//    int i, n1=d*(n<1000?n/10:100); oT thr = oT(1.001);
//    if(flag>1 && nrm==1) for(i=0; i<n1; i++) if(I[i]>thr)
//                wrError("For floats all values in I must be smaller than 1.");
//    else if( (flag==0 && d==1) || flag==1 ) normalize(I,J,n*d,nrm);
////    else if( flag==0 ) for(i=0; i<d/3; i++) rgb2gray(I+i*n*3,J+i*n*1,n,nrm);
////    else if( flag==2 ) for(i=0; i<d/3; i++) rgb2luv(I+i*n*3,J+i*n*3,n,nrm);
////    else if( flag==3 ) for(i=0; i<d/3; i++) rgb2hsv(I+i*n*3,J+i*n*3,n,nrm);
////    else wrError("Unknown flag.");
//    return J;
//}

// Copy and normalize only

int add(int a, int b)
{
    return a + b;
}

int mul(int a, int b)
{
    return a*b;
}
