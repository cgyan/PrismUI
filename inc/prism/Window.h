#ifndef PRISM_WINDOW_H_
#define PRISM_WINDOW_H_

class Window {
public:
    virtual ~Window() {}
    virtual void show() = 0;
};

#endif // PRISM_WINDOW_H_
