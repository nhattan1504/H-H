#include<sys/wait.h>
#include <stdio.h>
#include <unistd.h>
int main() {
int a = 10;
if (fork() == 0) {
a++;
}else{
 wait(0);
 printf("%d\n", a);
}
}
