 #include <stdio.h>
 void main(void)
 {
     float PRE, NPR;
     printf("ingrese el precio del producto:");
     scanf("%f", &PRE)
     if(PRE > 1500)
{
NPR = PRE *1.11;
printf("\nNuevoPrecio: %7.2f",NPR)
}
}
