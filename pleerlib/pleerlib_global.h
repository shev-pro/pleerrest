#ifndef PLEERLIB_GLOBAL_H
#define PLEERLIB_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(PLEERLIB_LIBRARY)
#  define PLEERLIBSHARED_EXPORT Q_DECL_EXPORT
#else
#  define PLEERLIBSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // PLEERLIB_GLOBAL_H