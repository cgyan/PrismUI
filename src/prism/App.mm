#include "../../inc/prism/App.h"

App::App()
: pool(NULL)
{
    pool = [[NSAutoreleasePool alloc] init];
    [NSApplication sharedApplication];
}

App::~App() {
    [pool drain];
}

void
App::run() {
    [NSApp run];
}
