/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup GPSExtendedStatus GPSExtendedStatus 
 * @brief Extended GPS status.
 *
 * Autogenerated files and functions for GPSExtendedStatus Object
 *
 * @{ 
 *
 * @file       gpsextendedstatus.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the GPSExtendedStatus object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: gpsextendedstatus.xml. 
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

#ifndef GPSEXTENDEDSTATUS_H
#define GPSEXTENDEDSTATUS_H

/* Object constants */
#define GPSEXTENDEDSTATUS_OBJID 0xEBB0477C
#define GPSEXTENDEDSTATUS_ISSINGLEINST 1
#define GPSEXTENDEDSTATUS_ISSETTINGS 0
#define GPSEXTENDEDSTATUS_ISPRIORITY 0
#define GPSEXTENDEDSTATUS_NUMBYTES sizeof(GPSExtendedStatusData)

/* Generic interface functions */
int32_t GPSExtendedStatusInitialize();
UAVObjHandle GPSExtendedStatusHandle();
void GPSExtendedStatusSetDefaults(UAVObjHandle obj, uint16_t instId);


/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
    uint32_t FlightTime;
    uint16_t Options;
    uint8_t Status;
    uint8_t BoardType[2];
    uint8_t FirmwareHash[8];
    uint8_t FirmwareTag[26];
} __attribute__((packed)) GPSExtendedStatusDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes so as to avoid the potential for CPU usage faults
 * on Cortex M4F during load/store of float UAVO fields
 */
typedef GPSExtendedStatusDataPacked __attribute__((aligned(4))) GPSExtendedStatusData;
    
/* Typesafe Object access functions */
static inline int32_t GPSExtendedStatusGet(GPSExtendedStatusData *dataOut) { return UAVObjGetData(GPSExtendedStatusHandle(), dataOut); }
static inline int32_t GPSExtendedStatusSet(const GPSExtendedStatusData *dataIn) { return UAVObjSetData(GPSExtendedStatusHandle(), dataIn); }
static inline int32_t GPSExtendedStatusInstGet(uint16_t instId, GPSExtendedStatusData *dataOut) { return UAVObjGetInstanceData(GPSExtendedStatusHandle(), instId, dataOut); }
static inline int32_t GPSExtendedStatusInstSet(uint16_t instId, const GPSExtendedStatusData *dataIn) { return UAVObjSetInstanceData(GPSExtendedStatusHandle(), instId, dataIn); }
static inline int32_t GPSExtendedStatusConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(GPSExtendedStatusHandle(), queue, EV_MASK_ALL_UPDATES); }
static inline int32_t GPSExtendedStatusConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(GPSExtendedStatusHandle(), cb, EV_MASK_ALL_UPDATES); }
static inline uint16_t GPSExtendedStatusCreateInstance() { return UAVObjCreateInstance(GPSExtendedStatusHandle(), &GPSExtendedStatusSetDefaults); }
static inline void GPSExtendedStatusRequestUpdate() { UAVObjRequestUpdate(GPSExtendedStatusHandle()); }
static inline void GPSExtendedStatusRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(GPSExtendedStatusHandle(), instId); }
static inline void GPSExtendedStatusUpdated() { UAVObjUpdated(GPSExtendedStatusHandle()); }
static inline void GPSExtendedStatusInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(GPSExtendedStatusHandle(), instId); }
static inline void GPSExtendedStatusLogging() { UAVObjLogging(GPSExtendedStatusHandle()); }
static inline void GPSExtendedStatusInstLogging(uint16_t instId) { UAVObjInstanceLogging(GPSExtendedStatusHandle(), instId); }
static inline int32_t GPSExtendedStatusGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(GPSExtendedStatusHandle(), dataOut); }
static inline int32_t GPSExtendedStatusSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(GPSExtendedStatusHandle(), dataIn); }
static inline int8_t GPSExtendedStatusReadOnly() { return UAVObjReadOnly(GPSExtendedStatusHandle()); }

/* Field FlightTime information */

/* Field Options information */

/* Field Status information */

// Enumeration options for field Status
typedef enum {
    GPSEXTENDEDSTATUS_STATUS_NONE=0,
    GPSEXTENDEDSTATUS_STATUS_GPSV9=1
} GPSExtendedStatusStatusOptions;

/* Field BoardType information */

// Number of elements for field BoardType
#define GPSEXTENDEDSTATUS_BOARDTYPE_NUMELEM 2

/* Field FirmwareHash information */

// Number of elements for field FirmwareHash
#define GPSEXTENDEDSTATUS_FIRMWAREHASH_NUMELEM 8

/* Field FirmwareTag information */

// Number of elements for field FirmwareTag
#define GPSEXTENDEDSTATUS_FIRMWARETAG_NUMELEM 26



/* Set/Get functions */
extern void GPSExtendedStatusFlightTimeSet(uint32_t *NewFlightTime);
extern void GPSExtendedStatusFlightTimeGet(uint32_t *NewFlightTime);
extern void GPSExtendedStatusOptionsSet(uint16_t *NewOptions);
extern void GPSExtendedStatusOptionsGet(uint16_t *NewOptions);
extern void GPSExtendedStatusStatusSet(uint8_t *NewStatus);
extern void GPSExtendedStatusStatusGet(uint8_t *NewStatus);
extern void GPSExtendedStatusBoardTypeSet(uint8_t *NewBoardType);
extern void GPSExtendedStatusBoardTypeGet(uint8_t *NewBoardType);
extern void GPSExtendedStatusFirmwareHashSet(uint8_t *NewFirmwareHash);
extern void GPSExtendedStatusFirmwareHashGet(uint8_t *NewFirmwareHash);
extern void GPSExtendedStatusFirmwareTagSet(uint8_t *NewFirmwareTag);
extern void GPSExtendedStatusFirmwareTagGet(uint8_t *NewFirmwareTag);


#endif // GPSEXTENDEDSTATUS_H

/**
 * @}
 * @}
 */
