/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup VelocityState VelocityState 
 * @brief Updated by @ref StateEstimationModule, velocity relative to @ref HomeLocation.
 *
 * Autogenerated files and functions for VelocityState Object
 *
 * @{ 
 *
 * @file       velocitystate.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the VelocityState object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: velocitystate.xml. 
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

#ifndef VELOCITYSTATE_H
#define VELOCITYSTATE_H

/* Object constants */
#define VELOCITYSTATE_OBJID 0xC243686C
#define VELOCITYSTATE_ISSINGLEINST 1
#define VELOCITYSTATE_ISSETTINGS 0
#define VELOCITYSTATE_ISPRIORITY 0
#define VELOCITYSTATE_NUMBYTES sizeof(VelocityStateData)

/* Generic interface functions */
int32_t VelocityStateInitialize();
UAVObjHandle VelocityStateHandle();
void VelocityStateSetDefaults(UAVObjHandle obj, uint16_t instId);


/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
    float North;
    float East;
    float Down;
} __attribute__((packed)) VelocityStateDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes so as to avoid the potential for CPU usage faults
 * on Cortex M4F during load/store of float UAVO fields
 */
typedef VelocityStateDataPacked __attribute__((aligned(4))) VelocityStateData;
    
/* Typesafe Object access functions */
static inline int32_t VelocityStateGet(VelocityStateData *dataOut) { return UAVObjGetData(VelocityStateHandle(), dataOut); }
static inline int32_t VelocityStateSet(const VelocityStateData *dataIn) { return UAVObjSetData(VelocityStateHandle(), dataIn); }
static inline int32_t VelocityStateInstGet(uint16_t instId, VelocityStateData *dataOut) { return UAVObjGetInstanceData(VelocityStateHandle(), instId, dataOut); }
static inline int32_t VelocityStateInstSet(uint16_t instId, const VelocityStateData *dataIn) { return UAVObjSetInstanceData(VelocityStateHandle(), instId, dataIn); }
static inline int32_t VelocityStateConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(VelocityStateHandle(), queue, EV_MASK_ALL_UPDATES); }
static inline int32_t VelocityStateConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(VelocityStateHandle(), cb, EV_MASK_ALL_UPDATES); }
static inline uint16_t VelocityStateCreateInstance() { return UAVObjCreateInstance(VelocityStateHandle(), &VelocityStateSetDefaults); }
static inline void VelocityStateRequestUpdate() { UAVObjRequestUpdate(VelocityStateHandle()); }
static inline void VelocityStateRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(VelocityStateHandle(), instId); }
static inline void VelocityStateUpdated() { UAVObjUpdated(VelocityStateHandle()); }
static inline void VelocityStateInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(VelocityStateHandle(), instId); }
static inline void VelocityStateLogging() { UAVObjLogging(VelocityStateHandle()); }
static inline void VelocityStateInstLogging(uint16_t instId) { UAVObjInstanceLogging(VelocityStateHandle(), instId); }
static inline int32_t VelocityStateGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(VelocityStateHandle(), dataOut); }
static inline int32_t VelocityStateSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(VelocityStateHandle(), dataIn); }
static inline int8_t VelocityStateReadOnly() { return UAVObjReadOnly(VelocityStateHandle()); }

/* Field North information */

/* Field East information */

/* Field Down information */



/* Set/Get functions */
extern void VelocityStateNorthSet(float *NewNorth);
extern void VelocityStateNorthGet(float *NewNorth);
extern void VelocityStateEastSet(float *NewEast);
extern void VelocityStateEastGet(float *NewEast);
extern void VelocityStateDownSet(float *NewDown);
extern void VelocityStateDownGet(float *NewDown);


#endif // VELOCITYSTATE_H

/**
 * @}
 * @}
 */
