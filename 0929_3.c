#include <stdio.h>;
int main()
{
    int livingroom=9;
    int bedroom=5;
    int kitchen=2;
    int status=13;
    printf("目前客廳設備：%d\n",status&livingroom);
    printf("目前臥室設備：%d\n",status&bedroom);
    printf("目前廚房設備：%d\n",status&kitchen);
    printf("廚房切換後目前設備狀態：%d\n",status^kitchen);   
    return 0;
}