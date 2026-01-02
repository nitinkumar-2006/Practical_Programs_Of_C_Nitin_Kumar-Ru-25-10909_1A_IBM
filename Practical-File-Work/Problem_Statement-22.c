#include <stdio.h>
int main(){
    int i,attan,count;
    for(i=1;i<=30;i++)
    {
        printf("Day%d:",i);
        scanf("%d",attan);
        if(attan == 1)
        count++;
    }
    printf("Total present days=%d",count);
return 0;
}