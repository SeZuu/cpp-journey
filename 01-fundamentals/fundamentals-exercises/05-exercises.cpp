#include <math.h>

#include <iostream>

float fact(int n) {
    float resu = 1;
    for (int i = 1; i <= n; i++) {
        resu *= i;
    }
    return resu;
}

int main() {
    // 1.
    // float k, a, sum;
    // sum = 1;
    // do {
    //     std::cout << "k: ";
    //     std::cin >> k;
    // } while (k > 20);
    // std::cout << "a: ";
    // std::cin >> a;
    // for (int i = 1; i <= k; i++) {
    //     sum += pow(a, i) / fact(i);
    // }
    // std::cout << "resu: " << sum;

    // 2.
    // int code, tipo_pizza, pizza_gratis, cont_grande, cont_familiar, cont_superfamiliar, cont_pizzas_pagadas, cont_mostrador, cont_delivery;
    // char tipo_pedido;
    // bool condition = true;
    // float tiempo_entrega, costo_pizza, dinero_recaudado, prom_tiempo_delivery, prom_tiempo_mostrador;
    // dinero_recaudado = cont_pizzas_pagadas = 0;
    // pizza_gratis = 0;
    // prom_tiempo_delivery = prom_tiempo_mostrador = 0;
    // cont_mostrador = cont_delivery = 0;
    // cont_grande = cont_familiar = cont_superfamiliar = 0;
    // while (condition) {
    //     do {
    //         std::cout << "Ingrese el codigo: ";
    //         std::cin >> code;
    //         if (code == 0) {
    //             condition = false;
    //             code = 1111;
    //         }
    //     } while (code < 1000 || code > 9999);
    //     if (condition == false) {
    //         continue;
    //     }
    //     do {
    //         std::cout << "Tipo de pizza (1:grande, 2:familiar, 3:superfamiliar): ";
    //         std::cin >> tipo_pizza;
    //     } while (tipo_pizza < 1 || tipo_pizza > 3);
    //     do {
    //         std::cout << "Tipo de pedido (D: delivery, M: mostrado): ";
    //         std::cin >> tipo_pedido;
    //     } while (tipo_pedido != 'D' && tipo_pedido != 'M');
    //     do {
    //         std::cout << "Tiempo de entrega: ";
    //         std::cin >> tiempo_entrega;
    //     } while (tiempo_entrega < 0);
    //     switch (tipo_pizza) {
    //         case 1:
    //             costo_pizza = 50;
    //             cont_grande++;
    //             break;
    //         case 2:
    //             costo_pizza = 60;
    //             cont_familiar++;
    //             break;
    //         case 3:
    //             costo_pizza = 68;
    //             cont_superfamiliar++;
    //             break;
    //         default:
    //             break;
    //     }
    //     if (tiempo_entrega > 20 && tipo_pedido == 'M') {
    //         costo_pizza = 0;
    //         cont_delivery++;
    //         prom_tiempo_delivery += tiempo_entrega;
    //     } else if (tiempo_entrega > 30 && tipo_pedido == 'D') {
    //         costo_pizza = 0;
    //         cont_mostrador++;
    //         prom_tiempo_mostrador += tiempo_entrega;
    //     }
    //     std::cout << "Importe a pagar: ";
    //     if (costo_pizza == 0) {
    //         std::cout << "GRATIS" << '\n';
    //         pizza_gratis++;
    //     } else {
    //         std::cout << costo_pizza << '\n';
    //         cont_pizzas_pagadas++;
    //     }
    //     dinero_recaudado += costo_pizza;
    // }
    // std::cout << std::endl
    //           << std::endl;
    // std::cout << "Importe total el ultimo mes: " << dinero_recaudado << '\n';
    // std::cout << "Cantidad de pedidos gratis: " << pizza_gratis << '\n';
    // std::cout << "La pizza con mayor demanda: ";
    // if (cont_grande > cont_familiar && cont_grande > cont_superfamiliar)
    //     std::cout << "grande";
    // else if (cont_familiar > cont_grande && cont_familiar > cont_superfamiliar)
    //     std::cout << "familiar";
    // else
    //     std::cout << "superfamiliar";
    // std::cout << std::endl;
    // std::cout << "Tiempo de entrega promedio por cada tipo: " << '\n';
    // std::cout << "Delivery: " << prom_tiempo_delivery / cont_delivery << '\n';
    // std::cout << "Mostrador: " << prom_tiempo_mostrador / cont_mostrador << '\n';

    // 3.
    return 0;
}