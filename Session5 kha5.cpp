#include <stdio.h>
int main() {
    int n,count;
    for(n=1;n<10;n++){
        for(count=1;count<11;count++){
        printf("%d x %d = %d\n",n,count,n*count);
        }
    }
}
