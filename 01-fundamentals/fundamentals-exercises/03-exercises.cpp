#include <ctime>
#include <iostream>

int main() {
    // 1.
    // int sum = 0;
    // for (int i = 1; i < 11; i++) {
    //     sum += i;
    // }
    // std::cout << "La suma de los 10 primeros numeros positivos es: " << sum;

    // 2.
    // int sum = 0;
    // int n;
    // std::cout << "ingrese n: ";
    // std::cin >> n;
    // for (int i = 0; i < n; i++) {
    //     if (i % 2 != 0) {
    //         sum += i;
    //     }
    // }
    // std::cout << "La suma es: " << sum;

    // 3.
    // int sum = 0;
    // int n;
    // std::cout << "ingrese n: ";
    // std::cin >> n;
    // std::cout << "Los multiplos son ";
    // for (int i = 1; i < n; i++) {
    //     if (i % 3 == 0) {
    //         std::cout << i << " ";
    //     }
    // }

    // 4.
    // int n;
    // std::cout << "ingrese un numero (1 - 9): ";
    // std::cin >> n;
    // for (int i = 0; i < 13; i++) {
    //     std::cout << n << " x " << i << " = " << n * i << std::endl;
    // }

    // 5.
    // int n = 4;
    // int m = 5;
    // int sum_par = 0, sum_impar = 0;
    // int cont = 0;
    // int i = 2;
    // while (cont < n) {
    //     if (i % 2 == 0) {
    //         sum_par += i;
    //         cont++;
    //     }
    //     i++;
    // }
    // cont = 0;
    // i = 1;
    // while (cont <= n) {
    //     if (i % 2 != 0) {
    //         sum_impar += i;
    //         cont++;
    //     }
    //     i++;
    // }
    // std::cout << "Sumatoria de pares: " << sum_par << std::endl;
    // std::cout << "Sumatoria de impares: " << sum_impar;

    // 6.
    // int n;
    // int sum = 0;
    // std::cout << "n: ";
    // std::cin >> n;
    // for (int i = 0; i < n * 2; i++) {
    //     if (i % 2 != 0) {
    //         sum += i;
    //     }
    // }
    // std::cout << "resultado: " << sum;

    // 7.
    // int n_alumnos;
    // float ef, ep, tf, prom;
    // std::cout << "numero de alumnos: ";
    // std::cin >> n_alumnos;
    // prom = 0;
    // for (int i = 0; i < n_alumnos; i++) {
    //     std::cout << "EF del alumno " << i + 1 << ": ";
    //     std::cin >> ef;
    //     std::cout << "EP del alumno " << i + 1 << ": ";
    //     std::cin >> ep;
    //     std::cout << "TF del alumno " << i + 1 << ": ";
    //     std::cin >> tf;
    //     prom = (0.55 * ef) + (0.30 * ep) + (0.15 * tf);
    //     std::cout << "Su promedio final es: " << prom << "/n";
    // }

    // 8.
    // int n;
    // float peso;
    // int menos_40, entre_40_50, mas_50_menos_60, mas_igual_60;
    // menos_40 = entre_40_50 = mas_50_menos_60 = mas_igual_60 = 0;

    // do {
    //     std::cout << "n: ";
    //     std::cin >> n;
    // } while (n < 0 || n > 50);

    // for (int i = 0; i < n; i++) {
    //     std::cout << "peso " << i + 1 << ": ";
    //     std::cin >> peso;
    //     if (peso < 40)
    //         menos_40++;
    //     else if (peso < 51)
    //         entre_40_50++;
    //     else if (peso < 60)
    //         mas_50_menos_60++;
    //     else
    //         mas_igual_60++;
    // }
    // system("clear");
    // std::cout << "Menos de 40kg: " << menos_40 << "\n";
    // std::cout << "Entre 40 y 50kg: " << entre_40_50 << "\n";
    // std::cout << "Mas de 50 y menos de 60kg: " << mas_50_menos_60 << "\n";
    // std::cout << "60kg o mas: " << mas_igual_60;

    // bool condition = true;
    // int numero, mayor, menor, positivos, negativos, leidos;
    // float prom;
    // mayor = menor = prom = leidos = positivos = negativos = 0;
    // while (condition) {
    //     std::cout << "numero: ";
    //     std::cin >> numero;
    //     if (numero == 0) {
    //         condition = false;
    //         continue;
    //     }
    //     leidos++;
    //     prom += numero;
    //     if (numero > 0)
    //         positivos++;
    //     else if (numero < 0)
    //         negativos++;
    //     if (numero > mayor) {
    //         mayor = numero;
    //     } else if (numero < menor) {
    //         menor = numero;
    //     }
    // }

    // system("clear");

    // std::cout << "numeros leidos: " << leidos << '\n';
    // std::cout << "numero mayor: " << mayor << '\n';
    // std::cout << "numero menor: " << menor << '\n';
    // std::cout << "numeros positivos: " << positivos << '\n';
    // std::cout << "numeros negativos: " << negativos << '\n';
    // std::cout << "promedio: " << prom / leidos;

    // 10. jueguito
    // srand(time(NULL));
    // int rand_number = rand() % 100 + 1;
    // rand_number = 25;

    // bool condition = true;
    // int numero;

    // for (int i = 1; condition; i++) {
    //     std::cout << "Intento " << i << ": ";
    //     std::cin >> numero;
    //     if (numero > rand_number) {
    //         std::cout << "El numero es menor\n";
    //     } else if (numero < rand_number) {
    //         std::cout << "El numero es mayor\n";
    //     } else {
    //         condition = false;
    //         if (i < 4)
    //             std::cout << "Fue pura suerte!!";
    //         else if (i < 7)
    //             std::cout << "Eres bueno!!";
    //         else if (i == 7)
    //             std::cout << "No esta mal";
    //         else if (i == 8)
    //             std::cout << "Se puede mejorar";
    //         else
    //             std::cout << "Que mal estas!!!";
    //     }
    // }

    // 11. sucesion
    // int n, variante;
    // float sum = 1;
    // variante = 2;
    // std::cout << "Ingrese n: ";
    // std::cin >> n;

    // for (int i = 1; i < n; i++) {
    //     sum += 1.0 / variante;
    //     variante *= 2;
    // }
    // std::cout << "suma: " << sum;

    // 12.
    // int n, variante, signo;
    // float sum = 0;
    // variante = 1;
    // signo = 1;
    // std::cout << "n: ";
    // std::cin >> n;
    // for (int i = 0; i < n; i++) {
    //     sum += signo * (1.0 / variante);
    //     variante *= 2;
    //     signo *= -1.0;
    // }
    // std::cout << "suma: " << sum;

    // 13.
    // float n, variante1, variante2, sum;
    // sum = 1.0;
    // variante1 = 2.0;
    // variante2 = 1.0;

    // std::cout << "ingrese n: ";
    // std::cin >> n;

    // for (int i = 0; i < n - 1; i++) {
    //     sum += variante1 / variante2;
    //     variante1 *= 2.0;
    //     variante2 += 2.0;
    // }
    // std::cout << "suma: " << sum;

    // 14.
    // int numero;
    // int reversed_number;
    // reversed_number = 0;
    // std::cout << "ingrese un numero: ";
    // std::cin >> numero;
    // while (numero > 0) {
    //     reversed_number *= 10;
    //     reversed_number += numero % 10;
    //     numero /= 10;
    // }
    // std::cout << reversed_number;

    // int n;
    // float sum = 0;
    // std::cout << "n: ";
    // std::cin >> n;
    // for (int i = 1; i < n; i++) {
    //     if (n % i == 0) {
    //         sum += i;
    //         std::cout << sum;
    //     }
    // }
    // if (sum == n)
    //     std::cout << "Es perfecto";
    // else
    //     std::cout << "No es perfecto";

    // 16. fibonacci
    // int n, prev, prev1, fibo;
    // prev = 0;
    // prev1 = 1;
    // std::cout << "n: ";
    // std::cin >> n;
    // for (int i = 0; i < n; i++) {
    //     fibo = prev + prev1;
    //     prev1 = prev;
    //     prev = fibo;
    //     std::cout << fibo << '\n';
    // }

    // 17. fibonacci sum
    // int prev, prev1, fibo, n, sum;
    // prev = 0;
    // prev1 = 1;
    // sum = 0;
    // std::cout << "n: ";
    // std::cin >> n;
    // for (int i = 0; i < n; i++) {
    //     fibo = prev + prev1;
    //     prev1 = prev;
    //     prev = fibo;
    //     sum += fibo;
    // }
    // std::cout << "La suma es: " << sum;
}