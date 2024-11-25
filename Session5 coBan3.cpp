#include <stdio.h>
int main() {
    int i,n;
    printf("moi nhap vao so n: ");
        scanf("%d", &n);
    int sum=0;
    for(i=0;i<=n;i++){
        sum=sum+i;
    }
    printf("tong cac so tu 1 den n la: %d",sum);
}
