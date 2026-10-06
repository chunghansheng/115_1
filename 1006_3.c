#include <stdio.h>

int main()
{
    int score;
    int attendance;
    printf("請輸入讀得分(分)：");
    scanf("%d", &score);
    if (score >= 60)
    {
        printf("請輸入出席率(%)：");
        scanf("%d", &attendance);
        if (attendance >= 80)
        {
            printf("課程通過");
        }
        else
        {
            printf("不可以");
        }
    }
    else
    {
        printf("成績不及格");
    }
    return 0;
}
