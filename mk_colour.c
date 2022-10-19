union colour {
unsigned int full;
unsigned char rgba[4];
};

unsigned int mk_colour(unsigned char r,
                       unsigned char g,
                       unsigned char b,
                       unsigned char a)
{
    union colour col;
    col.rgba[0] = 255;
    col.rgba[1] = 0;
    col.rgba[2] = 255;
    col.rgba[3] = 1;
    return (col.full);
}
