#include <lapin.h>
#include <unistd.h>
#include <stdlib.h>

void put_pixel(t_bunny_pixelarray *pxa,
               unsigned int color,
               t_bunny_position *pos)
{
int width = pxa->clipable.clip_width;
int height = pxa->clipable.clip_height;
int i = 0;
printf("%d x %d\n", width, height);
unsigned int *tmp = (unsigned int *) pxa -> pixels;

 i = (width * pos->y) + pos->x;
 if (i < height * width)
     {
         tmp[i] = color;
     }
}
