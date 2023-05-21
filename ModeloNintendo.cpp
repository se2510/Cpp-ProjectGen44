#include "ModeloNintendo.h"

ModeloNintendo::ModeloNintendo(string nombre, string color, int edad, int salud, bool esHumano) {
	this->nombre = nombre;
   this->color = color;
   this->edad = edad;
   this->salud = salud;
   this->esHumano = esHumano;
}

ModeloNintendo::~ModeloNintendo() {
   cout << "Murió" << "\n";
}

void ModeloNintendo::saludar(string nombre) {
	cout << "Hola " << nombre << "\n";
}

void ModeloNintendo::saltar(char tecla) {
	cout << "yuha";
}

void ModeloNintendo::agacharse(char tecla) {
	cout << "oig";
}

int ModeloNintendo::avanzar(char tecla) {
	cout << "tac tac tac";
   return 0;
}

void ModeloNintendo::danio(string grito) {
	cout << "Mamamia";
}

void ModeloNintendo::habilidadesEspeciales(string combinacionTeclas) {
   cout << "Hola" << combinacionTeclas;
}

void ModeloNintendo::trucos(string combinacionTeclas) {
   cout << "Hola";
}

void ModeloNintendo::revelarSecretos(string combinacionTeclas) {
   cout << "Hola";
}

// Definiendo los nuevos métodos
void ModeloNintendo::gritoGuerra(string YOLO){
   cout << YOLO << " " << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAHHHHH" << "\n";
}

void ModeloNintendo::admirarPeach(string peach){
   cout << peach << " " << peach << " "  << peach << "... YO TE AMOOOOOOOOO" << "\n";
}

int main() {
   ModeloNintendo captainToad = ModeloNintendo("Capitan Toad", "Manchadito lunares rojos", 26, 200, false);
   captainToad.saludar("mi estimade");
   captainToad.admirarPeach("Peaches");
   captainToad.gritoGuerra("POR EL REINO CHAMPINION");
   return 0;
}