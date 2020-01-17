AC_INIT([amhello], [3.1], [bug-automake@gnu.org])
AM_INIT_AUTOMAKE([-Wall -Werror foreign])
#AC_PROG_CC

AC_CONFIG_HEADERS([config.h])
AC_ARG_VAR(ARFLAGS, [Flags for the archiver, defaults to <cr> if not set])
AC_ARG_VAR(HHHHHHHHHH, [DDDDDDDDDDDDDDDDDDDD for the archiver, defaults to <cr> if not set])
AH_TOP([#ifndef BITCOIN_CONFIG_H])
AH_TOP([#define BITCOIN_CONFIG_H])
AH_BOTTOM([#endif //BITCOIN_CONFIG_H])
AC_PATH_PROG(CCACHE,ccache)
AC_PROG_CXX
AX_CXX_COMPILE_STDCXX_11([noext], [mandatory], [nodefault])
# MM_AX_CXX_COMPILE_STDCXX_11([noext],[mandatory])
define(_VAR, MYVAL)
_JJJ=HHH
AC_CANONICAL_HOST
echo "x${ARFLAGS+set}"
echo "_______________________________________"
if test "x${ARFLAGS+set}" != "xset"; then
  ARFLAGS="cr"
fi
echo "${PATH}_VAR _JJJ"
AC_CONFIG_FILES([
 Makefile
 src/Makefile
])
AC_OUTPUT
