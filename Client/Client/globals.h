#ifndef GLOBALS
#define GLOBALS

#define MAX_BUFFSIZE 1024 * 5000

#include <QIODevice>
#include <QBuffer>
#include <QAudioOutput>
#include <QSemaphore>

extern QIODevice *ioOutput;
extern QBuffer *buffer;
extern QAudioOutput *audioOutput;
extern QSemaphore sem1;
extern QSemaphore sem2;

#endif // GLOBALS

