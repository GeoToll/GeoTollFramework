//
//  GTConstants.h
//  GeoTollFramework
//
//  Created by Garrett Genova on 2/22/21.
//  Copyright © 2021 Garrett Genova. All rights reserved.
//

#define SDK_VERSION                          @"2008.8_iOS_SDK"
#define BUILD_VERSION                        @"1.56"
#define SEND_AUDIT_LOG_INTERVAL              300000

#define GPS_LOG_NEW                          0

#define TOLLRUN_START                        @"TollRun Start"
#define TOLLRUN_STOP                         @"TollRun Stop"

#define onGTApiResponseNotification          @"onGTApiResponseNotification"
#define onGTGPSNotification                  @"onGTGPSNotification"
#define onGTTollrunNotification              @"onGTTollrunNotification"
#define onGTLogoutNotification               @"onGTLogoutNotification"
#define onGTUserDrivingState                 @"onGTUserDrivingState"
#define onGTUserStationaryState              @"onGTUserStationaryState"
#define onGTInternetStateChange              @"onGTInternetStateChange"
#define onUserAuditsChanged                  @"onUserAuditsChanged"
#define onTriggerGantryDistance              @"onTriggerGantryDistance"
#define onGTRequireAlwaysLocationPermission  @"onGTRequireAlwaysLocationPermission"
#define tollRunWillStop                      @"tollRunWillStop"
#define silentNotificationTriggered          @"silentNotificationTriggered"

#define onTollrunStartSuccessfully           @"onTollrunStartSuccessfully"
#define onTollrunStopSuccessfully            @"onTollrunStopSuccessfully"
#define requestingToStartTollRun             @"requestedToStartTollRun"
#define requestingToStopTollRun              @"requestedToStopTollRun"
#define onGeofencesSuccessfullyLoad          @"onGeofencesSuccessfullyLoad"
#define onAudioOutputsChanged                @"AudioOutputsChanged"
#define onStartTollRun                       @"onStartTollRun"
#define onStopTollRun                        @"onStopTollRun"

#define passGantryData                       @"passGantryData"

#pragma mark ERROR

#define NO_VEHICLE_AVAILABLE                 @"No vehicles available."
#define VEHICLE_ID_NOT_FOUND                 @"Vehicle ID not found."
#define NO_INTERNET                          @"Not connected to internet, please connect to internet"

#define FOREGROUND                           @"fg"
#define BACKGROUND                           @"bg"
#define SLU                                  @"SLU"

#define BLUETOOTH_CENTRAL_NAME               @"GT-Central"

#pragma mark GTsession Constants

#define SDK_STATUS                           @"gtsdkStatus"
#define INTITAL_PROCESS                      @"intialProccessStatus"
#define TOKEN                                @"gtToken"
#define REF_TOKEN                            @"gtRefToken"
#define TOKEN_EXPIRATION                     @"gtTokenExpiration"
#define REF_TOKEN_EXPIRATION                 @"gtRefTokenExpiration"
#define TOKEN_REFRESH_DATE                   @"gtTokenRefreshDate"
#define DEVICE_ID                            @"gtDeviceId"
#define USER_ID                              @"gtUserId"
#define USER_EMAIL                           @"userEmail"
#define FIRST_NAME                           @"userFName"
#define LAST_NAME                            @"userLName"
#define USER_PHONE                           @"userPhone"
#define IS_SUBUSER                           @"isSubUser"
#define REQUIRE_PAYMENT_SETUP                @"requirePaymentSetup"
#define REQUIRE_PAYMENT_SETUP_DESC           @"requirePaymentSetupDesc"
#define OLD_PASSWORD                         @"oldPassword"
#define APP_VERSION                          @"appversion"
#define LOC_PERM_REQ                         @"locationPermissionRequested"
#define LAST_LOC_PERM                        @"lastLocationPermissionStatus"
#define PRE_LOC_PERM                         @"previousLocPermission"
#define BLE_PERM_REQ                         @"bluetoothPermissionRequested"
#define BLE_PERM                             @"centralManagerState"
#define LAST_BLE_PERM                        @"lastBluetoothPermissionStatus"
#define CAM_PERM_REQ                         @"cameraPermissionRequested"
#define NOTIF_PERM                           @"notificationAuthorisationTriggered"
#define LAST_NOTIF_PERM                      @"lastNotificationPermissionStatus"
#define DEBUG_SEQUENCE                       @"debugSequence"
#define IS_LOGGED_IN                         @"loggedIn"
#define IS_TOUR_SHOWN                        @"isTourShown"
#define PREV_POWER_MODE                      @"previousPowerMode"
#define INTERNET_AVAILABLE                   @"isInternetAvailable"
#define NETWORK_STATUS                       @"networkStatus"
#define BATTERY_LEVEL                        @"lastSentBatteryLevel"
#define AIRPLANE_MODE                        @"isAirplaneModeOn"
#define FCM                                  @"fcmToken"
#define LOG_LEVEL                            @"gtLogLevel"
#define DEBUG_ENABLED                        @"debug"
#define NOTIF_ENABLED                        @"notificationEnabled"
#define VERIFICATION_SETTINGS                @"verification_settings"
#define RUC_ENABLED                          @"rucEnabled"
#define ETOLL_ENABLED                        @"eTollEnabled"
#define ETOLL_RENTAL_ENABLED                 @"eTollRentalEnabled"
#define ALLOW_REGISTRATION                   @"allowDirectRegistration"
#define ALLOW_ADD_VEHICLE                    @"allowAddVehicle"
#define PASSWORD_CHANGE_REQ                  @"passwordChangeRequired"
#define IS_LOC_PERM_REQ                      @"isLocationPermissionRequired"
#define IS_BLE_PERM_REQ                      @"isBluetoothPermissionRequired"
#define IS_CAM_PERM_REQ                      @"isCameraPermissionRequired"
#define IS_NOTIF_PERM_REQ                    @"isNotificationPermissionRequired"
#define IS_NON_BLE_ETOLL_ENABLED             @"isNonBLETollingEnabled"
#define VEHICLE_SPEED                        @"vehicle_speed"
#define MIN_ETOLL_VEHICLE_SPEED              @"minEtollVehicleSpeed"
#define USER_TIME_ZONE                       @"gtUserTimeZone"
#define USER_VEHICLES                        @"vehicles"
#define ACTIVE_BD_ADDRESS                    @"gtTollrunVehicleBDAddress"
#define ACTIVE_FRIENDLY_NAME                 @"gtTollrunVehicleFriendlyName"
#define VEHICLE_ID                           @"gtVehicleId"
#define VEHICLE_MODEL                        @"vehicleModel"
#define VEHICLE_MAKE                         @"vehicleMake"
#define VEHICLE_VIN                          @"vehicleVin"
#define VEHICLE_YEAR                         @"vehicleYear"
#define API_BASE_URL                         @"gtApi2url"
#define PRIVACY_URL                          @"privacyPolicyUrl"
#define TERMS_URL                            @"termsUrl"
#define HELP_URL                             @"helpUrl"
#define CONTACT_URL                          @"contactUsUrl"
#define PARTICIPANT_AGREEMENT_URL            @"participantAgreementUrl"
#define TOLLRUN_ID                           @"gtTollRunId"
#define LAST_TOLLRUN_ID                      @"gtLastTollRunId"
#define TEMP_TOLLRUN_ID                      @"tempTollRunId"
#define TOLLRUN_VEHICLE                      @"gtTollRunVehicleId"
#define GEO_JSON                             @"gtGeoJson"
#define GEO_JSON_VER                         @"gtGeoJsonVersion"
#define PREV_GEO_FENCE                       @"previousGeofences"
#define CONNECTED_BLE                        @"connectedBluetooth"
#define AUDIO_OUTPUTS                        @"audioOutputs"
#define AUDIO_INPUTS                         @"availableAudioInputs"
#define AUDIO_NAME                           @"audioDeviceName"
#define AUDIO_BD_ADRESS                      @"audioDeviceBDAddress"
#define MIN_SPEED_TOLLRUN_CHECK              @"tollRunAudioRouteChangeSpeedMPH"
#define VEHICLE_BD_ARRAY                     @"vehicleBDAddressArray"
#define PREV_AUDIO_ROUTE                     @"previousRouteName"
#define PREV_VEHICLE_MAC                     @"previousVehiclebdAddressAddress"
#define LAST_SEQUENCE                        @"gtLastSequence"
#define LAST_GPS                             @"gtLastGpsLog"
#define GPS_DISTANCE_FILTER                  @"gpsDistanceFilterMeters"
#define BATCH_SUB_INTERVAL                   @"batchSubmissionIntervalMin"
#define GPS_ACCURACY                         @"minGPSLogAccuracy"
#define LAST_GPS_DATE                        @"lastGPSDate"
#define PREV_SPEED                           @"previousSpeed"
#define LOC_ALWAYS_ALLOWED                   @"alwaysAllowed"
#define LOC_WHILE_IN_USE                     @"whileInUse"
#define USER_NOTIFICATIONS                   @"userNotifications"
#define NOTIFICATION_COUNT                   @"userNotificationCount"
#define NOTIFICATION_RESPONSE_MESSAGE        @"User Notification Messages returned successfully."

#pragma mark Location Manager Constants

#define DATE_FORMAT                          @"yyyy-MM-dd HH:mm:ss.SSS"
#define REGION_RADIUS                        100.00
#define LOW_DISTANCE_FILTER                  5.0
#define MID_DISTANCE_FILTER                  10.0
#define HIGH_DISTANCE_FILTER                 100.0
#define VHIGH_DISTANCE_FILTER                200.0

#define LOCATION_ON                          @"on"
#define LOCATION_OFF                         @"Off"
#define LOCATION_UNAUTHORIZED                @"Unauthorized"
#define LOCATION_RESTRICTED                  @"Restricted"
#define LOCATION_NOT_DETERMINED              @"Not Determined"
#define LOCATION_WHEN_IN_USE                 @"Authorized When In Use"
#define LOCATION_ALWAYS                      @"Authorized Always"
#define LOCATION_UNKNOWN                     @"Unknown"

#pragma mark Bluetooth Manager Constants

#define BLE_UNKOWN                           @"Unknown"
#define BLE_RESETTING                        @"Resetting"
#define BLE_NOT_SUPPORTED                    @"Not supported"
#define BLE_UNAUTHORIZED                     @"Unauthorized"
#define BLE_TURNED_OFF                       @"Turned off"
#define BLE_TURNED_ON                        @"Turned on"

#pragma mark CoreData Manager Constants

#define CD_IDENTIFIER                        @"com.geotoll.framework"
#define CD_USERAUDIT                         @"UserAudit"
#define CD_RUCGPS                            @"GPSRUCPayLoad"
#define CD_ETOLLGPS                          @"GPSETollPayLoad"
#define CD_DEBUG                             @"DebugLog"

#pragma mark Camera Manager Constants

#define CAM_GRANTED                          @"Granted"
#define CAM_DENIED                           @"Denied"

#pragma mark Notification Manager Constants

#define NOTI_GRANTED                          @"Granted"
#define NOTI_DENIED                           @"Denied"
#define NOTI_NOT_DETERMINED                   @"Not determined"
#define NOTI_AUTHORIZED                       @"Authorized"
#define NOTI_PROVISIONAL                      @"Provisional"
#define NOTI_EPHEMERAL                        @"Ephemeral"
#define NOTI_UNKNOWN                          @"Unknown"

typedef enum {
    LOG_ERROR = 1,
    LOG_WARNING = 2,
    LOG_INFO = 3,
    LOG_DEBUG = 4,
    LOG_VERBOSE = 5
} Loglevel;

typedef enum {
    LOW    = 1,
    HIGH   = 2,
    NONE   = 3
} GpsPriority;

typedef enum {
    INSIDE_GANTRY_POLYGON,
    INSIDE_PLAZA_POLYGON,
    INSIDE_TOLLPLAZA_GEOFENCE,
    OUTSIDE_TOLLPLAZA_GEOFENCE,
    INSIDE_REGION_POLYGON,
    OUTSIDE,
    DEFAULT
} ROIState;

