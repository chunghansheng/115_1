#include <stdio.h>

int main()
{
    int login;
    int money_all;
    int money_get;
    int black;
    printf("請輸入登入狀態1有0無：");
    scanf("%d",&login);
    printf("請輸入帳戶餘額：");
    scanf("%d",&money_all);
    printf("請輸入提款金額：");
    scanf("%d",&money_get);
    printf("請輸入黑名單1是0否：");
    scanf("%d",&black);
    if (login==1 && black && money_get <= money_all)
    {
        printf("可以提款");
       
    }
    else
    {
        printf("無法提款");
    }
}
