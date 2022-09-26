#include <math.h>
#include <stdio.h>
#define P(x) (long unsigned)pow(2,x)
const char *x1="abdgijlos",*x2=";<=<;<=><";
char r[4*5]={0},*p=r,f[]="%s\n";
unsigned long J=140608LU,K=1310720LU,L=30791150645835369LU;
int U=0,D,W=58,A,C=256,O=-32,T=10,B=6,m=1000,N=2002,S,rr=4;
int main()
{
    for(;B>-1;B-=2,m/=T)for(S=x2[A=N/m%T-1]-W;S-->0&&(*++p=O*!U+L/P(8*(B+J/(D=P(S-1+x1[A]%-O)%2+K/D%2*2))%C)););
    printf("%s\n",1+r);
}
