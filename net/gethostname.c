#include<netdb.h>
#include<stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>


int main()
{
    struct hostent *myhost;
    struct in_addr my_addr;

    //get host by name
    myhost = gethostbyname("www.baidu.com");
    my_addr.s_addr = (uint32_t)(myhost->h_addr);
    printf("baidu's ip is: %s\n",inet_ntoa(my_addr));
    return 0;
}
