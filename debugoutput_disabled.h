#ifndef DEBUGOUTPUT_DISABLED_H
#define DEBUGOUTPUT_DISABLED_H

/**
 * @file
 * @brief File with epmty debug macros
 * @ingroup g_QtGit__Submodules__Debug__DebugOutput
 */

#include <QDebug>
#include <qglobal.h>

void setDebugMessagePattern();

#define dbg while (false) QMessageLogger().noDebug()
#define dbgf while (false) QMessageLogger().noDebug()
#define AS_KV(val) (#val) << "=" << (val)

#endif // DEBUGOUTPUT_DISABLED_H
