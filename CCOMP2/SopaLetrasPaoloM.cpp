#include <iostream>
using namespace std;

int main() {
  const int fil = 6;
  const int col = 6;
  const int pl = 3;
  int nEl2 = fil * col;
  int nEl = nEl2 * pl;
  
  char A[3][6][6] = {{{'A', 'V', 'G', 'B', 'N', 'M'},
                      {'K', 'T', 'E', 'W', 'J', 'H'},
                      {'I', 'L', 'L', 'E', 'A', 'G'},
                      {'O', 'K', 'L', 'R', 'D', 'T'},
                      {'A', 'L', 'J', 'I', 'U', 'U'},
                      {'F', 'H', 'K', 'W', 'I', 'Y'}},

                     {{'J', 'D', 'K', 'F', 'L', 'L'},
                      {'G', 'A', 'H', 'S', 'I', 'T'},
                      {'H', 'G', 'E', 'K', 'O', 'L'},
                      {'J', 'I', 'S', 'L', 'S', 'T'},
                      {'K', 'K', 'A', 'J', 'O', 'W'},
                      {'A', 'A', 'S', 'K', 'D', 'O'}},

                     {{'A', 'W', 'K', 'F', 'F', 'G'},
                      {'E', 'E', 'P', 'S', 'I', 'T'},
                      {'I', 'G', 'S', 'P', 'P', 'P'},
                      {'O', 'U', 'I', 'O', 'P', 'O'},
                      {'U', 'Y', 'Q', 'G', 'F', 'D'},
                      {'V', 'N', 'B', 'V', 'C', 'X'}}};
  
  char palabra[3] = {'F', 'F', 'G'};
  char *PP = palabra;
  int tam =sizeof palabra / sizeof palabra[0];
  int found = 0;
  int pos1 = 1;
  int pos2 = 1;
  char *p = **A;

  int cara = 1;
  
  
  for (int i = 0; i < nEl;
       i++, p++, pos2++) {
    if (*p == *PP) {
      PP++;
      found++;
    }
    if (found == tam) {
      cout << "Palabra encontrada" << endl;
      cout << "Posicion: ( " << cara << " , " << pos1 << " , " << (pos2 - (tam - 1)) << " )" << endl;
      break;
    }
    if ((pos1 * pos2) == nEl2) {
      cara++;
      pos1 = 1;
      pos2 = 0;
      if (found > 0) {
        PP = PP - found;
      }
      found = 0;
    }
    if (pos2 == col) {
      pos2 = 0;
      pos1++;
      if (found > 0) {
        PP = PP - found;
      }
      found = 0;
    }
  }
  pos1 = 1;
  pos2 = 1;
  cara = 1;
  p = p - (nEl - 1);
  if (found != tam) {
    found = 0;
    for (int j = 0; j < nEl; j++, p += col, pos1++) {
      if (*p == *PP) {
        PP++;
        found++;
      }
      if (found == tam) {
        cout << "Palabra encontrada"
             << endl;
        cout << "Posicion: ( " << cara << " , " << (pos1 - (tam - 1))
             << " , " << pos2 << " )"
             << endl;
        break;
      }
      if ((cara == pl) && ((pos1 == fil) && (pos2 == col))) {
        break;
      }
      if ((pos1 * pos2) == nEl2) {
        cara++;
        pos1 = 0;
        pos2 = 1;
        p = p - (col - 1);
        if (found > 0) {
          PP = PP - found;
        }
        found = 0;
      }
      if (pos1 == fil) {
        pos2++;
        pos1 = 0;
        p = p -
            ((fil * col) -
             1);
        if (found > 0) {
          PP = PP - found;
        }
        found = 0;
      }
    }
  }
  pos1 = 1;
  pos2 = 1;
  cara = 1;
  p = p - nEl;
  if (found != tam) {
    found = 0;
    for (int k = 0; k < nEl; k++, p++, pos2++) {
      if (*p == *PP) {
        PP++;
        found++;
        cara++;
        k = k + (nEl2 - 1);
        p = p + (nEl2 -
                 1);
        pos2--;
      }
      if (found == tam) {
        cout << "Palabra encontrada" << endl;
        cout << "Posicion: ( " << cara - tam << " , " << pos1 << " , "
             << ++pos2 << " )"
             << endl;
        break;
      }
      if ((pos1 * pos2) == nEl2) {
        cara++;
        pos1 = 1;
        pos2 = 0;
        if (found > 0) {
          PP = PP - found;
        }
        found = 0;
      }
      if (pos2 == col) {
        pos2 = 0;
        pos1++;
        if (found > 0) {
          PP = PP - found;
        }
        found = 0;
      }
    }
  }
  if (found != tam) {
    cout << "Palabra no encontrada" << endl;
  }
  return 0;
}