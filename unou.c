#include<stdio.h>
#include<dirent.h>
struct dirent*dptr;
int main(int args,char*argv[])
{
char buff[100];
DIR*dirp;
print("\n\n enter the directory name");
scanf("%s",buff);
if((dirp=opendir(buff))==NULL)
{
print("the given directory does not exist");
exit(1);
}
while(dptr=readdir(dirp))
{
printf("%s\n",dptr->d_name);
}
closedir(dirp);
}
