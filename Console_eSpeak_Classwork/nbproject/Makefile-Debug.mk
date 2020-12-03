#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin-Windows
CND_DLIB_EXT=dll
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/7252bbe6/Archivos.o \
	${OBJECTDIR}/_ext/7252bbe6/Imprimir.o \
	${OBJECTDIR}/_ext/7252bbe6/Mensaje.o \
	${OBJECTDIR}/_ext/7252bbe6/main.o \
	${OBJECTDIR}/ManejadorMensaje.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/console_espeak_classwork.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/console_espeak_classwork.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/console_espeak_classwork ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/_ext/7252bbe6/Archivos.o: ../Programacion_3_Class/Console_eSpeak/Archivos.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/7252bbe6
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/7252bbe6/Archivos.o ../Programacion_3_Class/Console_eSpeak/Archivos.cpp

${OBJECTDIR}/_ext/7252bbe6/Imprimir.o: ../Programacion_3_Class/Console_eSpeak/Imprimir.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/7252bbe6
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/7252bbe6/Imprimir.o ../Programacion_3_Class/Console_eSpeak/Imprimir.cpp

${OBJECTDIR}/_ext/7252bbe6/Mensaje.o: ../Programacion_3_Class/Console_eSpeak/Mensaje.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/7252bbe6
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/7252bbe6/Mensaje.o ../Programacion_3_Class/Console_eSpeak/Mensaje.cpp

${OBJECTDIR}/_ext/7252bbe6/main.o: ../Programacion_3_Class/Console_eSpeak/main.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/7252bbe6
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/7252bbe6/main.o ../Programacion_3_Class/Console_eSpeak/main.cpp

${OBJECTDIR}/ManejadorMensaje.o: ManejadorMensaje.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ManejadorMensaje.o ManejadorMensaje.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
