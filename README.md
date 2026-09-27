# Programación competitiva

Repositorio de práctica de **Diego Ivan Pacori Anccasi**: soluciones en C++, plantillas y ejercicios de distintas plataformas.

## Perfil y logros

- [Codeforces: Fernando_Benito](https://codeforces.com/profile/Fernando_Benito), anteriormente `gunter132`.
- **Máximo histórico: Specialist, 1457 de rating** (consultado el 27/09/2026).
- Participación en **ICPC 2025**.
- Ganador de un concurso de programación competitiva en **PERUMEC**.

## Organización

| Ruta | Contenido |
| --- | --- |
| `atcoder/`, `codechef/`, `CSES/`, `omegaup/` | Práctica por plataforma |
| `RPC/`, `FOPI/`, `miniExtreme/` | Ejercicios de concursos y entrenamiento |
| `training/`, `excercises/` | Sesiones de práctica |
| `helpers/` | Utilidades |
| `Template.cpp`, `template_leetcode.cpp` | Plantillas |
| `Makefile` | Compilación y ejecución local |

Los archivos son ejercicios independientes; el repositorio no representa una aplicación única. Los nombres de carpetas se conservan para mantener las referencias existentes.

## Compilar una solución

Se necesita un compilador GNU C++ con soporte para C++17. Por ejemplo, desde la raíz:

```bash
g++ -std=c++17 -O2 ga.cpp -o solution
```

Ejecuta `./solution` en Linux/macOS o `./solution.exe` en Windows y proporciona la entrada del problema.

## Usar el Makefile

En Windows se puede usar Git Bash, GNU Make y el compilador de MSYS2/UCRT64 disponible en `PATH`. El objetivo `run` incluye opciones de enlazado específicas de Windows.

```bash
make xd F=ga.cpp
make run F=ga.cpp
make icpc F=ga.cpp
```

- `xd`: compila y ejecuta con C++17.
- `run`: C++17 con advertencias y comprobaciones de depuración.
- `icpc`: compila y ejecuta con C++11.
- Los ejecutables se generan en `bin/`.

## Evidencias

[Perfil e historial en Codeforces](https://codeforces.com/profile/Fernando_Benito) · [Perfil profesional](https://github.com/dpacoria21)

Las soluciones reflejan práctica personal. El enunciado y las restricciones de cada problema deben consultarse en su plataforma de origen.
