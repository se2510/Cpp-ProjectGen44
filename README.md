# C++ project for PROTECO's course: C/C++

## GETTERS and SETTERS
On the ***ModeloNintendo.h*** file we added the following Getters and Setters:
```
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

## METHOD
We added by declaring two methods on the on the ***ModeloNintendo.h*** file:
```
void gritoGuerra(string YOLO);
void admirarPeach(string peach);
```
And then, we defined them on the ***ModeloNintendo.cpp*** file:

```
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

## MENU



<p align = "center">
  <img src="https://media4.giphy.com/media/THlB4bsoSA0Cc/giphy.gif?cid=ecf05e47styacfaycm8x1kx9udmbj3beql8xgt0ewfzzjw0j&ep=v1_gifs_search&rid=giphy.gif&ct=g"   width="70%" >
</p>
