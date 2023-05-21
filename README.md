# C++ project for PROTECO's course: C/C++

## 🛠 GETTERS and SETTERS 🛠
On the `ModeloNintendo.h` file we added the following Getters and Setters:
```cpp
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
```
We declared them to get access to the following private variables:
  - nombreClave
  - salud

## 🛠 METHOD 🛠
We added by declaring two methods on the on the `ModeloNintendo.h` file:
```cpp
void gritoGuerra(string YOLO);
void admirarPeach(string peach);
```
And then, we defined them on the `ModeloNintendo.cpp` file:

```cpp
void ModeloNintendo::gritoGuerra(string YOLO){
   cout << YOLO << " " << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAHHHHH" << "\n";
}

void ModeloNintendo::admirarPeach(string peach){
   cout << peach << " " << peach << " "  << peach << "... YO TE AMOOOOOOOOO" << "\n";
}
```

<p align = "center">
  <img src="https://media1.giphy.com/media/3rgXByB0tbT7oXK7Xq/giphy.gif?cid=ecf05e47axhb2ssav9skkk8854hxu1h9j73ckp5u20iapcmh&ep=v1_gifs_search&rid=giphy.gif&ct=g"   width="70%" >
</p>

## 🛠 MENU 🛠
We added a menu where the user can choose to create a new Nintendo model, see it, delete it, play or exit.
```cpp
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
```


<p align = "center">
  <img src="https://media4.giphy.com/media/THlB4bsoSA0Cc/giphy.gif?cid=ecf05e47styacfaycm8x1kx9udmbj3beql8xgt0ewfzzjw0j&ep=v1_gifs_search&rid=giphy.gif&ct=g"   width="50%" >
</p>
