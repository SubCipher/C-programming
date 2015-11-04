#include <stdio.h>
    main(){
        int fahr, celsius;
        int lower, upper, step;

        lower = 0;	/*lower limit temp scale */
        upper = 300;	/* upper limit */
        step = 20;	/* step size */

        fahr = 0;
        while (fahr <= upper){
            celsius = 5*(fahr-32)/9;
            printf("%3d\t %6d\n",fahr, celsius);
            fahr = fahr + step;
        }
    }
