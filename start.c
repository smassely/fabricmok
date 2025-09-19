#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

  system("java -jar /home/smassely/fabricmok/fabricbro.jar --Xmx4G nogui");
  system("git add .");
  system("git commit -a -m save");
  system("git push origin");
  system("echo thanks for giving a shit");
  return EXIT_SUCCESS;
}
