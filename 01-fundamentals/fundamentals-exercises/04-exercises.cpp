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

    return 0;
}