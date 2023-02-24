// MyFirstPureC++.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <string>
using namespace std;

void AddCount() 
{

    int a = 2, b = 5, c = 0;

    int d = (a % b);

    std::cout << d;

    for (a; a <= b; a++)
    {
        std::cout << a;
        c += a;
        if (a >= b)
        {
            std::cout << "The Diference between a and b is \n\n";
            std::cout << c;
            std::cout << "\n\n";
        }

    }

}

void Triangle() 
{
    double tHeight = 0; double tWidth = 0; double hipotenusa = 0;
    double triangle = 0;
    double squareF = 0.5;

    std::cout << "Pleass input the Triangule Height \n";
    std::cin >> tHeight;

    std::cout << "Pleass input the Triangule Width \n";
    std::cin >> tWidth;

    triangle = tHeight * tWidth / 2;

    std::cout << "The Area of the Triangle is " << triangle << "\n";

    triangle = ((tHeight * tHeight) + (tWidth * tWidth));
    triangle = sqrt(triangle) + tHeight + tWidth;

    std::cout << " and its perimeter is " << triangle << "\n";

    triangle = tHeight * tWidth;

    std::cout << "\nThe Area of the Rectangle is " << triangle << "\n";

    triangle = (tHeight * 2) + (tWidth * 2);

    std::cout << " and its perimeter is " << triangle << "\n";
}

void VarLearn() 
{
    std::cout << "Hello World!\n";

    char charExample = 'a';

    string stringExample = "Example";

    int intExample = 1;

    float fExample = 1.5f;

    double dExample = 2.323123213;

    bool bExample = false;

    std::cout << charExample;
}

void FindBiggest() 
{
    int a, b, c;
    std::cout << "Inset 3 values and i'll give you the biggest one\n";

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    if (a > b && a > c)
    {
        std::cout << "The Biggest value is " << a << "\n";
    }
    else if ( b > a && b > c)
    {
        std::cout << "The Biggest value is " << b << "\n";
    }
    else
    {
        std::cout << "The Biggest value is " << c << "\n";
    }
}

void BiggestAlways() 
{
    int a, b, c = 0;
    std::cout << "Inset 2 values and i'll give you the biggest one\n";

    std::cin >> a;
    std::cin >> b;

    if (a > b && a > c)
    {
        std::cout << "The Biggest value is " << a << "\n";
        c = a;
    }
    else if (b > a && b > c)
    {
        std::cout << "The Biggest value is " << b << "\n";
        c = b;
    }
    else if (c != 0)
    {
        std::cout << "The Biggest value is " << c << "\n";
    }
}

void ConvertToTime() 
{
    int seconds, minutes, hours;
    int minutes2 = 0, hours2 = 0;

    std::cin >> seconds;
    
    minutes = seconds / 60;
    
    hours = minutes / 60;

    std::cout << seconds << " seconds is " << hours << " hours and " << minutes << " minutes\n";
}

void ConvertRealTime() 
{
    int seconds = 0, minutes = 0, hours = 0;

    std::cin >> seconds;
    std::cout << seconds << " seconds is";
    for (int i = 60; i <= seconds; i = i)
    {
        minutes++;
        seconds -= 60;
    }
    for (int i = 60; i <= minutes; i = i)
    {
        hours++;
        minutes -= 60;
    }

    std::cout << hours << " hours and " << minutes << " minutes\n";
}

void Pyramid() 
{
    int input;

    std::cout << "insert Piramid Height";
    std::cin >> input;

    for (int i = 0; i < input; i++)
    {
        std::cout << "*";
    }
    for (int i = input ; i > 0; i--)
    {

    }
}

int main()
{
    //ConvertToTime();

    ConvertRealTime();

    //VarLearn();

    //AddCount();

    //BiggestAlways(); Faulty

    //FindBiggest();
    
    //Triangle();
}


// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
