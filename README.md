# Sistema de Navegación

Para este proyecto decidí hacer un sistema de navegación debido a que como estudio robótica quiero aprender más sobre procesos de automatización y optimización. En este primer avance se implemente el almacenamiento de rutas de navegación y su ordenamiento eficiente de menor a mayor distancia. En mi caso utilice **Merge Sort** y sobrecarga de operadores.

---

## Estructura del Proyecto

* **`Ruta.h`**: Clase que representa una ruta entre un origen y un destino con su distancia. Aplica encapsulamiento y sobrecarga del operador `<` y `>`.
* **`Sorts.h`**: Clase `template` que implementa el algoritmo de ordenamiento **Merge Sort** (`ordenaMerge`, `mergeSplit`, `mergeArray`, `copyArray`).
* **`main.cpp`**: Programa principal que crea la lista de rutas, ejecuta el sort y despliega los resultados antes y después del proceso.

---

## Cumplimiento de Subcompetencias

### SICT0302: Toma decisiones

#### Selecciona un algoritmo de ordenamiento adecuado al problema
Se seleccionó **Merge Sort** debido a que es uno de los algoritmos que vimos en clase con mejor eficiencia, independientemente de que tan desordenada este la lista.

---

## SICT0301: Evalúa los componentes

#### Hace un análisis de complejidad correcto y completo para los algoritmos de ordenamiento usados en el programa

**Merge Sort**
* **Mejor caso — $O(n \log n)$:** Ocurre siempre, sin importar cómo estén ordenados los datos al inicio. El algoritmo siempre divide la lista en mitades ($\log n$ divisiones) y junta los elementos uno a uno ($n$ pasos por nivel).
* **Peor caso — $O(n \log n)$:** Toma exactamente el mismo tiempo que el mejor caso. A diferencia de otros algoritmos, no se vuelve más lento aunque la lista esté completamente desordenada o al revés.
---

## SICT0303: Implementa acciones científicas

#### Implementa acciones científicas e ingenieriles o procesos computacionales que cumplen con el tipo de solución requerida
Se diseñó una arquitectura modular haciendo uso de buenas prácticas de Programación Orientada a Objetos en C++:
1. **Encapsulamiento:** Atributos privados (`origen`, `destino`, `distancia`) accesibles mediante getters.
2. **Sobrecarga de Operadores:** Implementación de `operator<` en la clase `Ruta`, permitiendo que el método algoritmo `Merge` compare objetos del tipo `Ruta`.

---

## SEG0701: Cultura digital

Utiliza herramientas digitales de forma organizada. El proyecto usa Git y GitHub para guardar los cambios y trabajar en orden y explicando todo en un archivo `README.md`.
