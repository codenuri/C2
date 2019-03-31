#include <stdio.h>

void update_display(int n)
{
     printf("update_display : %d\n", n);
}
void send_manager(int n)
{
    printf("send_manager : %d\n", n);
}

int main(void)
{
    int temp = 0;
    while( 1 )
    {
        scanf("%d", &temp);
        update_display(temp);
        send_manager(temp);
    }
}
