#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(int argc,char* argv[argc+1])
{
    char a[20];

    strcpy(a,argv[1]);
    printf("%s\n",a);
}
