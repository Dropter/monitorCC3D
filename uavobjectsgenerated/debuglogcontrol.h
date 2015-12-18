/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup DebugLogControl DebugLogControl 
 * @brief Log Control Object - Used to issue commands to the on board logging system
 *
 * Autogenerated files and functions for DebugLogControl Object
 *
 * @{ 
 *
 * @file       debuglogcontrol.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the DebugLogControl object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: debuglogcontrol.xml. 
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

#ifndef DEBUGLOGCONTROL_H
#define DEBUGLOGCONTROL_H

/* Object constants */
#define DEBUGLOGCONTROL_OBJID 0xC39642FC
#define DEBUGLOGCONTROL_ISSINGLEINST 1
#define DEBUGLOGCONTROL_ISSETTINGS 0
#define DEBUGLOGCONTROL_ISPRIORITY 0
#define DEBUGLOGCONTROL_NUMBYTES sizeof(DebugLogControlData)

/* Generic interface functions */
int32_t DebugLogControlInitialize();
UAVObjHandle DebugLogControlHandle();
void DebugLogControlSetDefaults(UAVObjHandle obj, uint16_t instId);


/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
    uint16_t Flight;
    uint16_t Entry;
    uint8_t Operation;
} __attribute__((packed)) DebugLogControlDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes so as to avoid the potential for CPU usage faults
 * on Cortex M4F during load/store of float UAVO fields
 */
typedef DebugLogControlDataPacked __attribute__((aligned(4))) DebugLogControlData;
    
/* Typesafe Object access functions */
static inline int32_t DebugLogControlGet(DebugLogControlData *dataOut) { return UAVObjGetData(DebugLogControlHandle(), dataOut); }
static inline int32_t DebugLogControlSet(const DebugLogControlData *dataIn) { return UAVObjSetData(DebugLogControlHandle(), dataIn); }
static inline int32_t DebugLogControlInstGet(uint16_t instId, DebugLogControlData *dataOut) { return UAVObjGetInstanceData(DebugLogControlHandle(), instId, dataOut); }
static inline int32_t DebugLogControlInstSet(uint16_t instId, const DebugLogControlData *dataIn) { return UAVObjSetInstanceData(DebugLogControlHandle(), instId, dataIn); }
static inline int32_t DebugLogControlConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(DebugLogControlHandle(), queue, EV_MASK_ALL_UPDATES); }
static inline int32_t DebugLogControlConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(DebugLogControlHandle(), cb, EV_MASK_ALL_UPDATES); }
static inline uint16_t DebugLogControlCreateInstance() { return UAVObjCreateInstance(DebugLogControlHandle(), &DebugLogControlSetDefaults); }
static inline void DebugLogControlRequestUpdate() { UAVObjRequestUpdate(DebugLogControlHandle()); }
static inline void DebugLogControlRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(DebugLogControlHandle(), instId); }
static inline void DebugLogControlUpdated() { UAVObjUpdated(DebugLogControlHandle()); }
static inline void DebugLogControlInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(DebugLogControlHandle(), instId); }
static inline void DebugLogControlLogging() { UAVObjLogging(DebugLogControlHandle()); }
static inline void DebugLogControlInstLogging(uint16_t instId) { UAVObjInstanceLogging(DebugLogControlHandle(), instId); }
static inline int32_t DebugLogControlGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(DebugLogControlHandle(), dataOut); }
static inline int32_t DebugLogControlSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(DebugLogControlHandle(), dataIn); }
static inline int8_t DebugLogControlReadOnly() { return UAVObjReadOnly(DebugLogControlHandle()); }

/* Field Flight information */

/* Field Entry information */

/* Field Operation information */

// Enumeration options for field Operation
typedef enum {
    DEBUGLOGCONTROL_OPERATION_NONE=0,
    DEBUGLOGCONTROL_OPERATION_RETRIEVE=1,
    DEBUGLOGCONTROL_OPERATION_FORMATFLASH=2
} DebugLogControlOperationOptions;



/* Set/Get functions */
extern void DebugLogControlFlightSet(uint16_t *NewFlight);
extern void DebugLogControlFlightGet(uint16_t *NewFlight);
extern void DebugLogControlEntrySet(uint16_t *NewEntry);
extern void DebugLogControlEntryGet(uint16_t *NewEntry);
extern void DebugLogControlOperationSet(uint8_t *NewOperation);
extern void DebugLogControlOperationGet(uint8_t *NewOperation);


#endif // DEBUGLOGCONTROL_H

/**
 * @}
 * @}
 */
