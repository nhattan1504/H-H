#include <stdio.h>
#include <unistd.h>
#include<sys/wait.h>
int main() {
int a = 10;
if (fork() == 0) {
a++;
}else{
wait(0);
printf("%d\n", a);
}
}
