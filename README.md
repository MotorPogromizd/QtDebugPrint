# QtDebugPrint
Clickable console messages printing support for Qt apps.

Module adds short name `dbg` to print debugging output of app.  
Use `dbg` macro in file and get clickable console message in Qt Creator
```
dbg << "hello world";
```
Program output:
```
[31.01.1970 23:59:00.001] hello world | Object:: in ../some_file.cpp:120
```
# Usage
Clone in root project folder
## Include in project
To use this library add to .pro file:
```
include(QtDebugPrint/QtDebugPrint.pri)
```
## Use in code
### Configure
Configure QDebug messages. To do that add code below in main.cpp
```
#include "QtDebugPrint/debugoutput.h"
        
int main() {
    setDebugMessagePattern();
}
```
### Use
Then in every file in project you can use:
```
#include "QtDebugPrint/debugoutput.h"
/// ...
dbg << "hello world";
```
Ang get clickable message in `Application Output` tab in Qt Creator:
```
[31.01.1970 23:59:00.001] hello world | Object:: in ../some_file.cpp:54
```
> Works ONLY in debug mode. In release mode does nothing by default. Use defines or release includes for release.
## Use in release mode
If you need release debug print for all files add this to .pro file:
```
DEFINES += RELEASE_DEBUG
```
If you need release debug print in selected fle add this to this file:
```
#include "QtDebugPrint/debugoutput_release.h"
```
instead of
```
#include "QtDebugPrint/debugoutput.h"
```
## Disable console print in file
If you need disable debug print in selected file add this to this file:
```
#include "QtDebugPrint/debugoutput_disabled.h"
```
## Use in headers
When include debug headers in .h files add
```
#include "QtDebugPrint/undefdebug.h"
```
to end of ".h". Result must be
```
// some_header.h
#ifndef SOMEHEADER_H
#define SOMEHEADER_H
#include "QtDebugPrint/debugoutput.h"
// ...some...
// ...user...
// ...code...
#include "QtDebugPrint/undefdebug.h"
#endif // SOMEHEADER_H
```
