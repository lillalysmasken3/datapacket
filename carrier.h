#include <stdlib.h>

typedef struct Datapackage {

int position;

} Datapackage;

int Read(Datapackage *msg);
int Write(Datapackage *msg);