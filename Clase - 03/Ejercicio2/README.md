# Clase N°03

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