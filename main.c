#include <stdio.h>
#include <stdlib.h>
#include "carrier.h"

int main(void) {
   Datapackage msg;
   msg.position=0;
   
   int val=Write(&msg);
   msg.position=val;
   int valnow=Read(&msg);
   
   val=Write(&msg);
   msg.position=val;
   valnow=Read(&msg);
   
   return 0;
}