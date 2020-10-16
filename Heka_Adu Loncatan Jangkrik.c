#include <stdio.h>

int main()
{

int x1,x2,v1,v2,jangkrik1,jangkrik2;
   
  printf("Masukkan x1,x2,v1,v2 berurutan dan diberi spasi: ");
  scanf("%d %d %d %d", &x1, &x2, &v1, &v2);
    
  if(x1<x2 && 0<=x1<=1000 && 0<=x2<=1000 && 1<=v1<=1000 && 1<=v2<=1000){
        jangkrik1=x1;
        jangkrik2=x2;
   else if(v1<v2);
   printf("NO");
        
	while(jangkrik1<jangkrik2 && v1>v2){
            jangkrik1=jangkrik1+v1;
            jangkrik2=jangkrik2+v2;
            printf("jangkrik1:%d \n jangkrik2:%d \n", jangkrik1, jangkrik2);
        }
        
        if(jangkrik1==jangkrik2){
            printf("YES "); }
            
        else{
        printf("NO");
        }
    }
        
    
    else{
    printf("input tidak sesua syarat");
    }
    return 0;
}
