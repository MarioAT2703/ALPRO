#include <stdio.h>

////-----latihan soal  ketua pelaksana 
// algoritma sorting
void selection_sort(int skor[], int jumlahTim)
{
  for (int i = 0; i < jumlahTim; i++)
  {
    int indexMin = i;
    for (int j = i + 1; j < jumlahTim; j++)
    {
      if (skor[j] > skor[indexMin])
      {
        indexMin = j;
      }
    }
   
    int temp = skor[i];
    skor[i] = skor[indexMin];
    skor[indexMin] = temp;
  }
}

int main()
{

  int jumlahTim;
  printf("masukan jumlah tim: ");

  scanf("%d", &jumlahTim);


  int skor[jumlahTim];
  for (int i = 0; i < jumlahTim; i++)
  {
    int skor1, skor2, skor3;
    printf("skor tim: %d\n", i + 1);
    printf("Skor 1: ");
    scanf("%d", &skor1);
    printf("Skor 2: ");
    scanf("%d", &skor2);
    printf("Skor 3: ");
    scanf("%d", &skor3);
    skor[i] = skor1 + skor2 + skor3;
  }

  selection_sort(skor, jumlahTim);

  printf("hasil: ");
  for (int i = 0; i < jumlahTim; i++)
  {
    printf("%d ", skor[i]);
  }
  printf("\n");

  return 0;
}