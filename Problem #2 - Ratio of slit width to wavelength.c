#include <stdio.h>
#include <math.h>

int main()
{
    double theta = 45*(3.141592654/180);
    double ratio = 1/sin(theta);

    printf("Ratio of the slit width to the wavelength = %.4lf\n", ratio );

    return 0;
}
