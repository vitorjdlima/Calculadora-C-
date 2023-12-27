#include <iostream>

int main() {
    int operacao;
    char operador;
    int resultado;

    std::cout << "Digite o primeiro valor: \n";
    int x;
    std::cin >> x;

    std::cout << "Digite o segundo valor: \n";
    int y;
    std::cin >> y;

    std::cout << "---------------------------------------\n";
    std::cout << "Escolha uma operacao para ser realizada\n";
    std::cout << "---------------------------------------\n";
    std::cout << "1 - Soma \n";
    std::cout << "2 - Subtracao\n";
    std::cout << "3 - Multiplicacao\n";
    std::cout << "4 - Divisao\n";
    std::cout << "---------------------------------------\n";

    std::cin >> operacao;

    switch (operacao) {
        case 1:
            resultado = x + y;
            operador = '+';
            break;
        case 2:
            resultado = x - y;
            operador = '-';
            break;
        case 3:
            resultado = x * y;
            operador = '*';
            break;
        case 4:
            resultado = x / y;
            operador = '/';
            break;
        default:
            std::cout << "Opcao nao encontrada.\n";
            return 1;
    }

    std::cout << "Resultado da Operacao: \n " << x << " " << operador << " "<< y << " " << "=" << " " << resultado << std::endl;
    
    return 0; 
}