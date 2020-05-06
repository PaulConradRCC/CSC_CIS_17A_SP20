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
	${OBJECTDIR}/BasePlusCommission.o \
	${OBJECTDIR}/Employee.o \
	${OBJECTDIR}/EmployeeDemo.o \
	${OBJECTDIR}/HourlyEmployee.o


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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/employeedemo.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/employeedemo.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/employeedemo ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/BasePlusCommission.o: BasePlusCommission.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++98 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/BasePlusCommission.o BasePlusCommission.cpp

${OBJECTDIR}/Employee.o: Employee.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++98 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Employee.o Employee.cpp

${OBJECTDIR}/EmployeeDemo.o: EmployeeDemo.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++98 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/EmployeeDemo.o EmployeeDemo.cpp

${OBJECTDIR}/HourlyEmployee.o: HourlyEmployee.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++98 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/HourlyEmployee.o HourlyEmployee.cpp

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
