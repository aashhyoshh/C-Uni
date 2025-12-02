const PI = 3.1416;
const TIPO_CAMBIO = 19.50; // si quieres usarlo fijo

// --- Funciones de cálculo ---

function areaCirculo(radio) {
  console.log("El área del círculo es: " + (radio * radio * PI));
}

function areaTriangulo(base, altura) {
  console.log("El área del triángulo es: " + (base * altura / 2));
}

function dolaresAPesos(dolares, tipoDeCambio) {
  console.log("En pesos es: " + (dolares * tipoDeCambio));
}

function centigradosAFahrenheit(gradosC) {
  console.log("La temperatura en Fahrenheit es: " + ((gradosC * 9 / 5) + 32));
}

// --- Menú de áreas ---

function menuAreas() {
  let op;
  do {
    op = parseInt(
      "\n--- MENU AREAS ---\n" +
      "Selecciona una opción o eres gay\n" +
      "1. Calcular Círculo\n" +
      "2. Calcular Triángulo\n" +
      "3. Volver al menú principal\n\n" +
      "Opción: "
    );

    switch (op) {
      case 1: {
        const radio = parseFloat(prompt("Ingresa el radio: "));
        areaCirculo(radio);
        break;
      }
      case 2: {
        const base = parseFloat(prompt("Ingresa la base del triángulo: "));
        const altura = parseFloat(prompt("Ingresa la altura del triángulo: "));
        areaTriangulo(base, altura);
        break;
      }
      case 3:
        console.log("Regresando al menú principal...");
        break;
    }
  } while (op !== 3);
}

// --- Menú de conversiones ---

function menuConversiones() {
  let op;
  do {
    op = parseInt(
      "\n--- CONVERSIONES ---\n" +
      "Selecciona una opción o eres gay\n" +
      "1. Dólares a Pesos\n" +
      "2. Centígrados a Fahrenheit\n" +
      "3. Volver al menú principal\n\n" +
      "Opción: "
    );

    switch (op) {
      case 1: {
        const cantidad = parseFloat(prompt("Ingresa la cantidad en dólares: "));
        const tipo = parseFloat(prompt("Ingresa el tipo de cambio: "));
        dolaresAPesos(cantidad, tipo);
        break;
      }
      case 2: {
        const grados = parseFloat(prompt("Ingresa los grados centígrados: "));
        centigradosAFahrenheit(grados);
        break;
      }
      case 3:
        console.log("Regresando al menú principal...");
        break;
    }
  } while (op !== 3);
}

// --- Menú principal ---

function main() {
  let op;
  do {
    op = parseInt(
      "\n--- MENÚ PRINCIPAL ---\n" +
      "Selecciona una opción o eres gay\n\n" +
      "1. Áreas\n" +
      "2. Conversiones\n" +
      "3. Salir\n\n" +
      "Opción: "
    );

    switch (op) {
      case 1:
        menuAreas();
        break;
      case 2:
        menuConversiones();
        break;
      case 3:
        console.log("Saliendo del programa...");
        break;
    }
  } while (op !== 3);
}

main();
