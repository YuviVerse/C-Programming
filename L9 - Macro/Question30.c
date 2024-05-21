#include <stdio.h>
#define FEATURE_A
#define FEATURE_B
int main()
{
#ifdef FEATURE_A
  printf("Feature A is enabled.\n");
#endif

#ifdef FEATURE_B
  printf("Feature B is enabled.\n");
#endif

#if defined(FEATURE_A) && defined(FEATURE_B)
  printf("Both features are enabled.\n");
#endif

  return 0;
}
