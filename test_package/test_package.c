#include <portaudio.h>
#include <stdio.h>

int main() {
  const PaVersionInfo* v = Pa_GetVersionInfo();
  printf("PortAudio version %d.%d.%d %s\n", v->versionMajor, v->versionMinor, v->versionSubMinor, v->versionControlRevision);
  printf("%s\n", v->versionText);
  return 0;
}
