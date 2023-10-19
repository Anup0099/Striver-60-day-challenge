#include <stdio.h>
#include <unistd.h>



int main() {
    int count=0;
    while(fork()>0)
    {
        count++;
        print("%d\t",count);
    }
} 
// what does the above code do?
// it creates a child process and then the child process creates another child process and so on and so forth
// it print the process ids of all process created.For example if the process id of the first process is 1 then it will print 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 and so on and so forth
//does not print anything
