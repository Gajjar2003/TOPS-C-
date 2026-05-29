/*You are debugging a program that complies successfully but crashes at runtime.
 Which category of error is this? Mention two debugging practices you would follow to resolve it. */
 
 #include <stdio.h>

int main() {

    int a = 10;
    int b = 0;

    printf("%d", a / b);

    return 0;
}
