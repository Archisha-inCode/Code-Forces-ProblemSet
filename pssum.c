#include <stdio.h>
//You are given three integers a, b, and c. Determine if one of them is the sum of the other two.
int main()
{ int a,b,c; scanf("%d%d%d",&a,&b,&c);
 if( a+b==c){ printf("Yes");} else if (b+c==a){ printf("Yes");}else if (a+c==b){printf("Yes");}else{ printf("No");}}
