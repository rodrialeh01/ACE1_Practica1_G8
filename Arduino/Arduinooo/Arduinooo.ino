#include "Abecedario.h"
int matrixled[][24] = {
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
};
int columnas[] = {22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37};
int filas[] = {38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 2, 4, 7, 8, 10, 11, 12, 13};

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  for (int i = 0; i < 24; i++) {
    pinMode(filas[i], OUTPUT);

  }
  for (int i = 0; i < 16; i++) {
    pinMode(columnas[i], OUTPUT);
  }
  LimpiarMatriz();
}

void loop() {
  char valor = "";
  if (Serial.available() > 0) {
    valor = Serial.read();
  }
  
  switch (valor) {
    case 'A':
      for (int col = 0; col < 16; col++) {
        for (int fila = 0; fila < 8; fila++) {
          matrixled[col][fila] = A[col][fila];
        }
      }

      break;
    case 'B':
      for (int col = 0; col < 16; col++) {
        for (int fila = 0; fila < 8; fila++) {
          matrixled[col][fila] = B[col][fila];
        }
      }

      break;
    case 'C':
      for (int col = 0; col < 16; col++) {
        for (int fila = 0; fila < 8; fila++) {
          matrixled[col][fila] = C[col][fila];
        }
      }

      break;
    case 'D':
      for (int col = 0; col < 16; col++) {
        for (int fila = 0; fila < 8; fila++) {
          matrixled[col][fila] = D[col][fila];
        }
      }

      break;
    case 'E':
      for (int col = 0; col < 16; col++) {
        for (int fila = 0; fila < 8; fila++) {
          matrixled[col][fila] = E[col][fila];
        }
      }

      break;
    case 'F':
      for (int col = 0; col < 16; col++) {
        for (int fila = 0; fila < 8; fila++) {
          matrixled[col][fila] = F[col][fila];
        }
      }

      break;
    case 'G':
      for (int col = 0; col < 16; col++) {
        for (int fila = 0; fila < 8; fila++) {
          matrixled[col][fila] = G[col][fila];
        }
      }

      break;
    case 'H':
      for (int col = 0; col < 16; col++) {
        for (int fila = 0; fila < 8; fila++) {
          matrixled[col][fila] = H[col][fila];
        }
      }

      break;
    case 'I':
      for (int col = 0; col < 16; col++) {
        for (int fila = 0; fila < 8; fila++) {
          matrixled[col][fila] = I[col][fila];
        }
      }

      break;
    case 'J':
      for (int col = 0; col < 16; col++) {
        for (int fila = 0; fila < 8; fila++) {
          matrixled[col][fila] = J[col][fila];
        }
      }

      break;
    case 'K':
      for (int col = 0; col < 16; col++) {
        for (int fila = 0; fila < 8; fila++) {
          matrixled[col][fila] = K[col][fila];
        }
      }

      break;
    case 'L':
      for (int col = 0; col < 16; col++) {
        for (int fila = 0; fila < 8; fila++) {
          matrixled[col][fila] = L[col][fila];
        }
      }

      break;
    case 'M':
      for (int col = 0; col < 16; col++) {
        for (int fila = 0; fila < 8; fila++) {
          matrixled[col][fila] = M[col][fila];
        }
      }

      break;
    case 'N':
      for (int col = 0; col < 16; col++) {
        for (int fila = 0; fila < 8; fila++) {
          matrixled[col][fila] = N[col][fila];
        }
      }

      break;
    case 'Ñ':
      for (int col = 0; col < 16; col++) {
        for (int fila = 0; fila < 8; fila++) {
          matrixled[col][fila] = EXE[col][fila];
        }
      }

      break;
    case 'O':
      for (int col = 0; col < 16; col++) {
        for (int fila = 0; fila < 8; fila++) {
          matrixled[col][fila] = O[col][fila];
        }
      }

      break;
    case 'P':
      for (int col = 0; col < 16; col++) {
        for (int fila = 0; fila < 8; fila++) {
          matrixled[col][fila] = P[col][fila];
        }
      }

      break;
    case 'Q':
      for (int col = 0; col < 16; col++) {
        for (int fila = 0; fila < 8; fila++) {
          matrixled[col][fila] = Q[col][fila];
        }
      }

      break;
    case 'R':
      for (int col = 0; col < 16; col++) {
        for (int fila = 0; fila < 8; fila++) {
          matrixled[col][fila] = R[col][fila];
        }
      }

      break;
    case 'S':
      for (int col = 0; col < 16; col++) {
        for (int fila = 0; fila < 8; fila++) {
          matrixled[col][fila] = S[col][fila];
        }
      }

      break;
    case 'T':
      for (int col = 0; col < 16; col++) {
        for (int fila = 0; fila < 8; fila++) {
          matrixled[col][fila] = T[col][fila];
        }
      }

      break;
    case 'U':
      for (int col = 0; col < 16; col++) {
        for (int fila = 0; fila < 8; fila++) {
          matrixled[col][fila] = U[col][fila];
        }
      }

      break;
    case 'V':
      for (int col = 0; col < 16; col++) {
        for (int fila = 0; fila < 8; fila++) {
          matrixled[col][fila] = V[col][fila];
        }
      }

      break;
    case 'W':
      for (int col = 0; col < 16; col++) {
        for (int fila = 0; fila < 8; fila++) {
          matrixled[col][fila] = W[col][fila];
        }
      }

      break;
    case 'X':
      for (int col = 0; col < 16; col++) {
        for (int fila = 0; fila < 8; fila++) {
          matrixled[col][fila] = X[col][fila];
        }
      }

      break;
    case 'Y':
      for (int col = 0; col < 16; col++) {
        for (int fila = 0; fila < 8; fila++) {
          matrixled[col][fila] = Y[col][fila];
        }
      }

      break;
    case 'Z':
      for (int col = 0; col < 16; col++) {
        for (int fila = 0; fila < 8; fila++) {
          matrixled[col][fila] = Z[col][fila];
        }
      }

      break;
    default:
      for (int col = 0; col < 16; col++) {
        for (int fila = 0; fila < 8; fila++) {
          matrixled[col][fila] = espacio[col][fila];
        }
      }

      for (int col = 0; col < 16; col++) {
        for (int fila = 0; fila < 24; fila++) {
          matrixled[col][fila] = 0;
        }
      }
      break;
  }

  for (int paso = 0; paso <= 24; paso++) {
    for (int fila = 0; fila < 24; fila++) {
      for (int col = 0; col < 16; col++) {
        if (matrixled[col][fila] == 1) {
          digitalWrite(filas[23 - paso + fila], HIGH);
          digitalWrite(columnas[col], LOW);
          delay(1);
          digitalWrite(filas[23 - paso + fila], LOW);
          digitalWrite(columnas[col], HIGH);
        }
      }
    }
  }

  LimpiarMatriz();
}

void LimpiarMatriz() {
  for (int i = 0; i < 24; i++) {
    digitalWrite(filas[i], LOW);
    if (i < 16) {
      digitalWrite(columnas[i], HIGH);
    }
  }
}
