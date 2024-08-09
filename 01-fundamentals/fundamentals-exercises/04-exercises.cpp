#include <math.h>

#include <ctime>
#include <iostream>

int main() {
    // 1.
    // int n, voto, cont_favor, cont_contra, cont_abs;
    // cont_abs = cont_contra = cont_favor = 0;
    // std::cout << "n: ";
    // std::cin >> n;
    // for (int i = 0; i < n; i++) {
    //     std::cout << "votad -> 1: a favor,  2: en contra,  3: abstencion: ";
    //     std::cin >> voto;
    //     switch (voto) {
    //         case 1:
    //             cont_favor++;
    //             break;
    //         case 2:
    //             cont_contra++;
    //             break;
    //         case 3:
    //             cont_abs++;
    //             break;
    //         default:
    //             break;
    //     }
    // }
    // std::cout << "Numero de votantes: " << n << '\n';
    // std::cout << "votantes a favor: " << cont_favor << '\n';
    // std::cout << "votantes en contra: " << cont_contra << '\n';
    // std::cout << "abstenciones: " << cont_abs;

    // 2.
    // float inversion, interes;
    // inversion = 10.0;
    // interes = 0.005;

    // for (int i = 0; i < 10; i++) {
    //     for (int j = 0; j < 12; j++) {
    //         inversion += inversion * interes;
    //     }
    // }

    // std::cout << "dinero final: " << inversion;

    // 3.
    // int num_basculas;
    // float peso_ant, peso_act, sum;
    // num_basculas = 3;
    // std::cout << "ingrese el peso anterior: ";
    // std::cin >> peso_ant;
    // for (int i = 0; i < num_basculas; i++) {
    //     std::cout << "Bascula ( " << i + 1 << " ): ";
    //     std::cin >> peso_act;
    //     sum += peso_act;
    // }
    // if ((sum / num_basculas) < peso_ant) {
    //     std::cout << "BAJO";
    // } else {
    //     std::cout << "SUBIO";
    // }

    // 4.
    // int n;
    // float monto, dinero_recaudado;
    // int rand_indice;
    // std::string bolita_selected;
    // dinero_recaudado = 0.0;

    // srand(time(NULL));
    // std::string bolitas[] = {"rojo", "amarillo", "blanco"};

    // std::cout << "numero de clientes: ";
    // std::cin >> n;

    // for (int i = 0; i < n; i++) {
    //     rand_indice = rand() % 3;
    //     bolita_selected = bolitas[rand_indice];
    //     std::cout << "ingrese el monto de la compra: ";
    //     std::cin >> monto;
    //     std::cout << "la bolita es de color: " << bolita_selected << '\n';
    //     if (bolita_selected == "rojo") {
    //         monto -= monto * 0.4;
    //     } else if (bolita_selected == "amarillo") {
    //         monto -= monto * 0.25;
    //     }
    //     dinero_recaudado += monto;
    //     std::cout << "el total a pagar es:" << monto << '\n';
    // }

    // std::cout << "el total recaudado es: " << dinero_recaudado;

    // 5.
    // int n, edad, jovenes_16_21, hombres_mayor_30;
    // float cont_hombres, cont_mujeres;
    // char sexo;
    // char estado_civil;

    // jovenes_16_21 = 0;
    // hombres_mayor_30 = 0;
    // cont_hombres = cont_mujeres = 0.0;

    // std::cout << "numero de personas: ";
    // std::cin >> n;

    // for (int i = 0; i < n; i++) {
    //     std::cout << "Persona " << i + 1 << '\n';
    //     std::cout << "sexo (h: hombre, m: mujer): ";
    //     std::cin >> sexo;
    //     std::cout << "edad: ";
    //     std::cin >> edad;
    //     std::cout << "estado civil (a: soltero,  b: casado,  c: viudo,  d: divorciado): ";
    //     std::cin >> estado_civil;

    //     if (sexo == 'h') {
    //         cont_hombres++;
    //         if (edad > 30 && (estado_civil == 'c' || estado_civil == 'd')) {
    //             hombres_mayor_30++;
    //         }
    //     } else {
    //         cont_mujeres++;
    //         if (edad > 15 && edad < 22) jovenes_16_21++;
    //     }
    // }

    // std::cout << "Numero de jovenes viudas entre 16 y 21: " << jovenes_16_21 << '\n';
    // std::cout << "Porcentaje de hombres: " << (cont_hombres / n) * 10 << '\n';
    // std::cout << "Porcentaje de mujeres: " << (cont_mujeres / n) * 10 << '\n';
    // std::cout << "Numero de hombres mayores a 30 solteros y divorciados: " << hombres_mayor_30;

    // 6.
    // int personas = 4;
    // float peso;
    // int edad, nin_cont, jov_cont, adu_cont, vie_cont;
    // float peso_nin, peso_jov, peso_adu, peso_vie;
    // nin_cont = jov_cont = adu_cont = vie_cont = 0;
    // peso_adu = peso_jov = peso_nin = peso_vie = 0;
    // for (int i = 0; i < personas; i++) {
    //     std::cout << "edad: ";
    //     std::cin >> edad;
    //     std::cout << "peso: ";
    //     std::cin >> peso;
    //     if (edad < 13) {
    //         nin_cont++;
    //         peso_nin += peso;
    //     } else if (edad < 30) {
    //         jov_cont++;
    //         peso_jov += peso;
    //     } else if (edad < 60) {
    //         adu_cont++;
    //         peso_adu += peso;
    //     } else {
    //         vie_cont++;
    //         peso_vie += peso;
    //     }
    // }

    // std::cout << "prom peso ninos: " << peso_nin / nin_cont << '\n';
    // std::cout << "prom peso jovenes: " << peso_jov / jov_cont << '\n';
    // std::cout << "prom peso adultos: " << peso_adu / adu_cont << '\n';
    // std::cout << "prom peso viejos: " << peso_vie / vie_cont << '\n';

    // 8.
    // int n, digit, cont_upc, cont_pucp, cont_unmsm, cont_unfv, cont_ulima, cont_uch;
    // cont_pucp = cont_uch = cont_ulima = cont_unfv = cont_unmsm = cont_upc = 0;

    // std::cout << "ingrese el numero de universitarios: ";
    // std::cin >> n;

    // for (int i = 0; i < n; i++) {
    //     std::cout << "ingrese el primer digito de la tarjeta: ";
    //     std::cin >> digit;
    //     if (digit == 1 || digit == 2)
    //         cont_upc++;
    //     else if (digit == 3 || digit == 4)
    //         cont_pucp++;
    //     else if (digit == 5)
    //         cont_unmsm++;
    //     else if (digit == 6)
    //         cont_unfv++;
    //     else if (digit == 7)
    //         cont_ulima++;
    //     else if (digit == 8)
    //         cont_uch++;
    // }

    // std::cout << "upc: " << cont_upc << '\n';
    // std::cout << "pucp: " << cont_pucp << '\n';
    // std::cout << "unms: " << cont_unmsm << '\n';
    // std::cout << "unfv: " << cont_unfv << '\n';
    // std::cout << "ulima: " << cont_ulima << '\n';
    // std::cout << "uch: " << cont_uch << '\n';

    //. 9
    // int edad;
    // float dsct, lost_money, asiento_price;
    // lost_money = 0;
    // edad = 1;
    // while (edad > 0) {
    //     std::cout << "precio del asiento: ";
    //     std::cin >> asiento_price;
    //     std::cout << "ingrese edad: ";
    //     std::cin >> edad;
    //     if (edad < 5) {
    //         std::cout << "no puede ingresar" << '\n';
    //         exit;
    //     }
    //     if (edad < 15)
    //         dsct = 0.35;
    //     else if (edad < 20)
    //         dsct = 0.25;
    //     else if (edad < 46)
    //         dsct = 0.1;
    //     else if (edad < 66)
    //         dsct = 0.25;
    //     else
    //         dsct = 0.35;

    //     lost_money += asiento_price * dsct;
    // }

    // std::cout << "el dinero perdido es: " << lost_money;

    // 11.
    // int expo, base;
    // std::cout << "base: ";
    // std::cin >> base;
    // std::cout << "exponente: ";
    // std::cin >> expo;
    // for (int i = 1; i < expo; i++) {
    //     base *= base;
    // }
    // std::cout << base;

    // 12. factorial
    // int n;
    // int resu = 1;
    // std::cout << "n: ";
    // std::cin >> n;

    // for (int i = 1; i <= n; i++) {
    //     resu *= i;
    // }
    // std::cout << "resultado: " << resu;

    // 13.
    // int n, sum, fac;
    // sum = 0;
    // fac = 1;
    // std::cout << "n: ";
    // std::cin >> n;
    // for (int i = 0; i <= n; i++) {
    //     for (int j = 1; j <= i; j++) {
    //         fac *= j;
    //     }
    //     sum += fac;
    //     fac = 1;
    // }

    // std::cout << "la suma es: " << sum;

    // 14.
    // int n;
    // float sum, fac;
    // sum = 0.0;
    // fac = 1.0;
    // std::cout << "n: ";
    // std::cin >> n;
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= i; j++) {
    //         fac *= j;
    //     }
    //     sum += i / fac;
    //     fac = 1;
    // }
    // std::cout << "la sumatoria es: " << sum;

    //  15.
    // int n, signo;
    // float sum, fac;
    // sum = 0;
    // fac = signo = 1;
    // std::cout << "n: ";
    // std::cin >> n;
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= i; j++) {
    //         fac *= j;
    //     }
    //     sum += signo * (i / fac);
    //     fac = 1;
    //     signo *= -1;
    // }
    // std::cout << "sumatoria: " << sum;

    // 16.
    // int n;
    // float fac, sum;
    // fac = 1;
    // sum = 0;
    // std::cout << "n: ";
    // std::cin >> n;
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= i; j++) {
    //         fac *= j;
    //     }
    //     sum += pow(i, i + 1) / fac;
    //     fac = 1;
    // }
    // std::cout << "sumatoria: " << sum;

    // 17.
    // int n, m, x, signo;
    // signo = 1;
    // float sum = 0;
    // std::cout << "m: ";
    // std::cin >> m;
    // std::cout << "x: ";
    // std::cin >> x;
    // std::cout << "veces: ";
    // std::cin >> n;
    // for (int i = 1; i <= n; i++) {
    //     sum += signo * (i / (pow(x, m - (i - 1))));
    //     signo *= -1;
    // }
    // std::cout << "sumatoria: " << sum;

        return 0;
}