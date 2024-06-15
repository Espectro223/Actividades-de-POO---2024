#### Ejercicio A
**Descripción:**
1. Definir una ventana vacía en la clase `Principal`, que herede de `QWidget` y diseñada con QtDesigner.
2. Agregar a este proyecto la clase `AdminDB` para permitir el uso de una base de datos.
3. Instanciar un único objeto de `AdminDB` en la aplicación.
4. Definir una clase `Linea` con las siguientes características:
   - Archivos: `linea.h` y `linea.cpp`.
   - Atributos privados: `int x_inicial`, `int y_inicial`, `int x_final`, `int y_final`.
   - Getters y setters.
   - Uso de `const` donde sea recomendable.
5. Definir una tabla `lineas` en la base de datos con los siguientes campos: `id`, `x_inicial`, `y_inicial`, `x_final`, `y_final`.
6. Cargar en la base de datos un único registro con los datos de una línea.
7. Desde la clase `Principal`, leer este único registro y crear un objeto `Linea` con esos datos.
8. Dibujar con `paintEvent` esta línea dentro de la ventana con las coordenadas leídas de la base.