#include <stdio.h>
#include <stdlib.h>

int main(void)
{
 int i, j = 0;
 FILE *fd = fopen("img.ppm", "w");
 fprintf(fd, "P3\n 500 600\n255\n"); // width = 400, height = 400

 for (i = 0; i < 600; i++) {
   for (j = 0; j < 500; j++) {
     if (i > 39 && (i % 20 == 0 || i % 20 == 1)) {
       fprintf(fd, "%d %d %d\n",51,153,255);
     }
     else if (j == 70 && j == 70) {
       fprintf(fd, "%d %d %d\n",255, 149, 149);
     }
     else if (j == 71 && j == 71) {
       fprintf(fd, "%d %d %d\n",255, 149, 149);
     }
     else {
       fprintf(fd, "%d %d %d\n",255, 252, 199);
     }
   }
 }
 return 0;
}
