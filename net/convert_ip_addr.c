#include<arpa/inet.h>
#include<stdio.h>
#include<sys/socket.h>
#include<netinet/in.h>

int main()
{
    struct in_addr my_addr;
    //convert a to net
    inet_aton("192.168.0.1", &my_addr);
    printf("a to net is: %d\n", my_addr.s_addr);

    printf("address is: %s \n", inet_ntoa(my_addr));

    return 0;
}
