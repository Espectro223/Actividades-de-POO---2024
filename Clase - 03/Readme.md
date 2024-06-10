# Clase N°03

### Ejercicio 1
**Descripción:**
- Instalar Qt. Esto incluye las herramientas de compilación C++, la biblioteca Qt y Qt Creator.
- Crear un primer programa que muestre por la consola de QtCreator 10 números aleatorios en el intervalo [2, 20].
- Cada vez que se ejecute el programa, los números deberán ser aleatorios y distintos en cada ejecución.

### Ejercicio 2
**Objetivo:**
- Familiarización con librerías, archivos DLL y la variable de entorno PATH. Tener presente la distinción entre biblioteca, librería y library.

**Descripción:**
- Crear un programa simple en C++ que utilice una librería externa (en forma de archivo DLL o similar en otros sistemas operativos) y que haga uso de la variable de entorno PATH para ubicar dicha librería.

**Pasos a seguir:**
1. Crear una librería en C++ y compilarla como un archivo DLL (o similar en otros sistemas operativos). Programar en la librería una función que imprima un mensaje simple, como "Hola, desde la biblioteca".
2. Crear un programa principal en C++ que utilice esta librería. Hacer referencia (o linkear) a la librería de manera dinámica.
3. Incluir la ruta al archivo DLL en la variable de entorno PATH.
4. En el programa principal, cargar la librería, invocar a la función y mostrar el mensaje.

### Ejercicio 4
**Descripción:**
- Crear un `std::vector` para contener `int`.
- Cargar 30 valores pseudo aleatorios entre 1 y 15.
- Publicar la moda.

### Ejercicio 5
**Descripción:**
- Crear un `std::vector` para contener objetos de la clase `std::string`.
- Cargar 5 expresiones idiomáticas, como por ejemplo: "pan comido".
- Publicar por consola ordenado alfabéticamente.

### Ejercicio 6
**Descripción:**
- Crear un Empty qmake Project, crear una nueva clase (que no sea Persona, ni Cliente, ni Poste). Inventar una clase.
- Cargar uno o más constructores, métodos y atributos.

### Ejercicio 7
**Descripción:**
- Crear un Empty qmake Project y utilizar la clase creada en el ejercicio anterior para crear objetos y almacenarlos en un `std::vector`.
