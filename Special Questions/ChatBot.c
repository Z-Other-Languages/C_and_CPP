// ChatBoat
/*
#include<stdio.h>
#include<unistd.h>
#include<string.h>

void main()
{
    int a;
    char b[100], c[100], d[100], e[]="INDIA", f[]=""

}



*/

#include <stdio.h>
#include <unistd.h>
#include <string.h>
int main()
{
    int a;
    char b[100],c[100],d[100],e[]="INDIA",f[]="NEPAL";
    printf("\n\nWhat's your name?\n");
    gets(b);
    printf("%s, is a nice name 👌\n",b);
    sleep(1.5);
    printf("I have no name, Please give me a name 🥺\n");
    gets(c);
    printf("%s, is a nice name for me 🤩\n",c);
    sleep(1.5);
    printf("So %s I am a chat boat created by UJJWAL\n",b);
    sleep(1.5);
    printf("%s, what is your age?\n",b);
    scanf("%d",&a);
    if(a<=30)
        printf("You are so young 🔥🔥🔥 lol 😂😂\n");
    else
        printf("your youngness is gone 🤣🤣🤣\n");
    sleep(1.5);
    printf("In my case there is no Age ,Currently I am version 1.0........(Maybe in future i will be upgraded to 2.0 😎)\n");
    sleep(1.5);
    printf("So, %s which country you belongs to?(Plese write in BLOCK LETTERS)\n",b);
    scanf("%s",&d);
    int res= strcmp(d, e);
    int res2= strcmp(d, f);
    if(res==0)
        printf("Hey UJJWAL is also from INDIA🇮🇳🇮🇳\n");
    else if(res2==0)
        printf("HEY, You are UJJWAL'S Neighbor🤩\n");
    else
        printf("I will try to visit your country, but only through google maps😅\n");
    sleep(1.5);
    printf("I got enough information about you 😈😈\n");
    sleep(1.5);
    printf("Connected with server computer...💻💻💻\n");
    sleep(0.8);
    printf("Injecting trojan rat in your device\n");
    sleep(0.5);
    printf("Trojan Injected\n");
    sleep(1);
    printf("Backdoor access gained\n");
    sleep(1);
    printf("STARTED HACKING YOUR DEVICE...... \n");
    sleep(1.5);
    printf("1%\n");
    sleep(2);
    printf("15%\n");
    sleep(2);
    printf("20%\n");
    sleep(0.7);
    printf("25%\n");
    sleep(0.7);
    printf("30%\n");
    sleep(0.7);
    printf("35%\n");
    sleep(0.9);
    printf("47%\n");
    sleep(0.4);
    printf("51%\n");
    sleep(0.7);
    printf("60%\n");
    sleep(1.3);
    printf("63%\n");
    sleep(0.6);
    printf("78%\n");
    sleep(0.6);
    printf("80%\n");
    sleep(0.6);
    printf("85%\n");
    sleep(0.4);
    printf("90%\n");
    sleep(2);
    printf("97%\n");
    sleep(0.7);
    printf("99%\n");
    sleep(1);
    printf("100%\n");
    sleep(2);
    printf("Sending data to server.......💻💻💻\n");
    sleep(1.5);
    printf("Data sent\n\n");
    printf("YOU ARE HACKED 🤖🤖🤖🤖\n\n");
    sleep(0.8);
    printf("If you dont want to publish your information give me a star⭐\n");

    return 0;
}