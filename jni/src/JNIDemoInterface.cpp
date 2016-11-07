//
// Created by Netiger on 12/23/15.
//

#include "JNIDemoInterface.h"
#include "JNIDemo.h"
#include "JNIStringDemo.h"


void *initialize(int a) {
    JNIDemo * demo = new JNIDemo(a);
    return (void *)demo;
}

void run(void *pVoid) {
    ((JNIDemo *)(pVoid)) -> print();
}

int add(void *pVoid, int b) {
    return ((JNIDemo *)(pVoid))->add(b);
}

void *finalize(void *pVoid) {
    delete ((JNIDemo *)(pVoid));
}

void *initializeString(char *str) {
    JNIStringDemo * strDemo = new JNIStringDemo(str);
    return strDemo;
}

const char *substrString(void *demoString, int begin, int end) {
    return ((JNIStringDemo*)demoString)->substr(begin, end).c_str();
}

void finalizeString(void *demoString) {
    delete ((JNIStringDemo *)demoString);
}
