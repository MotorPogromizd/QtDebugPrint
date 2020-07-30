#ifndef DEBUGOUTPUT_RELEASE_H
#define DEBUGOUTPUT_RELEASE_H

#include <QDebug>
#include <qglobal.h>

/**
 * @file
 * @brief File with debug macros
 */

/**
 * @brief AS_KV (as key-value) macro add variable name to variable value
 * @details output: value = 4
 * @code
 * int namedVariable = 4;
 * qDebug() << AS_KV(namedVariable); // prints: "namedVariable = 4"
 * @endcode
 */
#define AS_KV(val) (#val) << "=" << (val)

/**
 * @brief qDebug() macro prints clickable message to output
 * @details output: 11:28:51.100 Object:: in ../../PathToFile/main.cpp:26: debug message
 * @code
 * dbg << "debug message"
 * @endcode
 */
#define dbg qDebug()

/**
 * @brief qDebug()f macro prints clickable message to output with function name
 * @details output: 11:28:51.101 Object::main() in ../../PathToFile/main.cpp:28: debug message
 * @code
 * dbgf << "debug message"
 * @endcode
 */
#define dbgf qDebug() \
    << qPrintable(QString(__FUNCTION__) + ": ")


#endif // DEBUGOUTPUT_RELEASE_H
