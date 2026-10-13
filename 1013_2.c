#include <stdio.h> 
int main()
{
    int drink;
    printf("飲料的選擇與價格：\n1. 紅茶 30元\n2. 綠茶 35元\n3. 奶茶 50元\n4. 果汁 45元\n請輸入選項:");
    scanf("%d",&drink);
    switch (drink)
    {
    case 1:
    printf("1 紅茶 30元");
    break;
    case 2:
    printf("2 綠茶 35元");
    break;
    case 3:
    printf("3 奶茶 50元");
    case 4:
    printf("4 果汁 45元");
    break;
    default:
    printf("無此飲料選項");
    }
    return 0;
}