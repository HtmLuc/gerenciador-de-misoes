#include <iostream>

using std::cout, std::endl, std::cin;

void menu();

int main(void)
{
    menu();
    return 0;
}

void menu()
{
    cout << "Para que possamos prosseguir, escolha uma das opções abaixo:" << endl;
    cout << "1. Cadastrar Astronaura." << endl;
    cout << "2. Cadastrar Voo." << endl;
    cout << "3. Listar todos os Voos." << endl;
    cout << "4. Listar todos os astronautas vivos." << endl;
    cout << "5. Listar todos os astronautas mortos." << endl;
    cout << "6. Adiciconar astronaura em Voo." << endl;
    cout << "7. Remover astronauta de um Voo." << endl;
    cout << "8. Lançar um Voo." << endl;
    cout << "9. Finalizar um voo." << endl;
    cout << "10. Contatar Voo." << endl;
}