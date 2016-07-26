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
CND_PLATFORM=GNU-Linux
CND_DLIB_EXT=so
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/87989ef3/databaseCenter.o \
	${OBJECTDIR}/_ext/87989ef3/demo_monitor_constants.o \
	${OBJECTDIR}/_ext/87989ef3/demo_monitor_types.o \
	${OBJECTDIR}/get_computer_info.o \
	${OBJECTDIR}/main_push_monitor_data_client.o \
	${OBJECTDIR}/sigar/linux_sigar.o \
	${OBJECTDIR}/sigar/sigar.o \
	${OBJECTDIR}/sigar/sigar_cache.o \
	${OBJECTDIR}/sigar/sigar_fileinfo.o \
	${OBJECTDIR}/sigar/sigar_format.o \
	${OBJECTDIR}/sigar/sigar_getline.o \
	${OBJECTDIR}/sigar/sigar_ptql.o \
	${OBJECTDIR}/sigar/sigar_signal.o \
	${OBJECTDIR}/sigar/sigar_util.o


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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/push_monitor_data

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/push_monitor_data: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/push_monitor_data ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/_ext/87989ef3/databaseCenter.o: ../thrift_gen_code/databaseCenter.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/87989ef3
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/87989ef3/databaseCenter.o ../thrift_gen_code/databaseCenter.cpp

${OBJECTDIR}/_ext/87989ef3/demo_monitor_constants.o: ../thrift_gen_code/demo_monitor_constants.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/87989ef3
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/87989ef3/demo_monitor_constants.o ../thrift_gen_code/demo_monitor_constants.cpp

${OBJECTDIR}/_ext/87989ef3/demo_monitor_types.o: ../thrift_gen_code/demo_monitor_types.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/87989ef3
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/87989ef3/demo_monitor_types.o ../thrift_gen_code/demo_monitor_types.cpp

${OBJECTDIR}/get_computer_info.o: get_computer_info.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/get_computer_info.o get_computer_info.cpp

${OBJECTDIR}/main_push_monitor_data_client.o: main_push_monitor_data_client.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main_push_monitor_data_client.o main_push_monitor_data_client.cpp

${OBJECTDIR}/sigar/linux_sigar.o: sigar/linux_sigar.c 
	${MKDIR} -p ${OBJECTDIR}/sigar
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/sigar/linux_sigar.o sigar/linux_sigar.c

${OBJECTDIR}/sigar/sigar.o: sigar/sigar.c 
	${MKDIR} -p ${OBJECTDIR}/sigar
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/sigar/sigar.o sigar/sigar.c

${OBJECTDIR}/sigar/sigar_cache.o: sigar/sigar_cache.c 
	${MKDIR} -p ${OBJECTDIR}/sigar
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/sigar/sigar_cache.o sigar/sigar_cache.c

${OBJECTDIR}/sigar/sigar_fileinfo.o: sigar/sigar_fileinfo.c 
	${MKDIR} -p ${OBJECTDIR}/sigar
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/sigar/sigar_fileinfo.o sigar/sigar_fileinfo.c

${OBJECTDIR}/sigar/sigar_format.o: sigar/sigar_format.c 
	${MKDIR} -p ${OBJECTDIR}/sigar
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/sigar/sigar_format.o sigar/sigar_format.c

${OBJECTDIR}/sigar/sigar_getline.o: sigar/sigar_getline.c 
	${MKDIR} -p ${OBJECTDIR}/sigar
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/sigar/sigar_getline.o sigar/sigar_getline.c

${OBJECTDIR}/sigar/sigar_ptql.o: sigar/sigar_ptql.c 
	${MKDIR} -p ${OBJECTDIR}/sigar
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/sigar/sigar_ptql.o sigar/sigar_ptql.c

${OBJECTDIR}/sigar/sigar_signal.o: sigar/sigar_signal.c 
	${MKDIR} -p ${OBJECTDIR}/sigar
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/sigar/sigar_signal.o sigar/sigar_signal.c

${OBJECTDIR}/sigar/sigar_util.o: sigar/sigar_util.c 
	${MKDIR} -p ${OBJECTDIR}/sigar
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/sigar/sigar_util.o sigar/sigar_util.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/push_monitor_data

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
