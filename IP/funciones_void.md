# Operaciones Básicas con Funciones en C++

## Objetivo

Desarrollar un programa que solicite dos números al usuario y realice las operaciones básicas:

- Suma
- Resta
- Multiplicación
- División

Cada operación se implementa mediante una función independiente.

---

# Código Fuente

```cpp
#include <iostream>
using namespace std;

// Función suma
void sumar(float a, float b)
{
    cout << "Suma: "
         << a + b
         << endl;
}

// Función resta
void restar(float a, float b)
{
    cout << "Resta: "
         << a - b
         << endl;
}

// Función multiplicación
void multiplicar(float a, float b)
{
    cout << "Multiplicacion: "
         << a * b
         << endl;
}

// Función división
void dividir(float a, float b)
{
    if(b != 0)
    {
        cout << "Division: "
             << a / b
             << endl;
    }
    else
    {
        cout << "Error: no se puede dividir entre cero."
             << endl;
    }
}

int main() /// Programa Principal
{
    float num1;
    float num2;

    cout << "Programa para realizar operaciones con 2 numeros" << endl;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "\nRESULTADOS\n";

    sumar(num1, num2);
    restar(num1, num2);
    multiplicar(num1, num2);
    dividir(num1, num2);

    return 0;
}
```

---

# Explicación del Programa

## Biblioteca utilizada

```cpp
#include <iostream>
```

Permite utilizar:

- `cout` para mostrar información en pantalla.
- `cin` para capturar datos desde el teclado.

---

## Espacio de nombres

```cpp
using namespace std;
```

Permite utilizar:

```cpp
cout
cin
endl
```

sin escribir:

```cpp
std::cout
std::cin
std::endl
```

---

# Función sumar

```cpp
void sumar(float a, float b)
{
    cout << "Suma: "
         << a + b
         << endl;
}
```

### Parámetros

- `a`: primer número.
- `b`: segundo número.

### Operación realizada

```cpp
a + b
```

### Ejemplo

Si:

```text
a = 10
b = 5
```

Resultado:

```text
Suma: 15
```

---

# Función restar

```cpp
void restar(float a, float b)
{
    cout << "Resta: "
         << a - b
         << endl;
}
```

### Operación realizada

```cpp
a - b
```

### Ejemplo

```text
10 - 5 = 5
```

Salida:

```text
Resta: 5
```

---

# Función multiplicar

```cpp
void multiplicar(float a, float b)
{
    cout << "Multiplicacion: "
         << a * b
         << endl;
}
```

### Operación realizada

```cpp
a * b
```

### Ejemplo

```text
10 * 5 = 50
```

Salida:

```text
Multiplicacion: 50
```

---

# Función dividir

```cpp
void dividir(float a, float b)
{
    if(b != 0)
    {
        cout << "Division: "
             << a / b
             << endl;
    }
    else
    {
        cout << "Error: no se puede dividir entre cero."
             << endl;
    }
}
```

### Validación

Antes de dividir se verifica:

```cpp
b != 0
```

Esto evita una división entre cero.

### Caso correcto

```text
10 / 5 = 2
```

Salida:

```text
Division: 2
```

### Caso incorrecto

Si:

```text
b = 0
```

Salida:

```text
Error: no se puede dividir entre cero.
```

---

# Función principal

```cpp
int main()
```

Es el punto de inicio del programa.

---

## Declaración de variables

```cpp
float num1;
float num2;
```

Almacenan los números ingresados por el usuario.

---

## Mensaje de bienvenida

```cpp
cout << "Programa para realizar operaciones con 2 numeros";
```

Muestra:

```text
Programa para realizar operaciones con 2 numeros
```

---

## Lectura del primer número

```cpp
cin >> num1;
```

Ejemplo:

```text
Ingrese el primer numero: 10
```

---

## Lectura del segundo número

```cpp
cin >> num2;
```

Ejemplo:

```text
Ingrese el segundo numero: 5
```

---

## Llamada a las funciones

### Suma

```cpp
sumar(num1, num2);
```

### Resta

```cpp
restar(num1, num2);
```

### Multiplicación

```cpp
multiplicar(num1, num2);
```

### División

```cpp
dividir(num1, num2);
```

Cada función recibe los valores capturados por el usuario.

---

# Ejemplo de ejecución

## Entrada

```text
Programa para realizar operaciones con 2 numeros

Ingrese el primer numero: 10
Ingrese el segundo numero: 5
```

## Salida

```text
RESULTADOS

Suma: 15
Resta: 5
Multiplicacion: 50
Division: 2
```

---

# Conceptos aprendidos

Este programa permite practicar:

- Funciones sin valor de retorno (`void`)
- Paso de parámetros
- Variables de tipo `float`
- Entrada de datos con `cin`
- Salida de datos con `cout`
- Estructuras de decisión (`if`)
- Operaciones aritméticas básicas
- Organización modular de programas

---

# Diagrama General

```text
                ┌──────────────┐
                │    main()    │
                └──────┬───────┘
                       │
          ┌────────────┼────────────┐
          │            │            │
          ▼            ▼            ▼
      sumar()      restar()   multiplicar()
          │
          ▼
      dividir()
```

Cada función recibe dos números y realiza una operación específica.