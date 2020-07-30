#ifndef DEBUGOUTPUT_RELEASE_H
#define DEBUGOUTPUT_RELEASE_H

#include <QDebug>
#include <qglobal.h>

/**
 * @file
 * @brief File with debug macros
 * @ingroup g_QtGit__Submodules__Debug__DebugOutput
 */

/**
 * @brief AS_KV (as key-value) macro add variable name to variable value
 * @details output: value = 4
 * @code
 * int namedVariable = 4;
 * qDebug() << AS_KV(namedVariable); // prints: "namedVariable = 4"
 * @endcode
 * @ingroup g_QtGit__Submodules__Debug__DebugOutput
 */
#define AS_KV(val) (#val) << "=" << (val)

/**
 * @brief qDebug() macro prints clickable message to output
 * @details output: 11:28:51.100 Object:: in ../../PathToFile/main.cpp:26: debug message
 * @code
 * dbg << "debug message"
 * @endcode
 * @ingroup g_QtGit__Submodules__Debug__DebugOutput
 */
#define dbg qDebug() /*\
      << qPrintable(QTime::currentTime().toString("HH:mm:ss.zzz")) \
      << qPrintable(QString("Object:: in ") + QString(__FILE__) \
      + QString(":") + QString::number(__LINE__) + ": ")*/


/**
 * @brief dbgnt macro prints clickable message to output without time
 * @details output: file:///../../PathToFile/main.cpp:27: debug message
 * @code
 * dbgnt << "debug message"
 * @endcode
 */

/*#define dbg qDebug() \
    << qPrintable(QString("file:///") \
    + QString(__FILE__) + QString(":") \
    + QString::number(__LINE__) + ":")*/


/**
 * @brief qDebug()f macro prints clickable message to output with function name
 * @details output: 11:28:51.101 Object::main() in ../../PathToFile/main.cpp:28: debug message
 * @code
 * dbgf << "debug message"
 * @ingroup g_QtGit__Submodules__Debug__DebugOutput
 * @endcode
 */
#define dbgf qDebug() \
    << qPrintable(QString(__FUNCTION__) + ": ")
/*
#define dbgf qDebug() \
    << qPrintable(QTime::currentTime().toString("HH:mm:ss.zzz")) \
    << qPrintable(QString("Object::" + QString(__FUNCTION__) + "() in ") + QString(__FILE__) \
    + QString(":") + QString::number(__LINE__) + ": ")
*/


//*/
/*#include <iostream>

std::ostream &operator <<(std::ostream &os, const QString &str);

#define qDebug() std::cout << std::endl \
    << qPrintable(QTime::currentTime().toString("HH:mm:ss.zzz")) \
    << " " << __FILE__ << " " \
    << qPrintable(QString("(") + QString::number(__LINE__) + "): ") //<< qDebug().space()
//qPrintable(QString::number(__LINE__))
#define qDebug()f std::cout << std::endl \
    << qPrintable(QTime::currentTime().toString("HH:mm:ss.zzz")) \
    << " " << __FILE__ << " " \
    << qPrintable(QString(__FUNCTION__) + "() ") \
    << qPrintable(QString("(") + QString::number(__LINE__) + "): ") //<< qDebug().space()
*/

#endif // DEBUGOUTPUT_RELEASE_H
