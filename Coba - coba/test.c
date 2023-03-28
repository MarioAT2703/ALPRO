#include <stdio.h>
#include <string.h>

int main() {
  char Jawab[100];

  printf("5. Nama lain dari singa adalah?\n");
  printf("\tJawab : ");
  fgets(Jawab, 100, stdin);

  // Menghilangkan newline character pada akhir string
  Jawab[strcspn(Jawab, "\n")] = 0;

  if (strcmp(Jawab, "raja hutan") == 0) {
    printf("Benar\n");
  } else {
    printf("Salah\n");
  }

  return 0;
}
