// Swap endian (big to little) or (little to big)
#include<stdio.h>
#include<inttypes.h>
int main()
{
/*uint32_t num = 123456;
uint32_t b0,b1,b2,b3;
uint32_t res;

b0 = (num & 0x000000ff) << 24u;
b1 = (num & 0x0000ff00) << 8u;
b2 = (num & 0x00ff0000) >> 8u;
b3 = (num & 0xff000000) >> 24u;

res = b0 | b1 | b2 | b3;
int x = 0x12345678;

x = ( x >> 24 ) | (( x << 8) & 0x00ff0000 )| ((x >> 8) & 0x0000ff00) | ( x << 24)  ; 

printf("value = %x", x);  // x will be printed as 0x78563412
*/
uint32_t num = 0x12345678;
uint32_t res =
    ((num & 0x000000FF) << 16) |
    ((num & 0x0000FF00) << 8) |
    ((num & 0x00FF0000) >> 8) |
    ((num & 0xFF000000) >> 16);

printf("%0x\n", res);
//printf("%" PRIX32 "\n", res);
}
