#include <stdio.h>
int main() {
    int menu;
    float a,b;
    printf("CALCULATOR\n1.T?ng 2 s?\n2.Hi?u 2 s?\n3.T�ch 2 s?\n4.Thuong 2 s?\n5.Tho�t\n");
    printf("m?i ch?n ch?c nang ");
    scanf("%d",&menu);
    while(menu>5){
        printf("m?i ch?n ch?c nang ");
        scanf("%d",&menu);
    }
    while(menu<5){
        printf("m?i nh?p v�o 2 s? a b: ");
        scanf("%f %f",&a,&b);
        switch(menu){
            case 1:
            printf("T?ng 2 s? a v� b l�: %.2f\n", a+b);
            break;
            case 2:
            printf("Hi?u 2 s? a v� b l�: %.2f\n", a-b);
            break;
            case 3:
            printf("T�ch 2 s? a v� b l�: %.2f\n", a*b);
            break;
            case 4:
            printf("Thuong 2 s? a v� b l�: %.2f\n", a/b);
            break;
        }
        printf("m?i ch?n ch?c nang ");
        scanf("%d",&menu);
    }
}
