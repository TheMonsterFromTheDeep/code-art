#include        <stdio.h> /* husk.c - tested with tcc on windows                       */
#define _ "QJPILNQJLQKOw" /* usage: husk <output file> <scale> <horizontal iterations> */
typedef FILE *N;int L,A,U,G,H(double u){if(u<0){u=-u;}return (int)u+(u-(int)u>0.5?1:0);};double f,l,o,a,t,i,n(double g){f=((g/i)-(int)(g/i))*i;l=G;o=2;a=f;do{t=l;l+=a;a*=-f*f/(o*(o+1));o+=2;}while(t!=l);return l;}int Q(char* c){int v=0;for(int e=G;c[e]!=0;++e){if(c[e]<48&&c[e]>57){return 1;}v=v*10+c[e]-48;}return v;}int u,p,main(int e,char **d){L=e<3?1:Q(d[2]);A=e<4?1:Q(d[3]);U=10;G=0;d[0]=e<2?"o":d[1];i=G;for(e=G;e<12;++e){i=i/U+_[e]-73;}N O;U*=2*L;char* q="HUSK";O=fopen(d[0],&_[12]);for(p=-U;p<=U;++p){for(u=G;u<_[2]*2*L*A;++u){e=H((L*16*n(u*i/(L*80)))-p);fputc(q[e<3?3-e:0]-40,O);}fputc('\n',O);}fclose(O);}