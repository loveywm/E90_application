#ifndef __UI_FONT_H__
#define __UI_FONT_H__

//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
enum
{
	////////////////Menu Structure
	UISTR_MENU_MAINMENU,
	UISTR_MENU_USERMANAGE,
	UISTR_MENU_SYSTEMSETTING,
	UISTR_MENU_USBMANAGE,
	UISTR_MENU_SYSINFOVIEW,
	UISTR_MENU_DATAVIEW,
	UISTR_MENU_ALARMREMOVE,

	//>>UISTR_MENU_USERMANAGE-----------------------------------------------------<<		1
	UISTR_MENU_ENROLLNEW,
	UISTR_MENU_ENROLLBACKUP,
	UISTR_MENU_ENROLLDELETE,
	UISTR_MENU_ENROLLEDIT,
	UISTR_MENU_ENROLLDEL,   
	UISTR_MENU_MESSINFO,
	UISTR_MENU_ENROLL_PICTURE,

	//>>>>UISTR_MENU_ENROLLNEW, UISTR_MENU_ENROLLBACKUP---------------------------<<<<		1.1, 1.2
	UISTR_MENU_ENROLL_FP,
	UISTR_MENU_ENROLL_RFCARD,
	UISTR_MENU_ENROLL_PWD,
	UISTR_MENU_ENROLL_VOICE,
	UISTR_MENU_ENROLL_PHOTO,
	//>>>>UISTR_MENU_ENROLLDELETE-------------------------------------------------<<<<		1.3
	UISTR_MENU_DELETE_ALL,
	UISTR_MENU_DELETE_FP,
	UISTR_MENU_DELETE_RFCARD,
	UISTR_MENU_REMOVE_PWD,
	UISTR_MENU_DELETE_VOICE,
	UISTR_MENU_DELETE_PHOTO,

	//>>UISTR_MENU_SYSTEMSETTING--------------------------------------------------<<		2
	UISTR_MENU_MAINSETTING,
	UISTR_MENU_ADVANCEDSETTING,
	UISTR_MENU_POWERMANAGE,
	UISTR_MENU_COMMSETTING,
	UISTR_MENU_LOGSETTING,
	UISTR_MENU_ACSETTING,
	UISTR_MENU_SELFTEST,

	//>>>>UISTR_MENU_MAINSETTING--------------------------------------------------<<<<		2.1
	UISTR_MENU_MAINSETTING_TIME,
	UISTR_MENU_MAINSETTING_LANGUAGE,
	UISTR_MENU_MAINSETTING_SOUND,
	UISTR_MENU_MAINSETTING_VOLUME,
	UISTR_MENU_MAINSETTING_KEYALARM,
	UISTR_MENU_MAINSETTING_BACKGROUP,    //xf 091106
	//>>>>>>UISTR_MENU_MAINSETTING_TIME-------------------------------------------<<<<<<	2.1.1
	UISTR_MENU_MAINSETTING_TIME_FORMAT,
	UISTR_MENU_MAINSETTING_DATE_FORMAT,
	UISTR_MENU_MAINSETTING_TIME_DATE,
	UISTR_MENU_MAINSETTING_TIME_TIME,
	//>>>>UISTR_MENU_ADVANCEDSETTING----------------------------------------------<<<<		2.2
	UISTR_MENU_ADVANCEDSETTING_VERIFYIF,
	UISTR_MENU_ADVANCEDSETTING_LOGDELETEALL,
	UISTR_MENU_ADVANCEDSETTING_ENROLLDELETEALL,
	UISTR_MENU_ADVANCEDSETTING_DEFAULT,
	UISTR_MENU_ADVANCEDSETTING_FWUPGRADE,
	UISTR_MENU_ADVANCEDSETTING_THEME,
	UISTR_MENU_ADVANCEDSETTING_DAYLIGHT,
	UISTR_MENU_ADVANCEDSETTING_FUNCKEY,
	UISTR_MENU_ADVANCEDSETTING_MANAGER_COUNT,
	UISTR_MENU_ADVANCEDSETTING_DEFAULT_VERIFYMODE,
	UISTR_MENU_ADVANCEDSETTING_SMANAGER_PWD,
	UISTR_MENU_ADVANCEDSETTING_BRIGHT_ADJUST,
	//>>>>>>UISTR_MENU_ADVANCEDSETTING_VERIFYIF-----------------------------------<<<<<<	2.2.1
	UISTR_MENU_ADVANCEDSETTING_VERIFYIF_CAMERA,
	UISTR_MENU_ADVANCEDSETTING_VERIFYIF_PHOTOSHOW,
	UISTR_MENU_ADVANCEDSETTING_VERIFYIF_CAMERASHOW,
	UISTR_MENU_ADVANCEDSETTING_VERIFYIF_FPSHOW,
	//>>>>>>>>UISTR_MENU_ADVANCEDSETTING_VERIFYIF_CAMERA--------------------------<<<<<<<<	2.2.1.1
	UISTR_MENU_ADVANCEDSETTING_VERIFYIF_CAMERA_SAVE,
	UISTR_MENU_ADVANCEDSETTING_VERIFYIF_CAMERA_FP,
	UISTR_MENU_ADVANCEDSETTING_VERIFYIF_CAMERA_CARD,
	UISTR_MENU_ADVANCEDSETTING_VERIFYIF_CAMERA_PWD,
	//>>>>>>UISTR_MENU_ADVANCEDSETTING_DAYLIGHT-----------------------------------<<<<<<	2.2.6
	UISTR_MENU_ADVANCEDSETTING_DAYLIGHT_OFFSET,
	UISTR_MENU_ADVANCEDSETTING_DAYLIGHT_CHANGE,
	UISTR_MENU_ADVANCEDSETTING_DAYLIGHT_RESTORE,
	//>>>>>>UISTR_MENU_ADVANCEDSETTING_FUNCKEY------------------------------------<<<<<<	2.2.7
	UISTR_MENU_ADVANCEDSETTING_FUNCKEY_F1,
	UISTR_MENU_ADVANCEDSETTING_FUNCKEY_F2,
	UISTR_MENU_ADVANCEDSETTING_FUNCKEY_F3,
	UISTR_MENU_ADVANCEDSETTING_FUNCKEY_F4,
	//>>>>UISTR_MENU_POWERMANAGE--------------------------------------------------<<<<		2.3
	UISTR_MENU_POWERMANAGE_BELL,
	UISTR_MENU_POWERMANAGE_IDLE,
	UISTR_MENU_POWERMANAGE_POWEROFF,
	UISTR_MENU_POWERMANAGE_POWERON,
	UISTR_MENU_POWERMANAGE_SLEEP,
	UISTR_MENU_POWERMANAGE_POWERKEYUSE,
	UISTR_MENU_POWERMANAGE_TRSWITCH,
	//>>>>>>UISTR_MENU_POWERMANAGE_IDLE-------------------------------------------<<<<		2.3.2
	UISTR_MENU_POWERMANAGE_IDLE_POWEROFF,
	UISTR_MENU_POWERMANAGE_IDLE_SLEEP,
	UISTR_MENU_POWERMANAGE_IDLE_LCDSWITCH,
	//>>>>UISTR_MENU_COMMSETTING--------------------------------------------------<<<<		2.4
	UISTR_MENU_COMMSETTING_DEVICEID,
	UISTR_MENU_COMMSETTING_BAUDRATE,
	UISTR_MENU_COMMSETTING_ETHERNETUSE,
	UISTR_MENU_COMMSETTING_IPADDRESS,
	UISTR_MENU_COMMSETTING_MASKADDRESS,
	UISTR_MENU_COMMSETTING_GWADDRESS,
	UISTR_MENU_COMMSETTING_RS232USE,
	UISTR_MENU_COMMSETTING_RS485USE,
	UISTR_MENU_COMMSETTING_COMMPWD,
	UISTR_MENU_COMMSETTING_DHCPUSE,
	UISTR_MENU_COMMSETTING_PCBACKGROUND,
	UISTR_MENU_COMMSETTING_PCBACKPORT,
	UISTR_MENU_COMMSETTING_TCPIP,
	//>>>>UISTR_MENU_LOGSETTING---------------------------------------------------<<<<		2.5
	UISTR_MENU_LOGSETTING_MLOGWARNING,
	UISTR_MENU_LOGSETTING_GLOGWARNING,
	UISTR_MENU_LOGSETTING_REVERIFYTIME,
	//>>>>UISTR_MENU_ACSETTING----------------------------------------------------<<<<		2.6
	UISTR_MENU_ACSETTING_TIMEZONE,
	UISTR_MENU_ACSETTING_GROUP,
	UISTR_MENU_ACSETTING_USERTIMEZONE,
	UISTR_MENU_ACSETTING_LOCKGROUP_MAIN,
	UISTR_MENU_ACSETTING_LOCKGROUP,
	UISTR_MENU_ACSETTING_LOCKTIME,
	UISTR_MENU_ACSETTING_OPENTIME,
	UISTR_MENU_ACSETTING_DOORSENSOR,
	UISTR_MENU_ACSETTING_DURESS,
	UISTR_MENU_ACSETTING_ILLEGALVERIFYWARNING,
	UISTR_MENU_ACSETTING_GROUPVERIFYMODE,
	UISTR_MENU_ACSETTING_ANTIPASS,
	UISTR_MENU_ACSETTING_ACCONTROLLERUSE,
	UISTR_MENU_ACSETTING_GROUP_SET,
	UISTR_MENU_ACSETTING_GROUP_DEFAULT_VM,
	UISTR_MENU_ACSETTING_LOCKGROUP_SET,
	//>>>>>>UISTR_MENU_ACSETTING_GROUP--------------------------------------------<<<<<<	2.6.2
	UISTR_MENU_ACSETTING_GROUP_1,
	UISTR_MENU_ACSETTING_GROUP_2,
	UISTR_MENU_ACSETTING_GROUP_3,
	UISTR_MENU_ACSETTING_GROUP_4,
	UISTR_MENU_ACSETTING_GROUP_5,
	//>>>>>>UISTR_MENU_ACSETTING_USERTIMEZONE-------------------------------------<<<<<<	2.6.3
	UISTR_MENU_ACSETTING_USERTIMEZONE_GROUP,
	UISTR_MENU_ACSETTING_USERTIMEZONE_GTZUSE,
	UISTR_MENU_ACSETTING_USERTIMEZONE_TZ1,
	UISTR_MENU_ACSETTING_USERTIMEZONE_TZ2,
	UISTR_MENU_ACSETTING_USERTIMEZONE_TZ3,
	UISTR_MENU_ACSETTING_USERTIMEZONE_GVMUSE,
	UISTR_MENU_ACSETTING_USERTIMEZONE_VERIFYMODE,
	//>>>>>>UISTR_MENU_ACSETTING_LOCKGROUP----------------------------------------<<<<<<	2.6.4
	UISTR_MENU_ACSETTING_LOCKGROUP_1,
	UISTR_MENU_ACSETTING_LOCKGROUP_2,
	UISTR_MENU_ACSETTING_LOCKGROUP_3,
	UISTR_MENU_ACSETTING_LOCKGROUP_4,
	UISTR_MENU_ACSETTING_LOCKGROUP_5,
	UISTR_MENU_ACSETTING_LOCKGROUP_6,
	UISTR_MENU_ACSETTING_LOCKGROUP_7,
	UISTR_MENU_ACSETTING_LOCKGROUP_8,
	UISTR_MENU_ACSETTING_LOCKGROUP_9,
	UISTR_MENU_ACSETTING_LOCKGROUP_10,
	//>>>>>>UISTR_MENU_ACSETTING_DURESS---------------------------------------<<<<<<	2.6.8
	UISTR_MENU_ACSETTING_DURESS_MANAGE,
	UISTR_MENU_ACSETTING_DURESS_PWD,
	UISTR_MENU_ACSETTING_DURESS_SOSKEY,
	UISTR_MENU_ACSETTING_DURESS_ALARMDELAY,
	//>>>>>>>>UISTR_MENU_ACSETTING_DURESS_MANAGE------------------------------<<<<<<<<	2.6.8.1
	UISTR_MENU_ACSETTING_DURESS_MANAGE_ENROLL,
	UISTR_MENU_ACSETTING_DURESS_MANAGE_SET,
	UISTR_MENU_ACSETTING_DURESS_MANAGE_REMOVE,
	UISTR_MENU_ACSETTING_DURESS_MANAGE_REMOVEALL,
	//>>>>>>UISTR_MENU_ACSETTING_GROUPVERIFYMODE----------------------------------<<<<<<	2.6.10
	UISTR_MENU_ACSETTING_GROUPVERIFYMODE_GROUP1,
	UISTR_MENU_ACSETTING_GROUPVERIFYMODE_GROUP2,
	UISTR_MENU_ACSETTING_GROUPVERIFYMODE_GROUP3,
	UISTR_MENU_ACSETTING_GROUPVERIFYMODE_GROUP4,
	UISTR_MENU_ACSETTING_GROUPVERIFYMODE_GROUP5,
	//>>>>UISTR_MENU_SELFTEST-----------------------------------------------------<<<<		2.7
	UISTR_MENU_SELFTEST_ALL,
	UISTR_MENU_SELFTEST_MEMORY,
	UISTR_MENU_SELFTEST_LCD,
	UISTR_MENU_SELFTEST_SOUND,
	UISTR_MENU_SELFTEST_SENSOR,
	UISTR_MENU_SELFTEST_KEYBOARD,
	UISTR_MENU_SELFTEST_RTC,
	UISTR_MENU_SELFTEST_MP3,

	//>>UISTR_MENU_USBMANAGE------------------------------------------------------<<		3
	UISTR_MENU_GLOGDOWNLOAD,
	UISTR_MENU_ALLGLOGDOWNLOAD,  
	UISTR_MENU_MLOGDOWNLOAD,
	UISTR_MENU_ALLMLOGDOWNLOAD,   
	UISTR_MENU_USERINFODOWNLOAD,
	UISTR_MENU_USERINFOUPLOAD,
	UISTR_MENU_MSGUPLOAD,
	UISTR_MENU_MP3UPLOAD,

	//>>UISTR_MENU_SYSINFOVIEW----------------------------------------------------<<		4
	UISTR_MENU_USERENROLLCOUNT,
	UISTR_MENU_FPENROLLCOUNT,
	UISTR_MENU_PWDENROLLCOUNT,
	UISTR_MENU_CARDENROLLCOUNT,
	UISTR_MENU_GLOGCOUNT,
	UISTR_MENU_MLOGCOUNT,
	UISTR_MENU_USEDMEMORY,
	UISTR_MENU_FREESPACES,
	UISTR_MENU_DEVICEINFO,
	UISTR_MENU_USEDSPACES,

	//>>>>UISTR_MENU_FREESPACES---------------------------------------------------<<<<		4.6
	UISTR_MENU_FREE_USERENROLLCOUNT,
	UISTR_MENU_FREE_FPENROLLCOUNT,
	UISTR_MENU_FREE_PWDENROLLCOUNT,
	UISTR_MENU_FREE_CARDENROLLCOUNT,
	UISTR_MENU_FREE_GLOGCOUNT,
	UISTR_MENU_FREE_MLOGCOUNT,
	UISTR_MENU_FREE_FREEMEMORY,
	//>>>>UISTR_MENU_DEVICEINFO---------------------------------------------------<<<<		4.7
	UISTR_MENU_DEVINFO_FP,
	UISTR_MENU_DEVINFO_GLOG,
	UISTR_MENU_DEVINFO_SLOG,
	UISTR_MENU_DEVINFO_MEMORY,
	UISTR_MENU_DEVINFO_FIRSTDATE,
	UISTR_MENU_DEVINFO_SN,
	UISTR_MENU_DEVINFO_TRADEMARK,
	UISTR_MENU_DEVINFO_PRODUCTNAME,
	UISTR_MENU_DEVINFO_PRODUCTTYPE,
	UISTR_MENU_DEVINFO_ENGINEVERSION,
	UISTR_MENU_DEVINFO_FIRMWAREVERSION,
	UISTR_MENU_DEVINFO_HARDWAREVERSION,

	//>>UISTR_MENU_DATAVIEW-------------------------------------------------------<<		5
	UISTR_MENU_GLOGVIEW,
	UISTR_MENU_MLOGVIEW,
	UISTR_MENU_ENROLLVIEW,
	//////////////////////////////

	////////////////Help Structure
	UISTR_HELP_MAINMENU,
	UISTR_HELP_USERMANAGE,
	UISTR_HELP_SYSTEMSETTING,
	UISTR_HELP_USBMANAGE,
	UISTR_HELP_SYSINFOVIEW,
	UISTR_HELP_DATAVIEW,
	UISTR_HELP_ALARMREMOVE,

	//>>UISTR_HELP_USERMANAGE-----------------------------------------------------<<		1
	UISTR_HELP_ENROLLNEW,
	UISTR_HELP_ENROLLBACKUP,
	UISTR_HELP_ENROLLDELETE,

	//>>>>UISTR_HELP_ENROLLNEW, UISTR_HELP_ENROLLBACKUP---------------------------<<<<		1.1, 1.2
	UISTR_HELP_ENROLL_FP,
	UISTR_HELP_ENROLL_RFCARD,
	UISTR_HELP_ENROLL_VOICE,
	UISTR_HELP_ENROLL_PHOTO,
	//>>>>UISTR_HELP_ENROLLDELETE-------------------------------------------------<<<<		1.3
	UISTR_HELP_DELETE_ALL,
	UISTR_HELP_DELETE_FP,
	UISTR_HELP_DELETE_RFCARD,
	UISTR_HELP_REMOVE_PWD,
	UISTR_HELP_DELETE_VOICE,
	UISTR_HELP_DELETE_PHOTO,

	//>>UISTR_HELP_SYSTEMSETTING--------------------------------------------------<<		2
	UISTR_HELP_MAINSETTING,
	UISTR_HELP_ADVANCEDSETTING,
	UISTR_HELP_POWERMANAGE,
	UISTR_HELP_COMMSETTING,
	UISTR_HELP_LOGSETTING,
	UISTR_HELP_ACSETTING,
	UISTR_HELP_SELFTEST,

	//>>>>UISTR_HELP_MAINSETTING--------------------------------------------------<<<<		2.1
	UISTR_HELP_MAINSETTING_TIME,
	UISTR_HELP_MAINSETTING_LANGUAGE,
	UISTR_HELP_MAINSETTING_SOUND,
	UISTR_HELP_MAINSETTING_VOLUME,
	UISTR_HELP_MAINSETTING_KEYALARM,
	//>>>>>>UISTR_HELP_MAINSETTING_TIME-------------------------------------------<<<<<<	2.1.1
	UISTR_HELP_MAINSETTING_TIME_FORMAT,
	UISTR_HELP_MAINSETTING_DATE_FORMAT,
	UISTR_HELP_MAINSETTING_TIME_DATE,
	UISTR_HELP_MAINSETTING_TIME_TIME,
	//>>>>UISTR_HELP_ADVANCEDSETTING----------------------------------------------<<<<		2.2
	UISTR_HELP_ADVANCEDSETTING_VERIFYIF,
	UISTR_HELP_ADVANCEDSETTING_LOGDELETEALL,
	UISTR_HELP_ADVANCEDSETTING_ENROLLDELETEALL,
	UISTR_HELP_ADVANCEDSETTING_DEFAULT,
	UISTR_HELP_ADVANCEDSETTING_FWUPGRADE,
	UISTR_HELP_ADVANCEDSETTING_DAYLIGHT,
	UISTR_HELP_ADVANCEDSETTING_FUNCKEY,
	UISTR_HELP_ADVANCEDSETTING_MANAGER_COUNT,
	UISTR_HELP_ADVANCEDSETTING_DEFAULT_VERIFYMODE,
	UISTR_HELP_ADVANCEDSETTING_SMANAGER_PWD,
	UISTR_HELP_ADVANCEDSETTING_BRIGHT_ADJUST,
	//>>>>>>UISTR_HELP_ADVANCEDSETTING_VERIFYIF-----------------------------------<<<<<<	2.2.1
	UISTR_HELP_ADVANCEDSETTING_VERIFYIF_CAMERA,
	UISTR_HELP_ADVANCEDSETTING_VERIFYIF_PHOTO,
	UISTR_HELP_ADVANCEDSETTING_VERIFYIF_FP,
	//>>>>>>>>UISTR_HELP_ADVANCEDSETTING_VERIFYIF_CAMERA--------------------------<<<<<<<<	2.2.1.1
	UISTR_HELP_ADVANCEDSETTING_VERIFYIF_CAMERA_SAVE,
	UISTR_HELP_ADVANCEDSETTING_VERIFYIF_CAMERA_FP,
	UISTR_HELP_ADVANCEDSETTING_VERIFYIF_CAMERA_CARD,
	UISTR_HELP_ADVANCEDSETTING_VERIFYIF_CAMERA_PWD,
	//>>>>>>UISTR_HELP_ADVANCEDSETTING_DAYLIGHT-----------------------------------<<<<<<	2.2.6
	UISTR_HELP_ADVANCEDSETTING_DAYLIGHT_OFFSET,
	UISTR_HELP_ADVANCEDSETTING_DAYLIGHT_CHANGE,
	UISTR_HELP_ADVANCEDSETTING_DAYLIGHT_RESTORE,
	//>>>>>>UISTR_HELP_ADVANCEDSETTING_FUNCKEY------------------------------------<<<<<<	2.2.7
	UISTR_HELP_ADVANCEDSETTING_FUNCKEY_F1,
	UISTR_HELP_ADVANCEDSETTING_FUNCKEY_F2,
	UISTR_HELP_ADVANCEDSETTING_FUNCKEY_F3,
	UISTR_HELP_ADVANCEDSETTING_FUNCKEY_F4,
	//>>>>UISTR_HELP_POWERMANAGE--------------------------------------------------<<<<		2.3
	UISTR_HELP_POWERMANAGE_BELL,
	UISTR_HELP_POWERMANAGE_IDLE,
	UISTR_HELP_POWERMANAGE_POWEROFF,
	UISTR_HELP_POWERMANAGE_POWERON,
	UISTR_HELP_POWERMANAGE_SLEEP,
	UISTR_HELP_POWERMANAGE_POWERKEYUSE,
	UISTR_HELP_POWERMANAGE_TRSWITCH,
	//>>>>>>UISTR_HELP_POWERMANAGE_IDLE-------------------------------------------<<<<		2.3.2
	UISTR_HELP_POWERMANAGE_IDLE_POWEROFF,
	UISTR_HELP_POWERMANAGE_IDLE_SLEEP,
	UISTR_HELP_POWERMANAGE_IDLE_LCDSWITCH,
	//>>>>UISTR_HELP_COMMSETTING--------------------------------------------------<<<<		2.4
	UISTR_HELP_COMMSETTING_DEVICEID,
	UISTR_HELP_COMMSETTING_BAUDRATE,
	UISTR_HELP_COMMSETTING_ETHERNETUSE,
	UISTR_HELP_COMMSETTING_IPADDRESS,
	UISTR_HELP_COMMSETTING_MASKADDRESS,
	UISTR_HELP_COMMSETTING_GWADDRESS,
	UISTR_HELP_COMMSETTING_RS232USE,
	UISTR_HELP_COMMSETTING_RS485USE,
	UISTR_HELP_COMMSETTING_COMMPWD,
	UISTR_HELP_COMMSETTING_DHCPUSE,
	UISTR_HELP_COMMSETTING_PCBACKGROUND,
	//>>>>UISTR_HELP_LOGSETTING---------------------------------------------------<<<<		2.5
	UISTR_HELP_LOGSETTING_MLOGWARNING,
	UISTR_HELP_LOGSETTING_GLOGWARNING,
	UISTR_HELP_LOGSETTING_REVERIFYTIME,
	//>>>>UISTR_HELP_ACSETTING----------------------------------------------------<<<<		2.6
	UISTR_HELP_ACSETTING_TIMEZONE,
	UISTR_HELP_ACSETTING_GROUP,
	UISTR_HELP_ACSETTING_USERTIMEZONE,
	UISTR_HELP_ACSETTING_LOCKGROUP_MAIN,
	UISTR_HELP_ACSETTING_LOCKGROUP,
	UISTR_HELP_ACSETTING_LOCKTIME,
	UISTR_HELP_ACSETTING_OPENTIME,
	UISTR_HELP_ACSETTING_DOORSENSOR,
	UISTR_HELP_ACSETTING_DURESS,
	UISTR_HELP_ACSETTING_ILLEGALVERIFYWARNING,
	UISTR_HELP_ACSETTING_GROUPVERIFYMODE,
	UISTR_HELP_ACSETTING_ANTIPASS,
	UISTR_HELP_ACSETTING_ACCONTROLLERUSE,
	//>>>>>>UISTR_HELP_ACSETTING_GROUP--------------------------------------------<<<<<<	2.6.2
	UISTR_HELP_ACSETTING_GROUP_1,
	UISTR_HELP_ACSETTING_GROUP_2,
	UISTR_HELP_ACSETTING_GROUP_3,
	UISTR_HELP_ACSETTING_GROUP_4,
	UISTR_HELP_ACSETTING_GROUP_5,
	//>>>>>>UISTR_HELP_ACSETTING_USERTIMEZONE-------------------------------------<<<<<<	2.6.3
	UISTR_HELP_ACSETTING_USERTIMEZONE_GROUP,
	UISTR_HELP_ACSETTING_USERTIMEZONE_GTZUSE,
	UISTR_HELP_ACSETTING_USERTIMEZONE_TZ1,
	UISTR_HELP_ACSETTING_USERTIMEZONE_TZ2,
	UISTR_HELP_ACSETTING_USERTIMEZONE_TZ3,
	UISTR_HELP_ACSETTING_USERTIMEZONE_GVMUSE,
	UISTR_HELP_ACSETTING_USERTIMEZONE_VERIFYMODE,
	//>>>>>>UISTR_HELP_ACSETTING_LOCKGROUP----------------------------------------<<<<<<	2.6.4
	UISTR_HELP_ACSETTING_LOCKGROUP_1,
	UISTR_HELP_ACSETTING_LOCKGROUP_2,
	UISTR_HELP_ACSETTING_LOCKGROUP_3,
	UISTR_HELP_ACSETTING_LOCKGROUP_4,
	UISTR_HELP_ACSETTING_LOCKGROUP_5,
	UISTR_HELP_ACSETTING_LOCKGROUP_6,
	UISTR_HELP_ACSETTING_LOCKGROUP_7,
	UISTR_HELP_ACSETTING_LOCKGROUP_8,
	UISTR_HELP_ACSETTING_LOCKGROUP_9,
	UISTR_HELP_ACSETTING_LOCKGROUP_10,
	//>>>>>>UISTR_HELP_ACSETTING_DURESS---------------------------------------<<<<<<	2.6.8
	UISTR_HELP_ACSETTING_DURESS_MANAGE,
	UISTR_HELP_ACSETTING_DURESS_PWD,
	UISTR_HELP_ACSETTING_DURESS_SOSKEY,
	UISTR_HELP_ACSETTING_DURESS_ALARMDELAY,
	//>>>>>>>>UISTR_HELP_ACSETTING_DURESS_MANAGE------------------------------<<<<<<<<	2.6.8.1
	UISTR_HELP_ACSETTING_DURESS_MANAGE_ENROLL,
	UISTR_HELP_ACSETTING_DURESS_MANAGE_SET,
	UISTR_HELP_ACSETTING_DURESS_MANAGE_REMOVE,
	UISTR_HELP_ACSETTING_DURESS_MANAGE_REMOVEALL,
	//>>>>>>UISTR_HELP_ACSETTING_GROUPVERIFYMODE----------------------------------<<<<<<	2.6.10
	UISTR_HELP_ACSETTING_GROUPVERIFYMODE_GROUP1,
	UISTR_HELP_ACSETTING_GROUPVERIFYMODE_GROUP2,
	UISTR_HELP_ACSETTING_GROUPVERIFYMODE_GROUP3,
	UISTR_HELP_ACSETTING_GROUPVERIFYMODE_GROUP4,
	UISTR_HELP_ACSETTING_GROUPVERIFYMODE_GROUP5,
	//>>>>UISTR_HELP_SELFTEST-----------------------------------------------------<<<<		2.7
	UISTR_HELP_SELFTEST_ALL,
	UISTR_HELP_SELFTEST_MEMORY,
	UISTR_HELP_SELFTEST_LCD,
	UISTR_HELP_SELFTEST_SOUND,
	UISTR_HELP_SELFTEST_SENSOR,
	UISTR_HELP_SELFTEST_KEYBOARD,
	UISTR_HELP_SELFTEST_RTC,
	UISTR_HELP_SELFTEST_MP3,

	//>>UISTR_HELP_USBMANAGE------------------------------------------------------<<		3
	UISTR_HELP_GLOGDOWNLOAD,
	UISTR_HELP_MLOGDOWNLOAD,
	UISTR_HELP_USERINFODOWNLOAD,
	UISTR_HELP_USERINFOUPLOAD,
	UISTR_HELP_MSGUPLOAD,
	UISTR_HELP_MP3UPLOAD,

	//>>UISTR_HELP_SYSINFOVIEW----------------------------------------------------<<		4
	UISTR_HELP_USERENROLLCOUNT,
	UISTR_HELP_FPENROLLCOUNT,
	UISTR_HELP_GLOGCOUNT,
	UISTR_HELP_MLOGCOUNT,
	UISTR_HELP_USEDMEMORY,
	UISTR_HELP_FREESPACES,
	UISTR_HELP_DEVICEINFO,

	//>>>>UISTR_HELP_FREESPACES---------------------------------------------------<<<<		4.6
	UISTR_HELP_FREE_USERENROLLCOUNT,
	UISTR_HELP_FREE_FPENROLLCOUNT,
	UISTR_HELP_FREE_GLOGCOUNT,
	UISTR_HELP_FREE_MLOGCOUNT,
	UISTR_HELP_FREE_FREEMEMORY,
	//>>>>UISTR_HELP_DEVICEINFO---------------------------------------------------<<<<		4.7
	UISTR_HELP_DEVINFO_FP,
	UISTR_HELP_DEVINFO_GLOG,
	UISTR_HELP_DEVINFO_SLOG,
	UISTR_HELP_DEVINFO_MEMORY,
	UISTR_HELP_DEVINFO_FIRSTDATE,
	UISTR_HELP_DEVINFO_SN,
	UISTR_HELP_DEVINFO_TRADEMARK,
	UISTR_HELP_DEVINFO_PRODUCTNAME,
	UISTR_HELP_DEVINFO_PRODUCTTYPE,
	UISTR_HELP_DEVINFO_ENGINEVERSION,
	UISTR_HELP_DEVINFO_FIRMWAREVERSION,

	//>>UISTR_HELP_DATAVIEW-------------------------------------------------------<<		5
	UISTR_HELP_GLOGVIEW,
	UISTR_HELP_MLOGVIEW,
	UISTR_HELP_ENROLLVIEW,
	//////////////////////////////

	///////////////Enroll
	UISTR_ENROLL_OVERFLOW,
	UISTR_ENROLL_MANAGER_OVERFLOW,
	UISTR_ENROLL_NOUSER,
	UISTR_ENROLL_INVALID_ID,
	UISTR_ENROLL_USED_ID,
	UISTR_ENROLL_INCORRECT_PWD,
	UISTR_ENROLL_SAVEOK,
	UISTR_ENROLL_SAVEFAIL,
	UISTR_ENROLL_CURRENT_USER,
	UISTR_ENROLL_NAME,
	UISTR_ENROLLFP_FPFULL,
	UISTR_ENROLLFP_FPNO,
	UISTR_ENROLLFP_PRESSFP1,
	UISTR_ENROLLFP_PRESSFP2,
	UISTR_ENROLLFP_PRESSFP3,
	UISTR_ENROLLFP_TAKEOFF,
	UISTR_ENROLLFP_PRESAGAIN,
	UISTR_ENROLLFP_ENROLLSUCCESS,
	UISTR_ENROLLFP_FPDOUBLED,
	UISTR_ENROLLFP_ESCAPE,
	UISTR_ENROLLFP_NOT_ENROLLED,
	UISTR_ENROLLPWD_PWDEXIST,
	UISTR_ENROLLPWD_FAIL,
	UISTR_ENROLLCARD_RFEXIST,
	UISTR_ENROLLCARD_INPUTRF,
	UISTR_ENROLLCARD_ENROLLSUCCESS,
	UISTR_ENROLLCARD_RFDOUBLED_REINPUT,
	UISTR_ENROLLVOICE_VOICEEXIST,
	UISTR_ENROLLVOICE_SPEAKNAME,
	UISTR_ENROLLVOICE_ENROLLSUCCESS,
	UISTR_ENROLLVOICE_RETRY,
	UISTR_ENROLLVOICE_START,
	UISTR_ENROLLVOICE_STOP,
	USITR_ENROLLVOICE_PLAYBACK,
	UISTR_ENROLLPHOTO_PHOTOEXIST,
	UISTR_ENROLLPHOTO_PREPARE,
	UISTR_ENROLLPHOTO_SUCCESS,
	UISTR_ENROLLPHOTO_RETRY,
	UISTR_ENROLLDELETE_DELETECONFIRM,
	UISTR_ENROLLDELETE_DELETESUCCESS,
	UISTR_ENROLLDELETE_NOFP,
	UISTR_ENROLLDELETE_NOCARD,
	UISTR_ENROLLDELETE_NOPWD,
	UISTR_ENROLLDELETE_NOVOICE,
	UISTR_ENROLLDELETE_NOPHOTO,
	UISTR_ENROLLDELETE_NODATA,
	UISTR_DURESS_PRESS_ENROLLEDFP,
	UISTR_DURESS_ALREADYSET,
	UISTR_DURESS_NOT,
	UISTR_DURESS_SET_CONFIRM,
	UISTR_DURESS_REMOVE_CONFIRM,
	UISTR_DURESS_NOEXIST,
	//////////////////////////////

	/////////////Verify
	UISTR_VERIFY_DATE,
	UISTR_VERIFY_TIME,
	UISTR_VERIFY_TRSTATE,
	UISTR_VERIFY_ID,
	UISTR_VERIFY_NAME,
	UISTR_VERIFY_PRIV,
	UISTR_VERIFY_PART,
	UISTR_VERIFY_TAKEOFF,
	UISTR_VERIFY_DISABLED,
	UISTR_VERIFY_ILLEGAL,
	UISTR_VERIFY_SUCCESS,
	UISTR_VERIFY_REVERIFY,
	UISTR_VERIFY_FAIL,
	UISTR_VERIFY_REINPUT,
	UISTR_VERIFY_INPUT_ID,
	UISTR_VERIFY_PRESS_FINGER,
	UISTR_VERIFY_INPUT_CARD,
	UISTR_VERIFY_INPUT_PWD,
	UISTR_VERIFY_INVALID_TZ,
	UISTR_VERIFY_INVALID_GROUP,
	UISTR_VERIFY_ANTIPASS_NOT,
	USITR_VERIFY_MASTER_CONNECT_ERROR,
	//////////////////////////////

	/////////////Search
	UISTR_SEARCH_INVALIDPARAM,
	UISTR_SEARCH_NODATA,
	UISTR_SEARCH_MUST_VERIFY,
	//////////////////////////////

	UISTR_LANG_START, UISTR_LANG_ENG = UISTR_LANG_START,
	UISTR_LANG_SCHN,
	UISTR_LANG_TCHN,
	UISTR_LANG_KOR,
	UISTR_LANG_JPN, UISTR_LANG_END = UISTR_LANG_JPN,

	UISTR_BK_START, UISTR_BK_1 = UISTR_BK_START,
	UISTR_BK_2,
	UISTR_BK_3,
	UISTR_BK_4,
    UISTR_BK_5,
	UISTR_BK_6, UISTR_BK_END = UISTR_BK_6,

    UISTR_FUNC_START, UISTR_FUNC_DUTYNO = UISTR_FUNC_START,	  
	UISTR_FUNC_DUTYON,                                        
	UISTR_FUNC_DUTYOFF, UISTR_FUNC_END = UISTR_FUNC_DUTYOFF,   
	UISTR_FUNC_OVERTIMEON,
	UISTR_FUNC_OVERTIMEOFF,
	UISTR_FUNC_GOOUTON,
	UISTR_FUNC_GOOUTOFF,
	UISTR_FUNC_IN,
	UISTR_FUNC_OUT,  
	UISTR_FUNC_LOGVIEW,
	UISTR_FUNC_BELL,
	UISTR_FUNC_ALARM,
	UISTR_FUNC_SYSINFO,

	UISTR_TIMEFMT_START, UISTR_TIMEFMT_12 = UISTR_TIMEFMT_START,
	UISTR_TIMEFMT_24, UISTR_TIMEFMT_END = UISTR_TIMEFMT_24,

	UISTR_DATEFMT_START, UISTR_DATEFMT_1 = UISTR_DATEFMT_START,
	UISTR_DATEFMT_2,
	UISTR_DATEFMT_3,
	UISTR_DATEFMT_4,
	UISTR_DATEFMT_5,
	UISTR_DATEFMT_6,
	UISTR_DATEFMT_7,
	UISTR_DATEFMT_8,
	UISTR_DATEFMT_9,
	UISTR_DATEFMT_10, UISTR_DATEFMT_END = UISTR_DATEFMT_10,

	UISTR_BPS_START, UISTR_BPS_9600 = UISTR_BPS_START,
	UISTR_BPS_19200,
	UISTR_BPS_38400,
	UISTR_BPS_57600,
	UISTR_BPS_115200, UISTR_BPS_END = UISTR_BPS_115200,

	UISTR_THEME_START, UISTR_THEME_1 = UISTR_THEME_START,
	UISTR_THEME_2, UISTR_THEME_END = UISTR_THEME_2,

	UISTR_VERIFYMODE_START, UISTR_VERIFYMODE_NONE = UISTR_VERIFYMODE_START,
	UISTR_VERIFYMODE_ANY,
	UISTR_VERIFYMODE_FP,
	UISTR_VERIFYMODE_RFFP,
	UISTR_VERIFYMODE_RF,
	UISTR_VERIFYMODE_IDFP,
	UISTR_VERIFYMODE_IDPW, UISTR_VERIFYMODE_END = UISTR_VERIFYMODE_IDPW,

	UISTR_DOORSENSOR_START, UISTR_DOORSENSOR_NO = UISTR_DOORSENSOR_START,
	UISTR_DOORSENSOR_OPEN,
	UISTR_DOORSENSOR_CLOSE, UISTR_DOORSENSOR_END = UISTR_DOORSENSOR_CLOSE,

	UISTR_ANTIPASS_START, UISTR_ANTIPASS_NO = UISTR_ANTIPASS_START,
	UISTR_ANTIPASS_MASTER,
	UISTR_ANTIPASS_SLAVE, UISTR_ANTIPASS_END = UISTR_ANTIPASS_SLAVE,

	UISTR_YESNO_START, UISTR_YESNO_NO = UISTR_YESNO_START,
	UISTR_YESNO_YES, UISTR_YESNO_END = UISTR_YESNO_YES,

	UISTR_ACTION_CONFIRM,
	UISTR_ACTION_SUCCESS,
	UISTR_ACTION_FAIL,

	UISTR_BELL_NO,
	UISTR_BELL_STIME,
	UISTR_BELL_LENGTH,
	UISTR_BELL_TYPE,

	UISTR_TR_NO,
	UISTR_TR_STIME,
	UISTR_TR_ETIME,
	UISTR_TR_STATUS,

	UISTR_ULHDR_ID,
	UISTR_ULHDR_NAME,
	UISTR_ULHDR_TZ,
	UISTR_ULHDR_FP,
	UISTR_ULHDR_PWD,
	UISTR_ULHDR_CARD,
	UISTR_UM_SEARCH,
	UISTR_UM_LOGVIEW,
	UISTR_UM_EDIT,
	UISTR_UM_DELETE,
	UISTR_LOGHDR_TIMESTAMP,
	UISTR_LOGHDR_ID,
	UISTR_LOGHDR_NAME,
	UISTR_LOGHDR_CONTENT,

	UISTR_DB_LOAD,
	UISTR_FINGERPRINT_LOAD,
	UISTR_FILEREAD,
	UISTR_FILEWRITE,
	UISTR_FLASHREAD,
	UISTR_FLASHWRITE,
	UISTR_COMMUNICATING,
	UISTR_WAIT_FOR_COMMUNICATING,
	UISTR_WARNING,
	UISTR_USER_SEARCH_WARNING,
	UISTR_USER_LOG_WARNING,
	UISTR_DELETE_CONFIRM,
	UISTR_UDISK_NOTFOUND,
	UISTR_SDCARD_NOTFOUND,
	UISTR_NO_FILES,
	UISTR_CAMERA_NOTFOUND,
	UISTR_USB_ISFULL,
	UISTR_SDCARD_ISFULL,

	UISTR_TZHDR_NO,
	UISTR_TZHDR_NAME,
	UISTR_TZHDR_FROMTIME,
	UISTR_TZHDR_TOTIME,
	UISTR_TZHDR_CONTENT,
	UISTR_TZHDR_TIME,
	UISTR_TZHDR_TYPE,
	UISTR_TZHDR_STATUS,

	UISTR_WEEKDAY_START, UISTR_WEEKDAY_SUN = UISTR_WEEKDAY_START,
	UISTR_WEEKDAY_MON,
	UISTR_WEEKDAY_TUE,
	UISTR_WEEKDAY_WED,
	UISTR_WEEKDAY_THU,
	UISTR_WEEKDAY_FRI,
	UISTR_WEEKDAY_SAT, UISTR_WEEKDAY_END = UISTR_WEEKDAY_SAT,

	UISTR_MONTH_START, UISTR_MONTH_JAN = UISTR_MONTH_START,
	UISTR_MONTH_FEB,
	UISTR_MONTH_MAR,
	UISTR_MONTH_APR,
	UISTR_MONTH_MAY,
	UISTR_MONTH_JUN,
	UISTR_MONTH_JUL,
	UISTR_MONTH_AUG,
	UISTR_MONTH_SEP,
	UISTR_MONTH_OCT,
	UISTR_MONTH_NOV,
	UISTR_MONTH_DEC, UISTR_MONTH_END = UISTR_MONTH_DEC,

	UISTR_SLOG_START, UISTR_SLOG_TURNON = UISTR_SLOG_START,
	UISTR_SLOG_TURNOFF,
	UISTR_SLOG_ILLEGALVERIFY_ALARM,
	UISTR_SLOG_TAMPER_ALARM,
	UISTR_SLOG_ENTERMENU,
	UISTR_SLOG_SETTINGCHANGED,
	UISTR_SLOG_BACKUPENROLL_FP,
	UISTR_SLOG_SETPASSWORD,
	UISTR_SLOG_ENROLL_CARD,
	UISTR_SLOG_DELETE_USER,
	UISTR_SLOG_DELETE_FP,
	UISTR_SLOG_DELETE_PASSWORD,
	UISTR_SLOG_DELETE_CARD,
	UISTR_SLOG_DELETE_ALL,
	UISTR_SLOG_CREATE_MFCARD,
	UISTR_SLOG_ENROLL_MFCARD,
	UISTR_SLOG_REGISTER_MFCARD,
	UISTR_SLOG_DELETE_MF_REGIST,
	UISTR_SLOG_CLEAR_MF,
	UISTR_SLOG_ENROLLDATA2CARD,
	UISTR_SLOG_CARD2MACHINE,
	UISTR_SLOG_SETTIME,
	UISTR_SLOG_RESTORE,
	UISTR_SLOG_DELETE_ALL_GLOG,
	UISTR_SLOG_REMOVE_MANAGERPRIV,
	UISTR_SLOG_TIMEGROUP_SET,
	UISTR_SLOG_USERTZ_SET,
	UISTR_SLOG_TIMEZONE_SET,
	UISTR_SLOG_LOCKGROUP_SET,
	UISTR_SLOG_DOOROPEN,
	UISTR_SLOG_ENROLL_USER,
	UISTR_SLOG_OPENTIMEOUT_ALARM,
	UISTR_SLOG_ILGOPEN_ALARM,
	UISTR_SLOG_DURESS_ALARM, UISTR_SLOG_END = UISTR_SLOG_DURESS_ALARM,

	UISTR_SOUND_START, UISTR_SOUND_DIGIT0 = UISTR_SOUND_START,
	UISTR_SOUND_DIGIT1,
	UISTR_SOUND_DIGIT2,
	UISTR_SOUND_DIGIT3,
	UISTR_SOUND_DIGIT4,
	UISTR_SOUND_DIGIT5,
	UISTR_SOUND_DIGIT6,
	UISTR_SOUND_DIGIT7,
	UISTR_SOUND_DIGIT8,
	UISTR_SOUND_DIGIT9,
	UISTR_SOUND_TURNON,
	UISTR_SOUND_TURNOFF,
	UISTR_SOUND_PRESSFINGER_1,
	UISTR_SOUND_PRESSFINGER_2,
	UISTR_SOUND_PRESSFINGER_3,
	UISTR_SOUND_TAKEOFF_FP,
	UISTR_SOUND_PRESSFP_RETRY,
	UISTR_SOUND_FPENROLL_SUCCESS,
	UISTR_SOUND_FPENROLL_FAIL,
	UISTR_SOUND_FPDOUBLED,
	UISTR_SOUND_INPUT_PWD,
	UISTR_SOUND_PWD_ERROR,
	UISTR_SOUND_INPUT_CARD,
	UISTR_SOUND_CARDDOUBLED_RETRY,
	UISTR_SOUND_CARDENROLL_SUCCESS,
	UISTR_SOUND_TALK_YOURNAME,
	UISTR_SOUND_VOICERECORD_SUCCESS,
	UISTR_SOUND_VOICERECORD_RETRY,
	UISTR_SOUND_PREPARE_FOR_PHOTO,
	UISTR_SOUND_PHOTO_SUCCESS,
	UISTR_SOUND_CAMERA_TONE,
	UISTR_SOUND_KEYTONES,
	UISTR_SOUND_MENUSELECT,
	UISTR_SOUND_ENTERMENU,
	UISTR_SOUND_VERIFY_SUCCESS,
	UISTR_SOUND_VERIFY_FAIL,
	UISTR_SOUND_ERROR,
	UISTR_SOUND_QUESTION,
	UISTR_SOUND_OK,
	UISTR_SOUND_BELL1,
	UISTR_SOUND_BELL2,
	UISTR_SOUND_BELL3,
	UISTR_SOUND_BELL4,
	UISTR_SOUND_BELL5, UISTR_SOUND_END = UISTR_SOUND_BELL5,

	UISTR_MP3UPLOAD_DESC,
	UISTR_MP3UPLOAD_CONFIRM,

	UISTR_MANAGER_CONFIRM,
	UISTR_WORKING,
	UISTR_DEVICE_ERROR,
	UISTR_CHECK_SENSOR,
	UISTR_SLOG_OVERFLOW,
	UISTR_GLOG_OVERFLOW,

	UISTR_PRIV_START, UISTR_PRIV_USER = UISTR_PRIV_START,
	UISTR_PRIV_MANAGER,
	UISTR_PRIV_SMANAGER, UISTR_PRIV_END = UISTR_PRIV_SMANAGER,

	UISTR_UNIT_YEAR,
	UISTR_UNIT_MONTH,
	UISTR_UNIT_DAY,
	UISTR_UNIT_HOUR,
	UISTR_UNIT_MINUTE,
	UISTR_UNIT_SECOND,
	UISTR_UNIT_TIMES,
	UISTR_UNIT_LOG,
	UISTR_UNIT_FP,
	UISTR_UNIT_PERCENT,
	UISTR_UNIT_PEOPLE,

	UISTR_T9_CHN,
	UISTR_T9_ENG,
	UISTR_T9_SYM,
	UISTR_T9_NUM,

	UISTR_STATUS_MENU,
	UISTR_STATUS_MENU1,
	UISTR_STATUS_LCDTEST,
	UISTR_STATUS_BELL,
	UISTR_STATUS_SAVE_QUESTION,
	UISTR_STATUS_POWEROFF,
	UISTR_STATUS_RESTART,
	UISTR_STATUS_NOLOG,
	UISTR_STATUS_CONTROLLER_CONNECT_ERROR,
	USITR_STATUS_HELP,
	UISTR_STATUS_BRIGHT_ADJUST_SUCCESS,
	UISTR_STATUS_BRIGHT_ADJUST_FAIL,
	UISTR_STATUS_DHCP_CONFIGURING,
	UISTR_STATUS_DHCP_CONFIGURE_SUCCESS,
	UISTR_STATUS_DHCP_CONFIGURE_FAIL,
	UISTR_STATUS_VOICE_DOWNLOAD,
	UISTR_STATUS_VOICE_UPLOAD,
	UISTR_STATUS_PHOTO_DOWNLOAD,
	UISTR_STATUS_PHOTO_UPLOAD,
	UISTR_STATUS_AM,
	UISTR_STATUS_PM,
	UISTR_STATUS_INVALID_WAVFORMAT,
	UISTR_STATUS_OK_SELECT,
	UISTR_STATUS_OK_SEARCH,
	UISTR_STATUS_ESC_BACK,
	UISTR_STATUS_MENU_CLEAR,
	UISTR_STATUS_OK_T9,

	UISTR_SYMBOL_BRACKET_ON,
	UISTR_SYMBOL_BRACKET_OFF,
	UISTR_SYMBOL_MINUS,
	UISTR_SYMBOL_LEFT,
	UISTR_SYMBOL_RIGHT,
	UISTR_SYMBOL_UP,
	UISTR_SYMBOL_DOWN,
	UISTR_SYMBOL_WAVE,
	UISTR_SYMBOL_STAR,
	UISTR_SYMBOLS_SBFONT0,
	UISTR_SYMBOLS_SBFONT1,
	UISTR_SYMBOLS_SBFONT2,

	UISTR_HELP_ENROLLSTEP1,
	UISTR_HELP_ENROLLSTEP2,
	UISTR_HELP_ENROLLFP,
	UISTR_HELP_ENROLLDURESS,
	UISTR_HELP_ENROLLCARD,
	UISTR_HELP_ENROLLVOICE,
	UISTR_HELP_ENROLLPHOTO,
	UISTR_HELP_ENROLLDELETE1,
	UISTR_HELP_DURESSFPSET,
	UISTR_HELP_DURESSFPREMOVE,
	UISTR_HELP_INPUTID,
	UISTR_HELP_INPUTPWD,
	UISTR_HELP_SEARCHUSER,
	UISTR_HELP_MENU,
	UISTR_HELP_BELLSETUP,
	UISTR_HELP_BELLSETONE,
	UISTR_HELP_TRSETUP,
	UISTR_HELP_TRSETONE,
	UISTR_HELP_TIMEZONESETUP,
	UISTR_HELP_MP3UPLOAD1,
	UISTR_HELP_SYSTEMUPGRADE,
	UISTR_HELP_SELFTESTKEYBOARD,
	UISTR_HELP_SELFTESTMEMORY,
	UISTR_HELP_SELFTESTRTC,
	UISTR_HELP_SELFTESTSENSOR,
	UISTR_HELP_SELFTESTSOUND,
	UISTR_HELP_SELFTESTALL,
	UISTR_HELP_USERLIST,
	UISTR_HELP_SEARCHLOG,
	UISTR_HELP_SLOGLIST,
	UISTR_HELP_GLOGLIST,
											///////////////////////Message Information//////////////////////
	UISTR_MSG_ID,
	UISTR_MSG_STARTTIME,
	UISTR_MSG_INTERVAL,
	UISTR_MSG_TYPE,
	UISTR_MSG_TEXT,
	UISTR_STATUS_MSG_INPUT_ERROR,
	UISTR_STATUS_MSG_DEL_ALARM,
	UISTR_MSG_EDIT,
	UISTR_MSG_NEW,
	UISTR_MSG_TEXTMARK,
	UISTR_MSG_TYPE_USER,
	UISTR_MSG_TYPE_GENERAL,
	UISTR_USER_MANAGE,
	UISTR_MSG_MANAGE,
	UISTR_USER_STATUS,
	UISTR_MSG_STATUS,
	UISTR_MSG_UNIT,
	UISTR_STATUS_LOG,  
    UISTR_STATUS_USER,  
	UISTR_USER_NEW,
	UISTR_USER_EDIT,
	UISTR_STATUS_MSG_ALLDEL_ALARM,
	UISTR_UNIT_MAN,
	UISTR_UNIT_CNT,
	UISTR_UNIT_GE,     
	UISTR_UNIT_TOTAL,
	UISTR_UNIT_USED,
	UISTR_ALARM_REMOVE_CONFIRM,

	UISTR_ENROLLSETP1_START, UISTR_ENROLLSETP1_ID = UISTR_ENROLLSETP1_START,
	UISTR_ENROLLSETP1_NAME,
	UISTR_ENROLLSETP1_LEVEL,
	UISTR_ENROLLSETP1_FINGER,
	UISTR_ENROLLSETP1_CARD,
	UISTR_ENROLLSETP1_PWD, UISTR_ENROLLSETP1_END = UISTR_ENROLLSETP1_PWD,

	UISTR_PRESS_VERIFY_GET_DATA, 		 //�Ƿ�ӷ�������ȡָ��ģ�嵽���أ�
	UISTR_VERIFY_GET_DATA_SUCCESS,		   //��ȡ�ɹ�
	UISTR_VERIFY_GET_DATA_FAIL,			//��ȡʧ��
	UISTR_ENROLL_GET_NAME_FAIL,			//��ȡ����ʧ�ܣ�ϵͳ�޴˺��룬����������ע��
	UISTR_ENROLL_FAIL,                                   //ע��ʧ��
       UISTR_ENROLL_DATA_SAVE_TIME,
       UISTR_SERVER_NO_ENROLL_ID,

	UISTR_REMOTE_ATTENDANCE,
	UISTR_REMOTE_ATTENDANCE_FUN,
	UISTRr_REMOTE_DATA_SAVE_TIME,


	UISTR_MENU_DBUGLOGDOWNLOAD,

	UISTR_MENU_DNSSERVERIP,	
};

class QString;

void FONTDATABASE_INIT();
QString UISTR(int nIndex);

#endif /*__UI_FONT_H__*/
