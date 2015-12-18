/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup VelocityDesired VelocityDesired 
 * @brief Used within @ref GuidanceModule to communicate between the task computing the desired velocity and the PID loop to achieve it (running at different rates).
 *
 * Autogenerated files and functions for VelocityDesired Object
 *
 * @{ 
 *
 * @file       velocitydesired.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the VelocityDesired object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: velocitydesired.xml. 
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

#ifndef VELOCITYDESIRED_H
#define VELOCITYDESIRED_H

/* Object constants */
#define VELOCITYDESIRED_OBJID 0x9E946992
#define VELOCITYDESIRED_ISSINGLEINST 1
#define VELOCITYDESIRED_ISSETTINGS 0
#define VELOCITYDESIRED_ISPRIORITY 0
#define VELOCITYDESIRED_NUMBYTES sizeof(VelocityDesiredData)

/* Generic interface functions */
int32_t VelocityDesiredInitialize();
UAVObjHandle VelocityDesiredHandle();
void VelocityDesiredSetDefaults(UAVObjHandle obj, uint16_t instId);


/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
    float North;
    float East;
    float Down;
} __attribute__((packed)) VelocityDesiredDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes so as to avoid the potential for CPU usage faults
 * on Cortex M4F during load/store of float UAVO fields
 */
typedef VelocityDesiredDataPacked __attribute__((aligned(4))) VelocityDesiredData;
    
/* Typesafe Object access functions */
static inline int32_t VelocityDesiredGet(VelocityDesiredData *dataOut) { return UAVObjGetData(VelocityDesiredHandle(), dataOut); }
static inline int32_t VelocityDesiredSet(const VelocityDesiredData *dataIn) { return UAVObjSetData(VelocityDesiredHandle(), dataIn); }
static inline int32_t VelocityDesiredInstGet(uint16_t instId, VelocityDesiredData *dataOut) { return UAVObjGetInstanceData(VelocityDesiredHandle(), instId, dataOut); }
static inline int32_t VelocityDesiredInstSet(uint16_t instId, const VelocityDesiredData *dataIn) { return UAVObjSetInstanceData(VelocityDesiredHandle(), instId, dataIn); }
static inline int32_t VelocityDesiredConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(VelocityDesiredHandle(), queue, EV_MASK_ALL_UPDATES); }
static inline int32_t VelocityDesiredConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(VelocityDesiredHandle(), cb, EV_MASK_ALL_UPDATES); }
static inline uint16_t VelocityDesiredCreateInstance() { return UAVObjCreateInstance(VelocityDesiredHandle(), &VelocityDesiredSetDefaults); }
static inline void VelocityDesiredRequestUpdate() { UAVObjRequestUpdate(VelocityDesiredHandle()); }
static inline void VelocityDesiredRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(VelocityDesiredHandle(), instId); }
static inline void VelocityDesiredUpdated() { UAVObjUpdated(VelocityDesiredHandle()); }
static inline void VelocityDesiredInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(VelocityDesiredHandle(), instId); }
static inline void VelocityDesiredLogging() { UAVObjLogging(VelocityDesiredHandle()); }
static inline void VelocityDesiredInstLogging(uint16_t instId) { UAVObjInstanceLogging(VelocityDesiredHandle(), instId); }
static inline int32_t VelocityDesiredGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(VelocityDesiredHandle(), dataOut); }
static inline int32_t VelocityDesiredSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(VelocityDesiredHandle(), dataIn); }
static inline int8_t VelocityDesiredReadOnly() { return UAVObjReadOnly(VelocityDesiredHandle()); }

/* Field North information */

/* Field East information */

/* Field Down information */



/* Set/Get functions */
extern void VelocityDesiredNorthSet(float *NewNorth);
extern void VelocityDesiredNorthGet(float *NewNorth);
extern void VelocityDesiredEastSet(float *NewEast);
extern void VelocityDesiredEastGet(float *NewEast);
extern void VelocityDesiredDownSet(float *NewDown);
extern void VelocityDesiredDownGet(float *NewDown);


#endif // VELOCITYDESIRED_H

/**
 * @}
 * @}
 */
