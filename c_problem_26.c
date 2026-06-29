#include <stdio.h>
void func1()
{
    printf("i am in function 1\n");
}
void func2()
{
    printf("i am in function 2 haha");
}
int main() {
    printf("hi : i am in main\n");
    func1();
    printf("i am back in main\n");
    func2();
}
