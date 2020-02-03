#include <stdio.h>
#include <stdlib.h>

int main(void)
{
 int i, j = 0;
 FILE *fd = fopen("image.ppm", "wb");
 fprintf(fd, "P6\n 500 500 255\n"); // width = 400, height = 400

 for (i = 0; i < 500; i++) {
   for (j = 0; j < 500; j++) {
     fprintf(fd, "%d %d %d ",255,255,0); // r = 255, g = 255, b = 0
   }
 }
 return 0;
}
