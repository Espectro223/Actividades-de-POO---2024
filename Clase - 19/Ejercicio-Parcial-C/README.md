#### Ejercicio C
**Descripción:**
1. Crear una clase `Lienzo` que herede de `QWidget`, creada con QtDesigner y que permita dibujar con `paintEvent`.
2. Cuando se presiona la tecla `A` (Activar), se comenzará a dibujar cada posición en donde se encuentra el mouse, sin depender de que se presione algún botón del mouse.
3. Cuando se presiona la tecla `D` (Desactivar), se dejará de dibujar.
4. La clase `Lienzo` recibe una enumeración que puede ser: `TrazoFino`, `TrazoMediano`, `TrazoGrueso` que determinará el grosor de lo que se dibuja.
5. Dentro de `Lienzo` y ubicado abajo a la derecha, se ubicará un objeto de `MiLabel`, que hereda de `QLabel`, con una señal propia para detectar el click del mouse.
6. Cuando se presione este `MiLabel`, se borrará todo lo dibujado.
