#### Ejercicio B
**Descripción:**
1. Definir un formulario en la clase `Formulario` usando QtDesigner.
2. En `Formulario` se darán de alta instrumentos en un negocio de instrumentos musicales: guitarras, vientos y teclados.
3. Definir las clases `Instrumento`, `Guitarra`, `Viento` y `Teclado` en sus correspondientes archivos `.h` y `.cpp`.
4. `Instrumento` será una clase abstracta con la función virtual pura `void afinar()`, que publicará un texto por consola, por ejemplo "Afinando guitarra".
5. El formulario tendrá un botón para agregar un instrumento nuevo a un `QVector<Instrumento *>`.
6. El formulario tendrá un `QComboBox` con el siguiente listado: Guitarra, Viento y Teclado.
7. El formulario tendrá un botón "Ver stock" que publicará por consola todos los instrumentos cargados.
8. Los Instrumentos tendrán los siguientes atributos: `marca`, `precio`, `cantidad_de_cuerdas`, `cantidad_de_teclas`, `metal_usado`.
9. Cuando en el `QComboBox` se seleccione Guitarra, se deberá permitir ingresar sólo la marca, el precio y la cantidad de cuerdas.
