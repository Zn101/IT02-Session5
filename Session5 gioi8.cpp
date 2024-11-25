#include <stdio.h>
int main(){
    int a,b,i;
    printf("moi nhap vao hai so nguyen a b: ");
    scanf("%d %d",&a,&b);
    int max = a > b ? a : b;
    i=max;
    while(1){
        if(max % a == 0 && max % b == 0){
        i = max;
        break;
        }
    max++;
    }
    printf("uoc chung lon nhat la %d", i);
}
