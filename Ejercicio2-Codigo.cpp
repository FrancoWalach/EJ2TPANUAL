

#include <iostream>
#include <fstream>
#include <string>

int main (){
    void Escribir5ActasDeMesa();
    Escribir5ActasDeMesa();
    
}

void Escribir5ActasDeMesa(){
    void EscribirActaDeMesa(std::string);
    EscribirActaDeMesa("4568");
    EscribirActaDeMesa("4569");
    EscribirActaDeMesa("4579");
    EscribirActaDeMesa("4580");
    EscribirActaDeMesa("4581");
}

std::ofstream out;

void EscribirActaDeMesa(std::string unaMesa){
    std::string GetNombreDeArchivoDeMesa(std::string);
    void EscribirTitulodeActa(std::string);
    void EscrbirSenadores();
    void EscribirSeparador();
    void EscribirDiputados();
    
    out.open (GetNombreDeArchivoDeMesa(unaMesa));
    
    EscribirTituloDeActa(unaMesa);
    EscrbirSenadores();
    EscribirSeparador();
    EscribirDiputados();
    
    out.close
}

std::string GetNombreDeArchivoDeMesa(std::string unaMesa){
    return "Mesa" + unaMesa + ".txt";
}

void EscribirTituloDeActa(std::string unaMesa){
    out << "Acta de la Mesa " + unaMesa;
}

