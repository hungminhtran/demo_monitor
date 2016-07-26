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
CND_CONF=thrift_kyotocabinet_test
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
	${OBJECTDIR}/databaseTimelapseWrapper.o \
	${OBJECTDIR}/main_databaseCenter_server.o

# Test Directory
TESTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}/tests

# Test Files
TESTFILES= \
	${TESTDIR}/TestFiles/f1

# Test Object Files
TESTOBJECTFILES= \
	${TESTDIR}/tests/databaseTLWrapper_test.o

# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=-std=c++11
CXXFLAGS=-std=c++11

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/data_center

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/data_center: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/data_center ${OBJECTFILES} ${LDLIBSOPTIONS} -lthrift -lboost_system -lkyotocabinet

${OBJECTDIR}/_ext/87989ef3/databaseCenter.o: ../thrift_gen_code/databaseCenter.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/87989ef3
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/87989ef3/databaseCenter.o ../thrift_gen_code/databaseCenter.cpp

${OBJECTDIR}/_ext/87989ef3/demo_monitor_constants.o: ../thrift_gen_code/demo_monitor_constants.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/87989ef3
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/87989ef3/demo_monitor_constants.o ../thrift_gen_code/demo_monitor_constants.cpp

${OBJECTDIR}/_ext/87989ef3/demo_monitor_types.o: ../thrift_gen_code/demo_monitor_types.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/87989ef3
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/87989ef3/demo_monitor_types.o ../thrift_gen_code/demo_monitor_types.cpp

${OBJECTDIR}/databaseTimelapseWrapper.o: databaseTimelapseWrapper.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/databaseTimelapseWrapper.o databaseTimelapseWrapper.cpp

${OBJECTDIR}/main_databaseCenter_server.o: main_databaseCenter_server.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main_databaseCenter_server.o main_databaseCenter_server.cpp

# Subprojects
.build-subprojects:

# Build Test Targets
.build-tests-conf: .build-tests-subprojects .build-conf ${TESTFILES}
.build-tests-subprojects:

${TESTDIR}/TestFiles/f1: ${TESTDIR}/tests/databaseTLWrapper_test.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc} -lboost_system  -o ${TESTDIR}/TestFiles/f1 $^ ${LDLIBSOPTIONS} `pkg-config --libs thrift` `pkg-config --libs kyotocabinet`   


${TESTDIR}/tests/databaseTLWrapper_test.o: tests/databaseTLWrapper_test.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/databaseTLWrapper_test.o tests/databaseTLWrapper_test.cpp


${OBJECTDIR}/_ext/87989ef3/databaseCenter_nomain.o: ${OBJECTDIR}/_ext/87989ef3/databaseCenter.o ../thrift_gen_code/databaseCenter.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/87989ef3
	@NMOUTPUT=`${NM} ${OBJECTDIR}/_ext/87989ef3/databaseCenter.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/87989ef3/databaseCenter_nomain.o ../thrift_gen_code/databaseCenter.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/_ext/87989ef3/databaseCenter.o ${OBJECTDIR}/_ext/87989ef3/databaseCenter_nomain.o;\
	fi

${OBJECTDIR}/_ext/87989ef3/demo_monitor_constants_nomain.o: ${OBJECTDIR}/_ext/87989ef3/demo_monitor_constants.o ../thrift_gen_code/demo_monitor_constants.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/87989ef3
	@NMOUTPUT=`${NM} ${OBJECTDIR}/_ext/87989ef3/demo_monitor_constants.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/87989ef3/demo_monitor_constants_nomain.o ../thrift_gen_code/demo_monitor_constants.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/_ext/87989ef3/demo_monitor_constants.o ${OBJECTDIR}/_ext/87989ef3/demo_monitor_constants_nomain.o;\
	fi

${OBJECTDIR}/_ext/87989ef3/demo_monitor_types_nomain.o: ${OBJECTDIR}/_ext/87989ef3/demo_monitor_types.o ../thrift_gen_code/demo_monitor_types.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/87989ef3
	@NMOUTPUT=`${NM} ${OBJECTDIR}/_ext/87989ef3/demo_monitor_types.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/87989ef3/demo_monitor_types_nomain.o ../thrift_gen_code/demo_monitor_types.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/_ext/87989ef3/demo_monitor_types.o ${OBJECTDIR}/_ext/87989ef3/demo_monitor_types_nomain.o;\
	fi

${OBJECTDIR}/databaseTimelapseWrapper_nomain.o: ${OBJECTDIR}/databaseTimelapseWrapper.o databaseTimelapseWrapper.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/databaseTimelapseWrapper.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/databaseTimelapseWrapper_nomain.o databaseTimelapseWrapper.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/databaseTimelapseWrapper.o ${OBJECTDIR}/databaseTimelapseWrapper_nomain.o;\
	fi

${OBJECTDIR}/main_databaseCenter_server_nomain.o: ${OBJECTDIR}/main_databaseCenter_server.o main_databaseCenter_server.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/main_databaseCenter_server.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main_databaseCenter_server_nomain.o main_databaseCenter_server.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/main_databaseCenter_server.o ${OBJECTDIR}/main_databaseCenter_server_nomain.o;\
	fi

# Run Test Targets
.test-conf:
	@if [ "${TEST}" = "" ]; \
	then  \
	    ${TESTDIR}/TestFiles/f1 || true; \
	else  \
	    ./${TEST} || true; \
	fi

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/data_center

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
