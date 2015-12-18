/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup PathAction PathAction 
 * @brief A waypoint command the pathplanner is to use at a certain waypoint
 *
 * Autogenerated files and functions for PathAction Object
 *
 * @{ 
 *
 * @file       pathaction.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the PathAction object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: pathaction.xml. 
 *             This is an automatically generated file.
 *             DO NOT modify manually.
 *
 * @see        The GNU Public License (GPL) Version 3
 *
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#ifndef PATHACTION_H
#define PATHACTION_H

/* Object constants */
#define PATHACTION_OBJID 0x2472A0AE
#define PATHACTION_ISSINGLEINST 0
#define PATHACTION_ISSETTINGS 0
#define PATHACTION_ISPRIORITY 0
#define PATHACTION_NUMBYTES sizeof(PathActionData)

/* Generic interface functions */
int32_t PathActionInitialize();
UAVObjHandle PathActionHandle();
void PathActionSetDefaults(UAVObjHandle obj, uint16_t instId);


/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
    float ModeParameters[4];
    float ConditionParameters[4];
    int16_t JumpDestination;
    int16_t ErrorDestination;
    uint8_t Mode;
    uint8_t EndCondition;
    uint8_t Command;
} __attribute__((packed)) PathActionDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes so as to avoid the potential for CPU usage faults
 * on Cortex M4F during load/store of float UAVO fields
 */
typedef PathActionDataPacked __attribute__((aligned(4))) PathActionData;
    
/* Typesafe Object access functions */
static inline int32_t PathActionGet(PathActionData *dataOut) { return UAVObjGetData(PathActionHandle(), dataOut); }
static inline int32_t PathActionSet(const PathActionData *dataIn) { return UAVObjSetData(PathActionHandle(), dataIn); }
static inline int32_t PathActionInstGet(uint16_t instId, PathActionData *dataOut) { return UAVObjGetInstanceData(PathActionHandle(), instId, dataOut); }
static inline int32_t PathActionInstSet(uint16_t instId, const PathActionData *dataIn) { return UAVObjSetInstanceData(PathActionHandle(), instId, dataIn); }
static inline int32_t PathActionConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(PathActionHandle(), queue, EV_MASK_ALL_UPDATES); }
static inline int32_t PathActionConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(PathActionHandle(), cb, EV_MASK_ALL_UPDATES); }
static inline uint16_t PathActionCreateInstance() { return UAVObjCreateInstance(PathActionHandle(), &PathActionSetDefaults); }
static inline void PathActionRequestUpdate() { UAVObjRequestUpdate(PathActionHandle()); }
static inline void PathActionRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(PathActionHandle(), instId); }
static inline void PathActionUpdated() { UAVObjUpdated(PathActionHandle()); }
static inline void PathActionInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(PathActionHandle(), instId); }
static inline void PathActionLogging() { UAVObjLogging(PathActionHandle()); }
static inline void PathActionInstLogging(uint16_t instId) { UAVObjInstanceLogging(PathActionHandle(), instId); }
static inline int32_t PathActionGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(PathActionHandle(), dataOut); }
static inline int32_t PathActionSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(PathActionHandle(), dataIn); }
static inline int8_t PathActionReadOnly() { return UAVObjReadOnly(PathActionHandle()); }

/* Field ModeParameters information */

// Number of elements for field ModeParameters
#define PATHACTION_MODEPARAMETERS_NUMELEM 4

/* Field ConditionParameters information */

// Number of elements for field ConditionParameters
#define PATHACTION_CONDITIONPARAMETERS_NUMELEM 4

/* Field JumpDestination information */

/* Field ErrorDestination information */

/* Field Mode information */

// Enumeration options for field Mode
typedef enum {
    PATHACTION_MODE_FLYENDPOINT=0,
    PATHACTION_MODE_FLYVECTOR=1,
    PATHACTION_MODE_FLYCIRCLERIGHT=2,
    PATHACTION_MODE_FLYCIRCLELEFT=3,
    PATHACTION_MODE_DRIVEENDPOINT=4,
    PATHACTION_MODE_DRIVEVECTOR=5,
    PATHACTION_MODE_DRIVECIRCLELEFT=6,
    PATHACTION_MODE_DRIVECIRCLERIGHT=7,
    PATHACTION_MODE_FIXEDATTITUDE=8,
    PATHACTION_MODE_SETACCESSORY=9,
    PATHACTION_MODE_DISARMALARM=10
} PathActionModeOptions;

/* Field EndCondition information */

// Enumeration options for field EndCondition
typedef enum {
    PATHACTION_ENDCONDITION_NONE=0,
    PATHACTION_ENDCONDITION_TIMEOUT=1,
    PATHACTION_ENDCONDITION_DISTANCETOTARGET=2,
    PATHACTION_ENDCONDITION_LEGREMAINING=3,
    PATHACTION_ENDCONDITION_BELOWERROR=4,
    PATHACTION_ENDCONDITION_ABOVEALTITUDE=5,
    PATHACTION_ENDCONDITION_ABOVESPEED=6,
    PATHACTION_ENDCONDITION_POINTINGTOWARDSNEXT=7,
    PATHACTION_ENDCONDITION_PYTHONSCRIPT=8,
    PATHACTION_ENDCONDITION_IMMEDIATE=9
} PathActionEndConditionOptions;

/* Field Command information */

// Enumeration options for field Command
typedef enum {
    PATHACTION_COMMAND_ONCONDITIONNEXTWAYPOINT=0,
    PATHACTION_COMMAND_ONNOTCONDITIONNEXTWAYPOINT=1,
    PATHACTION_COMMAND_ONCONDITIONJUMPWAYPOINT=2,
    PATHACTION_COMMAND_ONNOTCONDITIONJUMPWAYPOINT=3,
    PATHACTION_COMMAND_IFCONDITIONJUMPWAYPOINTELSENEXTWAYPOINT=4
} PathActionCommandOptions;



/* Set/Get functions */
extern void PathActionModeParametersSet(float *NewModeParameters);
extern void PathActionModeParametersGet(float *NewModeParameters);
extern void PathActionConditionParametersSet(float *NewConditionParameters);
extern void PathActionConditionParametersGet(float *NewConditionParameters);
extern void PathActionJumpDestinationSet(int16_t *NewJumpDestination);
extern void PathActionJumpDestinationGet(int16_t *NewJumpDestination);
extern void PathActionErrorDestinationSet(int16_t *NewErrorDestination);
extern void PathActionErrorDestinationGet(int16_t *NewErrorDestination);
extern void PathActionModeSet(uint8_t *NewMode);
extern void PathActionModeGet(uint8_t *NewMode);
extern void PathActionEndConditionSet(uint8_t *NewEndCondition);
extern void PathActionEndConditionGet(uint8_t *NewEndCondition);
extern void PathActionCommandSet(uint8_t *NewCommand);
extern void PathActionCommandGet(uint8_t *NewCommand);


#endif // PATHACTION_H

/**
 * @}
 * @}
 */
