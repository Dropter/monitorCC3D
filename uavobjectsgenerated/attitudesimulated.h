/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup AttitudeSimulated AttitudeSimulated 
 * @brief The simulated Attitude estimation from @ref Sensors.
 *
 * Autogenerated files and functions for AttitudeSimulated Object
 *
 * @{ 
 *
 * @file       attitudesimulated.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the AttitudeSimulated object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: attitudesimulated.xml. 
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

#ifndef ATTITUDESIMULATED_H
#define ATTITUDESIMULATED_H

/* Object constants */
#define ATTITUDESIMULATED_OBJID 0x9266CE74
#define ATTITUDESIMULATED_ISSINGLEINST 1
#define ATTITUDESIMULATED_ISSETTINGS 0
#define ATTITUDESIMULATED_ISPRIORITY 0
#define ATTITUDESIMULATED_NUMBYTES sizeof(AttitudeSimulatedData)

/* Generic interface functions */
int32_t AttitudeSimulatedInitialize();
UAVObjHandle AttitudeSimulatedHandle();
void AttitudeSimulatedSetDefaults(UAVObjHandle obj, uint16_t instId);

typedef struct __attribute__ ((__packed__)) {
    float North;
    float East;
    float Down;
}  AttitudeSimulatedVelocityData ;
typedef struct __attribute__ ((__packed__)) {
    float array[3];
}  AttitudeSimulatedVelocityDataArray ;
#define AttitudeSimulatedVelocityToArray( var ) UAVObjectFieldToArray( AttitudeSimulatedVelocityData, var )

typedef struct __attribute__ ((__packed__)) {
    float North;
    float East;
    float Down;
}  AttitudeSimulatedPositionData ;
typedef struct __attribute__ ((__packed__)) {
    float array[3];
}  AttitudeSimulatedPositionDataArray ;
#define AttitudeSimulatedPositionToArray( var ) UAVObjectFieldToArray( AttitudeSimulatedPositionData, var )


/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
    float q1;
    float q2;
    float q3;
    float q4;
    float Roll;
    float Pitch;
    float Yaw;
    AttitudeSimulatedVelocityData Velocity;
    AttitudeSimulatedPositionData Position;
} __attribute__((packed)) AttitudeSimulatedDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes so as to avoid the potential for CPU usage faults
 * on Cortex M4F during load/store of float UAVO fields
 */
typedef AttitudeSimulatedDataPacked __attribute__((aligned(4))) AttitudeSimulatedData;
    
/* Typesafe Object access functions */
static inline int32_t AttitudeSimulatedGet(AttitudeSimulatedData *dataOut) { return UAVObjGetData(AttitudeSimulatedHandle(), dataOut); }
static inline int32_t AttitudeSimulatedSet(const AttitudeSimulatedData *dataIn) { return UAVObjSetData(AttitudeSimulatedHandle(), dataIn); }
static inline int32_t AttitudeSimulatedInstGet(uint16_t instId, AttitudeSimulatedData *dataOut) { return UAVObjGetInstanceData(AttitudeSimulatedHandle(), instId, dataOut); }
static inline int32_t AttitudeSimulatedInstSet(uint16_t instId, const AttitudeSimulatedData *dataIn) { return UAVObjSetInstanceData(AttitudeSimulatedHandle(), instId, dataIn); }
static inline int32_t AttitudeSimulatedConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(AttitudeSimulatedHandle(), queue, EV_MASK_ALL_UPDATES); }
static inline int32_t AttitudeSimulatedConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(AttitudeSimulatedHandle(), cb, EV_MASK_ALL_UPDATES); }
static inline uint16_t AttitudeSimulatedCreateInstance() { return UAVObjCreateInstance(AttitudeSimulatedHandle(), &AttitudeSimulatedSetDefaults); }
static inline void AttitudeSimulatedRequestUpdate() { UAVObjRequestUpdate(AttitudeSimulatedHandle()); }
static inline void AttitudeSimulatedRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(AttitudeSimulatedHandle(), instId); }
static inline void AttitudeSimulatedUpdated() { UAVObjUpdated(AttitudeSimulatedHandle()); }
static inline void AttitudeSimulatedInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(AttitudeSimulatedHandle(), instId); }
static inline void AttitudeSimulatedLogging() { UAVObjLogging(AttitudeSimulatedHandle()); }
static inline void AttitudeSimulatedInstLogging(uint16_t instId) { UAVObjInstanceLogging(AttitudeSimulatedHandle(), instId); }
static inline int32_t AttitudeSimulatedGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(AttitudeSimulatedHandle(), dataOut); }
static inline int32_t AttitudeSimulatedSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(AttitudeSimulatedHandle(), dataIn); }
static inline int8_t AttitudeSimulatedReadOnly() { return UAVObjReadOnly(AttitudeSimulatedHandle()); }

/* Field q1 information */

/* Field q2 information */

/* Field q3 information */

/* Field q4 information */

/* Field Roll information */

/* Field Pitch information */

/* Field Yaw information */

/* Field Velocity information */

// Array element names for field Velocity
typedef enum {
    ATTITUDESIMULATED_VELOCITY_NORTH=0,
    ATTITUDESIMULATED_VELOCITY_EAST=1,
    ATTITUDESIMULATED_VELOCITY_DOWN=2
} AttitudeSimulatedVelocityElem;

// Number of elements for field Velocity
#define ATTITUDESIMULATED_VELOCITY_NUMELEM 3

/* Field Position information */

// Array element names for field Position
typedef enum {
    ATTITUDESIMULATED_POSITION_NORTH=0,
    ATTITUDESIMULATED_POSITION_EAST=1,
    ATTITUDESIMULATED_POSITION_DOWN=2
} AttitudeSimulatedPositionElem;

// Number of elements for field Position
#define ATTITUDESIMULATED_POSITION_NUMELEM 3



/* Set/Get functions */
extern void AttitudeSimulatedq1Set(float *Newq1);
extern void AttitudeSimulatedq1Get(float *Newq1);
extern void AttitudeSimulatedq2Set(float *Newq2);
extern void AttitudeSimulatedq2Get(float *Newq2);
extern void AttitudeSimulatedq3Set(float *Newq3);
extern void AttitudeSimulatedq3Get(float *Newq3);
extern void AttitudeSimulatedq4Set(float *Newq4);
extern void AttitudeSimulatedq4Get(float *Newq4);
extern void AttitudeSimulatedRollSet(float *NewRoll);
extern void AttitudeSimulatedRollGet(float *NewRoll);
extern void AttitudeSimulatedPitchSet(float *NewPitch);
extern void AttitudeSimulatedPitchGet(float *NewPitch);
extern void AttitudeSimulatedYawSet(float *NewYaw);
extern void AttitudeSimulatedYawGet(float *NewYaw);
extern void AttitudeSimulatedVelocitySet(AttitudeSimulatedVelocityData *NewVelocity);
extern void AttitudeSimulatedVelocityGet(AttitudeSimulatedVelocityData *NewVelocity);
extern void AttitudeSimulatedVelocityArraySet(float *NewVelocity);
extern void AttitudeSimulatedVelocityArrayGet(float *NewVelocity);
extern void AttitudeSimulatedPositionSet(AttitudeSimulatedPositionData *NewPosition);
extern void AttitudeSimulatedPositionGet(AttitudeSimulatedPositionData *NewPosition);
extern void AttitudeSimulatedPositionArraySet(float *NewPosition);
extern void AttitudeSimulatedPositionArrayGet(float *NewPosition);


#endif // ATTITUDESIMULATED_H

/**
 * @}
 * @}
 */