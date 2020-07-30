#include <iostream>
#include <QtGlobal>
#include <QString>

std::ostream &operator <<(std::ostream &os, const QString &str) {
    os << qPrintable(str);
    return os;
}

void setDebugMessagePattern() {
    qSetMessagePattern(
                "[%{time dd.MM.yyyy hh:mm:ss.zzz}] %{message} | "
                "Object:: in %{file}:%{line}"
                );
}
