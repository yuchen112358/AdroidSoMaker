//
// Created by Netiger on 12/23/15.
//

#ifndef JNA_ON_AS_JNIDEMOINTERFACE_H
#define JNA_ON_AS_JNIDEMOINTERFACE_H

#ifdef   __cplusplus   
extern   "C"{   
#endif  

void * initialize(int a);
void   run(void *);
void * finalize(void *);
int    add(void * demo, int b);


void * initializeString(char * str);
const char * substrString(void * demoString, int begin, int end);
void finalizeString(void * demoString);

#ifdef   __cplusplus   
}   
#endif

#endif //JNA_ON_AS_JNIDEMOINTERFACE_H
