# Clase N°15

### Ejercicio 22
**Descripción:**
- Crear una clase base llamada `Instrumento` y las clases derivadas `Guitarra`, `Bateria` y `Teclado`.
- La clase base tiene una función virtual pura llamada `sonar()`.
- Definir una función virtual `verlo()` que publique la marca del instrumento. Por defecto todos los instrumentos son de la marca Yamaha.
- Utilizar en la función `main()` un `std::vector` para almacenar punteros a objetos del tipo `Instrumento`. Instanciar 5 objetos y agregarlos al `std::vector`.
- Publicar la marca de cada instrumento recorriendo el vector.
- En las clases derivadas agregar los datos miembro `int cuerdas`, `int teclas` e `int tambores` según corresponda. Por defecto, guitarra con 6 cuerdas, teclado con 61 teclas y batería con 5 tambores.
- Hacer que la clase `Teclado` tenga herencia múltiple, heredando además de una nueva clase `Electrico`. Todos los equipos del tipo "Electrico" tienen por defecto un voltaje de 220 volts. Esta clase deberá tener un destructor que al destruirse publique la leyenda "Desenchufado".
- Al llamar a la función `sonar()`, se deberá publicar "Guitarra suena...", "Teclado suena..." o "Batería suena..." según corresponda.
- Incluir los métodos `get` y `set` que crea convenientes.

### Ejercicio 23
**Descripción:**
- Reutilizar el código fuente de cualquier otro ejercicio y utilizar herencia múltiple, inline y friend.
- Implementar herencia múltiple, inline y friend cuando sea beneficioso hacerlo.
