#include <stdio.h>
int main()
 {
    int a[5], i, j;
    for(i=0;i<5;i++) scanf("%d",&a[i]);
    for(i=0;i<5;i++){
        for(j=2;j<a[i];j++)
            if(a[i]%j==0) break;
        if(j==a[i] && a[i]>1) printf("%d ",a[i]);
    }
}
