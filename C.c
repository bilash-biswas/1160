#include<stdio.h>
void bilash(int a,int b,double c,double d){
    int count=0;
    while(a<=b){
        a=a+(int)((a*c)/100);
        b=b+(int)((b*d)/100);
        count++;
    }
    if(count>100){
        printf("Mais de 1 seculo.\n");
    }else{
        printf("%d anos.\n",count);
    }

}
int main()
{
    int a,b,n,i;
    double d,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d %lf %lf",&a,&b,&c,&d);
        bilash(a,b,c,d);
    }

    return 0;
}
