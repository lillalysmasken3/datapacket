#include <stdlib.h>
#include <stdio.h>
#include "carrier.h"

int Read(Datapackage *msg){
    
    printf("Position is %d",msg->position);
    return msg->position;
}


int Write(Datapackage *msg) {
    
    return msg->position+1;
}