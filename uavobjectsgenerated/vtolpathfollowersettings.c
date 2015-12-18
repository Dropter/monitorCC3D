/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup VtolPathFollowerSettings VtolPathFollowerSettings
 * @brief Settings for the @ref VtolPathFollowerModule
 *
 * Autogenerated files and functions for VtolPathFollowerSettings Object
 * @{ 
 *
 * @file       vtolpathfollowersettings.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the VtolPathFollowerSettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: vtolpathfollowersettings.xml. 
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
#include "vtolpathfollowersettings.h"

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
int32_t VtolPathFollowerSettingsInitialize(void)
{
    // Compile time assertion that the VtolPathFollowerSettingsDataPacked and VtolPathFollowerSettingsData structs
    // have the same size (though instances of VtolPathFollowerSettingsData
    // should be placed in memory by the linker/compiler on a 4 byte alignment).
    PIOS_STATIC_ASSERT(sizeof(VtolPathFollowerSettingsDataPacked) == sizeof(VtolPathFollowerSettingsData));
    
    // Don't set the handle to null if already registered
    if (UAVObjGetByID(VTOLPATHFOLLOWERSETTINGS_OBJID)) {
        return -2;
    }

    // Register object with the object manager
    handle = UAVObjRegister(VTOLPATHFOLLOWERSETTINGS_OBJID,
        VTOLPATHFOLLOWERSETTINGS_ISSINGLEINST, VTOLPATHFOLLOWERSETTINGS_ISSETTINGS, VTOLPATHFOLLOWERSETTINGS_ISPRIORITY, VTOLPATHFOLLOWERSETTINGS_NUMBYTES, &VtolPathFollowerSettingsSetDefaults);

    // Done
    return handle ? 0 : -1;
}

/**
 * Initialize object fields and metadata with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void VtolPathFollowerSettingsSetDefaults(UAVObjHandle obj, uint16_t instId)
{
    VtolPathFollowerSettingsData data;

    // Initialize object fields to their default values
    UAVObjGetInstanceData(obj, instId, &data);
    memset(&data, 0, sizeof(VtolPathFollowerSettingsData));
    data.HorizontalVelMax = 1.000000e+01f;
    data.VerticalVelMax = 4.000000e+00f;
    data.CourseFeedForward = 1.000000e+00f;
    data.HorizontalPosP = 2.500000e-01f;
    data.VerticalPosP = 4.000000e-01f;
    data.HorizontalVelPID.Kp = 8.000000e+00f;
    data.HorizontalVelPID.Ki = 5.000000e-01f;
    data.HorizontalVelPID.Kd = 0.000000e+00f;
    data.HorizontalVelPID.ILimit = 1.500000e+01f;
    data.VerticalVelPID.Kp = 1.000000e-01f;
    data.VerticalVelPID.Ki = 1.000000e-02f;
    data.VerticalVelPID.Kd = 0.000000e+00f;
    data.VerticalVelPID.ILimit = 1.000000e+00f;
    data.ThrustLimits.Min = 2.000000e-01f;
    data.ThrustLimits.Neutral = 5.000000e-01f;
    data.ThrustLimits.Max = 9.000000e-01f;
    data.VelocityFeedforward = 2.000000e+00f;
    data.FlyawayEmergencyFallbackTriggerTime = 1.000000e+01f;
    data.EmergencyFallbackAttitude.Roll = 0.000000e+00f;
    data.EmergencyFallbackAttitude.Pitch = -2.000000e+01f;
    data.EmergencyFallbackYawRate.kP = 2.000000e+00f;
    data.EmergencyFallbackYawRate.Max = 3.000000e+01f;
    data.MaxRollPitch = 2.500000e+01f;
    data.BrakeRate = 2.500000e+00f;
    data.BrakeMaxPitch = 2.500000e+01f;
    data.BrakeHorizontalVelPID.Kp = 1.200000e+01f;
    data.BrakeHorizontalVelPID.Ki = 0.000000e+00f;
    data.BrakeHorizontalVelPID.Kd = 3.000000e-02f;
    data.BrakeHorizontalVelPID.ILimit = 1.500000e+01f;
    data.BrakeVelocityFeedforward = 0.000000e+00f;
    data.UpdatePeriod = 50;
    data.TreatCustomCraftAs = 0;
    data.ThrustControl = 0;
    data.YawControl = 0;
    data.FlyawayEmergencyFallback = 1;

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
UAVObjHandle VtolPathFollowerSettingsHandle()
{
    return handle;
}

/**
 * Get/Set object Functions
 */
void VtolPathFollowerSettingsHorizontalVelMaxSet(float *NewHorizontalVelMax)
{
    UAVObjSetDataField(VtolPathFollowerSettingsHandle(), (void *)NewHorizontalVelMax, offsetof(VtolPathFollowerSettingsData, HorizontalVelMax), sizeof(float));
}
void VtolPathFollowerSettingsHorizontalVelMaxGet(float *NewHorizontalVelMax)
{
    UAVObjGetDataField(VtolPathFollowerSettingsHandle(), (void *)NewHorizontalVelMax, offsetof(VtolPathFollowerSettingsData, HorizontalVelMax), sizeof(float));
}
void VtolPathFollowerSettingsVerticalVelMaxSet(float *NewVerticalVelMax)
{
    UAVObjSetDataField(VtolPathFollowerSettingsHandle(), (void *)NewVerticalVelMax, offsetof(VtolPathFollowerSettingsData, VerticalVelMax), sizeof(float));
}
void VtolPathFollowerSettingsVerticalVelMaxGet(float *NewVerticalVelMax)
{
    UAVObjGetDataField(VtolPathFollowerSettingsHandle(), (void *)NewVerticalVelMax, offsetof(VtolPathFollowerSettingsData, VerticalVelMax), sizeof(float));
}
void VtolPathFollowerSettingsCourseFeedForwardSet(float *NewCourseFeedForward)
{
    UAVObjSetDataField(VtolPathFollowerSettingsHandle(), (void *)NewCourseFeedForward, offsetof(VtolPathFollowerSettingsData, CourseFeedForward), sizeof(float));
}
void VtolPathFollowerSettingsCourseFeedForwardGet(float *NewCourseFeedForward)
{
    UAVObjGetDataField(VtolPathFollowerSettingsHandle(), (void *)NewCourseFeedForward, offsetof(VtolPathFollowerSettingsData, CourseFeedForward), sizeof(float));
}
void VtolPathFollowerSettingsHorizontalPosPSet(float *NewHorizontalPosP)
{
    UAVObjSetDataField(VtolPathFollowerSettingsHandle(), (void *)NewHorizontalPosP, offsetof(VtolPathFollowerSettingsData, HorizontalPosP), sizeof(float));
}
void VtolPathFollowerSettingsHorizontalPosPGet(float *NewHorizontalPosP)
{
    UAVObjGetDataField(VtolPathFollowerSettingsHandle(), (void *)NewHorizontalPosP, offsetof(VtolPathFollowerSettingsData, HorizontalPosP), sizeof(float));
}
void VtolPathFollowerSettingsVerticalPosPSet(float *NewVerticalPosP)
{
    UAVObjSetDataField(VtolPathFollowerSettingsHandle(), (void *)NewVerticalPosP, offsetof(VtolPathFollowerSettingsData, VerticalPosP), sizeof(float));
}
void VtolPathFollowerSettingsVerticalPosPGet(float *NewVerticalPosP)
{
    UAVObjGetDataField(VtolPathFollowerSettingsHandle(), (void *)NewVerticalPosP, offsetof(VtolPathFollowerSettingsData, VerticalPosP), sizeof(float));
}
void VtolPathFollowerSettingsHorizontalVelPIDSet( VtolPathFollowerSettingsHorizontalVelPIDData *NewHorizontalVelPID )
{
    UAVObjSetDataField(VtolPathFollowerSettingsHandle(), (void *)NewHorizontalVelPID, offsetof(VtolPathFollowerSettingsData, HorizontalVelPID), 4*sizeof(float));
}
void VtolPathFollowerSettingsHorizontalVelPIDGet( VtolPathFollowerSettingsHorizontalVelPIDData *NewHorizontalVelPID )
{
    UAVObjGetDataField(VtolPathFollowerSettingsHandle(), (void *)NewHorizontalVelPID, offsetof(VtolPathFollowerSettingsData, HorizontalVelPID), 4*sizeof(float));
}
void VtolPathFollowerSettingsHorizontalVelPIDArraySet( float *NewHorizontalVelPID )
{
    UAVObjSetDataField(VtolPathFollowerSettingsHandle(), (void *)NewHorizontalVelPID, offsetof(VtolPathFollowerSettingsData, HorizontalVelPID), 4*sizeof(float));
}
void VtolPathFollowerSettingsHorizontalVelPIDArrayGet( float *NewHorizontalVelPID )
{
    UAVObjGetDataField(VtolPathFollowerSettingsHandle(), (void *)NewHorizontalVelPID, offsetof(VtolPathFollowerSettingsData, HorizontalVelPID), 4*sizeof(float));
}
void VtolPathFollowerSettingsVerticalVelPIDSet( VtolPathFollowerSettingsVerticalVelPIDData *NewVerticalVelPID )
{
    UAVObjSetDataField(VtolPathFollowerSettingsHandle(), (void *)NewVerticalVelPID, offsetof(VtolPathFollowerSettingsData, VerticalVelPID), 4*sizeof(float));
}
void VtolPathFollowerSettingsVerticalVelPIDGet( VtolPathFollowerSettingsVerticalVelPIDData *NewVerticalVelPID )
{
    UAVObjGetDataField(VtolPathFollowerSettingsHandle(), (void *)NewVerticalVelPID, offsetof(VtolPathFollowerSettingsData, VerticalVelPID), 4*sizeof(float));
}
void VtolPathFollowerSettingsVerticalVelPIDArraySet( float *NewVerticalVelPID )
{
    UAVObjSetDataField(VtolPathFollowerSettingsHandle(), (void *)NewVerticalVelPID, offsetof(VtolPathFollowerSettingsData, VerticalVelPID), 4*sizeof(float));
}
void VtolPathFollowerSettingsVerticalVelPIDArrayGet( float *NewVerticalVelPID )
{
    UAVObjGetDataField(VtolPathFollowerSettingsHandle(), (void *)NewVerticalVelPID, offsetof(VtolPathFollowerSettingsData, VerticalVelPID), 4*sizeof(float));
}
void VtolPathFollowerSettingsThrustLimitsSet( VtolPathFollowerSettingsThrustLimitsData *NewThrustLimits )
{
    UAVObjSetDataField(VtolPathFollowerSettingsHandle(), (void *)NewThrustLimits, offsetof(VtolPathFollowerSettingsData, ThrustLimits), 3*sizeof(float));
}
void VtolPathFollowerSettingsThrustLimitsGet( VtolPathFollowerSettingsThrustLimitsData *NewThrustLimits )
{
    UAVObjGetDataField(VtolPathFollowerSettingsHandle(), (void *)NewThrustLimits, offsetof(VtolPathFollowerSettingsData, ThrustLimits), 3*sizeof(float));
}
void VtolPathFollowerSettingsThrustLimitsArraySet( float *NewThrustLimits )
{
    UAVObjSetDataField(VtolPathFollowerSettingsHandle(), (void *)NewThrustLimits, offsetof(VtolPathFollowerSettingsData, ThrustLimits), 3*sizeof(float));
}
void VtolPathFollowerSettingsThrustLimitsArrayGet( float *NewThrustLimits )
{
    UAVObjGetDataField(VtolPathFollowerSettingsHandle(), (void *)NewThrustLimits, offsetof(VtolPathFollowerSettingsData, ThrustLimits), 3*sizeof(float));
}
void VtolPathFollowerSettingsVelocityFeedforwardSet(float *NewVelocityFeedforward)
{
    UAVObjSetDataField(VtolPathFollowerSettingsHandle(), (void *)NewVelocityFeedforward, offsetof(VtolPathFollowerSettingsData, VelocityFeedforward), sizeof(float));
}
void VtolPathFollowerSettingsVelocityFeedforwardGet(float *NewVelocityFeedforward)
{
    UAVObjGetDataField(VtolPathFollowerSettingsHandle(), (void *)NewVelocityFeedforward, offsetof(VtolPathFollowerSettingsData, VelocityFeedforward), sizeof(float));
}
void VtolPathFollowerSettingsFlyawayEmergencyFallbackTriggerTimeSet(float *NewFlyawayEmergencyFallbackTriggerTime)
{
    UAVObjSetDataField(VtolPathFollowerSettingsHandle(), (void *)NewFlyawayEmergencyFallbackTriggerTime, offsetof(VtolPathFollowerSettingsData, FlyawayEmergencyFallbackTriggerTime), sizeof(float));
}
void VtolPathFollowerSettingsFlyawayEmergencyFallbackTriggerTimeGet(float *NewFlyawayEmergencyFallbackTriggerTime)
{
    UAVObjGetDataField(VtolPathFollowerSettingsHandle(), (void *)NewFlyawayEmergencyFallbackTriggerTime, offsetof(VtolPathFollowerSettingsData, FlyawayEmergencyFallbackTriggerTime), sizeof(float));
}
void VtolPathFollowerSettingsEmergencyFallbackAttitudeSet( VtolPathFollowerSettingsEmergencyFallbackAttitudeData *NewEmergencyFallbackAttitude )
{
    UAVObjSetDataField(VtolPathFollowerSettingsHandle(), (void *)NewEmergencyFallbackAttitude, offsetof(VtolPathFollowerSettingsData, EmergencyFallbackAttitude), 2*sizeof(float));
}
void VtolPathFollowerSettingsEmergencyFallbackAttitudeGet( VtolPathFollowerSettingsEmergencyFallbackAttitudeData *NewEmergencyFallbackAttitude )
{
    UAVObjGetDataField(VtolPathFollowerSettingsHandle(), (void *)NewEmergencyFallbackAttitude, offsetof(VtolPathFollowerSettingsData, EmergencyFallbackAttitude), 2*sizeof(float));
}
void VtolPathFollowerSettingsEmergencyFallbackAttitudeArraySet( float *NewEmergencyFallbackAttitude )
{
    UAVObjSetDataField(VtolPathFollowerSettingsHandle(), (void *)NewEmergencyFallbackAttitude, offsetof(VtolPathFollowerSettingsData, EmergencyFallbackAttitude), 2*sizeof(float));
}
void VtolPathFollowerSettingsEmergencyFallbackAttitudeArrayGet( float *NewEmergencyFallbackAttitude )
{
    UAVObjGetDataField(VtolPathFollowerSettingsHandle(), (void *)NewEmergencyFallbackAttitude, offsetof(VtolPathFollowerSettingsData, EmergencyFallbackAttitude), 2*sizeof(float));
}
void VtolPathFollowerSettingsEmergencyFallbackYawRateSet( VtolPathFollowerSettingsEmergencyFallbackYawRateData *NewEmergencyFallbackYawRate )
{
    UAVObjSetDataField(VtolPathFollowerSettingsHandle(), (void *)NewEmergencyFallbackYawRate, offsetof(VtolPathFollowerSettingsData, EmergencyFallbackYawRate), 2*sizeof(float));
}
void VtolPathFollowerSettingsEmergencyFallbackYawRateGet( VtolPathFollowerSettingsEmergencyFallbackYawRateData *NewEmergencyFallbackYawRate )
{
    UAVObjGetDataField(VtolPathFollowerSettingsHandle(), (void *)NewEmergencyFallbackYawRate, offsetof(VtolPathFollowerSettingsData, EmergencyFallbackYawRate), 2*sizeof(float));
}
void VtolPathFollowerSettingsEmergencyFallbackYawRateArraySet( float *NewEmergencyFallbackYawRate )
{
    UAVObjSetDataField(VtolPathFollowerSettingsHandle(), (void *)NewEmergencyFallbackYawRate, offsetof(VtolPathFollowerSettingsData, EmergencyFallbackYawRate), 2*sizeof(float));
}
void VtolPathFollowerSettingsEmergencyFallbackYawRateArrayGet( float *NewEmergencyFallbackYawRate )
{
    UAVObjGetDataField(VtolPathFollowerSettingsHandle(), (void *)NewEmergencyFallbackYawRate, offsetof(VtolPathFollowerSettingsData, EmergencyFallbackYawRate), 2*sizeof(float));
}
void VtolPathFollowerSettingsMaxRollPitchSet(float *NewMaxRollPitch)
{
    UAVObjSetDataField(VtolPathFollowerSettingsHandle(), (void *)NewMaxRollPitch, offsetof(VtolPathFollowerSettingsData, MaxRollPitch), sizeof(float));
}
void VtolPathFollowerSettingsMaxRollPitchGet(float *NewMaxRollPitch)
{
    UAVObjGetDataField(VtolPathFollowerSettingsHandle(), (void *)NewMaxRollPitch, offsetof(VtolPathFollowerSettingsData, MaxRollPitch), sizeof(float));
}
void VtolPathFollowerSettingsBrakeRateSet(float *NewBrakeRate)
{
    UAVObjSetDataField(VtolPathFollowerSettingsHandle(), (void *)NewBrakeRate, offsetof(VtolPathFollowerSettingsData, BrakeRate), sizeof(float));
}
void VtolPathFollowerSettingsBrakeRateGet(float *NewBrakeRate)
{
    UAVObjGetDataField(VtolPathFollowerSettingsHandle(), (void *)NewBrakeRate, offsetof(VtolPathFollowerSettingsData, BrakeRate), sizeof(float));
}
void VtolPathFollowerSettingsBrakeMaxPitchSet(float *NewBrakeMaxPitch)
{
    UAVObjSetDataField(VtolPathFollowerSettingsHandle(), (void *)NewBrakeMaxPitch, offsetof(VtolPathFollowerSettingsData, BrakeMaxPitch), sizeof(float));
}
void VtolPathFollowerSettingsBrakeMaxPitchGet(float *NewBrakeMaxPitch)
{
    UAVObjGetDataField(VtolPathFollowerSettingsHandle(), (void *)NewBrakeMaxPitch, offsetof(VtolPathFollowerSettingsData, BrakeMaxPitch), sizeof(float));
}
void VtolPathFollowerSettingsBrakeHorizontalVelPIDSet( VtolPathFollowerSettingsBrakeHorizontalVelPIDData *NewBrakeHorizontalVelPID )
{
    UAVObjSetDataField(VtolPathFollowerSettingsHandle(), (void *)NewBrakeHorizontalVelPID, offsetof(VtolPathFollowerSettingsData, BrakeHorizontalVelPID), 4*sizeof(float));
}
void VtolPathFollowerSettingsBrakeHorizontalVelPIDGet( VtolPathFollowerSettingsBrakeHorizontalVelPIDData *NewBrakeHorizontalVelPID )
{
    UAVObjGetDataField(VtolPathFollowerSettingsHandle(), (void *)NewBrakeHorizontalVelPID, offsetof(VtolPathFollowerSettingsData, BrakeHorizontalVelPID), 4*sizeof(float));
}
void VtolPathFollowerSettingsBrakeHorizontalVelPIDArraySet( float *NewBrakeHorizontalVelPID )
{
    UAVObjSetDataField(VtolPathFollowerSettingsHandle(), (void *)NewBrakeHorizontalVelPID, offsetof(VtolPathFollowerSettingsData, BrakeHorizontalVelPID), 4*sizeof(float));
}
void VtolPathFollowerSettingsBrakeHorizontalVelPIDArrayGet( float *NewBrakeHorizontalVelPID )
{
    UAVObjGetDataField(VtolPathFollowerSettingsHandle(), (void *)NewBrakeHorizontalVelPID, offsetof(VtolPathFollowerSettingsData, BrakeHorizontalVelPID), 4*sizeof(float));
}
void VtolPathFollowerSettingsBrakeVelocityFeedforwardSet(float *NewBrakeVelocityFeedforward)
{
    UAVObjSetDataField(VtolPathFollowerSettingsHandle(), (void *)NewBrakeVelocityFeedforward, offsetof(VtolPathFollowerSettingsData, BrakeVelocityFeedforward), sizeof(float));
}
void VtolPathFollowerSettingsBrakeVelocityFeedforwardGet(float *NewBrakeVelocityFeedforward)
{
    UAVObjGetDataField(VtolPathFollowerSettingsHandle(), (void *)NewBrakeVelocityFeedforward, offsetof(VtolPathFollowerSettingsData, BrakeVelocityFeedforward), sizeof(float));
}
void VtolPathFollowerSettingsUpdatePeriodSet(uint16_t *NewUpdatePeriod)
{
    UAVObjSetDataField(VtolPathFollowerSettingsHandle(), (void *)NewUpdatePeriod, offsetof(VtolPathFollowerSettingsData, UpdatePeriod), sizeof(uint16_t));
}
void VtolPathFollowerSettingsUpdatePeriodGet(uint16_t *NewUpdatePeriod)
{
    UAVObjGetDataField(VtolPathFollowerSettingsHandle(), (void *)NewUpdatePeriod, offsetof(VtolPathFollowerSettingsData, UpdatePeriod), sizeof(uint16_t));
}
void VtolPathFollowerSettingsTreatCustomCraftAsSet(uint8_t *NewTreatCustomCraftAs)
{
    UAVObjSetDataField(VtolPathFollowerSettingsHandle(), (void *)NewTreatCustomCraftAs, offsetof(VtolPathFollowerSettingsData, TreatCustomCraftAs), sizeof(uint8_t));
}
void VtolPathFollowerSettingsTreatCustomCraftAsGet(uint8_t *NewTreatCustomCraftAs)
{
    UAVObjGetDataField(VtolPathFollowerSettingsHandle(), (void *)NewTreatCustomCraftAs, offsetof(VtolPathFollowerSettingsData, TreatCustomCraftAs), sizeof(uint8_t));
}
void VtolPathFollowerSettingsThrustControlSet(uint8_t *NewThrustControl)
{
    UAVObjSetDataField(VtolPathFollowerSettingsHandle(), (void *)NewThrustControl, offsetof(VtolPathFollowerSettingsData, ThrustControl), sizeof(uint8_t));
}
void VtolPathFollowerSettingsThrustControlGet(uint8_t *NewThrustControl)
{
    UAVObjGetDataField(VtolPathFollowerSettingsHandle(), (void *)NewThrustControl, offsetof(VtolPathFollowerSettingsData, ThrustControl), sizeof(uint8_t));
}
void VtolPathFollowerSettingsYawControlSet(uint8_t *NewYawControl)
{
    UAVObjSetDataField(VtolPathFollowerSettingsHandle(), (void *)NewYawControl, offsetof(VtolPathFollowerSettingsData, YawControl), sizeof(uint8_t));
}
void VtolPathFollowerSettingsYawControlGet(uint8_t *NewYawControl)
{
    UAVObjGetDataField(VtolPathFollowerSettingsHandle(), (void *)NewYawControl, offsetof(VtolPathFollowerSettingsData, YawControl), sizeof(uint8_t));
}
void VtolPathFollowerSettingsFlyawayEmergencyFallbackSet(uint8_t *NewFlyawayEmergencyFallback)
{
    UAVObjSetDataField(VtolPathFollowerSettingsHandle(), (void *)NewFlyawayEmergencyFallback, offsetof(VtolPathFollowerSettingsData, FlyawayEmergencyFallback), sizeof(uint8_t));
}
void VtolPathFollowerSettingsFlyawayEmergencyFallbackGet(uint8_t *NewFlyawayEmergencyFallback)
{
    UAVObjGetDataField(VtolPathFollowerSettingsHandle(), (void *)NewFlyawayEmergencyFallback, offsetof(VtolPathFollowerSettingsData, FlyawayEmergencyFallback), sizeof(uint8_t));
}


/**
 * @}
 */
