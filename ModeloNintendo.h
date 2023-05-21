#include <iostream>
#include <string>

using namespace std;

class ModeloNintendo {
   public:
      string nombre;
      string color;
      int edad;
      bool esHumano;
      char letraInicial;      

     ModeloNintendo();~ModeloNintendo();
     ModeloNintendo(string nombre, string color, int edad, int salud, bool esHumano = false);
      
      void saludar(string nombre);
      void saltar(char tecla);
      void agacharse(char tecla = 'C');
      int avanzar(char tecla);
      void danio(string grito);
      // Declarando los nuevos métodos
      void gritoGuerra(string YOLO);
      void admirarPeach(string peach);
      
      // Getters y setters para los miembros privados
      string getNombreClave() const {
      return nombreClave;
      }

      void setNombreClave(string nuevoNombreClave) {
      nombreClave = nuevoNombreClave;
      }

      int getSalud() const {
      return salud;
      }

      void setSalud(int nuevaSalud) {
      salud = nuevaSalud;
      }

      protected:
      string nombreClave;
      int salud;
      char combinacionHabilidades[10];
      void habilidadesEspeciales(string combinacionTeclas);
   
      private:
      string nombreSecreto;
      char combinacionTrucos[10];
      char combinacionSecretos[10];
      void trucos(string combinacionTeclas);
      void revelarSecretos(string combinacionTeclas);

      
};