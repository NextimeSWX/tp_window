#include <lapin.h>
#include <unistd.h>
#include <stdlib.h>

void clear_pixelarray(t_bunny_pixelarray *pxa, unsigned int color)
{
int width = pxa->clipable.clip_width;
int height = pxa->clipable.clip_height;
int px = width * height;
int i = 0;
printf("%d x %d\n", width, height);
unsigned int *tmp = (unsigned int *) pxa -> pixels;
 while (i <= px)
     {
         tmp[i] = color;
         i = i + 1;
     }
}
