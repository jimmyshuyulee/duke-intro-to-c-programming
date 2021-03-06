#include <stdio.h>
#include <stdlib.h>

void rotate(char matrix[10][10]){
  char temp1;
  char temp2;
  for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
      temp1 = matrix[j][9-i];
      matrix[j][9-i] = matrix[i][j];
      temp2 = matrix[9-i][9-j];
      matrix[9-i][9-j] = temp1;
      temp1 = matrix[9-j][i];
      matrix[9-j][i] = temp2;
      matrix[i][j] = temp1;
    }
  }
}
