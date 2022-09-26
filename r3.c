U=0,D,W=58,A,C=256,O=-32,T=10,B=6,m=1000,N=1492,S,rr=4;
#define P(x) (1UL<<(x))
const char*x0="abdgijlos",*x1=";<=<;<=><";
char r[32]={0},*p=r;
unsigned long J=140608LU,K=1310720LU,L=30791150645835369LU;
main() {
    for(;B>-1;B-=2,m/=T)for
    (
        S=x1[A=N/m%T-1]-W;
        S-->0&&(*++p=O*!U+L/P(8*(B+J/(D=P(S-1+x0[A]%-O))%2+K/D%2*2))%C);
    );
    printf("%s\n",r+1);
}
