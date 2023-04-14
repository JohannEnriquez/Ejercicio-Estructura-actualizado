#include <stdio.h>

int main()
{
    float horas, valor_hora, ventas, salario_bruto, bonificacion, salario_neto;
    char continuar = 's';
    float total_salario = 0.0;

    while (continuar == 's' || continuar == 'S')
    {
        printf("Ingrese las horas trabajadas: ");
        scanf("%f", &horas);

        printf("Ingrese el valor por hora: ");
        scanf("%f", &valor_hora);

        printf("Ingrese valor de ventas: ");
        scanf("%f", &ventas);

        salario_bruto = 0.0;
        bonificacion = 0.0;

        if (horas <= 40)
        {
            salario_bruto = horas * valor_hora;
        }
        else if (horas > 40 && horas <= 50)
        {
            salario_bruto = 40 * valor_hora + (horas - 40) * valor_hora * 1.1;
        }
        else if (horas > 50 && horas <= 60)
        {
            salario_bruto = 40 * valor_hora + 10 * valor_hora * 1.1 + (horas - 50) * valor_hora * 1.15;
        }
        else if (horas > 60)
        {
            salario_bruto = 40 * valor_hora + 10 * valor_hora * 1.1 + 10 * valor_hora * 1.15 + (horas - 60) * valor_hora * 1.2;
        }

        if (ventas <= 800)
        {
            bonificacion = ventas * 0.02;
        }
        else if (ventas > 800 && ventas <= 1500)
        {
            bonificacion = ventas * 0.04;
        }
        else if (ventas > 1500 && ventas <= 3000)
        {
            bonificacion = ventas * 0.06;
        }
        else if (ventas > 3000)
        {
            bonificacion = ventas * 0.08;
        }

        salario_neto = salario_bruto - (salario_bruto * 0.0945) + bonificacion;

        printf("Salario: $%.2f\n", salario_neto);

        total_salario += salario_neto;

        printf("¿Desea analizar a otro empleado? (s/n): ");
        scanf(" %c", &continuar);
    }

    printf("Total salario de empleados: $%.2f\n", total_salario);

    return 0;
}
