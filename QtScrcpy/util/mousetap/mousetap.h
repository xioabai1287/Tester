#ifndef MOUSETAP_H
#define MOUSETAP_H
#include <QRect>

class QWidget;
class MouseTap {
public:
    static MouseTap* getInstance();
    virtual void initMouseEventTap() = 0;
    virtual void quitMouseEventTap() = 0;
    virtual void enableMouseEventTap(QRect rc, bool enabled) = 0;

private:
    static MouseTap *s_instance;
};
#endif // MOUSETAP_H
