/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup ManualControlSettings ManualControlSettings 
 * @brief Settings to indicate how to decode receiver input by @ref ManualControlModule.
 *
 * Autogenerated files and functions for ManualControlSettings Object
 *
 * @{ 
 *
 * @file       manualcontrolsettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the ManualControlSettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: manualcontrolsettings.xml. 
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

#ifndef MANUALCONTROLSETTINGS_H
#define MANUALCONTROLSETTINGS_H

/* Object constants */
#define MANUALCONTROLSETTINGS_OBJID 0x28801F10
#define MANUALCONTROLSETTINGS_ISSINGLEINST 1
#define MANUALCONTROLSETTINGS_ISSETTINGS 1
#define MANUALCONTROLSETTINGS_ISPRIORITY 0
#define MANUALCONTROLSETTINGS_NUMBYTES sizeof(ManualControlSettingsData)

/* Generic interface functions */
int32_t ManualControlSettingsInitialize();
UAVObjHandle ManualControlSettingsHandle();
void ManualControlSettingsSetDefaults(UAVObjHandle obj, uint16_t instId);

typedef struct __attribute__ ((__packed__)) {
    float Throttle;
    float Roll;
    float Pitch;
    float Yaw;
    float Collective;
    float Accessory0;
    float Accessory1;
    float Accessory2;
}  ManualControlSettingsFailsafeChannelData ;
typedef struct __attribute__ ((__packed__)) {
    float array[8];
}  ManualControlSettingsFailsafeChannelDataArray ;
#define ManualControlSettingsFailsafeChannelToArray( var ) UAVObjectFieldToArray( ManualControlSettingsFailsafeChannelData, var )

typedef struct __attribute__ ((__packed__)) {
    int16_t Throttle;
    int16_t Roll;
    int16_t Pitch;
    int16_t Yaw;
    int16_t FlightMode;
    int16_t Collective;
    int16_t Accessory0;
    int16_t Accessory1;
    int16_t Accessory2;
}  ManualControlSettingsChannelMinData ;
typedef struct __attribute__ ((__packed__)) {
    int16_t array[9];
}  ManualControlSettingsChannelMinDataArray ;
#define ManualControlSettingsChannelMinToArray( var ) UAVObjectFieldToArray( ManualControlSettingsChannelMinData, var )

typedef struct __attribute__ ((__packed__)) {
    int16_t Throttle;
    int16_t Roll;
    int16_t Pitch;
    int16_t Yaw;
    int16_t FlightMode;
    int16_t Collective;
    int16_t Accessory0;
    int16_t Accessory1;
    int16_t Accessory2;
}  ManualControlSettingsChannelNeutralData ;
typedef struct __attribute__ ((__packed__)) {
    int16_t array[9];
}  ManualControlSettingsChannelNeutralDataArray ;
#define ManualControlSettingsChannelNeutralToArray( var ) UAVObjectFieldToArray( ManualControlSettingsChannelNeutralData, var )

typedef struct __attribute__ ((__packed__)) {
    int16_t Throttle;
    int16_t Roll;
    int16_t Pitch;
    int16_t Yaw;
    int16_t FlightMode;
    int16_t Collective;
    int16_t Accessory0;
    int16_t Accessory1;
    int16_t Accessory2;
}  ManualControlSettingsChannelMaxData ;
typedef struct __attribute__ ((__packed__)) {
    int16_t array[9];
}  ManualControlSettingsChannelMaxDataArray ;
#define ManualControlSettingsChannelMaxToArray( var ) UAVObjectFieldToArray( ManualControlSettingsChannelMaxData, var )

typedef struct __attribute__ ((__packed__)) {
    uint16_t Roll;
    uint16_t Pitch;
    uint16_t Yaw;
    uint16_t Collective;
    uint16_t Accessory0;
    uint16_t Accessory1;
    uint16_t Accessory2;
}  ManualControlSettingsResponseTimeData ;
typedef struct __attribute__ ((__packed__)) {
    uint16_t array[7];
}  ManualControlSettingsResponseTimeDataArray ;
#define ManualControlSettingsResponseTimeToArray( var ) UAVObjectFieldToArray( ManualControlSettingsResponseTimeData, var )

typedef struct __attribute__ ((__packed__)) {
    uint8_t Throttle;
    uint8_t Roll;
    uint8_t Pitch;
    uint8_t Yaw;
    uint8_t FlightMode;
    uint8_t Collective;
    uint8_t Accessory0;
    uint8_t Accessory1;
    uint8_t Accessory2;
}  ManualControlSettingsChannelGroupsData ;
typedef struct __attribute__ ((__packed__)) {
    uint8_t array[9];
}  ManualControlSettingsChannelGroupsDataArray ;
#define ManualControlSettingsChannelGroupsToArray( var ) UAVObjectFieldToArray( ManualControlSettingsChannelGroupsData, var )

typedef struct __attribute__ ((__packed__)) {
    uint8_t Throttle;
    uint8_t Roll;
    uint8_t Pitch;
    uint8_t Yaw;
    uint8_t FlightMode;
    uint8_t Collective;
    uint8_t Accessory0;
    uint8_t Accessory1;
    uint8_t Accessory2;
}  ManualControlSettingsChannelNumberData ;
typedef struct __attribute__ ((__packed__)) {
    uint8_t array[9];
}  ManualControlSettingsChannelNumberDataArray ;
#define ManualControlSettingsChannelNumberToArray( var ) UAVObjectFieldToArray( ManualControlSettingsChannelNumberData, var )


/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
    float Deadband;
    float DeadbandAssistedControl;
    ManualControlSettingsFailsafeChannelData FailsafeChannel;
    ManualControlSettingsChannelMinData ChannelMin;
    ManualControlSettingsChannelNeutralData ChannelNeutral;
    ManualControlSettingsChannelMaxData ChannelMax;
    ManualControlSettingsResponseTimeData ResponseTime;
    ManualControlSettingsChannelGroupsData ChannelGroups;
    ManualControlSettingsChannelNumberData ChannelNumber;
    uint8_t FlightModeNumber;
    int8_t FailsafeFlightModeSwitchPosition;
} __attribute__((packed)) ManualControlSettingsDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes so as to avoid the potential for CPU usage faults
 * on Cortex M4F during load/store of float UAVO fields
 */
typedef ManualControlSettingsDataPacked __attribute__((aligned(4))) ManualControlSettingsData;
    
/* Typesafe Object access functions */
static inline int32_t ManualControlSettingsGet(ManualControlSettingsData *dataOut) { return UAVObjGetData(ManualControlSettingsHandle(), dataOut); }
static inline int32_t ManualControlSettingsSet(const ManualControlSettingsData *dataIn) { return UAVObjSetData(ManualControlSettingsHandle(), dataIn); }
static inline int32_t ManualControlSettingsInstGet(uint16_t instId, ManualControlSettingsData *dataOut) { return UAVObjGetInstanceData(ManualControlSettingsHandle(), instId, dataOut); }
static inline int32_t ManualControlSettingsInstSet(uint16_t instId, const ManualControlSettingsData *dataIn) { return UAVObjSetInstanceData(ManualControlSettingsHandle(), instId, dataIn); }
static inline int32_t ManualControlSettingsConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(ManualControlSettingsHandle(), queue, EV_MASK_ALL_UPDATES); }
static inline int32_t ManualControlSettingsConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(ManualControlSettingsHandle(), cb, EV_MASK_ALL_UPDATES); }
static inline uint16_t ManualControlSettingsCreateInstance() { return UAVObjCreateInstance(ManualControlSettingsHandle(), &ManualControlSettingsSetDefaults); }
static inline void ManualControlSettingsRequestUpdate() { UAVObjRequestUpdate(ManualControlSettingsHandle()); }
static inline void ManualControlSettingsRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(ManualControlSettingsHandle(), instId); }
static inline void ManualControlSettingsUpdated() { UAVObjUpdated(ManualControlSettingsHandle()); }
static inline void ManualControlSettingsInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(ManualControlSettingsHandle(), instId); }
static inline void ManualControlSettingsLogging() { UAVObjLogging(ManualControlSettingsHandle()); }
static inline void ManualControlSettingsInstLogging(uint16_t instId) { UAVObjInstanceLogging(ManualControlSettingsHandle(), instId); }
static inline int32_t ManualControlSettingsGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(ManualControlSettingsHandle(), dataOut); }
static inline int32_t ManualControlSettingsSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(ManualControlSettingsHandle(), dataIn); }
static inline int8_t ManualControlSettingsReadOnly() { return UAVObjReadOnly(ManualControlSettingsHandle()); }

/* Field Deadband information */

/* Field DeadbandAssistedControl information */

/* Field FailsafeChannel information */

// Array element names for field FailsafeChannel
typedef enum {
    MANUALCONTROLSETTINGS_FAILSAFECHANNEL_THROTTLE=0,
    MANUALCONTROLSETTINGS_FAILSAFECHANNEL_ROLL=1,
    MANUALCONTROLSETTINGS_FAILSAFECHANNEL_PITCH=2,
    MANUALCONTROLSETTINGS_FAILSAFECHANNEL_YAW=3,
    MANUALCONTROLSETTINGS_FAILSAFECHANNEL_COLLECTIVE=4,
    MANUALCONTROLSETTINGS_FAILSAFECHANNEL_ACCESSORY0=5,
    MANUALCONTROLSETTINGS_FAILSAFECHANNEL_ACCESSORY1=6,
    MANUALCONTROLSETTINGS_FAILSAFECHANNEL_ACCESSORY2=7
} ManualControlSettingsFailsafeChannelElem;

// Number of elements for field FailsafeChannel
#define MANUALCONTROLSETTINGS_FAILSAFECHANNEL_NUMELEM 8

/* Field ChannelMin information */

// Array element names for field ChannelMin
typedef enum {
    MANUALCONTROLSETTINGS_CHANNELMIN_THROTTLE=0,
    MANUALCONTROLSETTINGS_CHANNELMIN_ROLL=1,
    MANUALCONTROLSETTINGS_CHANNELMIN_PITCH=2,
    MANUALCONTROLSETTINGS_CHANNELMIN_YAW=3,
    MANUALCONTROLSETTINGS_CHANNELMIN_FLIGHTMODE=4,
    MANUALCONTROLSETTINGS_CHANNELMIN_COLLECTIVE=5,
    MANUALCONTROLSETTINGS_CHANNELMIN_ACCESSORY0=6,
    MANUALCONTROLSETTINGS_CHANNELMIN_ACCESSORY1=7,
    MANUALCONTROLSETTINGS_CHANNELMIN_ACCESSORY2=8
} ManualControlSettingsChannelMinElem;

// Number of elements for field ChannelMin
#define MANUALCONTROLSETTINGS_CHANNELMIN_NUMELEM 9

/* Field ChannelNeutral information */

// Array element names for field ChannelNeutral
typedef enum {
    MANUALCONTROLSETTINGS_CHANNELNEUTRAL_THROTTLE=0,
    MANUALCONTROLSETTINGS_CHANNELNEUTRAL_ROLL=1,
    MANUALCONTROLSETTINGS_CHANNELNEUTRAL_PITCH=2,
    MANUALCONTROLSETTINGS_CHANNELNEUTRAL_YAW=3,
    MANUALCONTROLSETTINGS_CHANNELNEUTRAL_FLIGHTMODE=4,
    MANUALCONTROLSETTINGS_CHANNELNEUTRAL_COLLECTIVE=5,
    MANUALCONTROLSETTINGS_CHANNELNEUTRAL_ACCESSORY0=6,
    MANUALCONTROLSETTINGS_CHANNELNEUTRAL_ACCESSORY1=7,
    MANUALCONTROLSETTINGS_CHANNELNEUTRAL_ACCESSORY2=8
} ManualControlSettingsChannelNeutralElem;

// Number of elements for field ChannelNeutral
#define MANUALCONTROLSETTINGS_CHANNELNEUTRAL_NUMELEM 9

/* Field ChannelMax information */

// Array element names for field ChannelMax
typedef enum {
    MANUALCONTROLSETTINGS_CHANNELMAX_THROTTLE=0,
    MANUALCONTROLSETTINGS_CHANNELMAX_ROLL=1,
    MANUALCONTROLSETTINGS_CHANNELMAX_PITCH=2,
    MANUALCONTROLSETTINGS_CHANNELMAX_YAW=3,
    MANUALCONTROLSETTINGS_CHANNELMAX_FLIGHTMODE=4,
    MANUALCONTROLSETTINGS_CHANNELMAX_COLLECTIVE=5,
    MANUALCONTROLSETTINGS_CHANNELMAX_ACCESSORY0=6,
    MANUALCONTROLSETTINGS_CHANNELMAX_ACCESSORY1=7,
    MANUALCONTROLSETTINGS_CHANNELMAX_ACCESSORY2=8
} ManualControlSettingsChannelMaxElem;

// Number of elements for field ChannelMax
#define MANUALCONTROLSETTINGS_CHANNELMAX_NUMELEM 9

/* Field ResponseTime information */

// Array element names for field ResponseTime
typedef enum {
    MANUALCONTROLSETTINGS_RESPONSETIME_ROLL=0,
    MANUALCONTROLSETTINGS_RESPONSETIME_PITCH=1,
    MANUALCONTROLSETTINGS_RESPONSETIME_YAW=2,
    MANUALCONTROLSETTINGS_RESPONSETIME_COLLECTIVE=3,
    MANUALCONTROLSETTINGS_RESPONSETIME_ACCESSORY0=4,
    MANUALCONTROLSETTINGS_RESPONSETIME_ACCESSORY1=5,
    MANUALCONTROLSETTINGS_RESPONSETIME_ACCESSORY2=6
} ManualControlSettingsResponseTimeElem;

// Number of elements for field ResponseTime
#define MANUALCONTROLSETTINGS_RESPONSETIME_NUMELEM 7

/* Field ChannelGroups information */

// Enumeration options for field ChannelGroups
typedef enum {
    MANUALCONTROLSETTINGS_CHANNELGROUPS_PWM=0,
    MANUALCONTROLSETTINGS_CHANNELGROUPS_PPM=1,
    MANUALCONTROLSETTINGS_CHANNELGROUPS_DSMMAINPORT=2,
    MANUALCONTROLSETTINGS_CHANNELGROUPS_DSMFLEXIPORT=3,
    MANUALCONTROLSETTINGS_CHANNELGROUPS_SBUS=4,
    MANUALCONTROLSETTINGS_CHANNELGROUPS_GCS=5,
    MANUALCONTROLSETTINGS_CHANNELGROUPS_OPLINK=6,
    MANUALCONTROLSETTINGS_CHANNELGROUPS_NONE=7
} ManualControlSettingsChannelGroupsOptions;

// Array element names for field ChannelGroups
typedef enum {
    MANUALCONTROLSETTINGS_CHANNELGROUPS_THROTTLE=0,
    MANUALCONTROLSETTINGS_CHANNELGROUPS_ROLL=1,
    MANUALCONTROLSETTINGS_CHANNELGROUPS_PITCH=2,
    MANUALCONTROLSETTINGS_CHANNELGROUPS_YAW=3,
    MANUALCONTROLSETTINGS_CHANNELGROUPS_FLIGHTMODE=4,
    MANUALCONTROLSETTINGS_CHANNELGROUPS_COLLECTIVE=5,
    MANUALCONTROLSETTINGS_CHANNELGROUPS_ACCESSORY0=6,
    MANUALCONTROLSETTINGS_CHANNELGROUPS_ACCESSORY1=7,
    MANUALCONTROLSETTINGS_CHANNELGROUPS_ACCESSORY2=8
} ManualControlSettingsChannelGroupsElem;

// Number of elements for field ChannelGroups
#define MANUALCONTROLSETTINGS_CHANNELGROUPS_NUMELEM 9

/* Field ChannelNumber information */

// Array element names for field ChannelNumber
typedef enum {
    MANUALCONTROLSETTINGS_CHANNELNUMBER_THROTTLE=0,
    MANUALCONTROLSETTINGS_CHANNELNUMBER_ROLL=1,
    MANUALCONTROLSETTINGS_CHANNELNUMBER_PITCH=2,
    MANUALCONTROLSETTINGS_CHANNELNUMBER_YAW=3,
    MANUALCONTROLSETTINGS_CHANNELNUMBER_FLIGHTMODE=4,
    MANUALCONTROLSETTINGS_CHANNELNUMBER_COLLECTIVE=5,
    MANUALCONTROLSETTINGS_CHANNELNUMBER_ACCESSORY0=6,
    MANUALCONTROLSETTINGS_CHANNELNUMBER_ACCESSORY1=7,
    MANUALCONTROLSETTINGS_CHANNELNUMBER_ACCESSORY2=8
} ManualControlSettingsChannelNumberElem;

// Number of elements for field ChannelNumber
#define MANUALCONTROLSETTINGS_CHANNELNUMBER_NUMELEM 9

/* Field FlightModeNumber information */

/* Field FailsafeFlightModeSwitchPosition information */



/* Set/Get functions */
extern void ManualControlSettingsDeadbandSet(float *NewDeadband);
extern void ManualControlSettingsDeadbandGet(float *NewDeadband);
extern void ManualControlSettingsDeadbandAssistedControlSet(float *NewDeadbandAssistedControl);
extern void ManualControlSettingsDeadbandAssistedControlGet(float *NewDeadbandAssistedControl);
extern void ManualControlSettingsFailsafeChannelSet(ManualControlSettingsFailsafeChannelData *NewFailsafeChannel);
extern void ManualControlSettingsFailsafeChannelGet(ManualControlSettingsFailsafeChannelData *NewFailsafeChannel);
extern void ManualControlSettingsFailsafeChannelArraySet(float *NewFailsafeChannel);
extern void ManualControlSettingsFailsafeChannelArrayGet(float *NewFailsafeChannel);
extern void ManualControlSettingsChannelMinSet(ManualControlSettingsChannelMinData *NewChannelMin);
extern void ManualControlSettingsChannelMinGet(ManualControlSettingsChannelMinData *NewChannelMin);
extern void ManualControlSettingsChannelMinArraySet(int16_t *NewChannelMin);
extern void ManualControlSettingsChannelMinArrayGet(int16_t *NewChannelMin);
extern void ManualControlSettingsChannelNeutralSet(ManualControlSettingsChannelNeutralData *NewChannelNeutral);
extern void ManualControlSettingsChannelNeutralGet(ManualControlSettingsChannelNeutralData *NewChannelNeutral);
extern void ManualControlSettingsChannelNeutralArraySet(int16_t *NewChannelNeutral);
extern void ManualControlSettingsChannelNeutralArrayGet(int16_t *NewChannelNeutral);
extern void ManualControlSettingsChannelMaxSet(ManualControlSettingsChannelMaxData *NewChannelMax);
extern void ManualControlSettingsChannelMaxGet(ManualControlSettingsChannelMaxData *NewChannelMax);
extern void ManualControlSettingsChannelMaxArraySet(int16_t *NewChannelMax);
extern void ManualControlSettingsChannelMaxArrayGet(int16_t *NewChannelMax);
extern void ManualControlSettingsResponseTimeSet(ManualControlSettingsResponseTimeData *NewResponseTime);
extern void ManualControlSettingsResponseTimeGet(ManualControlSettingsResponseTimeData *NewResponseTime);
extern void ManualControlSettingsResponseTimeArraySet(uint16_t *NewResponseTime);
extern void ManualControlSettingsResponseTimeArrayGet(uint16_t *NewResponseTime);
extern void ManualControlSettingsChannelGroupsSet(ManualControlSettingsChannelGroupsData *NewChannelGroups);
extern void ManualControlSettingsChannelGroupsGet(ManualControlSettingsChannelGroupsData *NewChannelGroups);
extern void ManualControlSettingsChannelGroupsArraySet(uint8_t *NewChannelGroups);
extern void ManualControlSettingsChannelGroupsArrayGet(uint8_t *NewChannelGroups);
extern void ManualControlSettingsChannelNumberSet(ManualControlSettingsChannelNumberData *NewChannelNumber);
extern void ManualControlSettingsChannelNumberGet(ManualControlSettingsChannelNumberData *NewChannelNumber);
extern void ManualControlSettingsChannelNumberArraySet(uint8_t *NewChannelNumber);
extern void ManualControlSettingsChannelNumberArrayGet(uint8_t *NewChannelNumber);
extern void ManualControlSettingsFlightModeNumberSet(uint8_t *NewFlightModeNumber);
extern void ManualControlSettingsFlightModeNumberGet(uint8_t *NewFlightModeNumber);
extern void ManualControlSettingsFailsafeFlightModeSwitchPositionSet(int8_t *NewFailsafeFlightModeSwitchPosition);
extern void ManualControlSettingsFailsafeFlightModeSwitchPositionGet(int8_t *NewFailsafeFlightModeSwitchPosition);


#endif // MANUALCONTROLSETTINGS_H

/**
 * @}
 * @}
 */
