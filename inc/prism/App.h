#ifndef PRISM_APP_H_
#define PRISM_APP_H_

#import "Cocoa/Cocoa.h"

class App {
private:
    NSAutoreleasePool * pool;
public:
    App();
    ~App();
    void run();
};

#endif // PRISM_APP_H_
