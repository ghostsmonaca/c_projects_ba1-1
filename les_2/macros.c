#include <stdio.h>
#define MIN(x,y) ((x<y)?x:y)
#define ABS(x) ((x<0)?(x*(-1)):x)


int main(){
    int resul = 3 + 2*MIN(9,4);
    printf("%d",resul);
    int abstest = ABS((-9));
    printf("%d", abstest);
    return 0;
}