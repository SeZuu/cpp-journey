// SELECTIVE STRUCTURES EXERCISES !!!

#include <iostream>

int main()
{

    // 1. Par o Impar
    // int number;
    // std::cout << "Ingrese numero: ";
    // std::cin >> number;
    // std::cout << ((number % 2) == 0 ? "El numero es par." : "El numero es impar.");

    // 4. Entrada al Cine
    // int price, age;
    // std::cout << "ingrese edad: ";
    // std::cin >> age;

    // if (age < 18)
    //     price = 8;
    // else if (age < 50)
    //     price = 15;
    // else
    //     price = 5;

    // std::cout << "El precio de la entrada es: " << price;

    // 5. Es triangulo?
    // int side_a, side_b, side_c;
    // std::cout << "ingrese los lados: ";
    // std::cin >> side_a;
    // std::cin >> side_b;
    // std::cin >> side_c;

    // if ((side_a + side_b > side_c && side_a - side_b < side_c) &&
    //     (side_a + side_c > side_b && side_a - side_c < side_b) &&
    //     (side_c + side_b > side_a && side_c - side_b < side_a))
    // {
    //     std::cout << "ES UN TRIANGULO";
    // }
    // else
    //     std::cout << "NO ES UN TRIANGULO";

    // 6. N1 es multiplo de N2
    // int n1, n2;
    // std::cout << "ingrese 2 numeros enteros: " << std::endl;
    // std::cin >> n1;
    // std::cin >> n2;

    // if (n1 % n2 == 0)
    //     std::cout << n1 << " es multiplo de " << n2;
    // else
    //     std::cout << n1 << " no es multiplo de " << n2;

    // char gen;
    // int edad;
    // float pulsaciones;
    // std::cout << "Ingrese el genero (f o m): ";
    // std::cin >> gen;
    // std::cout << "Ingrese su edad: ";
    // std::cin >> edad;

    // if (gen == 'f')
    //     pulsaciones = (220 - edad) / 10.0;
    // else
    //     pulsaciones = (210 - edad) / 10.0;

    // std::cout << "El numero debe ser de " << pulsaciones << " pulsaciones por cada 10 sec aprox.";

    // int gl, gv;
    // std::cout << "goles local: ";
    // std::cin >> gl;
    // std::cout << "goles visit: ";
    // std::cin >> gv;

    // if (gl < 1 && gv < 1)
    //     std::cout << "Partido en empate";
    // if (gl > gv)
    //     std::cout << "Gano el equipo local";
    // else
    //     std::cout << "gano el equipo visit.";

    // Calculadora de promedios
    // int code;
    // float prom, grade1, grade2, grade3;
    // std::string message = "";
    // std::cout << "ingrese el codigo del alumno: ";
    // std::cin >> code;
    // std::cout << "Ingrese las notas(3):" << std::endl;
    // std::cin >> grade1;
    // std::cin >> grade2;
    // std::cin >> grade3;

    // prom = (0.30 * grade1) + (0.30 * grade2) + (0.40 * grade3);

    // if (prom < 13)
    // {
    //     message = "estudia";
    // }
    // else if (prom >= 13 && prom < 15)
    // {
    //     message = ":)";
    // }
    // else if (prom < 20)
    // {
    //     message = ":) :) FELCITACIONES";
    // }
    // else
    // {
    //     message = ":) :) :) :) :) FELICITACIONES!!!";
    // }

    // std::cout << "el promedio es " << prom << message;

    // NIVEL DEL ALUMNO
    // int credits;
    // std::cout << "Creditos acumulados: ";
    // std::cin >> credits;
    // if (credits <= 32)
    // {
    //     std::cout << "Primer Anio";
    // }
    // else if (credits <= 63)
    // {
    //     std::cout << "Segundo Anio";
    // }
    // else if (credits <= 95)
    // {
    //     std::cout << "Tercer Anio";
    // }
    // else
    // {
    //     std::cout << "Cuarto Anio";
    // }

    // float prestamo, interes;
    // std::cout << "Prestamo: ";
    // std::cin >> prestamo;
    // if (prestamo < 5000)
    // {
    //     interes = 0.03;
    // }
    // else if (prestamo < 10000)
    // {
    //     interes = 0.02;
    // }
    // else
    // {
    //     interes = 0.01;
    // }

    // std::cout << "El monto total a pagar es: " << prestamo + (prestamo * interes);

    // SWITCH EXERCISES

    // EJERCICIO 1

    // char escala;
    // int n_cursos, monto, cuota_fija;
    // cuota_fija = 350;
    // std::cout << "Ingrese la escala de pago: ";
    // std::cin >> escala;
    // std::cout << "Ingresa el numero de cursos: ";
    // std::cin >> n_cursos;

    // if (n_cursos < 1)
    // {
    //     std::cout << "Ningun curso matriculado";
    //     return 0;
    // }

    // switch (escala)
    // {
    // case 'A':
    //     if (n_cursos < 6)
    //     {
    //         monto = 400;
    //     }
    //     else if (n_cursos > 5 && n_cursos < 9)
    //     {
    //         monto = 600;
    //     }
    //     else
    //     {
    //         monto = 900;
    //     }
    //     break;
    // case 'B':
    //     if (n_cursos < 4)
    //     {
    //         monto = 350;
    //     }
    //     else if (n_cursos < 8)
    //     {
    //         monto = 500;
    //     }
    //     else
    //     {
    //         monto = 700;
    //     }
    //     break;
    // case 'C':
    //     if (n_cursos < 4)
    //     {
    //         monto = 320;
    //     }
    //     else if (n_cursos < 8)
    //     {
    //         monto = 480;
    //     }
    //     else
    //     {
    //         monto = 685;
    //     }
    //     break;
    // case 'D':
    //     if (n_cursos < 5)
    //     {
    //         monto = 310;
    //     }
    //     else if (n_cursos < 9)
    //     {
    //         monto = 475;
    //     }
    //     else
    //     {
    //         monto = 680;
    //     }
    //     break;
    // default:
    //     return 0;
    //     break;
    // }

    // std::cout << "El importe a cancelar es de s/." << cuota_fija + monto;

    // EJERCICIO 2
    // char letter = ' ';
    // std::string month = "";
    // float cost;
    // int digit;

    // std::cout << "Ingrese el modelo: ";
    // std::cin >> letter;
    // std::cout << "Ingrese el ultimo digito de la placa: ";
    // std::cin >> digit;
    // std::cout << "Ingrese el costo de mantenimiento anual: ";
    // std::cin >> cost;

    // switch (letter)
    // {
    // case 'A':
    //     if (digit < 6)
    //     {
    //         if (cost <= 500)
    //             month = "ENERO";
    //         else
    //             month = "FEBRERO";
    //     }
    //     else if (digit < 9)
    //     {
    //         if (cost <= 700)
    //             month = "JUNIO";
    //         else
    //             month = "JULIO";
    //     }
    //     else if (digit == 9)
    //     {
    //         if (cost <= 1000)
    //             month = "OCTUBRE";
    //         else
    //             month = "NOVIEMBRE";
    //     }
    //     break;
    // case 'B':
    //     if (digit < 4 && digit > 0)
    //     {
    //         if (cost <= 500)
    //             month = "MARZO";
    //         else
    //             month = "ABRIL";
    //     }
    //     else if (digit < 9)
    //     {
    //         if (cost <= 700)
    //             month = "MAYO";
    //         else
    //             month = "SEPTIEMBRE";
    //     }
    //     else if (digit == 9 || digit == 0)
    //     {
    //         if (cost <= 1000)
    //             month = "AGOSTO";
    //         else
    //             month = "DICIEMBRE";
    //     }
    //     break;
    // default:
    //     return 0;
    //     break;
    // }

    // std::cout << "El mes de revision tecnica es: " << month;

    // EJERCICIO 3
    int year, day, month;
    std::string color = " ";

    std::cout << "Ingrese el dia de nacimiento: ";
    std::cin >> day;
    std::cout << "Ingrese el mes de nacimiento: ";
    std::cin >> month;
    std::cout << "Ingrese el anio de nacimiento: ";
    std::cin >> year;

    if (year % 2 == 0)
    {
        if (day % 2 == 0)
        {
            if (month < 4)
                color = "ROJO";
            else if (month < 7)
                color = "NARANJA";
            else if (month < 10)
                color = "MARRON";
            else
                color = "VIOLETA";
        }
        else
        {
            if (month < 4)
                color = "CELESTE";
            else if (month < 7)
                color = "VERDE";
            else if (month < 10)
                color = "FUCSIA";
            else
                color = "ROSADO";
        }
    }
    else
    {
        if (day % 2 == 0)
        {
            if (month < 4)
                color = "MORADO";
            else if (month < 7)
                color = "TURQUESA";
            else if (month < 10)
                color = "AZUL";
            else
                color = "OLIVO";
        }
        else
        {
            if (month < 4)
                color = "NEGRO";
            else if (month < 7)
                color = "GRIS";
            else if (month < 10)
                color = "AMARILLO";
            else
                color = "BLANCO";
        }
    }

    std::cout << "Tu color es " << color;

    return 0;
}