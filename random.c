#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  unsigned char random_bytes[512];
  srand(time(NULL)); // Seed the random number generator
  for (int i = 0; i < 512; i++) {
    random_bytes[i] = rand() % 256; // Generate random byte values
  }
  // Use or store the random bytes
}
