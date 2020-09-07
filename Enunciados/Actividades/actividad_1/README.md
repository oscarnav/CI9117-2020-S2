# CI0117 - Actividad de clase 1

### Instrucciones generales

Las soluciones a los ejercicios de esta actividad deberán ser subidas a su repositorio personal de Github, siguiendo la siguiente estructura de folders:

```
CI0117-2020-S2/acividades/[número de actividad]/[nombre de ejercicio]/
```
Agregue un archivo *Makefile* para cada uno de los ejercicios con los comandos necesarios para compilar el codigo fuente, de forma que el ejecutable tenga el mismo nombre dado en el ejercicio.
Asegúrese de subir al repositorio únicamente archivos .c, .md y Makefile. Cree un archivo .gitignore para evitar subir archivos ejecutables.

## Ejercicio 1 [position_race]

Modifique la solución del ejercicio de espera activa vista en clase para implementar una carrera de threads. Cada vez que un thread llega a la meta, lo avisa en la salida estándar, como ocurre en la siguiente corrida hipotética:

```
Thread 0/4: I arrived at position 1
Thread 2/4: I arrived at position 2
Thread 1/4: I arrived at position 3
Thread 3/4: I arrived at position 4
```

Las posiciones tienen que aparecer en orden. Utilice un mutex como mecanismo de control de concurrencia para que el reporte sea correcto.

* Declaración, inicialización y destrucción de un mutex en C utilizando el tipo *pthread_mutex_t*:

```c
pthread_mutex_t mutex_example;
size_t shared_variable = 123;
pthread_mutex_init(&shared_variable, /*attr*/ NULL);
...
pthread_mutex_destroy(&shared_variable);
```

* Bloqueo y desbloqueo de un mutex dentro de un hilo en C utilizando el tipo *pthread_mutex_t*:

```c
pthread_mutex_lock(&shared_variable);
shared_variable = 456;
pthread_mutex_unlock(&shared_variable);
```
