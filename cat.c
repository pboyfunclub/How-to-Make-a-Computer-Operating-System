#include <fcntl.h>
#include <unistd.h>

int main(int argc, char **argv)
{
int file1;
char temp;
file1 = open(argv[1], O_RWONLY) 
while(read(file1, &temp,  1) != 0)
{
write(1, &temp,  1); 
} 
return (0); 
} 
