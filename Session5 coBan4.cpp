#include <stdio.h>
int main() {
    int n,count;
    printf("Nhap vao so n: ");
    scanf("%d",&n);
    for(count=1;count<11;count++){
        printf("%d x %d = %d\n",n,count,n*count);
    }
}
