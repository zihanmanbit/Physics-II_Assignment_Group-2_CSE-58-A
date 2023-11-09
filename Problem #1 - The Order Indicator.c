#include <stdio.h>
#include<math.h>

int main()
{
    double lambda, theta, d, m, pi=3.141592654;

    printf("Enter the wavelength (in nm): ");
    scanf("%lf", &lambda);
    printf("Enter the angle (in degrees): ");
    scanf("%lf", &theta);
    printf("Enter the slit separation (in um): ");
    scanf("%lf", &d);

    double lambda2=lambda*pow(10,-9), d2=d*pow(10,-6), theta2=theta*(pi/180);

    if (lambda < 380 || lambda > 750)
    {
        printf("Out of the range. Please enter a valid number.\n");
    }
    else
    {
        m = ( d2 * sin(theta2)) / lambda2;

        printf("%.2lf-th order maxima\n", m);
    }

    return 0;
}
