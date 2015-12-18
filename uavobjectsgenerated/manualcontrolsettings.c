/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup ManualControlSettings ManualControlSettings
 * @brief Settings to indicate how to decode receiver input by @ref ManualControlModule.
 *
 * Autogenerated files and functions for ManualControlSettings Object
 * @{ 
 *
 * @file       manualcontrolsettings.c
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

#include <openpilot.h>
#include "manualcontrolsettings.h"

// Private variables
#if (defined(__MACH__) && defined(__APPLE__))
static UAVObjHandle handle __attribute__((section("__DATA,_uavo_handles")));
#else
static UAVObjHandle handle __attribute__((section("_uavo_handles")));
#endif

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t ManualControlSettingsInitialize(void)
{
    // Compile time assertion that the ManualControlSettingsDataPacked and ManualControlSettingsData structs
    // have the same size (though instances of ManualControlSettingsData
    // should be placed in memory by the linker/compiler on a 4 byte alignment).
    PIOS_STATIC_ASSERT(sizeof(ManualControlSettingsDataPacked) == sizeof(ManualControlSettingsData));
    
    // Don't set the handle to null if already registered
    if (UAVObjGetByID(MANUALCONTROLSETTINGS_OBJID)) {
        return -2;
    }

    // Register object with the object manager
    handle = UAVObjRegister(MANUALCONTROLSETTINGS_OBJID,
        MANUALCONTROLSETTINGS_ISSINGLEINST, MANUALCONTROLSETTINGS_ISSETTINGS, MANUALCONTROLSETTINGS_ISPRIORITY, MANUALCONTROLSETTINGS_NUMBYTES, &ManualControlSettingsSetDefaults);

    // Done
    return handle ? 0 : -1;
}

/**
 * Initialize object fields and metadata with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void ManualControlSettingsSetDefaults(UAVObjHandle obj, uint16_t instId)
{
    ManualControlSettingsData data;

    // Initialize object fields to their default values
    UAVObjGetInstanceData(obj, instId, &data);
    memset(&data, 0, sizeof(ManualControlSettingsData));
    data.Deadband = 2.000000e-02f;
    data.DeadbandAssistedControl = 8.000000e-02f;
    data.FailsafeChannel.Throttle = -1.000000e+00f;
    data.FailsafeChannel.Roll = 0.000000e+00f;
    data.FailsafeChannel.Pitch = 0.000000e+00f;
    data.FailsafeChannel.Yaw = 0.000000e+00f;
    data.FailsafeChannel.Collective = 0.000000e+00f;
    data.FailsafeChannel.Accessory0 = 0.000000e+00f;
    data.FailsafeChannel.Accessory1 = 0.000000e+00f;
    data.FailsafeChannel.Accessory2 = 0.000000e+00f;
    data.ChannelMin.Throttle = 1000;
    data.ChannelMin.Roll = 1000;
    data.ChannelMin.Pitch = 1000;
    data.ChannelMin.Yaw = 1000;
    data.ChannelMin.FlightMode = 1000;
    data.ChannelMin.Collective = 1000;
    data.ChannelMin.Accessory0 = 1000;
    data.ChannelMin.Accessory1 = 1000;
    data.ChannelMin.Accessory2 = 1000;
    data.ChannelNeutral.Throttle = 1500;
    data.ChannelNeutral.Roll = 1500;
    data.ChannelNeutral.Pitch = 1500;
    data.ChannelNeutral.Yaw = 1500;
    data.ChannelNeutral.FlightMode = 1500;
    data.ChannelNeutral.Collective = 1500;
    data.ChannelNeutral.Accessory0 = 1500;
    data.ChannelNeutral.Accessory1 = 1500;
    data.ChannelNeutral.Accessory2 = 1500;
    data.ChannelMax.Throttle = 2000;
    data.ChannelMax.Roll = 2000;
    data.ChannelMax.Pitch = 2000;
    data.ChannelMax.Yaw = 2000;
    data.ChannelMax.FlightMode = 2000;
    data.ChannelMax.Collective = 2000;
    data.ChannelMax.Accessory0 = 2000;
    data.ChannelMax.Accessory1 = 2000;
    data.ChannelMax.Accessory2 = 2000;
    data.ResponseTime.Roll = 0;
    data.ResponseTime.Pitch = 0;
    data.ResponseTime.Yaw = 0;
    data.ResponseTime.Collective = 0;
    data.ResponseTime.Accessory0 = 0;
    data.ResponseTime.Accessory1 = 0;
    data.ResponseTime.Accessory2 = 0;
    data.ChannelGroups.Throttle = 7;
    data.ChannelGroups.Roll = 7;
    data.ChannelGroups.Pitch = 7;
    data.ChannelGroups.Yaw = 7;
    data.ChannelGroups.FlightMode = 7;
    data.ChannelGroups.Collective = 7;
    data.ChannelGroups.Accessory0 = 7;
    data.ChannelGroups.Accessory1 = 7;
    data.ChannelGroups.Accessory2 = 7;
    data.ChannelNumber.Throttle = 0;
    data.ChannelNumber.Roll = 0;
    data.ChannelNumber.Pitch = 0;
    data.ChannelNumber.Yaw = 0;
    data.ChannelNumber.FlightMode = 0;
    data.ChannelNumber.Collective = 0;
    data.ChannelNumber.Accessory0 = 0;
    data.ChannelNumber.Accessory1 = 0;
    data.ChannelNumber.Accessory2 = 0;
    data.FlightModeNumber = 3;
    data.FailsafeFlightModeSwitchPosition = -1;

    UAVObjSetInstanceData(obj, instId, &data);

    // Initialize object metadata to their default values
    if ( instId == 0 ) {
        UAVObjMetadata metadata;
        metadata.flags =
            ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
            ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
            1 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
            1 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
            UPDATEMODE_ONCHANGE << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
            UPDATEMODE_ONCHANGE << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT |
            UPDATEMODE_MANUAL << UAVOBJ_LOGGING_UPDATE_MODE_SHIFT;
        metadata.telemetryUpdatePeriod = 0;
        metadata.gcsTelemetryUpdatePeriod = 0;
        metadata.loggingUpdatePeriod = 0;
        UAVObjSetMetadata(obj, &metadata);
    }
}

/**
 * Get object handle
 */
UAVObjHandle ManualControlSettingsHandle()
{
    return handle;
}

/**
 * Get/Set object Functions
 */
void ManualControlSettingsDeadbandSet(float *NewDeadband)
{
    UAVObjSetDataField(ManualControlSettingsHandle(), (void *)NewDeadband, offsetof(ManualControlSettingsData, Deadband), sizeof(float));
}
void ManualControlSettingsDeadbandGet(float *NewDeadband)
{
    UAVObjGetDataField(ManualControlSettingsHandle(), (void *)NewDeadband, offsetof(ManualControlSettingsData, Deadband), sizeof(float));
}
void ManualControlSettingsDeadbandAssistedControlSet(float *NewDeadbandAssistedControl)
{
    UAVObjSetDataField(ManualControlSettingsHandle(), (void *)NewDeadbandAssistedControl, offsetof(ManualControlSettingsData, DeadbandAssistedControl), sizeof(float));
}
void ManualControlSettingsDeadbandAssistedControlGet(float *NewDeadbandAssistedControl)
{
    UAVObjGetDataField(ManualControlSettingsHandle(), (void *)NewDeadbandAssistedControl, offsetof(ManualControlSettingsData, DeadbandAssistedControl), sizeof(float));
}
void ManualControlSettingsFailsafeChannelSet( ManualControlSettingsFailsafeChannelData *NewFailsafeChannel )
{
    UAVObjSetDataField(ManualControlSettingsHandle(), (void *)NewFailsafeChannel, offsetof(ManualControlSettingsData, FailsafeChannel), 8*sizeof(float));
}
void ManualControlSettingsFailsafeChannelGet( ManualControlSettingsFailsafeChannelData *NewFailsafeChannel )
{
    UAVObjGetDataField(ManualControlSettingsHandle(), (void *)NewFailsafeChannel, offsetof(ManualControlSettingsData, FailsafeChannel), 8*sizeof(float));
}
void ManualControlSettingsFailsafeChannelArraySet( float *NewFailsafeChannel )
{
    UAVObjSetDataField(ManualControlSettingsHandle(), (void *)NewFailsafeChannel, offsetof(ManualControlSettingsData, FailsafeChannel), 8*sizeof(float));
}
void ManualControlSettingsFailsafeChannelArrayGet( float *NewFailsafeChannel )
{
    UAVObjGetDataField(ManualControlSettingsHandle(), (void *)NewFailsafeChannel, offsetof(ManualControlSettingsData, FailsafeChannel), 8*sizeof(float));
}
void ManualControlSettingsChannelMinSet( ManualControlSettingsChannelMinData *NewChannelMin )
{
    UAVObjSetDataField(ManualControlSettingsHandle(), (void *)NewChannelMin, offsetof(ManualControlSettingsData, ChannelMin), 9*sizeof(int16_t));
}
void ManualControlSettingsChannelMinGet( ManualControlSettingsChannelMinData *NewChannelMin )
{
    UAVObjGetDataField(ManualControlSettingsHandle(), (void *)NewChannelMin, offsetof(ManualControlSettingsData, ChannelMin), 9*sizeof(int16_t));
}
void ManualControlSettingsChannelMinArraySet( int16_t *NewChannelMin )
{
    UAVObjSetDataField(ManualControlSettingsHandle(), (void *)NewChannelMin, offsetof(ManualControlSettingsData, ChannelMin), 9*sizeof(int16_t));
}
void ManualControlSettingsChannelMinArrayGet( int16_t *NewChannelMin )
{
    UAVObjGetDataField(ManualControlSettingsHandle(), (void *)NewChannelMin, offsetof(ManualControlSettingsData, ChannelMin), 9*sizeof(int16_t));
}
void ManualControlSettingsChannelNeutralSet( ManualControlSettingsChannelNeutralData *NewChannelNeutral )
{
    UAVObjSetDataField(ManualControlSettingsHandle(), (void *)NewChannelNeutral, offsetof(ManualControlSettingsData, ChannelNeutral), 9*sizeof(int16_t));
}
void ManualControlSettingsChannelNeutralGet( ManualControlSettingsChannelNeutralData *NewChannelNeutral )
{
    UAVObjGetDataField(ManualControlSettingsHandle(), (void *)NewChannelNeutral, offsetof(ManualControlSettingsData, ChannelNeutral), 9*sizeof(int16_t));
}
void ManualControlSettingsChannelNeutralArraySet( int16_t *NewChannelNeutral )
{
    UAVObjSetDataField(ManualControlSettingsHandle(), (void *)NewChannelNeutral, offsetof(ManualControlSettingsData, ChannelNeutral), 9*sizeof(int16_t));
}
void ManualControlSettingsChannelNeutralArrayGet( int16_t *NewChannelNeutral )
{
    UAVObjGetDataField(ManualControlSettingsHandle(), (void *)NewChannelNeutral, offsetof(ManualControlSettingsData, ChannelNeutral), 9*sizeof(int16_t));
}
void ManualControlSettingsChannelMaxSet( ManualControlSettingsChannelMaxData *NewChannelMax )
{
    UAVObjSetDataField(ManualControlSettingsHandle(), (void *)NewChannelMax, offsetof(ManualControlSettingsData, ChannelMax), 9*sizeof(int16_t));
}
void ManualControlSettingsChannelMaxGet( ManualControlSettingsChannelMaxData *NewChannelMax )
{
    UAVObjGetDataField(ManualControlSettingsHandle(), (void *)NewChannelMax, offsetof(ManualControlSettingsData, ChannelMax), 9*sizeof(int16_t));
}
void ManualControlSettingsChannelMaxArraySet( int16_t *NewChannelMax )
{
    UAVObjSetDataField(ManualControlSettingsHandle(), (void *)NewChannelMax, offsetof(ManualControlSettingsData, ChannelMax), 9*sizeof(int16_t));
}
void ManualControlSettingsChannelMaxArrayGet( int16_t *NewChannelMax )
{
    UAVObjGetDataField(ManualControlSettingsHandle(), (void *)NewChannelMax, offsetof(ManualControlSettingsData, ChannelMax), 9*sizeof(int16_t));
}
void ManualControlSettingsResponseTimeSet( ManualControlSettingsResponseTimeData *NewResponseTime )
{
    UAVObjSetDataField(ManualControlSettingsHandle(), (void *)NewResponseTime, offsetof(ManualControlSettingsData, ResponseTime), 7*sizeof(uint16_t));
}
void ManualControlSettingsResponseTimeGet( ManualControlSettingsResponseTimeData *NewResponseTime )
{
    UAVObjGetDataField(ManualControlSettingsHandle(), (void *)NewResponseTime, offsetof(ManualControlSettingsData, ResponseTime), 7*sizeof(uint16_t));
}
void ManualControlSettingsResponseTimeArraySet( uint16_t *NewResponseTime )
{
    UAVObjSetDataField(ManualControlSettingsHandle(), (void *)NewResponseTime, offsetof(ManualControlSettingsData, ResponseTime), 7*sizeof(uint16_t));
}
void ManualControlSettingsResponseTimeArrayGet( uint16_t *NewResponseTime )
{
    UAVObjGetDataField(ManualControlSettingsHandle(), (void *)NewResponseTime, offsetof(ManualControlSettingsData, ResponseTime), 7*sizeof(uint16_t));
}
void ManualControlSettingsChannelGroupsSet( ManualControlSettingsChannelGroupsData *NewChannelGroups )
{
    UAVObjSetDataField(ManualControlSettingsHandle(), (void *)NewChannelGroups, offsetof(ManualControlSettingsData, ChannelGroups), 9*sizeof(uint8_t));
}
void ManualControlSettingsChannelGroupsGet( ManualControlSettingsChannelGroupsData *NewChannelGroups )
{
    UAVObjGetDataField(ManualControlSettingsHandle(), (void *)NewChannelGroups, offsetof(ManualControlSettingsData, ChannelGroups), 9*sizeof(uint8_t));
}
void ManualControlSettingsChannelGroupsArraySet( uint8_t *NewChannelGroups )
{
    UAVObjSetDataField(ManualControlSettingsHandle(), (void *)NewChannelGroups, offsetof(ManualControlSettingsData, ChannelGroups), 9*sizeof(uint8_t));
}
void ManualControlSettingsChannelGroupsArrayGet( uint8_t *NewChannelGroups )
{
    UAVObjGetDataField(ManualControlSettingsHandle(), (void *)NewChannelGroups, offsetof(ManualControlSettingsData, ChannelGroups), 9*sizeof(uint8_t));
}
void ManualControlSettingsChannelNumberSet( ManualControlSettingsChannelNumberData *NewChannelNumber )
{
    UAVObjSetDataField(ManualControlSettingsHandle(), (void *)NewChannelNumber, offsetof(ManualControlSettingsData, ChannelNumber), 9*sizeof(uint8_t));
}
void ManualControlSettingsChannelNumberGet( ManualControlSettingsChannelNumberData *NewChannelNumber )
{
    UAVObjGetDataField(ManualControlSettingsHandle(), (void *)NewChannelNumber, offsetof(ManualControlSettingsData, ChannelNumber), 9*sizeof(uint8_t));
}
void ManualControlSettingsChannelNumberArraySet( uint8_t *NewChannelNumber )
{
    UAVObjSetDataField(ManualControlSettingsHandle(), (void *)NewChannelNumber, offsetof(ManualControlSettingsData, ChannelNumber), 9*sizeof(uint8_t));
}
void ManualControlSettingsChannelNumberArrayGet( uint8_t *NewChannelNumber )
{
    UAVObjGetDataField(ManualControlSettingsHandle(), (void *)NewChannelNumber, offsetof(ManualControlSettingsData, ChannelNumber), 9*sizeof(uint8_t));
}
void ManualControlSettingsFlightModeNumberSet(uint8_t *NewFlightModeNumber)
{
    UAVObjSetDataField(ManualControlSettingsHandle(), (void *)NewFlightModeNumber, offsetof(ManualControlSettingsData, FlightModeNumber), sizeof(uint8_t));
}
void ManualControlSettingsFlightModeNumberGet(uint8_t *NewFlightModeNumber)
{
    UAVObjGetDataField(ManualControlSettingsHandle(), (void *)NewFlightModeNumber, offsetof(ManualControlSettingsData, FlightModeNumber), sizeof(uint8_t));
}
void ManualControlSettingsFailsafeFlightModeSwitchPositionSet(int8_t *NewFailsafeFlightModeSwitchPosition)
{
    UAVObjSetDataField(ManualControlSettingsHandle(), (void *)NewFailsafeFlightModeSwitchPosition, offsetof(ManualControlSettingsData, FailsafeFlightModeSwitchPosition), sizeof(int8_t));
}
void ManualControlSettingsFailsafeFlightModeSwitchPositionGet(int8_t *NewFailsafeFlightModeSwitchPosition)
{
    UAVObjGetDataField(ManualControlSettingsHandle(), (void *)NewFailsafeFlightModeSwitchPosition, offsetof(ManualControlSettingsData, FailsafeFlightModeSwitchPosition), sizeof(int8_t));
}


/**
 * @}
 */
