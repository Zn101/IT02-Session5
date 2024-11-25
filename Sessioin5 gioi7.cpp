#include <stdio.h>
int main(){
    int a,b,i;
    printf("moi nhap vao hai so nguyen a b: ");
    scanf("%d %d",&a,&b);
    int min = a < b ? a : b;
    if(a==0||b==0){
        printf("khong co uoc chung");
    }
    for(int i = min; i >= 1; i--){
      if(a % i == 0 && b % i == 0){
        printf("uoc chung lon nhat la %d",i);
        break;
      }
   }
}
