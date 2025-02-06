 #include <stdio.h>
void main(void)
{
    float PRO;
    printf ("ingrese el promedio del estudiante: ");
    scanf ("%f", &PRO);
    if (PRO >= 6)
        printf("\nAprobado");
    if (PRO < 6)
        printf ("\nNo aprobado");
}

