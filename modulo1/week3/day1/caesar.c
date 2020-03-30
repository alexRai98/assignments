#include <stdio.h>
#include <cs50.h>
#include <iostream>
using namespace std;

int main(void)
{
    string text= get_string("escriba la palabra\n");
    int n = get_string("key de encriptaciín\n");
    int i=0;
    string encript="";
    while(text[i]){
        encript+= text[i]+n;
        i++;
    }

    printf("%s",encript);
 
}
