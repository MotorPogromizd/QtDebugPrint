#ifndef DEBUGOUTPUT_H
#define DEBUGOUTPUT_H

/**
 * @file
 * @brief File with debug macros
 * @ingroup g_QtGit__Submodules__Debug__DebugOutput
 */

#include <QDebug>
#include <qglobal.h>

/**
 * @brief setDebugMessagePattern Sets message pattern
 * @code
 * qSetMessagePattern(
 *     "[%{time dd.MM.yyyy hh:mm:ss.zzz}] %{message} | "
 *     "Object:: in %{file}:%{line}"
 *     );
 * @endcode
 * @ingroup g_QtGit__Submodules__Debug__DebugOutput
 */
void setDebugMessagePattern();

#if !defined(QT_NO_DEBUG) || defined(RELEASE_DEBUG)

#include "debugoutput_release.h"

#else
#define dbg while (false) QMessageLogger().noDebug()
#define dbgf while (false) QMessageLogger().noDebug()
#define AS_KV(val) (#val) << "=" << (val)
#endif



#endif // DEBUGOUTPUT_H
