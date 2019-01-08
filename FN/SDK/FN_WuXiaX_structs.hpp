#pragma once

// Fortnite (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum WuXiaX.EPlayerGameState
enum class EPlayerGameState : uint8_t
{
	PGS_0_NORMAL                   = 0,
	PGS_0_FIGHT                    = 1,
	PGS_0_DYING                    = 2,
	PGS_0_DEAD                     = 3,
	PGS_0_BEIZHAN                  = 4,
	PGS_0_FIGHT_HAS_TARGET         = 5,
	PGS_0_STEALTH                  = 6,
	PGS_0_ASSASSINATION            = 7,
	PGS_0_ONPLANE                  = 8,
	PGS_0_PARACHUTE_JUMP           = 9,
	PGS_0_PARACHUTE_GLIDING        = 10,
	PGS_0_WAIT_RESURRECTION        = 11,
	PSG_MAX                        = 12,
	EPlayerGameState_MAX           = 13
};


// Enum WuXiaX.EBagType
enum class EBagType : uint8_t
{
	EBT_NONE                       = 0,
	EBT_WEAPON_EQUIP               = 1,
	EBT_ITEM_EQUIP                 = 2,
	EBT_ITEM_BAG_CLOTHES           = 3,
	EBT_ITEM_BAG_BELT              = 4,
	EBT_ITEM_BAG                   = 5,
	EBT_ITEM_AROUND                = 6,
	EBT_ITEM_MAX                   = 7,
	EBT_MAX                        = 8
};


// Enum WuXiaX.ESkillEquipType
enum class ESkillEquipType : uint8_t
{
	ESET_NONE                      = 0,
	ESET_HAND                      = 1,
	ESET_WEAPON                    = 2,
	ESET_WEAPON01                  = 3,
	ESET_SHANBI                    = 4,
	ESET_INTERNAL                  = 5,
	ESET_GENERAL                   = 6,
	ESET_MAX                       = 7
};


// Enum WuXiaX.ETeamPlayerState
enum class ETeamPlayerState : uint8_t
{
	TPS_IDLE                       = 0,
	TPS_DRIVE                      = 1,
	TPS_ONPLANE                    = 2,
	TPS_DYING                      = 3,
	TPS_DIE                        = 4,
	TPS_OFFLINE                    = 5,
	TPS_FIGHT                      = 6,
	TPS_MAX                        = 7
};


// Enum WuXiaX.ObserveCameraType
enum class EObserveCameraType : uint8_t
{
	OBCT_NONE                      = 0,
	OBCT_Free                      = 1,
	OBCT_Lock                      = 2,
	OBCT_Down                      = 3,
	OBCT_Player                    = 4,
	OBCT_Item                      = 5,
	OBCT_MAX                       = 6
};


// Enum WuXiaX.ObserverType
enum class EObserverType : uint8_t
{
	OBT_Observer                   = 0,
	OBT_MAX                        = 1
};


// Enum WuXiaX.EPlayerLoadType
enum class EPlayerLoadType : uint8_t
{
	PLT_NONE                       = 0,
	PLT_BODY                       = 1,
	PLT_LEG                        = 2,
	PLT_FOOT                       = 3,
	PLT_HAT                        = 4,
	PLT_SHAWL                      = 5,
	PLT_VEIL                       = 6,
	PLT_HAIR                       = 7,
	PLT_MAX                        = 8
};


// Enum WuXiaX.ELeaveRoomType
enum class ELeaveRoomType : uint8_t
{
	ELRT_NONE                      = 0,
	ELRT_SELFOUT                   = 1,
	ELRT_KICK                      = 2,
	ELRT_BEKICK                    = 3,
	ELRT_MAX                       = 4
};


// Enum WuXiaX.ERoleType
enum class ERoleType : uint8_t
{
	ERT_NONE                       = 0,
	ERT_WATCH                      = 1,
	ERT_TEAM                       = 2,
	ERT_PEOPLE                     = 3,
	ERT_MAX                        = 4
};


// Enum WuXiaX.EAnimActionType
enum class EAnimActionType : uint8_t
{
	Damage                         = 0,
	Damage01                       = 1,
	Damage02                       = 2,
	ShanBi_Start                   = 3,
	ShanBi_End                     = 4,
	ShanBi_Action_Start            = 5,
	Attack_Action_Start            = 6,
	Move_Action_Start              = 7,
	BlockAttack_Action_Start       = 8,
	ShanBi_Action_End              = 9,
	Attack_Action_End              = 10,
	Move_Action_End                = 11,
	BlockAttack_Action_End         = 12,
	LianJI_Action_Start            = 13,
	LianJI_Action_End              = 14,
	ChuJue                         = 15,
	EAnimActionType_MAX            = 16
};


// Enum WuXiaX.EPlayerMoveInputState
enum class EPlayerMoveInputState : uint8_t
{
	PMIS_WALK                      = 0,
	PMIS_SPRING                    = 1,
	PMIS_BLOCK                     = 2,
	PMIS_AIM                       = 3,
	PMIS_MAX                       = 4
};


// Enum WuXiaX.EInputAttackType
enum class EInputAttackType : uint8_t
{
	IAT_NORMAL                     = 0,
	IAT_ONE                        = 1,
	IAT_TWO                        = 2,
	IAT_THREE                      = 3,
	IAT_OTHER                      = 4,
	IAT_MAX                        = 5
};


// Enum WuXiaX.EPreviewType
enum class EPreviewType : uint8_t
{
	HAT                            = 0,
	RANGE                          = 1,
	WEAPON1                        = 2,
	WEAPON2                        = 3,
	EPreviewType_MAX               = 4
};


// Enum WuXiaX.EPlayerNameResponseType
enum class EPlayerNameResponseType : uint8_t
{
	Repeat                         = 0,
	Success                        = 1,
	UnValid                        = 2,
	EPlayerNameResponseType_MAX    = 3
};


// Enum WuXiaX.ELoginResponseType
enum class ELoginResponseType : uint8_t
{
	SUCCESS                        = 0,
	USERNOFOUND                    = 1,
	PLATFROMERROR                  = 2,
	UNVALIDVERSION                 = 3,
	SERVERERROR                    = 4,
	USEROUTRULE                    = 5,
	ELoginResponseType_MAX         = 6
};


// Enum WuXiaX.EPickItemType
enum class EPickItemType : uint8_t
{
	None                           = 0,
	Independent                    = 1,
	RelyOnBox                      = 2,
	EPickItemType_MAX              = 3
};


// Enum WuXiaX.EItemOperateType
enum class EItemOperateType : uint8_t
{
	EIOT_SUCCEE_SINGLE             = 0,
	EIOT_SUCCEE_LEFT               = 1,
	EIOT_OVERWEIGHT                = 2,
	EIOT_NO_CELL                   = 3,
	EIOT_NOCELL                    = 4,
	EIOT_NOITEM                    = 5,
	EIOT_NOITEM_NUM                = 6,
	EIOT_CANNOT_SWITCH             = 7,
	EIOT_CANNOT_EQUIP              = 8,
	EIOT_SWITCH_SUCESS             = 9,
	EIOT_EQUIP_SUCESS              = 10,
	EIOT_EQUIP_DROP                = 11,
	EIOT_EQUIP_SUCESS_DROP         = 12,
	EIOT_EQUIP_SUCESS_SWITCH_EQUIPTOBAG = 13,
	EIOT_EQUIP_SUCESS_SWITCH_BAGTOEQUIP = 14,
	EIOT_EQUIP_SUCESS_SWITCH_EQUIPTOEQUIP = 15,
	EIOT_EQUIP_REMOVE_SUCESS       = 16,
	EIOT_SWITCH_ALL_SUCESS         = 17,
	EIOT_OVER_WEIGHT_SOURCE        = 18,
	EIOT_BAG_SWITCH_ERROR          = 19,
	EIOT_BAG_SWITCH_SUCESS_BAGTOEQUIP = 20,
	EIOT_BAG_SWITCH_SUCESS_EQUIPTOBAG = 21,
	EIOT_ERROR                     = 22,
	EIOT_MAX                       = 23
};


// Enum WuXiaX.EItemType
enum class EItemType : uint8_t
{
	EIT_DRUG                       = 0,
	EIT_WUXUE                      = 1,
	EIT_WEAPON                     = 2,
	EIT_EQUIP                      = 3,
	EIT_AMMO                       = 4,
	EIT_THROW                      = 5,
	EIT_FORAGE                     = 6,
	EIT_TRAP                       = 7,
	EIT_SPECIAL                    = 8,
	EIT_MAX                        = 9
};


// Enum WuXiaX.EItemEquipType
enum class EItemEquipType : uint8_t
{
	EIET_HAT                       = 0,
	EIET_JACKET                    = 1,
	EIET_ARMOR                     = 2,
	EIET_BAG                       = 3,
	EIET_PLAYTHING                 = 4,
	EIET_VEIL                      = 5,
	EIET_SHAWL                     = 6,
	EIET_TROUSERS                  = 7,
	EIET_BOOTS                     = 8,
	EIET_ORNAMENTS                 = 9,
	EIET_TOTAL                     = 10,
	EIET_MAX                       = 11
};


// Enum WuXiaX.EWeaponEquipType
enum class EWeaponEquipType : uint8_t
{
	EWET_NORMAL                    = 0,
	EWET_NORMAL01                  = 1,
	EWET_RANG                      = 2,
	EWET_KNIFE                     = 3,
	EWET_THROW                     = 4,
	EWET_TOTAL                     = 5,
	EWET_MAX                       = 6
};


// Enum WuXiaX.EShanBiDirection
enum class EShanBiDirection : uint8_t
{
	SBD_F                          = 0,
	SBD_RF                         = 1,
	SBD_LF                         = 2,
	SBD_B                          = 3,
	SBD_LB                         = 4,
	SBD_RB                         = 5,
	SBD_L                          = 6,
	SBD_R                          = 7,
	SBD_MAX                        = 8
};


// Enum WuXiaX.EActionCheckType
enum class EActionCheckType : uint8_t
{
	ACT_NULL                       = 0,
	ACT_ATTACK                     = 1,
	ACT_SHANBI                     = 2,
	ACT_QISHEN                     = 3,
	ACT_WUDI                       = 4,
	ACT_BLOCK_ATTACK               = 5,
	ACT_YUANCHEN                   = 6,
	ACT_BLOCK                      = 7,
	ACT_ATTACK_RELEASE             = 8,
	ACT_ATTACK_RELEASE_SERVER      = 9,
	ACT_FALLING_ATTACK             = 10,
	ACT_MAX                        = 11
};


// Enum WuXiaX.EMPChangeType
enum class EMPChangeType : uint8_t
{
	MPCT_NULL                      = 0,
	MPCT_NORMAL_SKILL              = 1,
	MPCT_BLOCK_BEATTCK             = 2,
	MPCT_BUFF                      = 3,
	MPCT_RECOVER                   = 4,
	MPCT_XULI                      = 5,
	MPCT_MAX                       = 6
};


// Enum WuXiaX.EPropertyChangeReason
enum class EPropertyChangeReason : uint8_t
{
	PCR_BUFF_HP                    = 0,
	PCR_BUFF_MAX_HP_ADD            = 1,
	PCR_BUFF_THIRSTY               = 2,
	PCR_BUFF_HUNGRY                = 3,
	PCR_BUFF_MP                    = 4,
	PCR_BUFF_MAXMP_PERCENT         = 5,
	PCR_BUFF_INJURY_CHANGE         = 6,
	PCR_BUFF_INJURY                = 7,
	PCR_BUFF_RECOVERRATE           = 8,
	PCR_BUFF_JIAN_RECOVERRATE      = 9,
	PCR_BUFF_OUT_POWER             = 10,
	PCR_BUFF_INNER_POWER           = 11,
	PCR_BUFF_WAI_ARMOR             = 12,
	PCR_BUFF_WAI_ARMOR_RATE        = 13,
	PCR_BUFF_NEI_ARMOR             = 14,
	PCR_BUFF_CRIT_RATE             = 15,
	PCR_BUFF_CRIT_MODULUS          = 16,
	PCR_BUFF_BREAK                 = 17,
	PCR_BUFF_UNBREAK               = 18,
	PCR_BUFF_BAOQI                 = 19,
	PCR_USE_SKILL_MP               = 20,
	PCR_USE_SKILL_HP               = 21,
	PCR_USE_CHANGE_WEAPON          = 22,
	PCR_USE_RECOVER_MP             = 23,
	PCR_USE_BLOCK                  = 24,
	PCR_USE_SRE_MP_START           = 25,
	PCR_USE_SRE_MP_END             = 26,
	PCR_RESURRECTION               = 27,
	PCR_ITEMEFFECT_HP              = 28,
	PCR_ITEMEFFECT_HUNGER          = 29,
	PCR_ITEMEFFECT_THIRSRY         = 30,
	PCR_ITEMEFFECT_MP              = 31,
	PCR_ITEMEFFECT_BREAK           = 32,
	PCR_ITEMEFFECT_UNBREAK         = 33,
	PCR_ITEMEFFECT_EXPLOSION_PROOFHEADRATE = 34,
	PCR_ITEMEFFECT_EXTERNAL_DEF    = 35,
	PCR_ITEMEFFECT_INTERNAL_DEF    = 36,
	PCR_BLOCK_BEATTCK_MP           = 37,
	PCR_BUFF_DYING                 = 38,
	PCR_XULI_MP_CHANGE             = 39,
	PCR_SAVE_FROM_DYING            = 40,
	PCR_EQUIP_ARMOR                = 41,
	PCR_NUQI                       = 42,
	PCR_NUQI_USE                   = 43,
	PCR_NUQI_TIME                  = 44,
	PCR_FALLING_DAMAGE             = 45,
	PCR_KILL_FROM_DYING            = 46,
	PCR_KILL_BY_Z                  = 47,
	PCR_USE_RECOVER_OXYGEN         = 48,
	PCR_MAX                        = 49
};


// Enum WuXiaX.EPlayerRoleType
enum class EPlayerRoleType : uint8_t
{
	PRT_NULL                       = 0,
	PRT_WATCH                      = 1,
	PRT_PLAYER                     = 2,
	PRT_MAX                        = 3
};


// Enum WuXiaX.EGameSquadMode
enum class EGameSquadMode : uint8_t
{
	GSM_NULL                       = 0,
	GSM_SINGLE                     = 1,
	GSM_DOUBLE                     = 2,
	GSM_TETRAD                     = 3,
	GSM_MANSQUAD                   = 4,
	GSM_MAX                        = 5
};


// Enum WuXiaX.EBreakActionType
enum class EBreakActionType : uint8_t
{
	BAT_NULL                       = 0,
	BAT_PLAYER_CLIENT_CANCEL       = 1,
	BAT_PLAYER_CANCEL              = 2,
	BAT_PLAYER_SAVE_PLAYER         = 3,
	BAT_SCENE_INTERACTION          = 4,
	BAT_CHARACTER_WALK             = 5,
	BAT_CHARACTER_RUN              = 6,
	BAT_CHARACTER_JUMP             = 7,
	BAT_CHARACTER_RIDING           = 8,
	BAT_CHARACTER_USE_SKILL        = 9,
	BAT_CHARACTER_NORMAL_ATTACK    = 10,
	BAT_CHARACTER_BLOCK            = 11,
	BAT_CHARACTER_DODGE            = 12,
	BAT_CHARACTER_INTOWATER        = 13,
	BAT_CHARACTER_BECONTROL        = 14,
	BAT_CHARACTER_BEDAMAGE         = 15,
	BAT_CHARACTER_DYING            = 16,
	BAT_CHARACTER_DEAD             = 17,
	BAT_CHARACTER_ASSASSINATION    = 18,
	BAT_CHARACTER_BEASSASSINATION  = 19,
	BAT_CHARACTER_RANGE_ATTACK     = 20,
	BAT_CHARACTER_USE_ITEM         = 21,
	BAT_CHARACTER_RANGE_STANDBY    = 22,
	BAT_CHARACTER_RANGE_LAUNCH     = 23,
	BAT_CHARACTER_RANGE_RESET      = 24,
	BAT_CHARACTER_QING_GONG        = 25,
	BAT_BEGIN_LISTEN_SOUND         = 26,
	BAT_CHECK_TARGET_MOVE          = 27,
	BAT_PICKUP_ITEM                = 28,
	BAT_CHARACTER_WEWAK            = 29,
	BAT_MAX                        = 30
};


// Enum WuXiaX.EKeepingActionType
enum class EKeepingActionType : uint8_t
{
	KAT_NULL                       = 0,
	KAT_USE_ITEM                   = 1,
	KAT_SCENE_INTERACTION          = 2,
	KAT_SAVE_TARGET                = 3,
	KAT_KILL_TARGET                = 4,
	KAT_MAX                        = 5
};


// Enum WuXiaX.EViewModeState
enum class EViewModeState : uint8_t
{
	VMS_THIRDPERSION               = 0,
	VMS_FIRSTPERSON                = 1,
	VMS_MAX                        = 2
};


// Enum WuXiaX.ERotateMethodState
enum class ERotateMethodState : uint8_t
{
	RMS_TURNINPLACE                = 0,
	RMS_ROTATEINPLACE              = 1,
	RMS_MAX                        = 2
};


// Enum WuXiaX.EMovementDirectionState
enum class EMovementDirectionState : uint8_t
{
	MDS_FORWARDS                   = 0,
	MDS_BACKWARDS                  = 1,
	MDS_MAX                        = 2
};


// Enum WuXiaX.ELocomotionControlState
enum class ELocomotionControlState : uint8_t
{
	LCS                            = 0,
	LCS01                          = 1,
	LCS02                          = 2,
	LCS_MAX                        = 3
};


// Enum WuXiaX.EMoveDirection
enum class EMoveDirection : uint8_t
{
	MD_NORTH                       = 0,
	MD_EAST                        = 1,
	MD_WEST                        = 2,
	MD_SOUTH                       = 3,
	MD_MAX                         = 4
};


// Enum WuXiaX.EPlayerTakeWeaponState
enum class EPlayerTakeWeaponState : uint8_t
{
	PTWS_L                         = 0,
	PTWS_R                         = 1,
	PTWS_MAX                       = 2
};


// Enum WuXiaX.EPlayerActionState
enum class EPlayerActionState : uint8_t
{
	PAS_NULL                       = 0,
	PAS_SHANBI_WUDI_STATE          = 1,
	PAS_SHANBI_ENABLE_STATE        = 2,
	PAS_ATTACK_ENABLE_STATE        = 3,
	PAS_MOVE_ENABLE_STATE          = 4,
	PAS_BLOCK_ATTACK_ENABLE_STATE  = 5,
	PAS_LIANJI_ATTACK_ENABLE_STATE = 6,
	PAS_MAX_STATE                  = 7,
	PAS_NORMAL                     = 8,
	PAS_SHANGHAI                   = 9,
	PAS_SHANGHAI_END               = 10,
	PAS_SHANBI_WUDI_START          = 11,
	PAS_SHANBI_WUDI_END            = 12,
	PAS_SHANBI_ENABLE_START        = 13,
	PAS_SHANBI_ENABLE_END          = 14,
	PAS_ATTACK_ENABLE_START        = 15,
	PAS_ATTACK_ENABLE_END          = 16,
	PAS_MOVE_ENABLE_START          = 17,
	PAS_MOVE_ENABLE_END            = 18,
	PAS_BLOCK_ATTACK_ENABLE_START  = 19,
	PAS_BLOCK_ATTACK_ENABLE_END    = 20,
	PAS_LIANJI_ATTACK_ENABLE_START = 21,
	PAS_LIANJI_ATTACK_ENABLE_END   = 22,
	PAS_USE_SHANBI_END             = 23,
	PAS_USE_SKILL_END              = 24,
	PAS_XULI_EFFECT_END            = 25,
	PAS_DIZZINESS_START            = 26,
	PAS_KNOCKDOWN_START            = 27,
	PAS_REPEL_START                = 28,
	PAS_KNOCKDOWN_UP_START         = 29,
	PAS_BE_ATTACK                  = 30,
	PAS_BE_ATTACK_EFFECT           = 31,
	PAS_KNOCKDOWN_EFFECT           = 32,
	PAS_REPEL_EFFECT               = 33,
	PAS_DIZZINESS_EFFECT           = 34,
	PAS_XULI_EFFECT                = 35,
	PAS_SHANBI_EFFECT              = 36,
	PAS_DIZZINESS_BE_ATTACK_END    = 37,
	PAS_REPEL_ATTACK_END           = 38,
	PAS_KNOCKDOWN_BE_ATTACK_END    = 39,
	PAS_KNOCKDOWN_UP_BE_ATTACK_END = 40,
	PAS_BE_ATTACK_END              = 41,
	PAS_DIZZINESS_END              = 42,
	PAS_KNOCKDOWN_END              = 43,
	PAS_REPEL_END                  = 44,
	PAS_KNOCKDOWN_UP_END           = 45,
	PAS_DIZZINESS_BE_ATTACK_START  = 46,
	PAS_REPEL_ATTACK_START         = 47,
	PAS_KNOCKDOWN_BE_ATTACK_START  = 48,
	PAS_KNOCKDOWN_UP_BE_ATTACK_START = 49,
	PAS_USE_BLOCK_SKILL            = 50,
	PAS_USE_SHANBI                 = 51,
	PAS_USE_SKILL                  = 52,
	PAS_MAX                        = 53
};


// Enum WuXiaX.EPlayerMotionState
enum class EPlayerMotionState : uint8_t
{
	PMS_NULL                       = 0,
	PMS_FIGHT_UNRECOVER_MP         = 1,
	PMS_FIGHT_RECOVER_MP           = 2,
	PMS_ASSASSINATION_MOVE         = 3,
	PMS_ASSASSINATION_WATTING      = 4,
	PMS_ASSASSINATION              = 5,
	PMS_BEASSASSINATION            = 6,
	PMS_QING_GONG_UP               = 7,
	PMS_QING_GONG_RIGHT            = 8,
	PMS_QING_GONG_LEFT             = 9,
	PMS_QING_GONG_WALL_JUMP        = 10,
	PMS_QING_GONG_RUN_WATER        = 11,
	PMS_USE_ITEM                   = 12,
	PMS_INTERACTIVE                = 13,
	PMS_SQUAD_HELP                 = 14,
	PMS_SQUAD_BE_HELPED            = 15,
	PMS_SQUAD_CHUJUE               = 16,
	PMS_SQUAD_BE_CHUJUE            = 17,
	PMS_TSBW                       = 18,
	PMS_INTERACTIVE_MOVE           = 19,
	PMS_MAX                        = 20
};


// Enum WuXiaX.EPlayerFightState
enum class EPlayerFightState : uint8_t
{
	PFS_NULL                       = 0,
	PFS_NORMAL_ATTACK              = 1,
	PFS_SKILL_ATTACK               = 2,
	PFS_SHOW_JI                    = 3,
	PFS_SHOW_JI01                  = 4,
	PFS_SHOW_JI02                  = 5,
	PFS_BLOCK                      = 6,
	PFS_BLOCK_PREPARE              = 7,
	PFS_SHANBI                     = 8,
	PFS_DIZZINESS                  = 9,
	PFS_REPEL                      = 10,
	PFS_KNOCKDOWN                  = 11,
	PFS_KNOCKDOWN_UP               = 12,
	PFS_DIZZINESS_SHOUJI           = 13,
	PFS_WEAK                       = 14,
	PFS_STIFF                      = 15,
	PFS_RANGE_STANDBY              = 16,
	PFS_RANGE_LAUNCH               = 17,
	PFS_RANGE_RESET                = 18,
	PFS_SKILL_ATTACK_XULI          = 19,
	PFS_FALL_ATTACK                = 20,
	PFS_MAX                        = 21
};


// Enum WuXiaX.EPlayerRideStateType
enum class EPlayerRideStateType : uint8_t
{
	PRST_NULL                      = 0,
	PRST_HORESE_DRIVER             = 1,
	PRST_HORESE_BACK_SEAT          = 2,
	PRST_MAX                       = 3
};


// Enum WuXiaX.EPlayerMoveStateType
enum class EPlayerMoveStateType : uint8_t
{
	PMST_NORMAL                    = 0,
	PMST_HORSE_RIDE_MASTEA         = 1,
	PMST_HORSE_RIDE_SECONDARY      = 2,
	PMST_SWIM                      = 3,
	PMST_MAX                       = 4
};


// Enum WuXiaX.EPlayerSpeedType
enum class EPlayerSpeedType : uint8_t
{
	PST_WALK                       = 0,
	PST_RUN                        = 1,
	PST_SPRINT                     = 2,
	PST_DYLING                     = 3,
	PST_STEALTH                    = 4,
	PST_BLOCK                      = 5,
	PST_FIGHT                      = 6,
	PST_BEIZHAN                    = 7,
	PST_SWIM                       = 8,
	PST_WALK_HORSE                 = 9,
	PST_RUN_HORSE                  = 10,
	PST_SPRINT_HORSE               = 11,
	PST_AIM                        = 12,
	PST_WEAK                       = 13,
	PST_PARACHUTE_JUMP             = 14,
	PST_PARACHUTE_GLIDING          = 15,
	PST_USE_ITEM                   = 16,
	PST_MAX                        = 17
};


// Enum WuXiaX.EPlayerGameUIState
enum class EPlayerGameUIState : uint8_t
{
	PGUS_0_NORMAL                  = 0,
	PGUS_0_INVENTORY               = 1,
	PGUS_0_SKILL                   = 2,
	PGUS_0_MAP                     = 3,
	PGUS_0_USERSETTING             = 4,
	PUGS_0_STASTICS                = 5,
	PGUS_0_OBMAP                   = 6,
	PGUS_0_OBTargetView            = 7,
	PGUS_0_OBOverview              = 8,
	PGUS_0_OBStatics               = 9,
	PSUG_0_MAX                     = 10,
	EPlayerGameUIState_MAX         = 11
};


// Enum WuXiaX.EDamageCircleState
enum class EDamageCircleState : uint8_t
{
	DCS_IDEL                       = 0,
	DCS_WAITING                    = 1,
	DCS_SHRINGKING                 = 2,
	DCS_DAMAGEALL                  = 3,
	DCS_MAX                        = 4
};


// Enum WuXiaX.EParadropState
enum class EParadropState : uint8_t
{
	PDS_NULL                       = 0,
	PDS_WAITTING                   = 1,
	PDS_FLYING                     = 2,
	PDS_FINISH                     = 3,
	PDS_MAX                        = 4
};


// Enum WuXiaX.EPlaneState
enum class EPlaneState : uint8_t
{
	PLANE_IDEL                     = 0,
	PLANE_BEGINFLY                 = 1,
	PLANE_FLYING                   = 2,
	PLANE_ENDFLY                   = 3,
	PLANE_MAX                      = 4
};


// Enum WuXiaX.EInteractiveRequirementType
enum class EInteractiveRequirementType : uint8_t
{
	IRT_NULL                       = 0,
	IRT_ITEM                       = 1,
	IRT_SKILL                      = 2,
	IRT_MAX                        = 3
};


// Enum WuXiaX.ETriggerInteractiveType
enum class ETriggerInteractiveType : uint8_t
{
	TIT_NULL                       = 0,
	TIT_INTERACTIVE_BUTTON         = 1,
	TIT_JUMP_BUTTON                = 2,
	TIT_DAMAGE                     = 3,
	IRT_MAX                        = 4,
	ETriggerInteractiveType_MAX    = 5
};


// Enum WuXiaX.EBuffPointType
enum class EBuffPointType : uint8_t
{
	BPT_NULL                       = 0,
	BPT_BUFF                       = 1,
	BPT_SKILL                      = 2,
	BPT_ONE_ITEM                   = 3,
	BPT_ITEM                       = 4,
	BPT_AMMUNITION                 = 5,
	BPT_ADVANCED_AMMUNITION        = 6,
	BPT_MAX                        = 7
};


// Enum WuXiaX.EKeeyInteractiveType
enum class EKeeyInteractiveType : uint8_t
{
	KIT_NULL                       = 0,
	KIT_SWORD                      = 1,
	KIT_OPENBOX                    = 2,
	KIT_DRAGON_ROCK                = 3,
	KIT_BREAK_ROCK                 = 4,
	KIT_OVER_THE_BLOCK             = 5,
	KIT_SPRINT_OVER_THE_BLOCK      = 6,
	KIT_FLY_TO_HEIGHT              = 7,
	KIT_LEARNING_SECRET            = 8,
	KIT_TALK_TO_JUEKONG            = 9,
	KIT_MAX                        = 10
};


// Enum WuXiaX.ERankType
enum class ERankType : uint8_t
{
	ET_TOTAL                       = 0,
	ET_WIN                         = 1,
	ET_KILL                        = 2,
	ET_MAX                         = 3
};


// Enum WuXiaX.ESkinSelectType
enum class ESkinSelectType : uint8_t
{
	SST_NULL                       = 0,
	SST_RANDOM                     = 1,
	SST_CHOOSE                     = 2,
	SST_MAX                        = 3
};


// Enum WuXiaX.EInteractiveType
enum class EInteractiveType : uint8_t
{
	IT_NULL                        = 0,
	IT_ITEM                        = 1,
	IT_ITEM_BOX                    = 2,
	IT_KEEP_ITEM_BOX               = 3,
	IT_HORSE                       = 4,
	IT_CHANGESELF                  = 5,
	IT_KEEPACTION                  = 6,
	IT_MOVEPLAYER                  = 7,
	IT_HELP_PLAYER                 = 8,
	IT_KILL_PLAYER                 = 9,
	IT_MAX                         = 10
};


// Enum WuXiaX.EUseItemState
enum class EUseItemState : uint8_t
{
	UIS_NULL                       = 0,
	UIS_USE_BOTTLE                 = 1,
	UIS_USE_BOX                    = 2,
	UIS_USE_BANDAGE                = 3,
	UIS_USE_BOOK                   = 4,
	UIS_USE_FORAGE                 = 5,
	UIS_USE_TRAP_CLIP              = 6,
	UIS_USE_TRAP_JAR               = 7,
	UIS_USE_TRAP_PEG               = 8,
	UIS_USE_GRIND_STONE            = 9,
	UIS_USE_POISON                 = 10,
	UIS_USE_FIRE                   = 11,
	UIS_MAX                        = 12
};


// Enum WuXiaX.EPlayerInputType
enum class EPlayerInputType : uint8_t
{
	PIT_PLAYERAXIS                 = 0,
	PIT_PLAYERMOUSE                = 1,
	PIT_WALK                       = 2,
	PIT_SPRINTING                  = 3,
	PIT_JUMP                       = 4,
	PIT_Dodge                      = 5,
	PIT_STEALTH                    = 6,
	PIT_PICKUP                     = 7,
	PIT_AUTOSPRINTING              = 8,
	PIT_ATTACK                     = 9,
	PIT_BLOCK                      = 10,
	PIT_AIM                        = 11,
	PIT_SKILL                      = 12,
	PIT_SHOOT                      = 13,
	PIT_SWITCHWEAPON               = 14,
	PIT_ASSASSINATE                = 15,
	PIT_USEITEM                    = 16,
	PIT_HORSEAXIS                  = 17,
	PIT_HORSEMOUSE                 = 18,
	PIT_HORSESTOP                  = 19,
	PIT_HORSEWALK                  = 20,
	PIT_HORSESPRINTING             = 21,
	PIT_HORSEJUMP                  = 22,
	PIT_DRIVE                      = 23,
	PIT_SWIM                       = 24,
	PIT_FOLLOWVIEW                 = 25,
	PIT_FREEVIEW                   = 26,
	PIT_MOVEVIEW                   = 27,
	PIT_ITEM_BAG                   = 28,
	PIT_SKILL_INVENTORY            = 29,
	PIT_MAX                        = 30
};


// Enum WuXiaX.EGongGaoType
enum class EGongGaoType : uint8_t
{
	GGT_XITONGGONGGAO              = 0,
	GGT_TONGZHI                    = 1,
	GGT_MAX                        = 2
};


// Enum WuXiaX.EGameState
enum class EGameState : uint8_t
{
	None                           = 0,
	ShowLogo                       = 1,
	Login                          = 2,
	Hall                           = 3,
	ConnectServer                  = 4,
	WaitGame                       = 5,
	StartGame                      = 6,
	EndGame                        = 7,
	EGameState_MAX                 = 8
};


// Enum WuXiaX.EModelType
enum class EModelType : uint8_t
{
	MT_FACE                        = 0,
	MT_HAIR                        = 1,
	MT_MAX                         = 2
};


// Enum WuXiaX.ECauseDyingType
enum class ECauseDyingType : uint8_t
{
	CDT_NONE                       = 0,
	CDT_LAND                       = 1,
	CDT_OUTSAFE                    = 2,
	CDT_ASSASSINATION              = 3,
	CDT_BUFF                       = 4,
	CDT_SKILL                      = 5,
	CDT_FARWEAPON                  = 6,
	CDT_CHUJUE                     = 7,
	CDT_KILLZ                      = 8,
	CDT_STIFLE                     = 9,
	CDT_THROWING                   = 10,
	CDT_DYING_DAMAGE               = 11,
	CDT_MAX                        = 12
};


// Enum WuXiaX.EGamepadMarkType
enum class EGamepadMarkType : uint8_t
{
	GMT_USE                        = 0,
	GMT_SELECT                     = 1,
	GMT_DROP                       = 2,
	GMT_MAX                        = 3
};


// Enum WuXiaX.ELanguageType
enum class ELanguageType : uint8_t
{
	LT_ZH                          = 0,
	LT_EN                          = 1,
	LT_FT                          = 2,
	LT_MAX                         = 3
};


// Enum WuXiaX.EWidgetInteractiveType
enum class EWidgetInteractiveType : uint8_t
{
	WIT_NONE                       = 0,
	WIT_MOUSE                      = 1,
	WIT_GAMEPAD                    = 2,
	WIT_MAX                        = 3
};


// Enum WuXiaX.EInviteResultType
enum class EInviteResultType : uint8_t
{
	IR_NONE                        = 0,
	IR_TEAM                        = 1,
	IR_FRIEND                      = 2,
	IR_MAX                         = 3
};


// Enum WuXiaX.ESexType
enum class ESexType : uint8_t
{
	ST_MALE                        = 0,
	ST_FEMALE                      = 1,
	ST_NONE                        = 2,
	ST_MAX                         = 3
};


// Enum WuXiaX.LivePointType
enum class ELivePointType : uint8_t
{
	Born                           = 0,
	Fight                          = 1,
	LivePointType_MAX              = 2
};


// Enum WuXiaX.TriggerType
enum class ETriggerType : uint8_t
{
	OnlyPick                       = 0,
	PickAndDrop                    = 1,
	TriggerType_MAX                = 2
};


// Enum WuXiaX.GameCharactType
enum class EGameCharactType : uint8_t
{
	GCT_NULL                       = 0,
	GCT_NPC                        = 1,
	GCT_PLAYER                     = 2,
	GCT_MAX                        = 3
};


// Enum WuXiaX.GameComponentType
enum class EGameComponentType : uint8_t
{
	GCT_NULL                       = 0,
	GCT_MIDDLE                     = 1,
	GCT_PROPERTY                   = 2,
	GCT_STATE                      = 3,
	GCT_DATA_RECORD                = 4,
	GCT_TEAM                       = 5,
	GCT_BUFF                       = 6,
	GCT_FIGHT                      = 7,
	GCT_NETBROAD                   = 8,
	GCT_MOVE                       = 9,
	GCT_CAMERABOOM                 = 10,
	GCT_HORSE                      = 11,
	GCT_KEEPACTION                 = 12,
	GCT_ACHIEVEMENT                = 13,
	GCT_SHOW_EFFECT                = 14,
	GCT_MAX                        = 15
};


// Enum WuXiaX.EClassRepNodeMapping
enum class EClassRepNodeMapping : uint8_t
{
	NotRouted                      = 0,
	RelevantAllConnections         = 1,
	OB_RelevantToOwner             = 2,
	Spatialize_Static              = 3,
	Spatialize_Dynamic             = 4,
	Spatialize_Dormancy            = 5,
	EClassRepNodeMapping_MAX       = 6
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct WuXiaX.UIItemInfo
// 0x0060
struct FUIItemInfo
{
	int                                                itemid_;                                                  // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                type_;                                                    // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                childtype_;                                               // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                worldid_;                                                 // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     name_;                                                    // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     description_;                                             // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor)
	float                                              weight_;                                                  // 0x0030(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UTexture2D*                                  itemicon_;                                                // 0x0038(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                number_;                                                  // 0x0040(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              attack_;                                                  // 0x0044(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              maxdurability_;                                           // 0x0048(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                currentdurability_;                                       // 0x004C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              breakvalue_;                                              // 0x0050(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              bebreakvalue_;                                            // 0x0054(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              speed_;                                                   // 0x0058(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              range_;                                                   // 0x005C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WuXiaX.UIRoomInfo
// 0x0080
struct FUIRoomInfo
{
	int                                                play_mode_;                                               // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                map_id_;                                                  // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     room_title_;                                              // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                room_current_player_num_;                                 // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                room_max_player_num_;                                     // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                team_player_num_;                                         // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               watch_flag_;                                              // 0x0024(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	int                                                preinstall_mode_;                                         // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                server_id_;                                               // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               secret_flag_;                                             // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               event_flag_;                                              // 0x0031(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               add_flag_;                                                // 0x0032(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               pwd_;                                                     // 0x0033(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                view_num_;                                                // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                season_;                                                  // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     creater_;                                                 // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	uint64_t                                           start_time_;                                              // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0058(0x0020) MISSED OFFSET
	int                                                room_state_;                                              // 0x0078(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
};

// ScriptStruct WuXiaX.RoomUser
// 0x0020
struct FRoomUser
{
	struct FString                                     name_;                                                    // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                id_;                                                      // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ERoleType                                          user_type_;                                               // 0x0014(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	int                                                team_id_;                                                 // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct WuXiaX.UserRank
// 0x004C
struct FWuXiaX_FUserRank
{
	int                                                game_times;                                               // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              front_ten_rate;                                           // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              win_rate;                                                 // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                all_game_time;                                            // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                live_time;                                                // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                dead_out_safe;                                            // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                total_distance;                                           // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                walk_distance;                                            // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                drive_distance;                                           // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                kill_num;                                                 // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              kill_rate;                                                // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                damage_score;                                             // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                assistattack_num;                                         // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                max_kill;                                                 // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                range_kill_num;                                           // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                assassinate_num;                                          // 0x003C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                drive_down_num;                                           // 0x0040(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                throw_kill_num;                                           // 0x0044(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                rank_sort;                                                // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WuXiaX.VictoryRank
// 0x0028
struct FVictoryRank
{
	int                                                sort_;                                                    // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                player_id;                                                // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     player_name;                                              // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                score;                                                    // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                victory_num;                                              // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                front_ten_num;                                            // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              victory_rate;                                             // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WuXiaX.TotalRank
// 0x0028
struct FTotalRank
{
	int                                                sort_;                                                    // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                player_id;                                                // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     player_name;                                              // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                score;                                                    // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Time;                                                     // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                victory_score;                                            // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                fight_score;                                              // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WuXiaX.FightRank
// 0x0028
struct FFightRank
{
	int                                                sort_;                                                    // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                player_id;                                                // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     player_name;                                              // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                score;                                                    // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                kill_num;                                                 // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                max_kill;                                                 // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              kill_rate;                                                // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WuXiaX.BoxRewardItem
// 0x0018
struct FBoxRewardItem
{
	class UTexture2D*                                  icon_;                                                    // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                id_;                                                      // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                type_;                                                    // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                num_;                                                     // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct WuXiaX.OBPlayerPosInfo
// 0x0014
struct FOBPlayerPosInfo
{
	int                                                user_id_;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              rot_yaw_;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     position_;                                                // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WuXiaX.OBPlayerKillInfo
// 0x0028
struct FOBPlayerKillInfo
{
	int                                                user_id_;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                kill_num_;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                damage_num_;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                playerHp;                                                 // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                playerMaxHp;                                              // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                playerDyingHp;                                            // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                playerMP;                                                 // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                playerMaxMP;                                              // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                playerInjury;                                             // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPlayerGameState                                   PlayerState;                                              // 0x0024(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct WuXiaX.InteractiveInfo
// 0x0050
struct FInteractiveInfo
{
	EInteractiveType                                   interactive_type_;                                        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              interactive_keep_time_;                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EKeeyInteractiveType                               keep_interactive_type_;                                   // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EInteractiveRequirementType                        requirement_type_;                                        // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	int                                                requirement_id_;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                requirement_number_;                                      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               spawn_random_item_;                                       // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	int                                                spawn_item_ground_;                                       // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                sword_id_;                                                // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               need_move_to_begin_location_;                             // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_use_curve_;                                            // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
	class UCurveVector*                                move_curve_;                                              // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_need_radio_;                                           // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FText                                       radio_text_;                                              // 0x0038(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct WuXiaX.OBBuffSimpleInfo
// 0x0008
struct FOBBuffSimpleInfo
{
	int                                                buffBaseID;                                               // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                buffLayer;                                                // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WuXiaX.OBPlayerTargetDetailInfo
// 0x0088
struct FOBPlayerTargetDetailInfo
{
	int                                                player_net_id_;                                           // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                headID;                                                   // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                armorID;                                                  // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                weaponid1;                                                // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                skill11;                                                  // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                skill12;                                                  // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                skill13;                                                  // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                weaponid2;                                                // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                skill21;                                                  // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                skill22;                                                  // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                skill23;                                                  // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                skillMichuan;                                             // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                rangeid;                                                  // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                missleNum;                                                // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                xinfaid;                                                  // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                throwid;                                                  // 0x003C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                thrownum;                                                 // 0x0040(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                yaowu1Num;                                                // 0x0044(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                yaowu2Num;                                                // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                yaowu3Num;                                                // 0x004C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                curHP;                                                    // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                maxHP;                                                    // 0x0054(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                curMP;                                                    // 0x0058(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                maxMP;                                                    // 0x005C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                curInjury;                                                // 0x0060(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                dyingHp;                                                  // 0x0064(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                horseBaseID;                                              // 0x0068(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPlayerGameState                                   PlayerState;                                              // 0x006C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	float                                              horseSpeed;                                               // 0x0070(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              horseEndurance;                                           // 0x0074(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FOBBuffSimpleInfo>                   curBuffs;                                                 // 0x0078(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct WuXiaX.OBParadropPosInfo
// 0x001C
struct FOBParadropPosInfo
{
	int                                                worldID;                                                  // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     startPos;                                                 // 0x0004(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     paraPos;                                                  // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WuXiaX.WeaponItemInfo
// 0x0028
struct FWeaponItemInfo
{
	float                                              attack_;                                                  // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              maxdurability_;                                           // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              breakvalue_;                                              // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              bebreakvalue_;                                            // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              speed_;                                                   // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              range_;                                                   // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                buff_id_;                                                 // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              buff_attack_;                                             // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                durable_;                                                 // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                buff_number_;                                             // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WuXiaX.GameItemInfo
// 0x0038
struct FGameItemInfo
{
	int                                                item_id_;                                                 // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                num_;                                                     // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBagType                                           bag_type_;                                                // 0x0008(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                bag_index_;                                               // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FWeaponItemInfo                             weapon_iteminfo_;                                         // 0x0010(0x0028) (BlueprintVisible)
};

// ScriptStruct WuXiaX.OBParadropItemInfo
// 0x0028
struct FOBParadropItemInfo
{
	int                                                worldID;                                                  // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<int>                                        itemIDs;                                                  // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FGameItemInfo>                       baseInfos;                                                // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct WuXiaX.OBStasticsInfo
// 0x0030
struct FOBStasticsInfo
{
	struct FString                                     name_;                                                    // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                kill_;                                                    // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                damage_;                                                  // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                rank_;                                                    // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     teamid_;                                                  // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct WuXiaX.OBFightState
// 0x0020
struct FOBFightState
{
	int                                                ID;                                                       // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PlayerID;                                                 // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FVector                                     fightPos;                                                 // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct WuXiaX.OBHorseInfo
// 0x000C
struct FOBHorseInfo
{
	int                                                horseID;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                driverID;                                                 // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                passageID;                                                // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WuXiaX.OBPlayerInfo
// 0x0078
struct FOBPlayerInfo
{
	int                                                user_id_;                                                 // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     team_id_;                                                 // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                kill_num_;                                                // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                damage_num_;                                              // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                playerHp;                                                 // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                playerMaxHp;                                              // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                playerDyingHp;                                            // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                playerMP;                                                 // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                playerMaxMP;                                              // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                playerInjury;                                             // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              last_rot_yaw_;                                            // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     last_position_;                                           // 0x003C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    last_viewdir_;                                            // 0x0048(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FString                                     user_name_;                                               // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                horse_id_;                                                // 0x0068(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDead;                                                    // 0x006C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bConnectLost;                                             // 0x006D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bGameOver;                                                // 0x006E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPlayerGameState                                   PlayerState;                                              // 0x006F(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                rank;                                                     // 0x0070(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
};

// ScriptStruct WuXiaX.OBMijingmenInfo
// 0x0014
struct FOBMijingmenInfo
{
	int                                                worldID;                                                  // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PlayerID;                                                 // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     pos;                                                      // 0x0008(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WuXiaX.OBTreasureBoxInfo
// 0x0018
struct FOBTreasureBoxInfo
{
	int                                                worldID;                                                  // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                openingPlayerID;                                          // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               isOpened;                                                 // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               isAlive;                                                  // 0x0009(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	struct FVector                                     pos;                                                      // 0x000C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WuXiaX.OBXinfaInfo
// 0x0014
struct FOBXinfaInfo
{
	int                                                worldID;                                                  // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                learningPlayerID;                                         // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     pos;                                                      // 0x0008(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WuXiaX.OBGameInitInfo
// 0x0088
struct FOBGameInitInfo
{
	int                                                maxNumTeams;                                              // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                teamMaxMemNum;                                            // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FOBPlayerInfo>                       players;                                                  // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FOBHorseInfo>                        horses;                                                   // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FOBParadropPosInfo>                  paraPosInfos;                                             // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FOBParadropItemInfo>                 paraItemInfos;                                            // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FOBMijingmenInfo>                    mijingmenInfos;                                           // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FOBTreasureBoxInfo>                  treasureboxInfos;                                         // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FOBXinfaInfo>                        xinfaInfos;                                               // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FOBFightState>                       fightStates;                                              // 0x0078(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct WuXiaX.OBTeamInfo
// 0x0030
struct FOBTeamInfo
{
	TArray<int>                                        team_mem_ids;                                             // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                team_id_;                                                 // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     team_name_;                                               // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FColor                                      team_color_;                                              // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct WuXiaX.OBHorseBasicInfoToShow
// 0x000C
struct FOBHorseBasicInfoToShow
{
	int                                                horseBaseID;                                              // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              horseMaxSpeed;                                            // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              horseMaxEndurance;                                        // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WuXiaX.OBPlayerBasicInfo
// 0x0018
struct FOBPlayerBasicInfo
{
	int                                                user_id_;                                                 // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                team_id_;                                                 // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     user_name_;                                               // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct WuXiaX.DeadlyInfo
// 0x0018
struct FDeadlyInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct WuXiaX.PlayerGameTimeData
// 0x00C8
struct FPlayerGameTimeData
{
	int                                                m_Damage;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                m_DyingKill;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int16_t                                            m_DeadKill;                                               // 0x0008(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            m_Assist;                                                 // 0x000A(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FDeadlyInfo                                 m_Dyinger;                                                // 0x0010(0x0018)
	struct FDeadlyInfo                                 m_Killer;                                                 // 0x0028(0x0018)
	TMap<int64_t, int>                                 m_Dying_Reason;                                           // 0x0040(0x0050) (ZeroConstructor)
	TArray<int>                                        m_Attacker_List;                                          // 0x0090(0x0010) (ZeroConstructor)
	int                                                m_DyingOutOfSafe;                                         // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	int16_t                                            m_AssassinationCount;                                     // 0x00A4(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00A6(0x0002) MISSED OFFSET
	uint32_t                                           m_TotalDistance;                                          // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           m_WalkDistance;                                           // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           m_RideDistance;                                           // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	int16_t                                            m_FarWeaponKillCount;                                     // 0x00B4(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            m_ThrowKillCount;                                         // 0x00B6(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            m_CurrentRank;                                            // 0x00B8(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x00BA(0x0002) MISSED OFFSET
	int                                                m_RewardMoney;                                            // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
	int16_t                                            m_RideKillCount;                                          // 0x00C0(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x00C2(0x0006) MISSED OFFSET
};

// ScriptStruct WuXiaX.HPChangeInfo
// 0x0018
struct FHPChangeInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct WuXiaX.SetSkillInfo
// 0x0010
struct FSetSkillInfo
{
	ESkillEquipType                                    slottype_;                                                // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                slotindex_;                                               // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                skillid_;                                                 // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isvalid_;                                                 // 0x000C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct WuXiaX.SquadMemberData
// 0x0050
struct FSquadMemberData
{
	int                                                PlayerNetID;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     playername;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
	int                                                playerHp;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                playerMaxHp;                                              // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              playerDyingHp;                                            // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              PlayerSaveValue;                                          // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	ETeamPlayerState                                   PlayerState;                                              // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FVector                                     PlayerMark3DLocation;                                     // 0x002C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               HasMark;                                                  // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              Yaw;                                                      // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0040(0x000C) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct WuXiaX.ResurrectionInfo
// 0x0030
struct FResurrectionInfo
{
	TArray<int>                                        skills_;                                                  // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        weapons_;                                                 // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        items_;                                                   // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct WuXiaX.DebugVariable
// 0x0018
struct FDebugVariable
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Value;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct WuXiaX.UISkillInfo
// 0x0060
struct FUISkillInfo
{
	bool                                               isskillgroup;                                             // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                id_;                                                      // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                weapontype_;                                              // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                skilltype_;                                               // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     name_;                                                    // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     description_;                                             // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                Level;                                                    // 0x0030(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UTexture2D*                                  skillicon_;                                               // 0x0038(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UTexture2D*>                          skilleffectsicon_;                                        // 0x0040(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<int>                                        skilleffectstype_;                                        // 0x0050(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct WuXiaX.PlayerMoveState
// 0x0006
struct FPlayerMoveState
{
	bool                                               walk_flag_;                                               // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               spring_flag_;                                             // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               block_flag_;                                              // 0x0002(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               swiming_flag_;                                            // 0x0003(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               aim_flag_;                                                // 0x0004(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               using_item_flag_;                                         // 0x0005(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WuXiaX.BuffPointInfo
// 0x0010
struct FBuffPointInfo
{
	struct FVector                                     location_;                                                // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                state_;                                                   // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WuXiaX.StasticsInfo
// 0x0020
struct FStasticsInfo
{
	struct FString                                     name_;                                                    // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                kill_;                                                    // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                dead_;                                                    // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                assist_;                                                  // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                resource_;                                                // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WuXiaX.PlayModeTime
// 0x0050
struct FPlayModeTime
{
	TMap<int, int64_t>                                 time_map_;                                                // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct WuXiaX.PlayModeState
// 0x0050
struct FPlayModeState
{
	TMap<int, int>                                     state_map_;                                               // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct WuXiaX.UserLoginData
// 0x00A8
struct FUserLoginData
{
	int                                                player_id_;                                               // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     player_password_;                                         // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     playe_port_;                                              // 0x0018(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     player_teamid_;                                           // 0x0028(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<int>                                        equip_item_id_;                                           // 0x0038(0x0010) (BlueprintVisible, ZeroConstructor)
	ESexType                                           sex_type_;                                                // 0x0048(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	int                                                face_id_;                                                 // 0x004C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                skin_color_id_;                                           // 0x0050(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                hair_id_;                                                 // 0x0054(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                hair_color_id_;                                           // 0x0058(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	TArray<int>                                        equip_item_num_;                                          // 0x0060(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<int>                                        equip_skin_id_;                                           // 0x0070(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<int>                                        preview_skin_id_;                                         // 0x0080(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     player_name_;                                             // 0x0090(0x0010) (BlueprintVisible, ZeroConstructor)
	EPlayerRoleType                                    player_role_type_;                                        // 0x00A0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_first_time_login_;                                     // 0x00A1(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x00A2(0x0006) MISSED OFFSET
};

// ScriptStruct WuXiaX.ClientKillStatistic
// 0x0008
struct FClientKillStatistic
{
	int                                                m_Hp;                                                     // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                m_WeaponID;                                               // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WuXiaX.OBEvents
// 0x0001
struct FOBEvents
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct WuXiaX.OBPlayerLogout
// 0x0008
struct FOBPlayerLogout
{
	int                                                player_net_id_;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_active_;                                               // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct WuXiaX.OBHorsePosInfo
// 0x0014
struct FOBHorsePosInfo
{
	int                                                horse_id_;                                                // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              last_rot_yaw_;                                            // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     last_position_;                                           // 0x0008(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WuXiaX.OBPlayerDynamicInfo
// 0x002C
struct FOBPlayerDynamicInfo
{
	int                                                user_id_;                                                 // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                kill_num_;                                                // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                damage_num_;                                              // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                playerHp;                                                 // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                playerMaxHp;                                              // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              last_rot_yaw_;                                            // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ETeamPlayerState                                   player_state_;                                            // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FVector                                     last_position_;                                           // 0x001C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPlayerGameState                                   PlayerState;                                              // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
};

// ScriptStruct WuXiaX.SpawnItemData
// 0x0028
struct FSpawnItemData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct WuXiaX.PlayerBag
// 0x0008
struct FPlayerBag
{
	int                                                m_ItemID;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                m_Count;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WuXiaX.PlayerPVPInfo
// 0x0030
struct FPlayerPVPInfo
{
	int                                                player_id_;                                               // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     name_;                                                    // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                kill_number_;                                             // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                keep_kill_number_;                                        // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                dead_number_;                                             // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                assist_number_;                                           // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                resources_point_;                                         // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct WuXiaX.CampInfo
// 0x0028
struct FCampInfo
{
	struct FString                                     camp_squad_id_;                                           // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FString>                             squad_ids_;                                               // 0x0010(0x0010) (ZeroConstructor)
	int                                                camp_poind_;                                              // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct WuXiaX.SquadMembers
// 0x0030
struct FSquadMembers
{
	struct FString                                     squad_id;                                                 // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        members;                                                  // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FString>                             names;                                                    // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct WuXiaX.KillInfo
// 0x0010
struct FKillInfo
{
	int                                                id_;                                                      // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                total_kill_;                                              // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                kill_combo_;                                              // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                kill_current_;                                            // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WuXiaX.TeamPlayerUIInfo
// 0x0020
struct FTeamPlayerUIInfo
{
	int                                                PlayerID;                                                 // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     playername;                                               // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                index;                                                    // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct WuXiaX.RareItemInfo
// 0x0014
struct FRareItemInfo
{
	int                                                item_id_;                                                 // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                current_total_num_;                                       // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                current_can_get_num_;                                     // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                next_refresh_time_;                                       // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               need_refresh_;                                            // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct WuXiaX.FallingAnimationParameters
// 0x0018
struct FFallingAnimationParameters
{
	class UAnimSequence*                               Animation;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ApexTime;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EndTIme;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct WuXiaX.CameraSetting
// 0x0014
struct FCameraSetting
{
	float                                              TargetArmLength;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LagSpeed;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SocketOffset;                                             // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WuXiaX.Inviter
// 0x0020
struct FInviter
{
	int                                                user_id_;                                                 // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     user_name_;                                               // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
	EInviteResultType                                  invite_type_;                                             // 0x0018(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct WuXiaX.PlayerLoadObj
// 0x0018
struct FPlayerLoadObj
{
	TWeakObjectPtr<class AWuXiaXCharacter>             character_obj_;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        type_;                                                    // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct WuXiaX.SpawnHorseData
// 0x0028
struct FSpawnHorseData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct WuXiaX.SquadData
// 0x0030
struct FSquadData
{
	struct FString                                     squad_id_;                                                // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        squad_life_players_;                                      // 0x0010(0x0010) (ZeroConstructor)
	TArray<int>                                        squad_players_;                                           // 0x0020(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
