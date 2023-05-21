#include "ModeloNintendo.h"
#include <iostream>
#include <cctype> // Para utilizar las funciones de conversión de mayúsculas/minúsculas

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

void ModeloNintendo::saltar() { // s
	cout << "yuha";
}

void ModeloNintendo::agacharse() { // x
	cout << "oig";
}

int ModeloNintendo::avanzar() { // w
	cout << "tac tac tac";
   return 0;
}

void ModeloNintendo::danio() {
	cout << "Auch, eso dolió!";
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

void menuJuego(){
   cout << endl;
   cout << "--------------------------------------------------------------" << endl;
   cout << "|                 HOLA, USUARIO, HAS ELEGIDO JUGAR           |" << endl;
   cout << "|                                                            |" << endl;
   cout << "|        POR FAVOR, ELIGE UNA DE LAS SIGUIENTES OPCIONES     |" << endl;
   cout << "--------------------------------------------------------------" << endl;
   cout << "--------------------------------------------------------------" << endl;
   cout << "|        h) Saludar C:                                        |" << endl;
   cout << "|        s) Saltar                                            |" << endl;
   cout << "|        x) Agacharse                                         |" << endl;
   cout << "|        w) Avanzar                                           |" << endl;
   cout << "|        d) Daño                                              |" << endl;
   cout << "|        a) Grito de guerra                                   |" << endl;
   cout << "|        m) Admirar a peach :3                                |" << endl;
   cout << "|        e) Salir                                             |" << endl;
   cout << "--------------------------------------------------------------" << endl;
   cout << "--------------------------------------------------------------" << endl;
   cout << endl;

}

int main() {
   int opcion;
   string nombre;
   string color;
   int edad, vida, raza;
   bool esHumano;
   // Creando el objeto con el constructor por defecto.
   ModeloNintendo* modelo = nullptr;
   while(true){
      cout << endl;
      cout << "--------------------------------------------------------------" << endl;
      cout << "--------------------------------------------------------------" << endl;
      cout << "|    Bienvenide al creador de modelos de Nintendo.           |" << endl;
      cout << "|    Por favor, antes de jugar cree un modelo Nintendo.      |" << endl;
      cout << "|    Seleccione una de las siguientes opciones:              |" << endl;
      cout << "--------------------------------------------------------------" << endl;
      cout << "--------------------------------------------------------------" << endl;
      cout << "|    1) Crear un modelo Nintendo                             |" << endl;
      cout << "|    2) Ver el modelo Nintendo                               |" << endl;
      cout << "|    3) Borrar el modelo Nintendo                            |" << endl;
      cout << "|    4) que?                                                 |" << endl;
      cout << "|    5) Jugar!                                               |" << endl;
      cout << "|    6) Salir                                                |" << endl;
      cout << "--------------------------------------------------------------" << endl;
      cout << "--------------------------------------------------------------" << endl;
      cin >> opcion;

      switch (opcion) {
         case 1:
               std::cout << "\033[2J\033[1;1H"; // Limpia pantalla
               cout << "Ha seleccionado la opción de crear un modelo Nintendo." << endl;
               cout << "Ingrese el nombre: " ;
               cin >> nombre;
               cout << "Ingrese el color: ";
               cin >> color;
               cout << "Ingrese la edad: ";
               cin >> edad;
               cout << "Ingrese la vida: ";
               cin >> vida;
               cout << "Ingrese (1) si es humano y (0) si no lo es: ";
               cin >> raza;
               if(raza == 1){
                  esHumano = true;
               }else{
                  esHumano = false;
               }
               // Ahora asignando en el objeto con el otro constructor
               modelo = new ModeloNintendo(nombre, color, edad, vida, esHumano);
               cout << "El modelo ha sido creado con éxito! :D" << endl;
               break;
         case 2:
               std::cout << "\033[2J\033[1;1H"; // Limpia pantalla
               cout << "Ha seleccionado la opción de visualizar el modelo Nintendo." << endl;
               cout << "Nombre: " << modelo->nombre << endl;
               cout << "Color: " << modelo->color << endl;
               cout << "Edad: " << modelo->edad << endl;
               cout << "Vida: " << modelo->getSalud() << endl;
               if ( modelo->esHumano == true){
                  cout << "Es humano! C:" << endl;
               }else if(modelo->esHumano == false){
                  cout << "No es humano! :o " << endl;
               }else{
                  cout << "Quien sabe ke sea XD" << endl;
               }
               break;
         case 3:
               std::cout << "\033[2J\033[1;1H"; // Limpia pantalla
               cout << "Ha seleccionado la opción de borrar el modelo Nintendo." << endl;
               delete modelo;
               cout << "pim... pum... pam..." << endl;
               cout << "Se ha eliminado el modelo con éxito :)" << endl;
               break;
         case 4:
               std::cout << "\033[2J\033[1;1H"; // Limpia pantalla
               cout << "--------------Secret zone!----------\n";
               cout << "____________________________________\n";
               cout << "____________________________________\n";
               cout << "______________████████████__________\n";
               cout << "__________██████▒▒____▒▒██████______\n";
               cout << "________████▒▒▒▒▒▒____▒▒▒▒▒▒████____\n";
               cout << "______▓▓██__▒▒▒▒________▒▒▒▒__████__\n";
               cout << "______██▒▒____________________▒▒██__\n";
               cout << "____████▒▒▒▒____▒▒▒▒▒▒▒▒____▒▒▒▒████\n";
               cout << "____██▒▒▒▒▒▒__▒▒▒▒▒▒▒▒▒▒▒▒__▒▒▒▒▒▒██\n";
               cout << "____██▒▒▒▒▒▒__▒▒▒▒▒▒▒▒▒▒▒▒__▒▒▒▒▒▒██\n";
               cout << "____██▒▒▒▒____▒▒▒▒▒▒▒▒▒▒▒▒____▒▒▒▒▓▓\n";
               cout << "____██__________▒▒▒▒▒▒▒▒__________██\n";
               cout << "____██____████▓▓██████████████____██\n";
               cout << "____████████░░░░██__░░██░░░░██████▓▓\n";
               cout << "______████░░░░░░██░░░░██░░__░░████__\n";
               cout << "________██░░░░░░░░░░░░░░░░░░░░██____\n";
               cout << "________████░░░░░░░░░░░░░░░████_____\n";
               cout << "__________████████████████████______\n";
               break;
         case 5:
               char opcion2;
               while(true){
                  cout << endl;
                  menuJuego();
                  cin >> opcion2;
                  std::cout << "\033[2J\033[1;1H"; // Limpia pantalla
                  opcion2 = std::tolower(opcion2); // Convertir la letra a minúscula
                  switch (opcion2)
                  {
                  case 'h':
                     modelo->saludar(modelo->nombre);
                     break;
                  case 's':
                     modelo->saltar();
                     break;
                  case 'x':
                     modelo->agacharse();
                     break;
                  case 'w':
                     modelo->avanzar();
                     break;
                  case 'd':
                     modelo->danio();
                     break;
                  case 'a':
                     modelo->gritoGuerra("POR EL REINO CHAMPINIOOON");
                     break;
                  case 'm':
                     modelo->admirarPeach("Peaches");
                     break;
                  case 'e':
                     return 0;
                     break;
                  default:
                     break;
                  }
               }
         case 6:
               return 0;
         default:
               cout << "Opción inválida, por favor ingrese otra opción." << endl;
               break;
      }
   }

}