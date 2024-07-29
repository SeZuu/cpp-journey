#include <iostream>
#include <math.h>
int main()
{
    /*Ejercicio 1
    Una empresa constructora vende terrenos con la Forma A (ver figura). Elabore un programa en
    C++ que permita obtener el área respectiva de un terreno de medidas de cualquier valo*/

    // float a, b;
    // std::cout << "Ingrese A: ";
    // std::cin >> a;
    // std::cout << std::endl;
    // std::cout << "Ingrese B: ";
    // std::cin >> b;
    // std::cout << std::endl;

    // float area_primera_figura = (b * (a / 2)) / 2;
    // float area_segunda_figura = b * (a / 2);
    // std::cout << "El area de la primera figura es: " << area_primera_figura << std::endl;
    // std::cout << "El area de la segunda figura es: " << area_segunda_figura << std::endl;
    // std::cout << "El area de la figura comleta es: " << area_primera_figura + area_segunda_figura;

    /*Ejercicio 2
    SEDAPAL requiere determinar el pago que debe realizar una persona por el total de metros
    cúbicos que consume de agua al llenar una piscina móvil (ver figura). Elabore un programa en
    C++ que permita determinar ese pago si se tiene como dato adicional el precio por m3
    de agua*/

    // float a, b, l, price;
    // std::cout << "Ingrese A: ";
    // std::cin >> a;
    // std::cout << "Ingrese B: ";
    // std::cin >> b;
    // std::cout << "Ingrese L: ";
    // std::cin >> l;
    // std::cout << "Ingrese el precio por m3 de agua: ";
    // std::cin >> price;

    // std::cout << "El pago es: " << a * b * l * price;

    /*Ejercicio 3
    Carmela, Javier y Eulogio aportan cantidades de dinero para formar un capital. Elabore un
    programa en C++ que permita determinar el capital total formado y el porcentaje de dicho
    capital que aporta cada uno.
    */

    // float capital;
    // float carmela, javier, eulogio;
    // std::cout << "Aporte de Carmela: ";
    // std::cin >> carmela;
    // std::cout << "Aporte de Javier: ";
    // std::cin >> javier;
    // std::cout << "Aporte de Eulogio: ";
    // std::cin >> eulogio;

    // capital = carmela + javier + eulogio;

    // std::cout << "El capital formado es: " << capital << std::endl;
    // std::cout << "El porcentaje aportado por Carmela es: " << 100 * (carmela / capital) << "%" << std::endl;
    // std::cout << "El porcentaje aportado por Javier es: " << 100 * (javier / capital) << "%" << std::endl;
    // std::cout << "El porcentaje aportado por Eulogio es: " << 100 * (eulogio / capital) << "%";
    // return 0;

    /*Ejercicio 4
    La repartición de ganancias en una empresa se hace en forma proporcional al número de
    acciones de cada uno de sus tres socios. Dada la ganancia de un año y la cantidad de acciones
    de cada socio, elabore un programa en C++ que determine el monto que le corresponde a cada
    socio.*/

    // float ganancia, pago_por_accion;
    // int acciones_socio_1, acciones_socio_2, acciones_socio_3;

    // std::cout << "Ingrese la ganancia en el anio: ";
    // std::cin >> ganancia;
    // std::cout << "Acciones del socio 1: ";
    // std::cin >> acciones_socio_1;
    // std::cout << "Acciones del socio 2: ";
    // std::cin >> acciones_socio_2;
    // std::cout << "Acciones del socio 3: ";
    // std::cin >> acciones_socio_3;
    // std::cout << std::endl;

    // pago_por_accion = ganancia / (acciones_socio_1 + acciones_socio_2 + acciones_socio_3);

    // std::cout << "La ganancia del socio 1 es: " << pago_por_accion * acciones_socio_1 << std::endl;
    // std::cout << "La ganancia del socio 2 es: " << pago_por_accion * acciones_socio_2 << std::endl;
    // std::cout << "La ganancia del socio 3 es: " << pago_por_accion * acciones_socio_3 << std::endl;

    /*Ejercicio 5
    Elabore un programa en C++ para una empresa de ventas de piezas de automóviles, que
    determine el precio al que debe vender una pieza considerando un porcentaje de ganancia. Para
    ello se leerán el precio de compra de la pieza y el porcentaje de ganancia que desea obtener la
    empresa en tanto por ciento.*/

    // float price_pieza, price_final, porcentaje_ganancia;
    // std::cout << "Ingrese el precio de la pieza: ";
    // std::cin >> price_pieza;
    // std::cout << "Ingrese el porcentaje que desea ganar: ";
    // std::cin >> porcentaje_ganancia;
    // std::cout << std::endl;
    // price_final = price_pieza + (price_pieza * (porcentaje_ganancia / 100));
    // std::cout << "El precio al que se debe vender la pieza para lograr el porcentaje de ganancia es: " << price_final;

    /*Ejercicio 6
    Una tienda ha puesto en oferta la venta de un producto ofreciendo un determinado porcentaje
    de descuento sobre el importe de la compra. Elabore un programa en C++ que determine el
    importe de la compra, el importe del descuento y el importe a pagar por la compra de cierta
    cantidad de unidades del producto.
    */

    // float discount, item_price;
    // int number_of_items;

    // std::cout << "Ingrese el precio del producto: ";
    // std::cin >> item_price;
    // std::cout << "Ingrese el descuento (%): ";
    // std::cin >> discount;
    // std::cout << "Ingrese la cantidad de productos que comprara: ";
    // std::cin >> number_of_items;

    // std::cout << "El precio total a pagar es: " << (item_price - (item_price * (discount / 100))) * number_of_items;

    /*Ejercicio 7
    El cálculo del pago mensual de un empleado de una empresa se efectúa de la siguiente manera:
    el sueldo básico se calcula en base al número total de horas trabajadas basado en una tarifa
    horaria; al sueldo básico, se le aplica una bonificación del 18% del mismo obteniéndose el
    sueldo bruto; al sueldo bruto, se le aplica un descuento del 12% obteniéndose el sueldo neto.
    Elabore un programa en C++ que calcule e imprima el sueldo básico, el sueldo bruto y el sueldo
    neto de un trabajador.*/

    // int worked_hours;
    // float tarifa_horaria, sueldo_basico, sueldo_bruto, sueldo_neto;

    // std::cout << "Ingrese las horas trabajadas: ";
    // std::cin >> worked_hours;
    // std::cout << "Ingrese la tarifa horaria (pago x  hora): ";
    // std::cin >> tarifa_horaria;
    // std::cout << std::endl;

    // sueldo_basico = worked_hours * tarifa_horaria;
    // sueldo_bruto = sueldo_basico + (sueldo_basico * 0.18);
    // sueldo_neto = sueldo_bruto - (sueldo_bruto * 0.12);

    // std::cout << "El sueldo basico es: " << sueldo_basico << std::endl;
    // std::cout << "El sueldo bruto es: " << sueldo_bruto << std::endl;
    // std::cout << "El sueldo neto es: " << sueldo_neto;

    /*Ejercicio 8
    Elabore un programa en C++ que calcule el sueldo bruto, el descuento por ESSALUD, el
    descuento por AFP y el sueldo neto del empleado de una empresa de acuerdo a los siguientes
    criterios: el sueldo bruto se calcula multiplicando el número de horas trabajadas por una tarifa
    horaria, el descuento por ESSALUD es igual al 9% del sueldo bruto, el descuento por AFP es
    igual al 11.5% del sueldo bruto, el sueldo neto es la diferencia entre el sueldo bruto y el
    descuento total.*/

    // int worked_hours;
    // float tarifa_horaria, sueldo_bruto, sueldo_neto, essalud_dsct, afp_dsct;
    // std::cout << "Ingrese las horas trabajadas: ";
    // std::cin >> worked_hours;
    // std::cout << "Ingrese la tarifa horaria: ";
    // std::cin >> tarifa_horaria;
    // std::cout << std::endl;

    // sueldo_bruto = worked_hours * tarifa_horaria;
    // essalud_dsct = sueldo_bruto * 0.09;
    // afp_dsct = sueldo_bruto * 0.115;
    // sueldo_neto = sueldo_bruto - (essalud_dsct + afp_dsct);

    // std::cout << "El sueldo bruto es: " << sueldo_bruto << std::endl;
    // std::cout << "El descuento por essalud es: " << essalud_dsct << std::endl;
    // std::cout << "El descuento por afp es: " << afp_dsct << std::endl;
    // std::cout << "El sueldo neto es: " << sueldo_neto << std::endl;

    // EJECICIO 9
    // float h, r, area_triangulo, area_circulo, altura;

    // std::cout << "Ingrese H: ";
    // std::cin >> h;
    // std::cout << "Ingrese R: ";
    // std::cin >> r;

    // altura = sqrt(pow(h, 2) + pow(r, 2));
    // area_triangulo = r * altura;
    // area_circulo = (3.14 * pow(r, 2)) / 2;

    // std::cout << "El area de la figura es: " << area_circulo + area_triangulo;

    /*Ejercicio 10
    Se requiere determinar el tiempo que tarda una persona en llegar de una ciudad a otra en
    bicicleta, considerando que lleva una velocidad constante. Elabore un programa en C++ que
    permita resolver el problema.*/

    // float velocidad, distancia;
    // std::cout << "Ingrese la velocidad: ";
    // std::cin >> velocidad;
    // std::cout << "Ingrese la distancia: ";
    // std::cin >> distancia;

    // std::cout << "El tiempo que tarda es: " << distancia / velocidad;

    /*Ejercicio 11
    Elabore un programa en C++ que permita mostrar el estado del alumno, según la nota final del
    curso. Para ello debe tener en cuenta los siguientes criterios:
     Si la nota es menor de 12.50 está desaprobado, por lo que mostrará una D.
     Si la nota es mayor o igual de 12.50 y menor o igual a 20 está aprobado, entonces
    mostrará una A.*/

    return 0;
}