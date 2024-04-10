
#include <iostream> //basic I/O
#include <fstream> //file lib
using namespace std;

int main() {
    ofstream file; //clase para trabajar con files
    file.open ("output.txt"); //nuevo archivo output.txt
    file << "hola mundo!"; //ingresar hola mundo
    file.close();
    return 0;
}