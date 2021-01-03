#pragma once

// Name: S, Version: b


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum PlayFab.EProtocolType
enum class EProtocolType : uint8_t
{
	pfenum_TCP                     = 0,
	pfenum_UDP                     = 1,
	pfenum_MAX                     = 2,

};

// Enum PlayFab.ECancellationReason
enum class ECancellationReason : uint8_t
{
	pfenum_Requested               = 0,
	pfenum_Internal                = 1,
	pfenum_Timeout                 = 2,
	pfenum_MAX                     = 3,

};

// Enum PlayFab.EAzureVmFamily
enum class EAzureVmFamily : uint8_t
{
	pfenum_A                       = 0,
	pfenum_Av2                     = 1,
	pfenum_Dv2                     = 2,
	pfenum_F                       = 3,
	pfenum_Fsv2                    = 4,
	pfenum_MAX                     = 5,

};

// Enum PlayFab.EAzureRegion
enum class EAzureRegion : uint8_t
{
	pfenum_AustraliaEast           = 0,
	pfenum_AustraliaSoutheast      = 1,
	pfenum_BrazilSouth             = 2,
	pfenum_CentralUs               = 3,
	pfenum_EastAsia                = 4,
	pfenum_EastUs                  = 5,
	pfenum_EastUs2                 = 6,
	pfenum_JapanEast               = 7,
	pfenum_JapanWest               = 8,
	pfenum_NorthCentralUs          = 9,
	pfenum_NorthEurope             = 10,
	pfenum_SouthCentralUs          = 11,
	pfenum_SoutheastAsia           = 12,
	pfenum_WestEurope              = 13,
	pfenum_WestUs                  = 14,
	pfenum_ChinaEast2              = 15,
	pfenum_ChinaNorth2             = 16,
	pfenum_SouthAfricaNorth        = 17,
	pfenum_MAX                     = 18,

};

// Enum PlayFab.EUserOrigination
enum class EUserOrigination : uint8_t
{
	pfenum_Organic                 = 0,
	pfenum_Steam                   = 1,
	pfenum_Google                  = 2,
	pfenum_Amazon                  = 3,
	pfenum_Facebook                = 4,
	pfenum_Kongregate              = 5,
	pfenum_GamersFirst             = 6,
	pfenum_Unknown                 = 7,
	pfenum_IOS                     = 8,
	pfenum_LoadTest                = 9,
	pfenum_Android                 = 10,
	pfenum_PSN                     = 11,
	pfenum_GameCenter              = 12,
	pfenum_CustomId                = 13,
	pfenum_XboxLive                = 14,
	pfenum_Parse                   = 15,
	pfenum_Twitch                  = 16,
	pfenum_WindowsHello            = 17,
	pfenum_ServerCustomId          = 18,
	pfenum_NintendoSwitchDeviceId  = 19,
	pfenum_FacebookInstantGamesId  = 20,
	pfenum_OpenIdConnect           = 21,
	pfenum_MAX                     = 22,

};

// Enum PlayFab.ETitleActivationStatus
enum class ETitleActivationStatus : uint8_t
{
	pfenum_None                    = 0,
	pfenum_ActivatedTitleKey       = 1,
	pfenum_PendingSteam            = 2,
	pfenum_ActivatedSteam          = 3,
	pfenum_RevokedSteam            = 4,
	pfenum_MAX                     = 5,

};

// Enum PlayFab.ESubscriptionProviderStatus
enum class ESubscriptionProviderStatus : uint8_t
{
	pfenum_NoError                 = 0,
	pfenum_Cancelled               = 1,
	pfenum_UnknownError            = 2,
	pfenum_BillingError            = 3,
	pfenum_ProductUnavailable      = 4,
	pfenum_CustomerDidNotAcceptPriceChange = 5,
	pfenum_FreeTrial               = 6,
	pfenum_PaymentPending          = 7,
	pfenum_MAX                     = 8,

};

// Enum PlayFab.EStatisticVersionStatus
enum class EStatisticVersionStatus : uint8_t
{
	pfenum_Active                  = 0,
	pfenum_SnapshotPending         = 1,
	pfenum_Snapshot                = 2,
	pfenum_ArchivalPending         = 3,
	pfenum_Archived                = 4,
	pfenum_MAX                     = 5,

};

// Enum PlayFab.EStatisticVersionArchivalStatus
enum class EStatisticVersionArchivalStatus : uint8_t
{
	pfenum_NotScheduled            = 0,
	pfenum_Scheduled               = 1,
	pfenum_Queued                  = 2,
	pfenum_InProgress              = 3,
	pfenum_Complete                = 4,
	pfenum_MAX                     = 5,

};

// Enum PlayFab.EResultTableNodeType
enum class EResultTableNodeType : uint8_t
{
	pfenum_ItemId                  = 0,
	pfenum_TableId                 = 1,
	pfenum_MAX                     = 2,

};

// Enum PlayFab.EPushNotificationPlatform
enum class EPushNotificationPlatform : uint8_t
{
	pfenum_ApplePushNotificationService = 0,
	pfenum_GoogleCloudMessaging    = 1,
	pfenum_MAX                     = 2,

};

// Enum PlayFab.EEmailVerificationStatus
enum class EEmailVerificationStatus : uint8_t
{
	pfenum_Unverified              = 0,
	pfenum_Pending                 = 1,
	pfenum_Confirmed               = 2,
	pfenum_MAX                     = 3,

};

// Enum PlayFab.EEffectType
enum class EEffectType : uint8_t
{
	pfenum_Allow                   = 0,
	pfenum_Deny                    = 1,
	pfenum_MAX                     = 2,

};

// Enum PlayFab.ECurrency
enum class ECurrency : uint8_t
{
	pfenum_AED                     = 0,
	pfenum_AFN                     = 1,
	pfenum_ALL                     = 2,
	pfenum_AMD                     = 3,
	pfenum_ANG                     = 4,
	pfenum_AOA                     = 5,
	pfenum_ARS                     = 6,
	pfenum_AUD                     = 7,
	pfenum_AWG                     = 8,
	pfenum_AZN                     = 9,
	pfenum_BAM                     = 10,
	pfenum_BBD                     = 11,
	pfenum_BDT                     = 12,
	pfenum_BGN                     = 13,
	pfenum_BHD                     = 14,
	pfenum_BIF                     = 15,
	pfenum_BMD                     = 16,
	pfenum_BND                     = 17,
	pfenum_BOB                     = 18,
	pfenum_BRL                     = 19,
	pfenum_BSD                     = 20,
	pfenum_BTN                     = 21,
	pfenum_BWP                     = 22,
	pfenum_BYR                     = 23,
	pfenum_BZD                     = 24,
	pfenum_CAD                     = 25,
	pfenum_CDF                     = 26,
	pfenum_CHF                     = 27,
	pfenum_CLP                     = 28,
	pfenum_CNY                     = 29,
	pfenum_COP                     = 30,
	pfenum_CRC                     = 31,
	pfenum_CUC                     = 32,
	pfenum_CUP                     = 33,
	pfenum_CVE                     = 34,
	pfenum_CZK                     = 35,
	pfenum_DJF                     = 36,
	pfenum_DKK                     = 37,
	pfenum_DOP                     = 38,
	pfenum_DZD                     = 39,
	pfenum_EGP                     = 40,
	pfenum_ERN                     = 41,
	pfenum_ETB                     = 42,
	pfenum_EUR                     = 43,
	pfenum_FJD                     = 44,
	pfenum_FKP                     = 45,
	pfenum_GBP                     = 46,
	pfenum_GEL                     = 47,
	pfenum_GGP                     = 48,
	pfenum_GHS                     = 49,
	pfenum_GIP                     = 50,
	pfenum_GMD                     = 51,
	pfenum_GNF                     = 52,
	pfenum_GTQ                     = 53,
	pfenum_GYD                     = 54,
	pfenum_HKD                     = 55,
	pfenum_HNL                     = 56,
	pfenum_HRK                     = 57,
	pfenum_HTG                     = 58,
	pfenum_HUF                     = 59,
	pfenum_IDR                     = 60,
	pfenum_ILS                     = 61,
	pfenum_IMP                     = 62,
	pfenum_INR                     = 63,
	pfenum_IQD                     = 64,
	pfenum_IRR                     = 65,
	pfenum_ISK                     = 66,
	pfenum_JEP                     = 67,
	pfenum_JMD                     = 68,
	pfenum_JOD                     = 69,
	pfenum_JPY                     = 70,
	pfenum_KES                     = 71,
	pfenum_KGS                     = 72,
	pfenum_KHR                     = 73,
	pfenum_KMF                     = 74,
	pfenum_KPW                     = 75,
	pfenum_KRW                     = 76,
	pfenum_KWD                     = 77,
	pfenum_KYD                     = 78,
	pfenum_KZT                     = 79,
	pfenum_LAK                     = 80,
	pfenum_LBP                     = 81,
	pfenum_LKR                     = 82,
	pfenum_LRD                     = 83,
	pfenum_LSL                     = 84,
	pfenum_LYD                     = 85,
	pfenum_MAD                     = 86,
	pfenum_MDL                     = 87,
	pfenum_MGA                     = 88,
	pfenum_MKD                     = 89,
	pfenum_MMK                     = 90,
	pfenum_MNT                     = 91,
	pfenum_MOP                     = 92,
	pfenum_MRO                     = 93,
	pfenum_MUR                     = 94,
	pfenum_MVR                     = 95,
	pfenum_MWK                     = 96,
	pfenum_MXN                     = 97,
	pfenum_MYR                     = 98,
	pfenum_MZN                     = 99,
	pfenum_NAD                     = 100,
	pfenum_NGN                     = 101,
	pfenum_NIO                     = 102,
	pfenum_NOK                     = 103,
	pfenum_NPR                     = 104,
	pfenum_NZD                     = 105,
	pfenum_OMR                     = 106,
	pfenum_PAB                     = 107,
	pfenum_PEN                     = 108,
	pfenum_PGK                     = 109,
	pfenum_PHP                     = 110,
	pfenum_PKR                     = 111,
	pfenum_PLN                     = 112,
	pfenum_PYG                     = 113,
	pfenum_QAR                     = 114,
	pfenum_RON                     = 115,
	pfenum_RSD                     = 116,
	pfenum_RUB                     = 117,
	pfenum_RWF                     = 118,
	pfenum_SAR                     = 119,
	pfenum_SBD                     = 120,
	pfenum_SCR                     = 121,
	pfenum_SDG                     = 122,
	pfenum_SEK                     = 123,
	pfenum_SGD                     = 124,
	pfenum_SHP                     = 125,
	pfenum_SLL                     = 126,
	pfenum_SOS                     = 127,
	pfenum_SPL                     = 128,
	pfenum_SRD                     = 129,
	pfenum_STD                     = 130,
	pfenum_SVC                     = 131,
	pfenum_SYP                     = 132,
	pfenum_SZL                     = 133,
	pfenum_THB                     = 134,
	pfenum_TJS                     = 135,
	pfenum_TMT                     = 136,
	pfenum_TND                     = 137,
	pfenum_TOP                     = 138,
	pfenum_TRY                     = 139,
	pfenum_TTD                     = 140,
	pfenum_TVD                     = 141,
	pfenum_TWD                     = 142,
	pfenum_TZS                     = 143,
	pfenum_UAH                     = 144,
	pfenum_UGX                     = 145,
	pfenum_USD                     = 146,
	pfenum_UYU                     = 147,
	pfenum_UZS                     = 148,
	pfenum_VEF                     = 149,
	pfenum_VND                     = 150,
	pfenum_VUV                     = 151,
	pfenum_WST                     = 152,
	pfenum_XAF                     = 153,
	pfenum_XCD                     = 154,
	pfenum_XDR                     = 155,
	pfenum_XOF                     = 156,
	pfenum_XPF                     = 157,
	pfenum_YER                     = 158,
	pfenum_ZAR                     = 159,
	pfenum_ZMW                     = 160,
	pfenum_ZWD                     = 161,
	pfenum_MAX                     = 162,

};

// Enum PlayFab.ECountryCode
enum class ECountryCode : uint8_t
{
	pfenum_AF                      = 0,
	pfenum_AX                      = 1,
	pfenum_AL                      = 2,
	pfenum_DZ                      = 3,
	pfenum_AS                      = 4,
	pfenum_AD                      = 5,
	pfenum_AO                      = 6,
	pfenum_AI                      = 7,
	pfenum_AQ                      = 8,
	pfenum_AG                      = 9,
	pfenum_AR                      = 10,
	pfenum_AM                      = 11,
	pfenum_AW                      = 12,
	pfenum_AU                      = 13,
	pfenum_AT                      = 14,
	pfenum_AZ                      = 15,
	pfenum_BS                      = 16,
	pfenum_BH                      = 17,
	pfenum_BD                      = 18,
	pfenum_BB                      = 19,
	pfenum_BY                      = 20,
	pfenum_BE                      = 21,
	pfenum_BZ                      = 22,
	pfenum_BJ                      = 23,
	pfenum_BM                      = 24,
	pfenum_BT                      = 25,
	pfenum_BO                      = 26,
	pfenum_BQ                      = 27,
	pfenum_BA                      = 28,
	pfenum_BW                      = 29,
	pfenum_BV                      = 30,
	pfenum_BR                      = 31,
	pfenum_IO                      = 32,
	pfenum_BN                      = 33,
	pfenum_BG                      = 34,
	pfenum_BF                      = 35,
	pfenum_BI                      = 36,
	pfenum_KH                      = 37,
	pfenum_CM                      = 38,
	pfenum_CA                      = 39,
	pfenum_CV                      = 40,
	pfenum_KY                      = 41,
	pfenum_CF                      = 42,
	pfenum_TD                      = 43,
	pfenum_CL                      = 44,
	pfenum_CN                      = 45,
	pfenum_CX                      = 46,
	pfenum_CC                      = 47,
	pfenum_CO                      = 48,
	pfenum_KM                      = 49,
	pfenum_CG                      = 50,
	pfenum_CD                      = 51,
	pfenum_CK                      = 52,
	pfenum_CR                      = 53,
	pfenum_CI                      = 54,
	pfenum_HR                      = 55,
	pfenum_CU                      = 56,
	pfenum_CW                      = 57,
	pfenum_CY                      = 58,
	pfenum_CZ                      = 59,
	pfenum_DK                      = 60,
	pfenum_DJ                      = 61,
	pfenum_DM                      = 62,
	pfenum_DO                      = 63,
	pfenum_EC                      = 64,
	pfenum_EG                      = 65,
	pfenum_SV                      = 66,
	pfenum_GQ                      = 67,
	pfenum_ER                      = 68,
	pfenum_EE                      = 69,
	pfenum_ET                      = 70,
	pfenum_FK                      = 71,
	pfenum_FO                      = 72,
	pfenum_FJ                      = 73,
	pfenum_FI                      = 74,
	pfenum_FR                      = 75,
	pfenum_GF                      = 76,
	pfenum_PF                      = 77,
	pfenum_TF                      = 78,
	pfenum_GA                      = 79,
	pfenum_GM                      = 80,
	pfenum_GE                      = 81,
	pfenum_DE                      = 82,
	pfenum_GH                      = 83,
	pfenum_GI                      = 84,
	pfenum_GR                      = 85,
	pfenum_GL                      = 86,
	pfenum_GD                      = 87,
	pfenum_GP                      = 88,
	pfenum_GU                      = 89,
	pfenum_GT                      = 90,
	pfenum_GG                      = 91,
	pfenum_GN                      = 92,
	pfenum_GW                      = 93,
	pfenum_GY                      = 94,
	pfenum_HT                      = 95,
	pfenum_HM                      = 96,
	pfenum_VA                      = 97,
	pfenum_HN                      = 98,
	pfenum_HK                      = 99,
	pfenum_HU                      = 100,
	pfenum_IS                      = 101,
	pfenum_IN                      = 102,
	pfenum_ID                      = 103,
	pfenum_IR                      = 104,
	pfenum_IQ                      = 105,
	pfenum_IE                      = 106,
	pfenum_IM                      = 107,
	pfenum_IL                      = 108,
	pfenum_IT                      = 109,
	pfenum_JM                      = 110,
	pfenum_JP                      = 111,
	pfenum_JE                      = 112,
	pfenum_JO                      = 113,
	pfenum_KZ                      = 114,
	pfenum_KE                      = 115,
	pfenum_KI                      = 116,
	pfenum_KP                      = 117,
	pfenum_KR                      = 118,
	pfenum_KW                      = 119,
	pfenum_KG                      = 120,
	pfenum_LA                      = 121,
	pfenum_LV                      = 122,
	pfenum_LB                      = 123,
	pfenum_LS                      = 124,
	pfenum_LR                      = 125,
	pfenum_LY                      = 126,
	pfenum_LI                      = 127,
	pfenum_LT                      = 128,
	pfenum_LU                      = 129,
	pfenum_MO                      = 130,
	pfenum_MK                      = 131,
	pfenum_MG                      = 132,
	pfenum_MW                      = 133,
	pfenum_MY                      = 134,
	pfenum_MV                      = 135,
	pfenum_ML                      = 136,
	pfenum_MT                      = 137,
	pfenum_MH                      = 138,
	pfenum_MQ                      = 139,
	pfenum_MR                      = 140,
	pfenum_MU                      = 141,
	pfenum_YT                      = 142,
	pfenum_MX                      = 143,
	pfenum_FM                      = 144,
	pfenum_MD                      = 145,
	pfenum_MC                      = 146,
	pfenum_MN                      = 147,
	pfenum_ME                      = 148,
	pfenum_MS                      = 149,
	pfenum_MA                      = 150,
	pfenum_MZ                      = 151,
	pfenum_MM                      = 152,
	pfenum_NA                      = 153,
	pfenum_NR                      = 154,
	pfenum_NP                      = 155,
	pfenum_NL                      = 156,
	pfenum_NC                      = 157,
	pfenum_NZ                      = 158,
	pfenum_NI                      = 159,
	pfenum_NE                      = 160,
	pfenum_NG                      = 161,
	pfenum_NU                      = 162,
	pfenum_NF                      = 163,
	pfenum_MP                      = 164,
	pfenum_NO                      = 165,
	pfenum_OM                      = 166,
	pfenum_PK                      = 167,
	pfenum_PW                      = 168,
	pfenum_PS                      = 169,
	pfenum_PA                      = 170,
	pfenum_PG                      = 171,
	pfenum_PY                      = 172,
	pfenum_PE                      = 173,
	pfenum_PH                      = 174,
	pfenum_PN                      = 175,
	pfenum_PL                      = 176,
	pfenum_PT                      = 177,
	pfenum_PR                      = 178,
	pfenum_QA                      = 179,
	pfenum_RE                      = 180,
	pfenum_RO                      = 181,
	pfenum_RU                      = 182,
	pfenum_RW                      = 183,
	pfenum_BL                      = 184,
	pfenum_SH                      = 185,
	pfenum_KN                      = 186,
	pfenum_LC                      = 187,
	pfenum_MF                      = 188,
	pfenum_PM                      = 189,
	pfenum_VC                      = 190,
	pfenum_WS                      = 191,
	pfenum_SM                      = 192,
	pfenum_ST                      = 193,
	pfenum_SA                      = 194,
	pfenum_SN                      = 195,
	pfenum_RS                      = 196,
	pfenum_SC                      = 197,
	pfenum_SL                      = 198,
	pfenum_SG                      = 199,
	pfenum_SX                      = 200,
	pfenum_SK                      = 201,
	pfenum_SI                      = 202,
	pfenum_SB                      = 203,
	pfenum_SO                      = 204,
	pfenum_ZA                      = 205,
	pfenum_GS                      = 206,
	pfenum_SS                      = 207,
	pfenum_ES                      = 208,
	pfenum_LK                      = 209,
	pfenum_SD                      = 210,
	pfenum_SR                      = 211,
	pfenum_SJ                      = 212,
	pfenum_SZ                      = 213,
	pfenum_SE                      = 214,
	pfenum_CH                      = 215,
	pfenum_SY                      = 216,
	pfenum_TW                      = 217,
	pfenum_TJ                      = 218,
	pfenum_TZ                      = 219,
	pfenum_TH                      = 220,
	pfenum_TL                      = 221,
	pfenum_TG                      = 222,
	pfenum_TK                      = 223,
	pfenum_TO                      = 224,
	pfenum_TT                      = 225,
	pfenum_TN                      = 226,
	pfenum_TR                      = 227,
	pfenum_TM                      = 228,
	pfenum_TC                      = 229,
	pfenum_TV                      = 230,
	pfenum_UG                      = 231,
	pfenum_UA                      = 232,
	pfenum_AE                      = 233,
	pfenum_GB                      = 234,
	pfenum_US                      = 235,
	pfenum_UM                      = 236,
	pfenum_UY                      = 237,
	pfenum_UZ                      = 238,
	pfenum_VU                      = 239,
	pfenum_VE                      = 240,
	pfenum_VN                      = 241,
	pfenum_VG                      = 242,
	pfenum_VI                      = 243,
	pfenum_WF                      = 244,
	pfenum_EH                      = 245,
	pfenum_YE                      = 246,
	pfenum_ZM                      = 247,
	pfenum_ZW                      = 248,
	pfenum_MAX                     = 249,

};

// Enum PlayFab.EContinentCode
enum class EContinentCode : uint8_t
{
	pfenum_AF                      = 0,
	pfenum_AN                      = 1,
	pfenum_AS                      = 2,
	pfenum_EU                      = 3,
	pfenum_NA                      = 4,
	pfenum_OC                      = 5,
	pfenum_SA                      = 6,
	pfenum_MAX                     = 7,

};

// Enum PlayFab.EConditionals
enum class EConditionals : uint8_t
{
	pfenum_Any                     = 0,
	pfenum_True                    = 1,
	pfenum_False                   = 2,
	pfenum_MAX                     = 3,

};

// Enum PlayFab.EPFJson
enum class EPFJson : uint8_t
{
	None                           = 0,
	Null                           = 1,
	String                         = 2,
	Number                         = 3,
	Boolean                        = 4,
	Array                          = 5,
	Object                         = 6,
	MAX                            = 7,

};

// Enum PlayFab.EMatchmakeStatus
enum class EMatchmakeStatus : uint8_t
{
	pfenum_Complete                = 0,
	pfenum_Waiting                 = 1,
	pfenum_GameNotFound            = 2,
	pfenum_NoAvailableSlots        = 3,
	pfenum_SessionClosed           = 4,
	pfenum_MAX                     = 5,

};

// Enum PlayFab.ETransactionStatus
enum class ETransactionStatus : uint8_t
{
	pfenum_CreateCart              = 0,
	pfenum_Init                    = 1,
	pfenum_Approved                = 2,
	pfenum_Succeeded               = 3,
	pfenum_FailedByProvider        = 4,
	pfenum_DisputePending          = 5,
	pfenum_RefundPending           = 6,
	pfenum_Refunded                = 7,
	pfenum_RefundFailed            = 8,
	pfenum_ChargedBack             = 9,
	pfenum_FailedByUber            = 10,
	pfenum_FailedByPlayFab         = 11,
	pfenum_Revoked                 = 12,
	pfenum_TradePending            = 13,
	pfenum_Traded                  = 14,
	pfenum_Upgraded                = 15,
	pfenum_StackPending            = 16,
	pfenum_Stacked                 = 17,
	pfenum_Other                   = 18,
	pfenum_Failed                  = 19,
	pfenum_MAX                     = 20,

};

// Enum PlayFab.ECloudScriptRevisionOption
enum class ECloudScriptRevisionOption : uint8_t
{
	pfenum_Live                    = 0,
	pfenum_Latest                  = 1,
	pfenum_Specific                = 2,
	pfenum_MAX                     = 3,

};

// Enum PlayFab.ETradeStatus
enum class ETradeStatus : uint8_t
{
	pfenum_Invalid                 = 0,
	pfenum_Opening                 = 1,
	pfenum_Open                    = 2,
	pfenum_Accepting               = 3,
	pfenum_Accepted                = 4,
	pfenum_Filled                  = 5,
	pfenum_Cancelled               = 6,
	pfenum_MAX                     = 7,

};

// Enum PlayFab.EOperationTypes
enum class EOperationTypes : uint8_t
{
	pfenum_Created                 = 0,
	pfenum_Updated                 = 1,
	pfenum_Deleted                 = 2,
	pfenum_None                    = 3,
	pfenum_MAX                     = 4,

};

// Enum PlayFab.EAzureVmSize
enum class EAzureVmSize : uint8_t
{
	pfenum_Standard_D1_v2          = 0,
	pfenum_Standard_D2_v2          = 1,
	pfenum_Standard_D3_v2          = 2,
	pfenum_Standard_D4_v2          = 3,
	pfenum_Standard_D5_v2          = 4,
	pfenum_Standard_A1_v2          = 5,
	pfenum_Standard_A2_v2          = 6,
	pfenum_Standard_A4_v2          = 7,
	pfenum_Standard_A8_v2          = 8,
	pfenum_Standard_F1             = 9,
	pfenum_Standard_F2             = 10,
	pfenum_Standard_F4             = 11,
	pfenum_Standard_F8             = 12,
	pfenum_Standard_F16            = 13,
	pfenum_Standard_F2s_v2         = 14,
	pfenum_Standard_F4s_v2         = 15,
	pfenum_Standard_F8s_v2         = 16,
	pfenum_Standard_F16s_v2        = 17,
	pfenum_Standard_A1             = 18,
	pfenum_Standard_A2             = 19,
	pfenum_Standard_A3             = 20,
	pfenum_Standard_A4             = 21,
	pfenum_Standard_MAX            = 22,

};

// Enum PlayFab.EContainerFlavor
enum class EContainerFlavor : uint8_t
{
	pfenum_ManagedWindowsServerCore = 0,
	pfenum_CustomLinux             = 1,
	pfenum_ManagedWindowsServerCorePreview = 2,
	pfenum_MAX                     = 3,

};

// Enum PlayFab.ETitleMultiplayerServerEnabledStatus
enum class ETitleMultiplayerServerEnabledStatus : uint8_t
{
	pfenum_Initializing            = 0,
	pfenum_Enabled                 = 1,
	pfenum_Disabled                = 2,
	pfenum_MAX                     = 3,

};

// Enum PlayFab.EResolutionOutcome
enum class EResolutionOutcome : uint8_t
{
	pfenum_Revoke                  = 0,
	pfenum_Reinstate               = 1,
	pfenum_Manual                  = 2,
	pfenum_MAX                     = 3,

};

// Enum PlayFab.EPushSetupPlatform
enum class EPushSetupPlatform : uint8_t
{
	pfenum_GCM                     = 0,
	pfenum_APNS                    = 1,
	pfenum_APNS_SANDBOX            = 2,
	pfenum_MAX                     = 3,

};

// Enum PlayFab.EScheduledTaskType
enum class EScheduledTaskType : uint8_t
{
	pfenum_CloudScript             = 0,
	pfenum_ActionsOnPlayerSegment  = 1,
	pfenum_CloudScriptAzureFunctions = 2,
	pfenum_MAX                     = 3,

};

// Enum PlayFab.EUserDataPermission
enum class EUserDataPermission : uint8_t
{
	pfenum_Private                 = 0,
	pfenum_Public                  = 1,
	pfenum_MAX                     = 2,

};

// Enum PlayFab.ELoginIdentityProvider
enum class ELoginIdentityProvider : uint8_t
{
	pfenum_Unknown                 = 0,
	pfenum_PlayFab                 = 1,
	pfenum_Custom                  = 2,
	pfenum_GameCenter              = 3,
	pfenum_GooglePlay              = 4,
	pfenum_Steam                   = 5,
	pfenum_XBoxLive                = 6,
	pfenum_PSN                     = 7,
	pfenum_Kongregate              = 8,
	pfenum_Facebook                = 9,
	pfenum_IOSDevice               = 10,
	pfenum_AndroidDevice           = 11,
	pfenum_Twitch                  = 12,
	pfenum_WindowsHello            = 13,
	pfenum_GameServer              = 14,
	pfenum_CustomServer            = 15,
	pfenum_NintendoSwitch          = 16,
	pfenum_FacebookInstantGames    = 17,
	pfenum_OpenIdConnect           = 18,
	pfenum_MAX                     = 19,

};

// Enum PlayFab.EGameInstanceState
enum class EGameInstanceState : uint8_t
{
	pfenum_Open                    = 0,
	pfenum_Closed                  = 1,
	pfenum_MAX                     = 2,

};

// Enum PlayFab.EPlayerConnectionState
enum class EPlayerConnectionState : uint8_t
{
	pfenum_Unassigned              = 0,
	pfenum_Connecting              = 1,
	pfenum_Participating           = 2,
	pfenum_Participated            = 3,
	pfenum_MAX                     = 4,

};

// Enum PlayFab.EGameBuildStatus
enum class EGameBuildStatus : uint8_t
{
	pfenum_Available               = 0,
	pfenum_Validating              = 1,
	pfenum_InvalidBuildPackage     = 2,
	pfenum_Processing              = 3,
	pfenum_FailedToProcess         = 4,
	pfenum_MAX                     = 5,

};

// Enum PlayFab.EStatisticResetIntervalOption
enum class EStatisticResetIntervalOption : uint8_t
{
	pfenum_Never                   = 0,
	pfenum_Hour                    = 1,
	pfenum_Day                     = 2,
	pfenum_Week                    = 3,
	pfenum_Month                   = 4,
	pfenum_MAX                     = 5,

};

// Enum PlayFab.EStatisticAggregationMethod
enum class EStatisticAggregationMethod : uint8_t
{
	pfenum_Last                    = 0,
	pfenum_Min                     = 1,
	pfenum_Max                     = 2,
	pfenum_Sum                     = 3,

};

// Enum PlayFab.ERegion
enum class ERegion : uint8_t
{
	pfenum_USCentral               = 0,
	pfenum_USEast                  = 1,
	pfenum_EUWest                  = 2,
	pfenum_Singapore               = 3,
	pfenum_Japan                   = 4,
	pfenum_Brazil                  = 5,
	pfenum_Australia               = 6,
	pfenum_MAX                     = 7,

};

// Enum PlayFab.EPfSourceType
enum class EPfSourceType : uint8_t
{
	pfenum_Admin                   = 0,
	pfenum_BackEnd                 = 1,
	pfenum_GameClient              = 2,
	pfenum_GameServer              = 3,
	pfenum_Partner                 = 4,
	pfenum_Custom                  = 5,
	pfenum_API                     = 6,
	pfenum_MAX                     = 7,

};

// Enum PlayFab.EAuthTokenType
enum class EAuthTokenType : uint8_t
{
	pfenum_Email                   = 0,
	pfenum_MAX                     = 1,

};

// Enum PlayFab.ETaskInstanceStatus
enum class ETaskInstanceStatus : uint8_t
{
	pfenum_Succeeded               = 0,
	pfenum_Starting                = 1,
	pfenum_InProgress              = 2,
	pfenum_Failed                  = 3,
	pfenum_Aborted                 = 4,
	pfenum_Stalled                 = 5,
	pfenum_MAX                     = 6,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PlayFab.PlayFabRequestCommon
// 0x0008
struct FPlayFabRequestCommon
{
	class UPlayFabAuthenticationContext*               AuthenticationContext;                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminAbortTaskInstanceRequest
// 0x0010 (0x0018 - 0x0008)
struct FAdminAbortTaskInstanceRequest : public FPlayFabRequestCommon
{
	struct FString                                     TaskInstanceId;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminAddLocalizedNewsRequest
// 0x0040 (0x0048 - 0x0008)
struct FAdminAddLocalizedNewsRequest : public FPlayFabRequestCommon
{
	struct FString                                     Body;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     NewsId;                                                    // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Title;                                                     // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminAddNewsRequest
// 0x0030 (0x0038 - 0x0008)
struct FAdminAddNewsRequest : public FPlayFabRequestCommon
{
	struct FString                                     Body;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Timestamp;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Title;                                                     // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminAddPlayerTagRequest
// 0x0020 (0x0028 - 0x0008)
struct FAdminAddPlayerTagRequest : public FPlayFabRequestCommon
{
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TagName;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminAddServerBuildRequest
// 0x0058 (0x0060 - 0x0008)
struct FAdminAddServerBuildRequest : public FPlayFabRequestCommon
{
	struct FString                                     ActiveRegions;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BuildId;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CommandLineTemplate;                                       // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Comment;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ExecutablePath;                                            // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxGamesPerHost;                                           // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinFreeGameSlots;                                          // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminAddUserVirtualCurrencyRequest
// 0x0028 (0x0030 - 0x0008)
struct FAdminAddUserVirtualCurrencyRequest : public FPlayFabRequestCommon
{
	int                                                Amount;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NP1U[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayFabId;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VirtualCurrency;                                           // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminAddVirtualCurrencyTypesRequest
// 0x0010 (0x0018 - 0x0008)
struct FAdminAddVirtualCurrencyTypesRequest : public FPlayFabRequestCommon
{
	TArray<class UPlayFabJsonObject*>                  VirtualCurrencies;                                         // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminBanUsersRequest
// 0x0010 (0x0018 - 0x0008)
struct FAdminBanUsersRequest : public FPlayFabRequestCommon
{
	TArray<class UPlayFabJsonObject*>                  Bans;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminCheckLimitedEditionItemAvailabilityRequest
// 0x0020 (0x0028 - 0x0008)
struct FAdminCheckLimitedEditionItemAvailabilityRequest : public FPlayFabRequestCommon
{
	struct FString                                     CatalogVersion;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemId;                                                    // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminCreateActionsOnPlayerSegmentTaskRequest
// 0x0040 (0x0048 - 0x0008)
struct FAdminCreateActionsOnPlayerSegmentTaskRequest : public FPlayFabRequestCommon
{
	struct FString                                     Description;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsActive;                                                  // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N0B9[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Name;                                                      // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          Parameter;                                                 // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Schedule;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminCreateCloudScriptTaskRequest
// 0x0040 (0x0048 - 0x0008)
struct FAdminCreateCloudScriptTaskRequest : public FPlayFabRequestCommon
{
	struct FString                                     Description;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsActive;                                                  // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CFA8[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Name;                                                      // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          Parameter;                                                 // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Schedule;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminCreateOpenIdConnectionRequest
// 0x0048 (0x0050 - 0x0008)
struct FAdminCreateOpenIdConnectionRequest : public FPlayFabRequestCommon
{
	struct FString                                     ClientId;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientSecret;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ConnectionId;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     IssuerDiscoveryUrl;                                        // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          IssuerInformation;                                         // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminCreatePlayerSharedSecretRequest
// 0x0010 (0x0018 - 0x0008)
struct FAdminCreatePlayerSharedSecretRequest : public FPlayFabRequestCommon
{
	struct FString                                     FriendlyName;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminCreatePlayerStatisticDefinitionRequest
// 0x0020 (0x0028 - 0x0008)
struct FAdminCreatePlayerStatisticDefinitionRequest : public FPlayFabRequestCommon
{
	EStatisticAggregationMethod                        AggregationMethod;                                         // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5AI8[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     StatisticName;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EStatisticResetIntervalOption                      VersionChangeInterval;                                     // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZPY1[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.PlayFabResultCommon
// 0x0008
struct FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          Request;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminAddLocalizedNewsResult
// 0x0000 (0x0008 - 0x0008)
struct FAdminAddLocalizedNewsResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.AdminAddNewsResult
// 0x0010 (0x0018 - 0x0008)
struct FAdminAddNewsResult : public FPlayFabResultCommon
{
	struct FString                                     NewsId;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminAddPlayerTagResult
// 0x0000 (0x0008 - 0x0008)
struct FAdminAddPlayerTagResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.AdminAddServerBuildResult
// 0x0080 (0x0088 - 0x0008)
struct FAdminAddServerBuildResult : public FPlayFabResultCommon
{
	struct FString                                     ActiveRegions;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BuildId;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CommandLineTemplate;                                       // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Comment;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ExecutablePath;                                            // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxGamesPerHost;                                           // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinFreeGameSlots;                                          // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGameBuildStatus                                   Status;                                                    // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LG7J[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Timestamp;                                                 // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TitleId;                                                   // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminBanUsersResult
// 0x0010 (0x0018 - 0x0008)
struct FAdminBanUsersResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  BanData;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminCheckLimitedEditionItemAvailabilityResult
// 0x0008 (0x0010 - 0x0008)
struct FAdminCheckLimitedEditionItemAvailabilityResult : public FPlayFabResultCommon
{
	int                                                Amount;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4U2K[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.AdminCreateTaskResult
// 0x0010 (0x0018 - 0x0008)
struct FAdminCreateTaskResult : public FPlayFabResultCommon
{
	struct FString                                     TaskId;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminCreatePlayerSharedSecretResult
// 0x0010 (0x0018 - 0x0008)
struct FAdminCreatePlayerSharedSecretResult : public FPlayFabResultCommon
{
	struct FString                                     SecretKey;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminCreatePlayerStatisticDefinitionResult
// 0x0008 (0x0010 - 0x0008)
struct FAdminCreatePlayerStatisticDefinitionResult : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          Statistic;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminDeleteMasterPlayerAccountResult
// 0x0020 (0x0028 - 0x0008)
struct FAdminDeleteMasterPlayerAccountResult : public FPlayFabResultCommon
{
	struct FString                                     JobReceiptId;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TitleIds;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminDeletePlayerResult
// 0x0000 (0x0008 - 0x0008)
struct FAdminDeletePlayerResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.AdminDeletePlayerSharedSecretResult
// 0x0000 (0x0008 - 0x0008)
struct FAdminDeletePlayerSharedSecretResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.AdminDeleteStoreResult
// 0x0000 (0x0008 - 0x0008)
struct FAdminDeleteStoreResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.AdminDeleteTitleResult
// 0x0000 (0x0008 - 0x0008)
struct FAdminDeleteTitleResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.AdminExportMasterPlayerDataResult
// 0x0010 (0x0018 - 0x0008)
struct FAdminExportMasterPlayerDataResult : public FPlayFabResultCommon
{
	struct FString                                     JobReceiptId;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetActionsOnPlayersInSegmentTaskInstanceResult
// 0x0010 (0x0018 - 0x0008)
struct FAdminGetActionsOnPlayersInSegmentTaskInstanceResult : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          Parameter;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          Summary;                                                   // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetAllSegmentsResult
// 0x0010 (0x0018 - 0x0008)
struct FAdminGetAllSegmentsResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Segments;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetCatalogItemsResult
// 0x0010 (0x0018 - 0x0008)
struct FAdminGetCatalogItemsResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Catalog;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetCloudScriptRevisionResult
// 0x0030 (0x0038 - 0x0008)
struct FAdminGetCloudScriptRevisionResult : public FPlayFabResultCommon
{
	struct FString                                     CreatedAt;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  Files;                                                     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               IsPublished;                                               // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CRGG[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Revision;                                                  // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Version;                                                   // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A03A[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.AdminGetCloudScriptTaskInstanceResult
// 0x0010 (0x0018 - 0x0008)
struct FAdminGetCloudScriptTaskInstanceResult : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          Parameter;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          Summary;                                                   // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetCloudScriptVersionsResult
// 0x0010 (0x0018 - 0x0008)
struct FAdminGetCloudScriptVersionsResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Versions;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetContentListResult
// 0x0018 (0x0020 - 0x0008)
struct FAdminGetContentListResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Contents;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                ItemCount;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalSize;                                                 // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetContentUploadUrlResult
// 0x0010 (0x0018 - 0x0008)
struct FAdminGetContentUploadUrlResult : public FPlayFabResultCommon
{
	struct FString                                     URL;                                                       // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetDataReportResult
// 0x0010 (0x0018 - 0x0008)
struct FAdminGetDataReportResult : public FPlayFabResultCommon
{
	struct FString                                     DownloadUrl;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetMatchmakerGameInfoResult
// 0x00B0 (0x00B8 - 0x0008)
struct FAdminGetMatchmakerGameInfoResult : public FPlayFabResultCommon
{
	struct FString                                     BuildVersion;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EndTime;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LobbyId;                                                   // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Mode;                                                      // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Players;                                                   // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERegion                                            Region;                                                    // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P564[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ServerIPV4Address;                                         // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ServerIPV6Address;                                         // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ServerPort;                                                // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7ZN0[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ServerPublicDNSName;                                       // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StartTime;                                                 // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TitleId;                                                   // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetMatchmakerGameModesResult
// 0x0010 (0x0018 - 0x0008)
struct FAdminGetMatchmakerGameModesResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  GameModes;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetPlayedTitleListResult
// 0x0010 (0x0018 - 0x0008)
struct FAdminGetPlayedTitleListResult : public FPlayFabResultCommon
{
	struct FString                                     TitleIds;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetPlayerIdFromAuthTokenResult
// 0x0010 (0x0018 - 0x0008)
struct FAdminGetPlayerIdFromAuthTokenResult : public FPlayFabResultCommon
{
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetPlayerProfileResult
// 0x0008 (0x0010 - 0x0008)
struct FAdminGetPlayerProfileResult : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          PlayerProfile;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetPlayerSegmentsResult
// 0x0010 (0x0018 - 0x0008)
struct FAdminGetPlayerSegmentsResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Segments;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetPlayerSharedSecretsResult
// 0x0010 (0x0018 - 0x0008)
struct FAdminGetPlayerSharedSecretsResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  SharedSecrets;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetPlayersInSegmentResult
// 0x0028 (0x0030 - 0x0008)
struct FAdminGetPlayersInSegmentResult : public FPlayFabResultCommon
{
	struct FString                                     ContinuationToken;                                         // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  PlayerProfiles;                                            // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                ProfilesInSegment;                                         // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O0QW[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.AdminGetPlayerStatisticDefinitionsResult
// 0x0010 (0x0018 - 0x0008)
struct FAdminGetPlayerStatisticDefinitionsResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Statistics;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetPlayerStatisticVersionsResult
// 0x0010 (0x0018 - 0x0008)
struct FAdminGetPlayerStatisticVersionsResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  StatisticVersions;                                         // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetPlayerTagsResult
// 0x0020 (0x0028 - 0x0008)
struct FAdminGetPlayerTagsResult : public FPlayFabResultCommon
{
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Tags;                                                      // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetPolicyResponse
// 0x0020 (0x0028 - 0x0008)
struct FAdminGetPolicyResponse : public FPlayFabResultCommon
{
	struct FString                                     PolicyName;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  Statements;                                                // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetPublisherDataResult
// 0x0008 (0x0010 - 0x0008)
struct FAdminGetPublisherDataResult : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          Data;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetRandomResultTablesResult
// 0x0008 (0x0010 - 0x0008)
struct FAdminGetRandomResultTablesResult : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          Tables;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetServerBuildInfoResult
// 0x0070 (0x0078 - 0x0008)
struct FAdminGetServerBuildInfoResult : public FPlayFabResultCommon
{
	struct FString                                     ActiveRegions;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BuildId;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Comment;                                                   // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxGamesPerHost;                                           // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinFreeGameSlots;                                          // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGameBuildStatus                                   Status;                                                    // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AYC1[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Timestamp;                                                 // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TitleId;                                                   // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetServerBuildUploadURLResult
// 0x0010 (0x0018 - 0x0008)
struct FAdminGetServerBuildUploadURLResult : public FPlayFabResultCommon
{
	struct FString                                     URL;                                                       // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetStoreItemsResult
// 0x0040 (0x0048 - 0x0008)
struct FAdminGetStoreItemsResult : public FPlayFabResultCommon
{
	struct FString                                     CatalogVersion;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          MarketingData;                                             // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPfSourceType                                      Source;                                                    // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4I2R[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UPlayFabJsonObject*>                  Store;                                                     // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     StoreId;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetTaskInstancesResult
// 0x0010 (0x0018 - 0x0008)
struct FAdminGetTaskInstancesResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Summaries;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetTasksResult
// 0x0010 (0x0018 - 0x0008)
struct FAdminGetTasksResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Tasks;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetTitleDataResult
// 0x0008 (0x0010 - 0x0008)
struct FAdminGetTitleDataResult : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          Data;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminLookupUserAccountInfoResult
// 0x0008 (0x0010 - 0x0008)
struct FAdminLookupUserAccountInfoResult : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          UserInfo;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetUserBansResult
// 0x0010 (0x0018 - 0x0008)
struct FAdminGetUserBansResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  BanData;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetUserInventoryResult
// 0x0030 (0x0038 - 0x0008)
struct FAdminGetUserInventoryResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Inventory;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          VirtualCurrency;                                           // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          VirtualCurrencyRechargeTimes;                              // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetUserDataResult
// 0x0020 (0x0028 - 0x0008)
struct FAdminGetUserDataResult : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          Data;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DataVersion;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D7QG[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayFabId;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGrantItemsToUsersResult
// 0x0010 (0x0018 - 0x0008)
struct FAdminGrantItemsToUsersResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  ItemGrantResults;                                          // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminIncrementLimitedEditionItemAvailabilityResult
// 0x0000 (0x0008 - 0x0008)
struct FAdminIncrementLimitedEditionItemAvailabilityResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.AdminIncrementPlayerStatisticVersionResult
// 0x0008 (0x0010 - 0x0008)
struct FAdminIncrementPlayerStatisticVersionResult : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          StatisticVersion;                                          // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminListOpenIdConnectionResponse
// 0x0010 (0x0018 - 0x0008)
struct FAdminListOpenIdConnectionResponse : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Connections;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminListBuildsResult
// 0x0010 (0x0018 - 0x0008)
struct FAdminListBuildsResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Builds;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminListVirtualCurrencyTypesResult
// 0x0010 (0x0018 - 0x0008)
struct FAdminListVirtualCurrencyTypesResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  VirtualCurrencies;                                         // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminModifyMatchmakerGameModesResult
// 0x0000 (0x0008 - 0x0008)
struct FAdminModifyMatchmakerGameModesResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.AdminModifyServerBuildResult
// 0x0080 (0x0088 - 0x0008)
struct FAdminModifyServerBuildResult : public FPlayFabResultCommon
{
	struct FString                                     ActiveRegions;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BuildId;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CommandLineTemplate;                                       // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Comment;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ExecutablePath;                                            // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxGamesPerHost;                                           // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinFreeGameSlots;                                          // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGameBuildStatus                                   Status;                                                    // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0PDU[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Timestamp;                                                 // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TitleId;                                                   // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminRefundPurchaseResponse
// 0x0010 (0x0018 - 0x0008)
struct FAdminRefundPurchaseResponse : public FPlayFabResultCommon
{
	struct FString                                     PurchaseStatus;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminRemovePlayerTagResult
// 0x0000 (0x0008 - 0x0008)
struct FAdminRemovePlayerTagResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.AdminRemoveServerBuildResult
// 0x0000 (0x0008 - 0x0008)
struct FAdminRemoveServerBuildResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.AdminBlankResult
// 0x0000 (0x0008 - 0x0008)
struct FAdminBlankResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.AdminResetCharacterStatisticsResult
// 0x0000 (0x0008 - 0x0008)
struct FAdminResetCharacterStatisticsResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.AdminResetPasswordResult
// 0x0000 (0x0008 - 0x0008)
struct FAdminResetPasswordResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.AdminResetUserStatisticsResult
// 0x0000 (0x0008 - 0x0008)
struct FAdminResetUserStatisticsResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.AdminResolvePurchaseDisputeResponse
// 0x0010 (0x0018 - 0x0008)
struct FAdminResolvePurchaseDisputeResponse : public FPlayFabResultCommon
{
	struct FString                                     PurchaseStatus;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminRevokeAllBansForUserResult
// 0x0010 (0x0018 - 0x0008)
struct FAdminRevokeAllBansForUserResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  BanData;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminRevokeBansResult
// 0x0010 (0x0018 - 0x0008)
struct FAdminRevokeBansResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  BanData;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminRevokeInventoryResult
// 0x0000 (0x0008 - 0x0008)
struct FAdminRevokeInventoryResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.AdminRevokeInventoryItemsResult
// 0x0010 (0x0018 - 0x0008)
struct FAdminRevokeInventoryItemsResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Errors;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminRunTaskResult
// 0x0010 (0x0018 - 0x0008)
struct FAdminRunTaskResult : public FPlayFabResultCommon
{
	struct FString                                     TaskInstanceId;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminSendAccountRecoveryEmailResult
// 0x0000 (0x0008 - 0x0008)
struct FAdminSendAccountRecoveryEmailResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.AdminSetPlayerSecretResult
// 0x0000 (0x0008 - 0x0008)
struct FAdminSetPlayerSecretResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.AdminSetPublishedRevisionResult
// 0x0000 (0x0008 - 0x0008)
struct FAdminSetPublishedRevisionResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.AdminSetPublisherDataResult
// 0x0000 (0x0008 - 0x0008)
struct FAdminSetPublisherDataResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.AdminSetTitleDataResult
// 0x0000 (0x0008 - 0x0008)
struct FAdminSetTitleDataResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.AdminSetupPushNotificationResult
// 0x0010 (0x0018 - 0x0008)
struct FAdminSetupPushNotificationResult : public FPlayFabResultCommon
{
	struct FString                                     ARN;                                                       // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminModifyUserVirtualCurrencyResult
// 0x0028 (0x0030 - 0x0008)
struct FAdminModifyUserVirtualCurrencyResult : public FPlayFabResultCommon
{
	int                                                Balance;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BalanceChange;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VirtualCurrency;                                           // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminUpdateBansResult
// 0x0010 (0x0018 - 0x0008)
struct FAdminUpdateBansResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  BanData;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminUpdateCatalogItemsResult
// 0x0000 (0x0008 - 0x0008)
struct FAdminUpdateCatalogItemsResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.AdminUpdateCloudScriptResult
// 0x0008 (0x0010 - 0x0008)
struct FAdminUpdateCloudScriptResult : public FPlayFabResultCommon
{
	int                                                Revision;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Version;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminUpdatePlayerSharedSecretResult
// 0x0000 (0x0008 - 0x0008)
struct FAdminUpdatePlayerSharedSecretResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.AdminUpdatePlayerStatisticDefinitionResult
// 0x0008 (0x0010 - 0x0008)
struct FAdminUpdatePlayerStatisticDefinitionResult : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          Statistic;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminUpdatePolicyResponse
// 0x0020 (0x0028 - 0x0008)
struct FAdminUpdatePolicyResponse : public FPlayFabResultCommon
{
	struct FString                                     PolicyName;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  Statements;                                                // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminUpdateRandomResultTablesResult
// 0x0000 (0x0008 - 0x0008)
struct FAdminUpdateRandomResultTablesResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.AdminUpdateStoreItemsResult
// 0x0000 (0x0008 - 0x0008)
struct FAdminUpdateStoreItemsResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.AdminEmptyResponse
// 0x0000 (0x0008 - 0x0008)
struct FAdminEmptyResponse : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.AdminUpdateUserDataResult
// 0x0008 (0x0010 - 0x0008)
struct FAdminUpdateUserDataResult : public FPlayFabResultCommon
{
	int                                                DataVersion;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B7Q4[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.AdminUpdateUserTitleDisplayNameResult
// 0x0010 (0x0018 - 0x0008)
struct FAdminUpdateUserTitleDisplayNameResult : public FPlayFabResultCommon
{
	struct FString                                     DisplayName;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminDeleteContentRequest
// 0x0010 (0x0018 - 0x0008)
struct FAdminDeleteContentRequest : public FPlayFabRequestCommon
{
	struct FString                                     Key;                                                       // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminDeleteMasterPlayerAccountRequest
// 0x0020 (0x0028 - 0x0008)
struct FAdminDeleteMasterPlayerAccountRequest : public FPlayFabRequestCommon
{
	struct FString                                     MetaData;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminDeleteOpenIdConnectionRequest
// 0x0010 (0x0018 - 0x0008)
struct FAdminDeleteOpenIdConnectionRequest : public FPlayFabRequestCommon
{
	struct FString                                     ConnectionId;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminDeletePlayerRequest
// 0x0010 (0x0018 - 0x0008)
struct FAdminDeletePlayerRequest : public FPlayFabRequestCommon
{
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminDeletePlayerSharedSecretRequest
// 0x0010 (0x0018 - 0x0008)
struct FAdminDeletePlayerSharedSecretRequest : public FPlayFabRequestCommon
{
	struct FString                                     SecretKey;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminDeleteStoreRequest
// 0x0020 (0x0028 - 0x0008)
struct FAdminDeleteStoreRequest : public FPlayFabRequestCommon
{
	struct FString                                     CatalogVersion;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StoreId;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminDeleteTaskRequest
// 0x0008 (0x0010 - 0x0008)
struct FAdminDeleteTaskRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Identifier;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminDeleteTitleRequest
// 0x0000 (0x0008 - 0x0008)
struct FAdminDeleteTitleRequest : public FPlayFabRequestCommon
{

};
// ScriptStruct PlayFab.AdminExportMasterPlayerDataRequest
// 0x0010 (0x0018 - 0x0008)
struct FAdminExportMasterPlayerDataRequest : public FPlayFabRequestCommon
{
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetAllSegmentsRequest
// 0x0000 (0x0008 - 0x0008)
struct FAdminGetAllSegmentsRequest : public FPlayFabRequestCommon
{

};
// ScriptStruct PlayFab.AdminGetCatalogItemsRequest
// 0x0010 (0x0018 - 0x0008)
struct FAdminGetCatalogItemsRequest : public FPlayFabRequestCommon
{
	struct FString                                     CatalogVersion;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetCloudScriptRevisionRequest
// 0x0008 (0x0010 - 0x0008)
struct FAdminGetCloudScriptRevisionRequest : public FPlayFabRequestCommon
{
	int                                                Revision;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Version;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetTaskInstanceRequest
// 0x0010 (0x0018 - 0x0008)
struct FAdminGetTaskInstanceRequest : public FPlayFabRequestCommon
{
	struct FString                                     TaskInstanceId;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetCloudScriptVersionsRequest
// 0x0000 (0x0008 - 0x0008)
struct FAdminGetCloudScriptVersionsRequest : public FPlayFabRequestCommon
{

};
// ScriptStruct PlayFab.AdminGetContentListRequest
// 0x0010 (0x0018 - 0x0008)
struct FAdminGetContentListRequest : public FPlayFabRequestCommon
{
	struct FString                                     Prefix;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetContentUploadUrlRequest
// 0x0020 (0x0028 - 0x0008)
struct FAdminGetContentUploadUrlRequest : public FPlayFabRequestCommon
{
	struct FString                                     ContentType;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetDataReportRequest
// 0x0020 (0x0028 - 0x0008)
struct FAdminGetDataReportRequest : public FPlayFabRequestCommon
{
	int                                                Day;                                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Month;                                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReportName;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Year;                                                      // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZMDE[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.AdminGetMatchmakerGameInfoRequest
// 0x0010 (0x0018 - 0x0008)
struct FAdminGetMatchmakerGameInfoRequest : public FPlayFabRequestCommon
{
	struct FString                                     LobbyId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetMatchmakerGameModesRequest
// 0x0010 (0x0018 - 0x0008)
struct FAdminGetMatchmakerGameModesRequest : public FPlayFabRequestCommon
{
	struct FString                                     BuildVersion;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetPlayedTitleListRequest
// 0x0010 (0x0018 - 0x0008)
struct FAdminGetPlayedTitleListRequest : public FPlayFabRequestCommon
{
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetPlayerIdFromAuthTokenRequest
// 0x0018 (0x0020 - 0x0008)
struct FAdminGetPlayerIdFromAuthTokenRequest : public FPlayFabRequestCommon
{
	struct FString                                     Token;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAuthTokenType                                     TokenType;                                                 // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8J5Q[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.AdminGetPlayerProfileRequest
// 0x0018 (0x0020 - 0x0008)
struct FAdminGetPlayerProfileRequest : public FPlayFabRequestCommon
{
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          ProfileConstraints;                                        // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetPlayersSegmentsRequest
// 0x0010 (0x0018 - 0x0008)
struct FAdminGetPlayersSegmentsRequest : public FPlayFabRequestCommon
{
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetPlayerSharedSecretsRequest
// 0x0000 (0x0008 - 0x0008)
struct FAdminGetPlayerSharedSecretsRequest : public FPlayFabRequestCommon
{

};
// ScriptStruct PlayFab.AdminGetPlayersInSegmentRequest
// 0x0028 (0x0030 - 0x0008)
struct FAdminGetPlayersInSegmentRequest : public FPlayFabRequestCommon
{
	struct FString                                     ContinuationToken;                                         // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxBatchSize;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SecondsToLive;                                             // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SegmentId;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetPlayerStatisticDefinitionsRequest
// 0x0000 (0x0008 - 0x0008)
struct FAdminGetPlayerStatisticDefinitionsRequest : public FPlayFabRequestCommon
{

};
// ScriptStruct PlayFab.AdminGetPlayerStatisticVersionsRequest
// 0x0010 (0x0018 - 0x0008)
struct FAdminGetPlayerStatisticVersionsRequest : public FPlayFabRequestCommon
{
	struct FString                                     StatisticName;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetPlayerTagsRequest
// 0x0020 (0x0028 - 0x0008)
struct FAdminGetPlayerTagsRequest : public FPlayFabRequestCommon
{
	struct FString                                     Namespace;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetPolicyRequest
// 0x0010 (0x0018 - 0x0008)
struct FAdminGetPolicyRequest : public FPlayFabRequestCommon
{
	struct FString                                     PolicyName;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetPublisherDataRequest
// 0x0010 (0x0018 - 0x0008)
struct FAdminGetPublisherDataRequest : public FPlayFabRequestCommon
{
	struct FString                                     Keys;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetRandomResultTablesRequest
// 0x0010 (0x0018 - 0x0008)
struct FAdminGetRandomResultTablesRequest : public FPlayFabRequestCommon
{
	struct FString                                     CatalogVersion;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetServerBuildInfoRequest
// 0x0010 (0x0018 - 0x0008)
struct FAdminGetServerBuildInfoRequest : public FPlayFabRequestCommon
{
	struct FString                                     BuildId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetServerBuildUploadURLRequest
// 0x0010 (0x0018 - 0x0008)
struct FAdminGetServerBuildUploadURLRequest : public FPlayFabRequestCommon
{
	struct FString                                     BuildId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetStoreItemsRequest
// 0x0020 (0x0028 - 0x0008)
struct FAdminGetStoreItemsRequest : public FPlayFabRequestCommon
{
	struct FString                                     CatalogVersion;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StoreId;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetTaskInstancesRequest
// 0x0030 (0x0038 - 0x0008)
struct FAdminGetTaskInstancesRequest : public FPlayFabRequestCommon
{
	struct FString                                     StartedAtRangeFrom;                                        // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StartedAtRangeTo;                                          // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETaskInstanceStatus                                StatusFilter;                                              // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W8K7[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPlayFabJsonObject*                          TaskIdentifier;                                            // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetTasksRequest
// 0x0008 (0x0010 - 0x0008)
struct FAdminGetTasksRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Identifier;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetTitleDataRequest
// 0x0010 (0x0018 - 0x0008)
struct FAdminGetTitleDataRequest : public FPlayFabRequestCommon
{
	struct FString                                     Keys;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminLookupUserAccountInfoRequest
// 0x0040 (0x0048 - 0x0008)
struct FAdminLookupUserAccountInfoRequest : public FPlayFabRequestCommon
{
	struct FString                                     Email;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TitleDisplayName;                                          // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     username;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetUserBansRequest
// 0x0010 (0x0018 - 0x0008)
struct FAdminGetUserBansRequest : public FPlayFabRequestCommon
{
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetUserInventoryRequest
// 0x0010 (0x0018 - 0x0008)
struct FAdminGetUserInventoryRequest : public FPlayFabRequestCommon
{
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGetUserDataRequest
// 0x0028 (0x0030 - 0x0008)
struct FAdminGetUserDataRequest : public FPlayFabRequestCommon
{
	int                                                IfChangedFromDataVersion;                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ODEQ[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Keys;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminGrantItemsToUsersRequest
// 0x0020 (0x0028 - 0x0008)
struct FAdminGrantItemsToUsersRequest : public FPlayFabRequestCommon
{
	struct FString                                     CatalogVersion;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  ItemGrants;                                                // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.PlayFabError
// 0x0038
struct FPlayFabError
{
	bool                                               HasError;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N67V[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ErrorCode;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorName;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     errorMessage;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorDetails;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.PlayFabBaseModel
// 0x0040
struct FPlayFabBaseModel
{
	struct FPlayFabError                               responseError;                                             // 0x0000(0x0038) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          responseData;                                              // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminSetPublishedRevisionRequest
// 0x0008 (0x0010 - 0x0008)
struct FAdminSetPublishedRevisionRequest : public FPlayFabRequestCommon
{
	int                                                Revision;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Version;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminSetPublisherDataRequest
// 0x0020 (0x0028 - 0x0008)
struct FAdminSetPublisherDataRequest : public FPlayFabRequestCommon
{
	struct FString                                     Key;                                                       // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminSetTitleDataRequest
// 0x0020 (0x0028 - 0x0008)
struct FAdminSetTitleDataRequest : public FPlayFabRequestCommon
{
	struct FString                                     Key;                                                       // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminSetupPushNotificationRequest
// 0x0038 (0x0040 - 0x0008)
struct FAdminSetupPushNotificationRequest : public FPlayFabRequestCommon
{
	struct FString                                     Credential;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverwriteOldARN;                                           // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPushSetupPlatform                                 Platform;                                                  // 0x0039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LMRP[0x6];                                     // 0x003A(0x0006) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.AdminSubtractUserVirtualCurrencyRequest
// 0x0028 (0x0030 - 0x0008)
struct FAdminSubtractUserVirtualCurrencyRequest : public FPlayFabRequestCommon
{
	int                                                Amount;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8NLS[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayFabId;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VirtualCurrency;                                           // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminUpdateBansRequest
// 0x0010 (0x0018 - 0x0008)
struct FAdminUpdateBansRequest : public FPlayFabRequestCommon
{
	TArray<class UPlayFabJsonObject*>                  Bans;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminUpdateCatalogItemsRequest
// 0x0028 (0x0030 - 0x0008)
struct FAdminUpdateCatalogItemsRequest : public FPlayFabRequestCommon
{
	TArray<class UPlayFabJsonObject*>                  Catalog;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     CatalogVersion;                                            // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SetAsDefaultCatalog;                                       // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O7XP[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.AdminUpdateCloudScriptRequest
// 0x0028 (0x0030 - 0x0008)
struct FAdminUpdateCloudScriptRequest : public FPlayFabRequestCommon
{
	struct FString                                     DeveloperPlayFabId;                                        // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  Files;                                                     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               Publish;                                                   // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UIRS[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.AdminUpdateOpenIdConnectionRequest
// 0x0048 (0x0050 - 0x0008)
struct FAdminUpdateOpenIdConnectionRequest : public FPlayFabRequestCommon
{
	struct FString                                     ClientId;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientSecret;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ConnectionId;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     IssuerDiscoveryUrl;                                        // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          IssuerInformation;                                         // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminUpdatePlayerSharedSecretRequest
// 0x0028 (0x0030 - 0x0008)
struct FAdminUpdatePlayerSharedSecretRequest : public FPlayFabRequestCommon
{
	bool                                               Disabled;                                                  // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2ROL[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     FriendlyName;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SecretKey;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminUpdatePlayerStatisticDefinitionRequest
// 0x0020 (0x0028 - 0x0008)
struct FAdminUpdatePlayerStatisticDefinitionRequest : public FPlayFabRequestCommon
{
	EStatisticAggregationMethod                        AggregationMethod;                                         // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KQHB[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     StatisticName;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EStatisticResetIntervalOption                      VersionChangeInterval;                                     // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4OBN[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.AdminUpdatePolicyRequest
// 0x0028 (0x0030 - 0x0008)
struct FAdminUpdatePolicyRequest : public FPlayFabRequestCommon
{
	bool                                               OverwritePolicy;                                           // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HVCE[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PolicyName;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  Statements;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminUpdateRandomResultTablesRequest
// 0x0020 (0x0028 - 0x0008)
struct FAdminUpdateRandomResultTablesRequest : public FPlayFabRequestCommon
{
	struct FString                                     CatalogVersion;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  Tables;                                                    // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminUpdateStoreItemsRequest
// 0x0038 (0x0040 - 0x0008)
struct FAdminUpdateStoreItemsRequest : public FPlayFabRequestCommon
{
	struct FString                                     CatalogVersion;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          MarketingData;                                             // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  Store;                                                     // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     StoreId;                                                   // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminUpdateTaskRequest
// 0x0050 (0x0058 - 0x0008)
struct FAdminUpdateTaskRequest : public FPlayFabRequestCommon
{
	struct FString                                     Description;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          Identifier;                                                // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsActive;                                                  // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_13M7[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Name;                                                      // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          Parameter;                                                 // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Schedule;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EScheduledTaskType                                 Type;                                                      // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IN2H[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.AdminUpdateUserInternalDataRequest
// 0x0028 (0x0030 - 0x0008)
struct FAdminUpdateUserInternalDataRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Data;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     KeysToRemove;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminUpdateUserDataRequest
// 0x0030 (0x0038 - 0x0008)
struct FAdminUpdateUserDataRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Data;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     KeysToRemove;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EUserDataPermission                                Permission;                                                // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J0BA[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayFabId;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminUpdateUserTitleDisplayNameRequest
// 0x0020 (0x0028 - 0x0008)
struct FAdminUpdateUserTitleDisplayNameRequest : public FPlayFabRequestCommon
{
	struct FString                                     DisplayName;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerWriteTitleEventRequest
// 0x0028 (0x0030 - 0x0008)
struct FServerWriteTitleEventRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Body;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EventName;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Timestamp;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerWriteServerPlayerEventRequest
// 0x0038 (0x0040 - 0x0008)
struct FServerWriteServerPlayerEventRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Body;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EventName;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Timestamp;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerWriteServerCharacterEventRequest
// 0x0048 (0x0050 - 0x0008)
struct FServerWriteServerCharacterEventRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Body;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharacterId;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EventName;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Timestamp;                                                 // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerUpdateUserInventoryItemDataRequest
// 0x0048 (0x0050 - 0x0008)
struct FServerUpdateUserInventoryItemDataRequest : public FPlayFabRequestCommon
{
	struct FString                                     CharacterId;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          Data;                                                      // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemInstanceId;                                            // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     KeysToRemove;                                              // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerUpdateUserInternalDataRequest
// 0x0028 (0x0030 - 0x0008)
struct FServerUpdateUserInternalDataRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Data;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     KeysToRemove;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerUpdateUserDataRequest
// 0x0030 (0x0038 - 0x0008)
struct FServerUpdateUserDataRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Data;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     KeysToRemove;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EUserDataPermission                                Permission;                                                // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FNT8[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayFabId;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerUpdateSharedGroupDataRequest
// 0x0030 (0x0038 - 0x0008)
struct FServerUpdateSharedGroupDataRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Data;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     KeysToRemove;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EUserDataPermission                                Permission;                                                // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6J1K[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SharedGroupId;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerUpdatePlayerStatisticsRequest
// 0x0028 (0x0030 - 0x0008)
struct FServerUpdatePlayerStatisticsRequest : public FPlayFabRequestCommon
{
	bool                                               ForceUpdate;                                               // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D9X9[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayFabId;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  Statistics;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerUpdateCharacterStatisticsRequest
// 0x0028 (0x0030 - 0x0008)
struct FServerUpdateCharacterStatisticsRequest : public FPlayFabRequestCommon
{
	struct FString                                     CharacterId;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          CharacterStatistics;                                       // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerUpdateCharacterDataRequest
// 0x0040 (0x0048 - 0x0008)
struct FServerUpdateCharacterDataRequest : public FPlayFabRequestCommon
{
	struct FString                                     CharacterId;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          Data;                                                      // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     KeysToRemove;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EUserDataPermission                                Permission;                                                // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FT27[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayFabId;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerUpdateBansRequest
// 0x0010 (0x0018 - 0x0008)
struct FServerUpdateBansRequest : public FPlayFabRequestCommon
{
	TArray<class UPlayFabJsonObject*>                  Bans;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerUpdateAvatarUrlRequest
// 0x0020 (0x0028 - 0x0008)
struct FServerUpdateAvatarUrlRequest : public FPlayFabRequestCommon
{
	struct FString                                     ImageUrl;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerUnlockContainerItemRequest
// 0x0040 (0x0048 - 0x0008)
struct FServerUnlockContainerItemRequest : public FPlayFabRequestCommon
{
	struct FString                                     CatalogVersion;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharacterId;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ContainerItemId;                                           // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerUnlockContainerInstanceRequest
// 0x0050 (0x0058 - 0x0008)
struct FServerUnlockContainerInstanceRequest : public FPlayFabRequestCommon
{
	struct FString                                     CatalogVersion;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharacterId;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ContainerItemInstanceId;                                   // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     KeyItemInstanceId;                                         // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerUnlinkXboxAccountRequest
// 0x0020 (0x0028 - 0x0008)
struct FServerUnlinkXboxAccountRequest : public FPlayFabRequestCommon
{
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     XboxToken;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerUnlinkServerCustomIdRequest
// 0x0020 (0x0028 - 0x0008)
struct FServerUnlinkServerCustomIdRequest : public FPlayFabRequestCommon
{
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ServerCustomId;                                            // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerUnlinkPSNAccountRequest
// 0x0010 (0x0018 - 0x0008)
struct FServerUnlinkPSNAccountRequest : public FPlayFabRequestCommon
{
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerSubtractUserVirtualCurrencyRequest
// 0x0028 (0x0030 - 0x0008)
struct FServerSubtractUserVirtualCurrencyRequest : public FPlayFabRequestCommon
{
	int                                                Amount;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KJIE[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayFabId;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VirtualCurrency;                                           // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerSubtractCharacterVirtualCurrencyRequest
// 0x0038 (0x0040 - 0x0008)
struct FServerSubtractCharacterVirtualCurrencyRequest : public FPlayFabRequestCommon
{
	int                                                Amount;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9HR7[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CharacterId;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VirtualCurrency;                                           // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerSetTitleDataRequest
// 0x0020 (0x0028 - 0x0008)
struct FServerSetTitleDataRequest : public FPlayFabRequestCommon
{
	struct FString                                     Key;                                                       // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerSetPublisherDataRequest
// 0x0020 (0x0028 - 0x0008)
struct FServerSetPublisherDataRequest : public FPlayFabRequestCommon
{
	struct FString                                     Key;                                                       // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerSetPlayerSecretRequest
// 0x0020 (0x0028 - 0x0008)
struct FServerSetPlayerSecretRequest : public FPlayFabRequestCommon
{
	struct FString                                     PlayerSecret;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerSetGameServerInstanceTagsRequest
// 0x0018 (0x0020 - 0x0008)
struct FServerSetGameServerInstanceTagsRequest : public FPlayFabRequestCommon
{
	struct FString                                     LobbyId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          Tags;                                                      // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerSetGameServerInstanceStateRequest
// 0x0018 (0x0020 - 0x0008)
struct FServerSetGameServerInstanceStateRequest : public FPlayFabRequestCommon
{
	struct FString                                     LobbyId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGameInstanceState                                 State;                                                     // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T0CB[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.ServerSetGameServerInstanceDataRequest
// 0x0020 (0x0028 - 0x0008)
struct FServerSetGameServerInstanceDataRequest : public FPlayFabRequestCommon
{
	struct FString                                     GameServerData;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LobbyId;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerSetFriendTagsRequest
// 0x0030 (0x0038 - 0x0008)
struct FServerSetFriendTagsRequest : public FPlayFabRequestCommon
{
	struct FString                                     FriendPlayFabId;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Tags;                                                      // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerSendPushNotificationFromTemplateRequest
// 0x0020 (0x0028 - 0x0008)
struct FServerSendPushNotificationFromTemplateRequest : public FPlayFabRequestCommon
{
	struct FString                                     PushNotificationTemplateId;                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Recipient;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerSendPushNotificationRequest
// 0x0058 (0x0060 - 0x0008)
struct FServerSendPushNotificationRequest : public FPlayFabRequestCommon
{
	TArray<class UPlayFabJsonObject*>                  AdvancedPlatformDelivery;                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     Message;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          Package;                                                   // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Recipient;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Subject;                                                   // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TargetPlatforms;                                           // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerSendEmailFromTemplateRequest
// 0x0020 (0x0028 - 0x0008)
struct FServerSendEmailFromTemplateRequest : public FPlayFabRequestCommon
{
	struct FString                                     EmailTemplateId;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerSendCustomAccountRecoveryEmailRequest
// 0x0030 (0x0038 - 0x0008)
struct FServerSendCustomAccountRecoveryEmailRequest : public FPlayFabRequestCommon
{
	struct FString                                     Email;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EmailTemplateId;                                           // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     username;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerSavePushNotificationTemplateRequest
// 0x0048 (0x0050 - 0x0008)
struct FServerSavePushNotificationTemplateRequest : public FPlayFabRequestCommon
{
	struct FString                                     AndroidPayload;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ID;                                                        // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     IOSPayload;                                                // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          LocalizedPushNotificationTemplates;                        // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerRevokeInventoryItemsRequest
// 0x0010 (0x0018 - 0x0008)
struct FServerRevokeInventoryItemsRequest : public FPlayFabRequestCommon
{
	TArray<class UPlayFabJsonObject*>                  Items;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerRevokeInventoryItemRequest
// 0x0030 (0x0038 - 0x0008)
struct FServerRevokeInventoryItemRequest : public FPlayFabRequestCommon
{
	struct FString                                     CharacterId;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemInstanceId;                                            // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerRevokeBansRequest
// 0x0010 (0x0018 - 0x0008)
struct FServerRevokeBansRequest : public FPlayFabRequestCommon
{
	struct FString                                     BanIds;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerRevokeAllBansForUserRequest
// 0x0010 (0x0018 - 0x0008)
struct FServerRevokeAllBansForUserRequest : public FPlayFabRequestCommon
{
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerReportPlayerServerRequest
// 0x0030 (0x0038 - 0x0008)
struct FServerReportPlayerServerRequest : public FPlayFabRequestCommon
{
	struct FString                                     Comment;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReporteeId;                                                // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReporterId;                                                // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerRemoveSharedGroupMembersRequest
// 0x0020 (0x0028 - 0x0008)
struct FServerRemoveSharedGroupMembersRequest : public FPlayFabRequestCommon
{
	struct FString                                     PlayFabIds;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SharedGroupId;                                             // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerRemovePlayerTagRequest
// 0x0020 (0x0028 - 0x0008)
struct FServerRemovePlayerTagRequest : public FPlayFabRequestCommon
{
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TagName;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerRemoveGenericIDRequest
// 0x0018 (0x0020 - 0x0008)
struct FServerRemoveGenericIDRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          GenericId;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerRemoveFriendRequest
// 0x0020 (0x0028 - 0x0008)
struct FServerRemoveFriendRequest : public FPlayFabRequestCommon
{
	struct FString                                     FriendPlayFabId;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerRegisterGameRequest
// 0x0080 (0x0088 - 0x0008)
struct FServerRegisterGameRequest : public FPlayFabRequestCommon
{
	struct FString                                     Build;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameMode;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LobbyId;                                                   // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERegion                                            Region;                                                    // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1954[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ServerIPV4Address;                                         // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ServerIPV6Address;                                         // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ServerPort;                                                // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ServerPublicDNSName;                                       // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          Tags;                                                      // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerRefreshGameServerInstanceHeartbeatRequest
// 0x0010 (0x0018 - 0x0008)
struct FServerRefreshGameServerInstanceHeartbeatRequest : public FPlayFabRequestCommon
{
	struct FString                                     LobbyId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerRedeemMatchmakerTicketRequest
// 0x0020 (0x0028 - 0x0008)
struct FServerRedeemMatchmakerTicketRequest : public FPlayFabRequestCommon
{
	struct FString                                     LobbyId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Ticket;                                                    // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerRedeemCouponRequest
// 0x0040 (0x0048 - 0x0008)
struct FServerRedeemCouponRequest : public FPlayFabRequestCommon
{
	struct FString                                     CatalogVersion;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharacterId;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CouponCode;                                                // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerNotifyMatchmakerPlayerLeftRequest
// 0x0020 (0x0028 - 0x0008)
struct FServerNotifyMatchmakerPlayerLeftRequest : public FPlayFabRequestCommon
{
	struct FString                                     LobbyId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerMoveItemToUserFromCharacterRequest
// 0x0030 (0x0038 - 0x0008)
struct FServerMoveItemToUserFromCharacterRequest : public FPlayFabRequestCommon
{
	struct FString                                     CharacterId;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemInstanceId;                                            // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerMoveItemToCharacterFromUserRequest
// 0x0030 (0x0038 - 0x0008)
struct FServerMoveItemToCharacterFromUserRequest : public FPlayFabRequestCommon
{
	struct FString                                     CharacterId;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemInstanceId;                                            // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerMoveItemToCharacterFromCharacterRequest
// 0x0040 (0x0048 - 0x0008)
struct FServerMoveItemToCharacterFromCharacterRequest : public FPlayFabRequestCommon
{
	struct FString                                     GivingCharacterId;                                         // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemInstanceId;                                            // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReceivingCharacterId;                                      // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerModifyItemUsesRequest
// 0x0028 (0x0030 - 0x0008)
struct FServerModifyItemUsesRequest : public FPlayFabRequestCommon
{
	struct FString                                     ItemInstanceId;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UsesToAdd;                                                 // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YA6S[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.ServerLoginWithXboxIdRequest
// 0x0030 (0x0038 - 0x0008)
struct FServerLoginWithXboxIdRequest : public FPlayFabRequestCommon
{
	bool                                               CreateAccount;                                             // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DITM[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPlayFabJsonObject*                          InfoRequestParameters;                                     // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Sandbox;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     XboxId;                                                    // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerLoginWithXboxRequest
// 0x0020 (0x0028 - 0x0008)
struct FServerLoginWithXboxRequest : public FPlayFabRequestCommon
{
	bool                                               CreateAccount;                                             // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8ASS[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPlayFabJsonObject*                          InfoRequestParameters;                                     // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     XboxToken;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerLoginWithServerCustomIdRequest
// 0x0030 (0x0038 - 0x0008)
struct FServerLoginWithServerCustomIdRequest : public FPlayFabRequestCommon
{
	bool                                               CreateAccount;                                             // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9ESO[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPlayFabJsonObject*                          InfoRequestParameters;                                     // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayerSecret;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ServerCustomId;                                            // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerLinkXboxAccountRequest
// 0x0028 (0x0030 - 0x0008)
struct FServerLinkXboxAccountRequest : public FPlayFabRequestCommon
{
	bool                                               ForceLink;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EGUW[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayFabId;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     XboxToken;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerLinkServerCustomIdRequest
// 0x0028 (0x0030 - 0x0008)
struct FServerLinkServerCustomIdRequest : public FPlayFabRequestCommon
{
	bool                                               ForceLink;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9SVU[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayFabId;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ServerCustomId;                                            // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerLinkPSNAccountRequest
// 0x0038 (0x0040 - 0x0008)
struct FServerLinkPSNAccountRequest : public FPlayFabRequestCommon
{
	struct FString                                     AuthCode;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ForceLink;                                                 // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PA90[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                IssuerId;                                                  // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RedirectUri;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGrantItemsToUsersRequest
// 0x0020 (0x0028 - 0x0008)
struct FServerGrantItemsToUsersRequest : public FPlayFabRequestCommon
{
	struct FString                                     CatalogVersion;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  ItemGrants;                                                // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGrantItemsToUserRequest
// 0x0040 (0x0048 - 0x0008)
struct FServerGrantItemsToUserRequest : public FPlayFabRequestCommon
{
	struct FString                                     Annotation;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CatalogVersion;                                            // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemIds;                                                   // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGrantItemsToCharacterRequest
// 0x0050 (0x0058 - 0x0008)
struct FServerGrantItemsToCharacterRequest : public FPlayFabRequestCommon
{
	struct FString                                     Annotation;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CatalogVersion;                                            // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharacterId;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemIds;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGrantCharacterToUserRequest
// 0x0030 (0x0038 - 0x0008)
struct FServerGrantCharacterToUserRequest : public FPlayFabRequestCommon
{
	struct FString                                     CharacterName;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharacterType;                                             // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetUserInventoryRequest
// 0x0010 (0x0018 - 0x0008)
struct FServerGetUserInventoryRequest : public FPlayFabRequestCommon
{
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetUserDataRequest
// 0x0028 (0x0030 - 0x0008)
struct FServerGetUserDataRequest : public FPlayFabRequestCommon
{
	int                                                IfChangedFromDataVersion;                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3NJB[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Keys;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetUserBansRequest
// 0x0010 (0x0018 - 0x0008)
struct FServerGetUserBansRequest : public FPlayFabRequestCommon
{
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetUserAccountInfoRequest
// 0x0010 (0x0018 - 0x0008)
struct FServerGetUserAccountInfoRequest : public FPlayFabRequestCommon
{
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetTitleNewsRequest
// 0x0008 (0x0010 - 0x0008)
struct FServerGetTitleNewsRequest : public FPlayFabRequestCommon
{
	int                                                Count;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6ULC[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.ServerGetTitleDataRequest
// 0x0010 (0x0018 - 0x0008)
struct FServerGetTitleDataRequest : public FPlayFabRequestCommon
{
	struct FString                                     Keys;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetTimeRequest
// 0x0000 (0x0008 - 0x0008)
struct FServerGetTimeRequest : public FPlayFabRequestCommon
{

};
// ScriptStruct PlayFab.ServerGetStoreItemsServerRequest
// 0x0030 (0x0038 - 0x0008)
struct FServerGetStoreItemsServerRequest : public FPlayFabRequestCommon
{
	struct FString                                     CatalogVersion;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StoreId;                                                   // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetSharedGroupDataRequest
// 0x0028 (0x0030 - 0x0008)
struct FServerGetSharedGroupDataRequest : public FPlayFabRequestCommon
{
	bool                                               GetMembers;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PWOR[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Keys;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SharedGroupId;                                             // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetServerCustomIDsFromPlayFabIDsRequest
// 0x0010 (0x0018 - 0x0008)
struct FServerGetServerCustomIDsFromPlayFabIDsRequest : public FPlayFabRequestCommon
{
	struct FString                                     PlayFabIds;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetRandomResultTablesRequest
// 0x0020 (0x0028 - 0x0008)
struct FServerGetRandomResultTablesRequest : public FPlayFabRequestCommon
{
	struct FString                                     CatalogVersion;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TableIDs;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetPublisherDataRequest
// 0x0010 (0x0018 - 0x0008)
struct FServerGetPublisherDataRequest : public FPlayFabRequestCommon
{
	struct FString                                     Keys;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetPlayFabIDsFromXboxLiveIDsRequest
// 0x0020 (0x0028 - 0x0008)
struct FServerGetPlayFabIDsFromXboxLiveIDsRequest : public FPlayFabRequestCommon
{
	struct FString                                     Sandbox;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     XboxLiveAccountIDs;                                        // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetPlayFabIDsFromSteamIDsRequest
// 0x0010 (0x0018 - 0x0008)
struct FServerGetPlayFabIDsFromSteamIDsRequest : public FPlayFabRequestCommon
{
	struct FString                                     SteamStringIDs;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetPlayFabIDsFromPSNAccountIDsRequest
// 0x0018 (0x0020 - 0x0008)
struct FServerGetPlayFabIDsFromPSNAccountIDsRequest : public FPlayFabRequestCommon
{
	int                                                IssuerId;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JU86[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PSNAccountIDs;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest
// 0x0010 (0x0018 - 0x0008)
struct FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest : public FPlayFabRequestCommon
{
	struct FString                                     NintendoSwitchDeviceIds;                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetPlayFabIDsFromGenericIDsRequest
// 0x0010 (0x0018 - 0x0008)
struct FServerGetPlayFabIDsFromGenericIDsRequest : public FPlayFabRequestCommon
{
	TArray<class UPlayFabJsonObject*>                  GenericIDs;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest
// 0x0010 (0x0018 - 0x0008)
struct FServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest : public FPlayFabRequestCommon
{
	struct FString                                     FacebookInstantGamesIds;                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetPlayFabIDsFromFacebookIDsRequest
// 0x0010 (0x0018 - 0x0008)
struct FServerGetPlayFabIDsFromFacebookIDsRequest : public FPlayFabRequestCommon
{
	struct FString                                     FacebookIDs;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetPlayerTagsRequest
// 0x0020 (0x0028 - 0x0008)
struct FServerGetPlayerTagsRequest : public FPlayFabRequestCommon
{
	struct FString                                     Namespace;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.GroupsListGroupMembersResponse
// 0x0010 (0x0018 - 0x0008)
struct FGroupsListGroupMembersResponse : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Members;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.GroupsListGroupInvitationsResponse
// 0x0010 (0x0018 - 0x0008)
struct FGroupsListGroupInvitationsResponse : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Invitations;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.GroupsListGroupBlocksResponse
// 0x0010 (0x0018 - 0x0008)
struct FGroupsListGroupBlocksResponse : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  BlockedEntities;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.GroupsListGroupApplicationsResponse
// 0x0010 (0x0018 - 0x0008)
struct FGroupsListGroupApplicationsResponse : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Applications;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.GroupsIsMemberResponse
// 0x0008 (0x0010 - 0x0008)
struct FGroupsIsMemberResponse : public FPlayFabResultCommon
{
	bool                                               IsMember;                                                  // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8APO[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.GroupsInviteToGroupResponse
// 0x0038 (0x0040 - 0x0008)
struct FGroupsInviteToGroupResponse : public FPlayFabResultCommon
{
	struct FString                                     Expires;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          Group;                                                     // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          InvitedByEntity;                                           // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          InvitedEntity;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RoleId;                                                    // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.GroupsGetGroupResponse
// 0x0058 (0x0060 - 0x0008)
struct FGroupsGetGroupResponse : public FPlayFabResultCommon
{
	struct FString                                     AdminRoleId;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Created;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          Group;                                                     // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GroupName;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MemberRoleId;                                              // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ProfileVersion;                                            // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ETZO[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPlayFabJsonObject*                          Roles;                                                     // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.GroupsCreateGroupRoleRequest
// 0x0028 (0x0030 - 0x0008)
struct FGroupsCreateGroupRoleRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Group;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RoleId;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RoleName;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.GroupsCreateGroupRoleResponse
// 0x0028 (0x0030 - 0x0008)
struct FGroupsCreateGroupRoleResponse : public FPlayFabResultCommon
{
	int                                                ProfileVersion;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BO84[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RoleId;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RoleName;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.GroupsCreateGroupRequest
// 0x0018 (0x0020 - 0x0008)
struct FGroupsCreateGroupRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Entity;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GroupName;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.GroupsCreateGroupResponse
// 0x0058 (0x0060 - 0x0008)
struct FGroupsCreateGroupResponse : public FPlayFabResultCommon
{
	struct FString                                     AdminRoleId;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Created;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          Group;                                                     // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GroupName;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MemberRoleId;                                              // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ProfileVersion;                                            // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AJF2[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPlayFabJsonObject*                          Roles;                                                     // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.GroupsChangeMemberRoleRequest
// 0x0038 (0x0040 - 0x0008)
struct FGroupsChangeMemberRoleRequest : public FPlayFabRequestCommon
{
	struct FString                                     DestinationRoleId;                                         // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          Group;                                                     // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  Members;                                                   // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     OriginRoleId;                                              // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.GroupsBlockEntityRequest
// 0x0010 (0x0018 - 0x0008)
struct FGroupsBlockEntityRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Entity;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          Group;                                                     // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.GroupsApplyToGroupRequest
// 0x0018 (0x0020 - 0x0008)
struct FGroupsApplyToGroupRequest : public FPlayFabRequestCommon
{
	bool                                               AutoAcceptOutstandingInvite;                               // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2BEX[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPlayFabJsonObject*                          Entity;                                                    // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          Group;                                                     // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.GroupsApplyToGroupResponse
// 0x0020 (0x0028 - 0x0008)
struct FGroupsApplyToGroupResponse : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          Entity;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Expires;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          Group;                                                     // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.GroupsAddMembersRequest
// 0x0028 (0x0030 - 0x0008)
struct FGroupsAddMembersRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Group;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  Members;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     RoleId;                                                    // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.GroupsAcceptGroupInvitationRequest
// 0x0010 (0x0018 - 0x0008)
struct FGroupsAcceptGroupInvitationRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Entity;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          Group;                                                     // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.GroupsAcceptGroupApplicationRequest
// 0x0010 (0x0018 - 0x0008)
struct FGroupsAcceptGroupApplicationRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Entity;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          Group;                                                     // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.GroupsEmptyResponse
// 0x0000 (0x0008 - 0x0008)
struct FGroupsEmptyResponse : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.EventsWriteEventsRequest
// 0x0010 (0x0018 - 0x0008)
struct FEventsWriteEventsRequest : public FPlayFabRequestCommon
{
	TArray<class UPlayFabJsonObject*>                  Events;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.EventsWriteEventsResponse
// 0x0010 (0x0018 - 0x0008)
struct FEventsWriteEventsResponse : public FPlayFabResultCommon
{
	struct FString                                     AssignedEventIds;                                          // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.DataSetObjectsRequest
// 0x0020 (0x0028 - 0x0008)
struct FDataSetObjectsRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Entity;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ExpectedProfileVersion;                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3UDA[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UPlayFabJsonObject*>                  Objects;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.DataInitiateFileUploadsRequest
// 0x0020 (0x0028 - 0x0008)
struct FDataInitiateFileUploadsRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Entity;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FileNames;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ProfileVersion;                                            // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0ITW[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.DataGetObjectsRequest
// 0x0010 (0x0018 - 0x0008)
struct FDataGetObjectsRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Entity;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               EscapeObject;                                              // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XFNI[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.DataGetFilesRequest
// 0x0008 (0x0010 - 0x0008)
struct FDataGetFilesRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Entity;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.DataFinalizeFileUploadsRequest
// 0x0018 (0x0020 - 0x0008)
struct FDataFinalizeFileUploadsRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Entity;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FileNames;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.DataDeleteFilesRequest
// 0x0020 (0x0028 - 0x0008)
struct FDataDeleteFilesRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Entity;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FileNames;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ProfileVersion;                                            // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PUF2[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.DataSetObjectsResponse
// 0x0018 (0x0020 - 0x0008)
struct FDataSetObjectsResponse : public FPlayFabResultCommon
{
	int                                                ProfileVersion;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W46N[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UPlayFabJsonObject*>                  SetResults;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.DataInitiateFileUploadsResponse
// 0x0020 (0x0028 - 0x0008)
struct FDataInitiateFileUploadsResponse : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          Entity;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ProfileVersion;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RW1S[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UPlayFabJsonObject*>                  UploadDetails;                                             // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.DataGetObjectsResponse
// 0x0018 (0x0020 - 0x0008)
struct FDataGetObjectsResponse : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          Entity;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          Objects;                                                   // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ProfileVersion;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3AF7[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.DataGetFilesResponse
// 0x0018 (0x0020 - 0x0008)
struct FDataGetFilesResponse : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          Entity;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          MetaData;                                                  // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ProfileVersion;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L7OP[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.DataFinalizeFileUploadsResponse
// 0x0018 (0x0020 - 0x0008)
struct FDataFinalizeFileUploadsResponse : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          Entity;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          MetaData;                                                  // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ProfileVersion;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4RUO[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.DataDeleteFilesResponse
// 0x0010 (0x0018 - 0x0008)
struct FDataDeleteFilesResponse : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          Entity;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ProfileVersion;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z7QA[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.DataAbortFileUploadsRequest
// 0x0020 (0x0028 - 0x0008)
struct FDataAbortFileUploadsRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Entity;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FileNames;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ProfileVersion;                                            // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TX3W[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.DataAbortFileUploadsResponse
// 0x0010 (0x0018 - 0x0008)
struct FDataAbortFileUploadsResponse : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          Entity;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ProfileVersion;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C8NL[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.CloudScriptExecuteEntityCloudScriptRequest
// 0x0028 (0x0030 - 0x0008)
struct FCloudScriptExecuteEntityCloudScriptRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Entity;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FunctionName;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          FunctionParameter;                                         // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               GeneratePlayStreamEvent;                                   // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECloudScriptRevisionOption                         RevisionSelection;                                         // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YVTS[0x2];                                     // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SpecificRevision;                                          // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.CloudScriptExecuteCloudScriptResult
// 0x0058 (0x0060 - 0x0008)
struct FCloudScriptExecuteCloudScriptResult : public FPlayFabResultCommon
{
	int                                                APIRequestsIssued;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9WW4[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPlayFabJsonObject*                          Error;                                                     // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ExecutionTimeSeconds;                                      // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SI6V[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     FunctionName;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          FunctionResult;                                            // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               FunctionResultTooLarge;                                    // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T250[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                HttpRequestsIssued;                                        // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  Logs;                                                      // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               LogsTooLarge;                                              // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4WYR[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MemoryConsumedBytes;                                       // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ProcessorTimeSeconds;                                      // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Revision;                                                  // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientWriteTitleEventRequest
// 0x0028 (0x0030 - 0x0008)
struct FClientWriteTitleEventRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Body;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EventName;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Timestamp;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientWriteClientPlayerEventRequest
// 0x0028 (0x0030 - 0x0008)
struct FClientWriteClientPlayerEventRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Body;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EventName;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Timestamp;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientWriteClientCharacterEventRequest
// 0x0038 (0x0040 - 0x0008)
struct FClientWriteClientCharacterEventRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Body;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharacterId;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EventName;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Timestamp;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientValidateWindowsReceiptRequest
// 0x0038 (0x0040 - 0x0008)
struct FClientValidateWindowsReceiptRequest : public FPlayFabRequestCommon
{
	struct FString                                     CatalogVersion;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CurrencyCode;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PurchasePrice;                                             // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PJ1I[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Receipt;                                                   // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientValidateIOSReceiptRequest
// 0x0038 (0x0040 - 0x0008)
struct FClientValidateIOSReceiptRequest : public FPlayFabRequestCommon
{
	struct FString                                     CatalogVersion;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CurrencyCode;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PurchasePrice;                                             // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HAR0[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ReceiptData;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientValidateGooglePlayPurchaseRequest
// 0x0048 (0x0050 - 0x0008)
struct FClientValidateGooglePlayPurchaseRequest : public FPlayFabRequestCommon
{
	struct FString                                     CatalogVersion;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CurrencyCode;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PurchasePrice;                                             // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WZW5[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ReceiptJson;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Signature;                                                 // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientValidateAmazonReceiptRequest
// 0x0048 (0x0050 - 0x0008)
struct FClientValidateAmazonReceiptRequest : public FPlayFabRequestCommon
{
	struct FString                                     CatalogVersion;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CurrencyCode;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PurchasePrice;                                             // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BGGQ[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ReceiptId;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     userId;                                                    // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientUpdateUserTitleDisplayNameRequest
// 0x0010 (0x0018 - 0x0008)
struct FClientUpdateUserTitleDisplayNameRequest : public FPlayFabRequestCommon
{
	struct FString                                     DisplayName;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientUpdateUserDataRequest
// 0x0020 (0x0028 - 0x0008)
struct FClientUpdateUserDataRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Data;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     KeysToRemove;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EUserDataPermission                                Permission;                                                // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5RWF[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.ClientUpdateSharedGroupDataRequest
// 0x0030 (0x0038 - 0x0008)
struct FClientUpdateSharedGroupDataRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Data;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     KeysToRemove;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EUserDataPermission                                Permission;                                                // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JK2V[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SharedGroupId;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientUpdatePlayerStatisticsRequest
// 0x0010 (0x0018 - 0x0008)
struct FClientUpdatePlayerStatisticsRequest : public FPlayFabRequestCommon
{
	TArray<class UPlayFabJsonObject*>                  Statistics;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientUpdateCharacterStatisticsRequest
// 0x0018 (0x0020 - 0x0008)
struct FClientUpdateCharacterStatisticsRequest : public FPlayFabRequestCommon
{
	struct FString                                     CharacterId;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          CharacterStatistics;                                       // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientUpdateCharacterDataRequest
// 0x0030 (0x0038 - 0x0008)
struct FClientUpdateCharacterDataRequest : public FPlayFabRequestCommon
{
	struct FString                                     CharacterId;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          Data;                                                      // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     KeysToRemove;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EUserDataPermission                                Permission;                                                // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QZQR[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.ClientUpdateAvatarUrlRequest
// 0x0010 (0x0018 - 0x0008)
struct FClientUpdateAvatarUrlRequest : public FPlayFabRequestCommon
{
	struct FString                                     ImageUrl;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientUnlockContainerItemRequest
// 0x0030 (0x0038 - 0x0008)
struct FClientUnlockContainerItemRequest : public FPlayFabRequestCommon
{
	struct FString                                     CatalogVersion;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharacterId;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ContainerItemId;                                           // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientUnlockContainerInstanceRequest
// 0x0040 (0x0048 - 0x0008)
struct FClientUnlockContainerInstanceRequest : public FPlayFabRequestCommon
{
	struct FString                                     CatalogVersion;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharacterId;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ContainerItemInstanceId;                                   // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     KeyItemInstanceId;                                         // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientUnlinkXboxAccountRequest
// 0x0010 (0x0018 - 0x0008)
struct FClientUnlinkXboxAccountRequest : public FPlayFabRequestCommon
{
	struct FString                                     XboxToken;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientUnlinkWindowsHelloAccountRequest
// 0x0010 (0x0018 - 0x0008)
struct FClientUnlinkWindowsHelloAccountRequest : public FPlayFabRequestCommon
{
	struct FString                                     PublicKeyHint;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientUnlinkTwitchAccountRequest
// 0x0000 (0x0008 - 0x0008)
struct FClientUnlinkTwitchAccountRequest : public FPlayFabRequestCommon
{

};
// ScriptStruct PlayFab.ClientUnlinkSteamAccountRequest
// 0x0000 (0x0008 - 0x0008)
struct FClientUnlinkSteamAccountRequest : public FPlayFabRequestCommon
{

};
// ScriptStruct PlayFab.ClientUnlinkPSNAccountRequest
// 0x0000 (0x0008 - 0x0008)
struct FClientUnlinkPSNAccountRequest : public FPlayFabRequestCommon
{

};
// ScriptStruct PlayFab.ClientUninkOpenIdConnectRequest
// 0x0010 (0x0018 - 0x0008)
struct FClientUninkOpenIdConnectRequest : public FPlayFabRequestCommon
{
	struct FString                                     ConnectionId;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientUnlinkNintendoSwitchDeviceIdRequest
// 0x0010 (0x0018 - 0x0008)
struct FClientUnlinkNintendoSwitchDeviceIdRequest : public FPlayFabRequestCommon
{
	struct FString                                     NintendoSwitchDeviceId;                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientUnlinkKongregateAccountRequest
// 0x0000 (0x0008 - 0x0008)
struct FClientUnlinkKongregateAccountRequest : public FPlayFabRequestCommon
{

};
// ScriptStruct PlayFab.ClientUnlinkIOSDeviceIDRequest
// 0x0010 (0x0018 - 0x0008)
struct FClientUnlinkIOSDeviceIDRequest : public FPlayFabRequestCommon
{
	struct FString                                     DeviceID;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientUnlinkGoogleAccountRequest
// 0x0000 (0x0008 - 0x0008)
struct FClientUnlinkGoogleAccountRequest : public FPlayFabRequestCommon
{

};
// ScriptStruct PlayFab.ClientUnlinkGameCenterAccountRequest
// 0x0000 (0x0008 - 0x0008)
struct FClientUnlinkGameCenterAccountRequest : public FPlayFabRequestCommon
{

};
// ScriptStruct PlayFab.ClientUnlinkFacebookInstantGamesIdRequest
// 0x0010 (0x0018 - 0x0008)
struct FClientUnlinkFacebookInstantGamesIdRequest : public FPlayFabRequestCommon
{
	struct FString                                     FacebookInstantGamesId;                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientUnlinkFacebookAccountRequest
// 0x0000 (0x0008 - 0x0008)
struct FClientUnlinkFacebookAccountRequest : public FPlayFabRequestCommon
{

};
// ScriptStruct PlayFab.ClientUnlinkCustomIDRequest
// 0x0010 (0x0018 - 0x0008)
struct FClientUnlinkCustomIDRequest : public FPlayFabRequestCommon
{
	struct FString                                     CustomId;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientUnlinkAndroidDeviceIDRequest
// 0x0010 (0x0018 - 0x0008)
struct FClientUnlinkAndroidDeviceIDRequest : public FPlayFabRequestCommon
{
	struct FString                                     AndroidDeviceId;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientSubtractUserVirtualCurrencyRequest
// 0x0018 (0x0020 - 0x0008)
struct FClientSubtractUserVirtualCurrencyRequest : public FPlayFabRequestCommon
{
	int                                                Amount;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KH4T[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     VirtualCurrency;                                           // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientStartPurchaseRequest
// 0x0030 (0x0038 - 0x0008)
struct FClientStartPurchaseRequest : public FPlayFabRequestCommon
{
	struct FString                                     CatalogVersion;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  Items;                                                     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     StoreId;                                                   // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientStartGameRequest
// 0x0058 (0x0060 - 0x0008)
struct FClientStartGameRequest : public FPlayFabRequestCommon
{
	struct FString                                     BuildVersion;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharacterId;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CustomCommandLineData;                                     // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameMode;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERegion                                            Region;                                                    // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3T2O[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     StatisticName;                                             // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientSetPlayerSecretRequest
// 0x0020 (0x0028 - 0x0008)
struct FClientSetPlayerSecretRequest : public FPlayFabRequestCommon
{
	struct FString                                     EncryptedRequest;                                          // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayerSecret;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientSetFriendTagsRequest
// 0x0020 (0x0028 - 0x0008)
struct FClientSetFriendTagsRequest : public FPlayFabRequestCommon
{
	struct FString                                     FriendPlayFabId;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Tags;                                                      // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientSendAccountRecoveryEmailRequest
// 0x0020 (0x0028 - 0x0008)
struct FClientSendAccountRecoveryEmailRequest : public FPlayFabRequestCommon
{
	struct FString                                     Email;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EmailTemplateId;                                           // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientRestoreIOSPurchasesRequest
// 0x0020 (0x0028 - 0x0008)
struct FClientRestoreIOSPurchasesRequest : public FPlayFabRequestCommon
{
	struct FString                                     CatalogVersion;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReceiptData;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientReportPlayerClientRequest
// 0x0020 (0x0028 - 0x0008)
struct FClientReportPlayerClientRequest : public FPlayFabRequestCommon
{
	struct FString                                     Comment;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReporteeId;                                                // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientDeviceInfoRequest
// 0x0008 (0x0010 - 0x0008)
struct FClientDeviceInfoRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Info;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientRemoveSharedGroupMembersRequest
// 0x0020 (0x0028 - 0x0008)
struct FClientRemoveSharedGroupMembersRequest : public FPlayFabRequestCommon
{
	struct FString                                     PlayFabIds;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SharedGroupId;                                             // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientRemoveGenericIDRequest
// 0x0008 (0x0010 - 0x0008)
struct FClientRemoveGenericIDRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          GenericId;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientRemoveFriendRequest
// 0x0010 (0x0018 - 0x0008)
struct FClientRemoveFriendRequest : public FPlayFabRequestCommon
{
	struct FString                                     FriendPlayFabId;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientRemoveContactEmailRequest
// 0x0000 (0x0008 - 0x0008)
struct FClientRemoveContactEmailRequest : public FPlayFabRequestCommon
{

};
// ScriptStruct PlayFab.ClientRegisterWithWindowsHelloRequest
// 0x0058 (0x0060 - 0x0008)
struct FClientRegisterWithWindowsHelloRequest : public FPlayFabRequestCommon
{
	struct FString                                     DeviceName;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EncryptedRequest;                                          // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          InfoRequestParameters;                                     // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayerSecret;                                              // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PublicKey;                                                 // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     username;                                                  // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientRegisterPlayFabUserRequest
// 0x0070 (0x0078 - 0x0008)
struct FClientRegisterPlayFabUserRequest : public FPlayFabRequestCommon
{
	struct FString                                     DisplayName;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Email;                                                     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EncryptedRequest;                                          // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          InfoRequestParameters;                                     // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Password;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayerSecret;                                              // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RequireBothUsernameAndEmail;                               // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WP72[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     username;                                                  // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientRegisterForIOSPushNotificationRequest
// 0x0028 (0x0030 - 0x0008)
struct FClientRegisterForIOSPushNotificationRequest : public FPlayFabRequestCommon
{
	struct FString                                     ConfirmationMessage;                                       // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DeviceToken;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SendPushNotificationConfirmation;                          // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8ZN2[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.ClientRefreshPSNAuthTokenRequest
// 0x0028 (0x0030 - 0x0008)
struct FClientRefreshPSNAuthTokenRequest : public FPlayFabRequestCommon
{
	struct FString                                     AuthCode;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IssuerId;                                                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y8MT[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RedirectUri;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientRedeemCouponRequest
// 0x0030 (0x0038 - 0x0008)
struct FClientRedeemCouponRequest : public FPlayFabRequestCommon
{
	struct FString                                     CatalogVersion;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharacterId;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CouponCode;                                                // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientPurchaseItemRequest
// 0x0058 (0x0060 - 0x0008)
struct FClientPurchaseItemRequest : public FPlayFabRequestCommon
{
	struct FString                                     CatalogVersion;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharacterId;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemId;                                                    // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Price;                                                     // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X9RC[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     StoreId;                                                   // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VirtualCurrency;                                           // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientPayForPurchaseRequest
// 0x0040 (0x0048 - 0x0008)
struct FClientPayForPurchaseRequest : public FPlayFabRequestCommon
{
	struct FString                                     Currency;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OrderId;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ProviderName;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ProviderTransactionId;                                     // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientOpenTradeRequest
// 0x0030 (0x0038 - 0x0008)
struct FClientOpenTradeRequest : public FPlayFabRequestCommon
{
	struct FString                                     AllowedPlayerIds;                                          // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OfferedInventoryInstanceIds;                               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RequestedCatalogItemIds;                                   // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientMatchmakeRequest
// 0x0060 (0x0068 - 0x0008)
struct FClientMatchmakeRequest : public FPlayFabRequestCommon
{
	struct FString                                     BuildVersion;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharacterId;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameMode;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LobbyId;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERegion                                            Region;                                                    // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               StartNewIfNoneFound;                                       // 0x0049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3UW5[0x6];                                     // 0x004A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     StatisticName;                                             // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          TagFilter;                                                 // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientLoginWithXboxRequest
// 0x0040 (0x0048 - 0x0008)
struct FClientLoginWithXboxRequest : public FPlayFabRequestCommon
{
	bool                                               CreateAccount;                                             // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K8B8[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     EncryptedRequest;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          InfoRequestParameters;                                     // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayerSecret;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     XboxToken;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientLoginWithWindowsHelloRequest
// 0x0028 (0x0030 - 0x0008)
struct FClientLoginWithWindowsHelloRequest : public FPlayFabRequestCommon
{
	struct FString                                     ChallengeSignature;                                        // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          InfoRequestParameters;                                     // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PublicKeyHint;                                             // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientLoginWithTwitchRequest
// 0x0040 (0x0048 - 0x0008)
struct FClientLoginWithTwitchRequest : public FPlayFabRequestCommon
{
	struct FString                                     AccessToken;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CreateAccount;                                             // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GYMH[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     EncryptedRequest;                                          // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          InfoRequestParameters;                                     // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayerSecret;                                              // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientLoginWithSteamRequest
// 0x0040 (0x0048 - 0x0008)
struct FClientLoginWithSteamRequest : public FPlayFabRequestCommon
{
	bool                                               CreateAccount;                                             // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P3B5[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     EncryptedRequest;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          InfoRequestParameters;                                     // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayerSecret;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SteamTicket;                                               // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientLoginWithPSNRequest
// 0x0058 (0x0060 - 0x0008)
struct FClientLoginWithPSNRequest : public FPlayFabRequestCommon
{
	struct FString                                     AuthCode;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CreateAccount;                                             // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B6BB[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     EncryptedRequest;                                          // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          InfoRequestParameters;                                     // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IssuerId;                                                  // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7HFI[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayerSecret;                                              // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RedirectUri;                                               // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientLoginWithPlayFabRequest
// 0x0028 (0x0030 - 0x0008)
struct FClientLoginWithPlayFabRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          InfoRequestParameters;                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Password;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     username;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientLoginWithOpenIdConnectRequest
// 0x0050 (0x0058 - 0x0008)
struct FClientLoginWithOpenIdConnectRequest : public FPlayFabRequestCommon
{
	struct FString                                     ConnectionId;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CreateAccount;                                             // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2T9A[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     EncryptedRequest;                                          // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     IdToken;                                                   // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          InfoRequestParameters;                                     // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayerSecret;                                              // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientLoginWithNintendoSwitchDeviceIdRequest
// 0x0040 (0x0048 - 0x0008)
struct FClientLoginWithNintendoSwitchDeviceIdRequest : public FPlayFabRequestCommon
{
	bool                                               CreateAccount;                                             // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_II1L[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     EncryptedRequest;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          InfoRequestParameters;                                     // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     NintendoSwitchDeviceId;                                    // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayerSecret;                                              // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientLoginWithKongregateRequest
// 0x0050 (0x0058 - 0x0008)
struct FClientLoginWithKongregateRequest : public FPlayFabRequestCommon
{
	struct FString                                     AuthTicket;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CreateAccount;                                             // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RUYZ[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     EncryptedRequest;                                          // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          InfoRequestParameters;                                     // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     KongregateId;                                              // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayerSecret;                                              // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientLoginWithIOSDeviceIDRequest
// 0x0060 (0x0068 - 0x0008)
struct FClientLoginWithIOSDeviceIDRequest : public FPlayFabRequestCommon
{
	bool                                               CreateAccount;                                             // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TA1F[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DeviceID;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DeviceModel;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EncryptedRequest;                                          // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          InfoRequestParameters;                                     // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OS;                                                        // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayerSecret;                                              // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientLoginWithGoogleAccountRequest
// 0x0040 (0x0048 - 0x0008)
struct FClientLoginWithGoogleAccountRequest : public FPlayFabRequestCommon
{
	bool                                               CreateAccount;                                             // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O85R[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     EncryptedRequest;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          InfoRequestParameters;                                     // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayerSecret;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ServerAuthCode;                                            // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientLoginWithGameCenterRequest
// 0x0080 (0x0088 - 0x0008)
struct FClientLoginWithGameCenterRequest : public FPlayFabRequestCommon
{
	bool                                               CreateAccount;                                             // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U84W[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     EncryptedRequest;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          InfoRequestParameters;                                     // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayerId;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayerSecret;                                              // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PublicKeyUrl;                                              // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Salt;                                                      // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Signature;                                                 // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Timestamp;                                                 // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientLoginWithFacebookInstantGamesIdRequest
// 0x0040 (0x0048 - 0x0008)
struct FClientLoginWithFacebookInstantGamesIdRequest : public FPlayFabRequestCommon
{
	bool                                               CreateAccount;                                             // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LRK3[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     EncryptedRequest;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FacebookInstantGamesSignature;                             // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          InfoRequestParameters;                                     // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayerSecret;                                              // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientLoginWithFacebookRequest
// 0x0040 (0x0048 - 0x0008)
struct FClientLoginWithFacebookRequest : public FPlayFabRequestCommon
{
	struct FString                                     AccessToken;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CreateAccount;                                             // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RBBG[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     EncryptedRequest;                                          // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          InfoRequestParameters;                                     // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayerSecret;                                              // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientLoginWithEmailAddressRequest
// 0x0028 (0x0030 - 0x0008)
struct FClientLoginWithEmailAddressRequest : public FPlayFabRequestCommon
{
	struct FString                                     Email;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          InfoRequestParameters;                                     // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Password;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientLoginWithCustomIDRequest
// 0x0040 (0x0048 - 0x0008)
struct FClientLoginWithCustomIDRequest : public FPlayFabRequestCommon
{
	bool                                               CreateAccount;                                             // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B4UV[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CustomId;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EncryptedRequest;                                          // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          InfoRequestParameters;                                     // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayerSecret;                                              // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientLoginWithAndroidDeviceIDRequest
// 0x0060 (0x0068 - 0x0008)
struct FClientLoginWithAndroidDeviceIDRequest : public FPlayFabRequestCommon
{
	struct FString                                     AndroidDevice;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AndroidDeviceId;                                           // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CreateAccount;                                             // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DJKD[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     EncryptedRequest;                                          // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          InfoRequestParameters;                                     // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OS;                                                        // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayerSecret;                                              // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientLinkXboxAccountRequest
// 0x0018 (0x0020 - 0x0008)
struct FClientLinkXboxAccountRequest : public FPlayFabRequestCommon
{
	bool                                               ForceLink;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_067N[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     XboxToken;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientLinkWindowsHelloAccountRequest
// 0x0038 (0x0040 - 0x0008)
struct FClientLinkWindowsHelloAccountRequest : public FPlayFabRequestCommon
{
	struct FString                                     DeviceName;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ForceLink;                                                 // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KWGI[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PublicKey;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     username;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientLinkTwitchAccountRequest
// 0x0018 (0x0020 - 0x0008)
struct FClientLinkTwitchAccountRequest : public FPlayFabRequestCommon
{
	struct FString                                     AccessToken;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ForceLink;                                                 // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YMEQ[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.ClientLinkSteamAccountRequest
// 0x0018 (0x0020 - 0x0008)
struct FClientLinkSteamAccountRequest : public FPlayFabRequestCommon
{
	bool                                               ForceLink;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YTTJ[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SteamTicket;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientLinkPSNAccountRequest
// 0x0028 (0x0030 - 0x0008)
struct FClientLinkPSNAccountRequest : public FPlayFabRequestCommon
{
	struct FString                                     AuthCode;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ForceLink;                                                 // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PUH9[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                IssuerId;                                                  // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RedirectUri;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientLinkOpenIdConnectRequest
// 0x0028 (0x0030 - 0x0008)
struct FClientLinkOpenIdConnectRequest : public FPlayFabRequestCommon
{
	struct FString                                     ConnectionId;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ForceLink;                                                 // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_46CC[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     IdToken;                                                   // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientLinkNintendoSwitchDeviceIdRequest
// 0x0018 (0x0020 - 0x0008)
struct FClientLinkNintendoSwitchDeviceIdRequest : public FPlayFabRequestCommon
{
	bool                                               ForceLink;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DA7R[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     NintendoSwitchDeviceId;                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientLinkKongregateAccountRequest
// 0x0028 (0x0030 - 0x0008)
struct FClientLinkKongregateAccountRequest : public FPlayFabRequestCommon
{
	struct FString                                     AuthTicket;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ForceLink;                                                 // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HHZ7[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     KongregateId;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientLinkIOSDeviceIDRequest
// 0x0038 (0x0040 - 0x0008)
struct FClientLinkIOSDeviceIDRequest : public FPlayFabRequestCommon
{
	struct FString                                     DeviceID;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DeviceModel;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ForceLink;                                                 // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BPK0[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     OS;                                                        // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientLinkGoogleAccountRequest
// 0x0018 (0x0020 - 0x0008)
struct FClientLinkGoogleAccountRequest : public FPlayFabRequestCommon
{
	bool                                               ForceLink;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UB3L[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ServerAuthCode;                                            // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientLinkGameCenterAccountRequest
// 0x0058 (0x0060 - 0x0008)
struct FClientLinkGameCenterAccountRequest : public FPlayFabRequestCommon
{
	bool                                               ForceLink;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_62OP[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameCenterId;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PublicKeyUrl;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Salt;                                                      // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Signature;                                                 // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Timestamp;                                                 // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientLinkFacebookInstantGamesIdRequest
// 0x0018 (0x0020 - 0x0008)
struct FClientLinkFacebookInstantGamesIdRequest : public FPlayFabRequestCommon
{
	struct FString                                     FacebookInstantGamesSignature;                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ForceLink;                                                 // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VZC8[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.ClientLinkFacebookAccountRequest
// 0x0018 (0x0020 - 0x0008)
struct FClientLinkFacebookAccountRequest : public FPlayFabRequestCommon
{
	struct FString                                     AccessToken;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ForceLink;                                                 // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1EY0[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.ClientLinkCustomIDRequest
// 0x0018 (0x0020 - 0x0008)
struct FClientLinkCustomIDRequest : public FPlayFabRequestCommon
{
	struct FString                                     CustomId;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ForceLink;                                                 // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_55M5[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.ClientLinkAndroidDeviceIDRequest
// 0x0038 (0x0040 - 0x0008)
struct FClientLinkAndroidDeviceIDRequest : public FPlayFabRequestCommon
{
	struct FString                                     AndroidDevice;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AndroidDeviceId;                                           // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ForceLink;                                                 // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YZC1[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     OS;                                                        // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetPlayerStatisticVersionsRequest
// 0x0010 (0x0018 - 0x0008)
struct FServerGetPlayerStatisticVersionsRequest : public FPlayFabRequestCommon
{
	struct FString                                     StatisticName;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetPlayerStatisticsRequest
// 0x0030 (0x0038 - 0x0008)
struct FServerGetPlayerStatisticsRequest : public FPlayFabRequestCommon
{
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StatisticNames;                                            // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  StatisticNameVersions;                                     // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetPlayersInSegmentRequest
// 0x0028 (0x0030 - 0x0008)
struct FServerGetPlayersInSegmentRequest : public FPlayFabRequestCommon
{
	struct FString                                     ContinuationToken;                                         // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxBatchSize;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SecondsToLive;                                             // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SegmentId;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetPlayersSegmentsRequest
// 0x0010 (0x0018 - 0x0008)
struct FServerGetPlayersSegmentsRequest : public FPlayFabRequestCommon
{
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetPlayerProfileRequest
// 0x0018 (0x0020 - 0x0008)
struct FServerGetPlayerProfileRequest : public FPlayFabRequestCommon
{
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          ProfileConstraints;                                        // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetPlayerCombinedInfoRequest
// 0x0018 (0x0020 - 0x0008)
struct FServerGetPlayerCombinedInfoRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          InfoRequestParameters;                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetLeaderboardForUsersCharactersRequest
// 0x0028 (0x0030 - 0x0008)
struct FServerGetLeaderboardForUsersCharactersRequest : public FPlayFabRequestCommon
{
	int                                                MaxResultsCount;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W8XA[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayFabId;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StatisticName;                                             // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetLeaderboardAroundUserRequest
// 0x0038 (0x0040 - 0x0008)
struct FServerGetLeaderboardAroundUserRequest : public FPlayFabRequestCommon
{
	int                                                MaxResultsCount;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VCQM[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayFabId;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          ProfileConstraints;                                        // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StatisticName;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseSpecificVersion;                                        // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BN28[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Version;                                                   // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetLeaderboardAroundCharacterRequest
// 0x0048 (0x0050 - 0x0008)
struct FServerGetLeaderboardAroundCharacterRequest : public FPlayFabRequestCommon
{
	struct FString                                     CharacterId;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharacterType;                                             // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxResultsCount;                                           // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NPX9[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayFabId;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StatisticName;                                             // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetLeaderboardRequest
// 0x0030 (0x0038 - 0x0008)
struct FServerGetLeaderboardRequest : public FPlayFabRequestCommon
{
	int                                                MaxResultsCount;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R6VP[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPlayFabJsonObject*                          ProfileConstraints;                                        // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartPosition;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HYM6[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     StatisticName;                                             // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseSpecificVersion;                                        // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KWPV[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Version;                                                   // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetFriendsListRequest
// 0x0030 (0x0038 - 0x0008)
struct FServerGetFriendsListRequest : public FPlayFabRequestCommon
{
	bool                                               IncludeFacebookFriends;                                    // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IncludeSteamFriends;                                       // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JQYR[0x6];                                     // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayFabId;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          ProfileConstraints;                                        // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     XboxToken;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetFriendLeaderboardRequest
// 0x0050 (0x0058 - 0x0008)
struct FServerGetFriendLeaderboardRequest : public FPlayFabRequestCommon
{
	bool                                               IncludeFacebookFriends;                                    // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IncludeSteamFriends;                                       // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ALTP[0x2];                                     // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxResultsCount;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          ProfileConstraints;                                        // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartPosition;                                             // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HMQM[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     StatisticName;                                             // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseSpecificVersion;                                        // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DOM5[0x3];                                     // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Version;                                                   // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     XboxToken;                                                 // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetContentDownloadUrlRequest
// 0x0028 (0x0030 - 0x0008)
struct FServerGetContentDownloadUrlRequest : public FPlayFabRequestCommon
{
	struct FString                                     HttpMethod;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ThruCDN;                                                   // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9DZM[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.ServerGetCharacterStatisticsRequest
// 0x0020 (0x0028 - 0x0008)
struct FServerGetCharacterStatisticsRequest : public FPlayFabRequestCommon
{
	struct FString                                     CharacterId;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetCharacterLeaderboardRequest
// 0x0028 (0x0030 - 0x0008)
struct FServerGetCharacterLeaderboardRequest : public FPlayFabRequestCommon
{
	struct FString                                     CharacterType;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxResultsCount;                                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartPosition;                                             // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StatisticName;                                             // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetCharacterInventoryRequest
// 0x0030 (0x0038 - 0x0008)
struct FServerGetCharacterInventoryRequest : public FPlayFabRequestCommon
{
	struct FString                                     CatalogVersion;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharacterId;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetCharacterDataRequest
// 0x0038 (0x0040 - 0x0008)
struct FServerGetCharacterDataRequest : public FPlayFabRequestCommon
{
	struct FString                                     CharacterId;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IfChangedFromDataVersion;                                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3DGM[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Keys;                                                      // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetCatalogItemsRequest
// 0x0010 (0x0018 - 0x0008)
struct FServerGetCatalogItemsRequest : public FPlayFabRequestCommon
{
	struct FString                                     CatalogVersion;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerListUsersCharactersRequest
// 0x0010 (0x0018 - 0x0008)
struct FServerListUsersCharactersRequest : public FPlayFabRequestCommon
{
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetAllSegmentsRequest
// 0x0000 (0x0008 - 0x0008)
struct FServerGetAllSegmentsRequest : public FPlayFabRequestCommon
{

};
// ScriptStruct PlayFab.ServerExecuteCloudScriptServerRequest
// 0x0038 (0x0040 - 0x0008)
struct FServerExecuteCloudScriptServerRequest : public FPlayFabRequestCommon
{
	struct FString                                     FunctionName;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          FunctionParameter;                                         // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               GeneratePlayStreamEvent;                                   // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8ND7[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayFabId;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECloudScriptRevisionOption                         RevisionSelection;                                         // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TJ1P[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SpecificRevision;                                          // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerEvaluateRandomResultTableRequest
// 0x0020 (0x0028 - 0x0008)
struct FServerEvaluateRandomResultTableRequest : public FPlayFabRequestCommon
{
	struct FString                                     CatalogVersion;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TableId;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerDeregisterGameRequest
// 0x0010 (0x0018 - 0x0008)
struct FServerDeregisterGameRequest : public FPlayFabRequestCommon
{
	struct FString                                     LobbyId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerDeleteSharedGroupRequest
// 0x0010 (0x0018 - 0x0008)
struct FServerDeleteSharedGroupRequest : public FPlayFabRequestCommon
{
	struct FString                                     SharedGroupId;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerDeletePushNotificationTemplateRequest
// 0x0010 (0x0018 - 0x0008)
struct FServerDeletePushNotificationTemplateRequest : public FPlayFabRequestCommon
{
	struct FString                                     PushNotificationTemplateId;                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerDeletePlayerRequest
// 0x0010 (0x0018 - 0x0008)
struct FServerDeletePlayerRequest : public FPlayFabRequestCommon
{
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerDeleteCharacterFromUserRequest
// 0x0028 (0x0030 - 0x0008)
struct FServerDeleteCharacterFromUserRequest : public FPlayFabRequestCommon
{
	struct FString                                     CharacterId;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SaveCharacterInventory;                                    // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TVEH[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.ServerWriteEventResponse
// 0x0010 (0x0018 - 0x0008)
struct FServerWriteEventResponse : public FPlayFabResultCommon
{
	struct FString                                     EventId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerUpdateUserDataResult
// 0x0008 (0x0010 - 0x0008)
struct FServerUpdateUserDataResult : public FPlayFabResultCommon
{
	int                                                DataVersion;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IVVB[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.ServerUpdateSharedGroupDataResult
// 0x0000 (0x0008 - 0x0008)
struct FServerUpdateSharedGroupDataResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ServerUpdatePlayerStatisticsResult
// 0x0000 (0x0008 - 0x0008)
struct FServerUpdatePlayerStatisticsResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ServerUpdateCharacterStatisticsResult
// 0x0000 (0x0008 - 0x0008)
struct FServerUpdateCharacterStatisticsResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ServerUpdateCharacterDataResult
// 0x0008 (0x0010 - 0x0008)
struct FServerUpdateCharacterDataResult : public FPlayFabResultCommon
{
	int                                                DataVersion;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I5MD[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.ServerUpdateBansResult
// 0x0010 (0x0018 - 0x0008)
struct FServerUpdateBansResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  BanData;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerUnlockContainerItemResult
// 0x0038 (0x0040 - 0x0008)
struct FServerUnlockContainerItemResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  GrantedItems;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     UnlockedItemInstanceId;                                    // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     UnlockedWithItemInstanceId;                                // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          VirtualCurrency;                                           // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerUnlinkXboxAccountResult
// 0x0000 (0x0008 - 0x0008)
struct FServerUnlinkXboxAccountResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ServerUnlinkServerCustomIdResult
// 0x0000 (0x0008 - 0x0008)
struct FServerUnlinkServerCustomIdResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ServerUnlinkPSNAccountResult
// 0x0000 (0x0008 - 0x0008)
struct FServerUnlinkPSNAccountResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ServerSetTitleDataResult
// 0x0000 (0x0008 - 0x0008)
struct FServerSetTitleDataResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ServerSetPublisherDataResult
// 0x0000 (0x0008 - 0x0008)
struct FServerSetPublisherDataResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ServerSetPlayerSecretResult
// 0x0000 (0x0008 - 0x0008)
struct FServerSetPlayerSecretResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ServerSetGameServerInstanceTagsResult
// 0x0000 (0x0008 - 0x0008)
struct FServerSetGameServerInstanceTagsResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ServerSetGameServerInstanceStateResult
// 0x0000 (0x0008 - 0x0008)
struct FServerSetGameServerInstanceStateResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ServerSetGameServerInstanceDataResult
// 0x0000 (0x0008 - 0x0008)
struct FServerSetGameServerInstanceDataResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ServerSendPushNotificationResult
// 0x0000 (0x0008 - 0x0008)
struct FServerSendPushNotificationResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ServerSendEmailFromTemplateResult
// 0x0000 (0x0008 - 0x0008)
struct FServerSendEmailFromTemplateResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ServerSendCustomAccountRecoveryEmailResult
// 0x0000 (0x0008 - 0x0008)
struct FServerSendCustomAccountRecoveryEmailResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ServerSavePushNotificationTemplateResult
// 0x0010 (0x0018 - 0x0008)
struct FServerSavePushNotificationTemplateResult : public FPlayFabResultCommon
{
	struct FString                                     PushNotificationTemplateId;                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerRevokeInventoryItemsResult
// 0x0010 (0x0018 - 0x0008)
struct FServerRevokeInventoryItemsResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Errors;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerRevokeInventoryResult
// 0x0000 (0x0008 - 0x0008)
struct FServerRevokeInventoryResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ServerRevokeBansResult
// 0x0010 (0x0018 - 0x0008)
struct FServerRevokeBansResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  BanData;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerRevokeAllBansForUserResult
// 0x0010 (0x0018 - 0x0008)
struct FServerRevokeAllBansForUserResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  BanData;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerReportPlayerServerResult
// 0x0008 (0x0010 - 0x0008)
struct FServerReportPlayerServerResult : public FPlayFabResultCommon
{
	int                                                SubmissionsRemaining;                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U8QN[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.ServerRemoveSharedGroupMembersResult
// 0x0000 (0x0008 - 0x0008)
struct FServerRemoveSharedGroupMembersResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ServerRemovePlayerTagResult
// 0x0000 (0x0008 - 0x0008)
struct FServerRemovePlayerTagResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ServerRegisterGameResponse
// 0x0010 (0x0018 - 0x0008)
struct FServerRegisterGameResponse : public FPlayFabResultCommon
{
	struct FString                                     LobbyId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerRefreshGameServerInstanceHeartbeatResult
// 0x0000 (0x0008 - 0x0008)
struct FServerRefreshGameServerInstanceHeartbeatResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ServerRedeemMatchmakerTicketResult
// 0x0020 (0x0028 - 0x0008)
struct FServerRedeemMatchmakerTicketResult : public FPlayFabResultCommon
{
	struct FString                                     Error;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               TicketIsValid;                                             // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1VP1[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPlayFabJsonObject*                          UserInfo;                                                  // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerRedeemCouponResult
// 0x0010 (0x0018 - 0x0008)
struct FServerRedeemCouponResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  GrantedItems;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerNotifyMatchmakerPlayerLeftResult
// 0x0008 (0x0010 - 0x0008)
struct FServerNotifyMatchmakerPlayerLeftResult : public FPlayFabResultCommon
{
	EPlayerConnectionState                             PlayerState;                                               // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3F4I[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.ServerMoveItemToUserFromCharacterResult
// 0x0000 (0x0008 - 0x0008)
struct FServerMoveItemToUserFromCharacterResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ServerMoveItemToCharacterFromUserResult
// 0x0000 (0x0008 - 0x0008)
struct FServerMoveItemToCharacterFromUserResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ServerMoveItemToCharacterFromCharacterResult
// 0x0000 (0x0008 - 0x0008)
struct FServerMoveItemToCharacterFromCharacterResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ServerModifyItemUsesResult
// 0x0018 (0x0020 - 0x0008)
struct FServerModifyItemUsesResult : public FPlayFabResultCommon
{
	struct FString                                     ItemInstanceId;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RemainingUses;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BQYA[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.PlayFabLoginResultCommon
// 0x0008 (0x0010 - 0x0008)
struct FPlayFabLoginResultCommon : public FPlayFabResultCommon
{
	class UPlayFabAuthenticationContext*               AuthenticationContext;                                     // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerServerLoginResult
// 0x0058 (0x0068 - 0x0010)
struct FServerServerLoginResult : public FPlayFabLoginResultCommon
{
	class UPlayFabJsonObject*                          EntityToken;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          InfoResultPayload;                                         // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LastLoginTime;                                             // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               NewlyCreated;                                              // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1SLM[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayFabId;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SessionTicket;                                             // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          SettingsForUser;                                           // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          TreatmentAssignment;                                       // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerLinkXboxAccountResult
// 0x0000 (0x0008 - 0x0008)
struct FServerLinkXboxAccountResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ServerLinkServerCustomIdResult
// 0x0000 (0x0008 - 0x0008)
struct FServerLinkServerCustomIdResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ServerLinkPSNAccountResult
// 0x0000 (0x0008 - 0x0008)
struct FServerLinkPSNAccountResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ServerGrantItemsToUsersResult
// 0x0010 (0x0018 - 0x0008)
struct FServerGrantItemsToUsersResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  ItemGrantResults;                                          // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGrantItemsToUserResult
// 0x0010 (0x0018 - 0x0008)
struct FServerGrantItemsToUserResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  ItemGrantResults;                                          // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGrantItemsToCharacterResult
// 0x0010 (0x0018 - 0x0008)
struct FServerGrantItemsToCharacterResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  ItemGrantResults;                                          // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGrantCharacterToUserResult
// 0x0010 (0x0018 - 0x0008)
struct FServerGrantCharacterToUserResult : public FPlayFabResultCommon
{
	struct FString                                     CharacterId;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetUserInventoryResult
// 0x0030 (0x0038 - 0x0008)
struct FServerGetUserInventoryResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Inventory;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          VirtualCurrency;                                           // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          VirtualCurrencyRechargeTimes;                              // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetUserDataResult
// 0x0020 (0x0028 - 0x0008)
struct FServerGetUserDataResult : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          Data;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DataVersion;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G4YH[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayFabId;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetUserBansResult
// 0x0010 (0x0018 - 0x0008)
struct FServerGetUserBansResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  BanData;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetUserAccountInfoResult
// 0x0008 (0x0010 - 0x0008)
struct FServerGetUserAccountInfoResult : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          UserInfo;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetTitleNewsResult
// 0x0010 (0x0018 - 0x0008)
struct FServerGetTitleNewsResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  News;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetTitleDataResult
// 0x0008 (0x0010 - 0x0008)
struct FServerGetTitleDataResult : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          Data;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetTimeResult
// 0x0010 (0x0018 - 0x0008)
struct FServerGetTimeResult : public FPlayFabResultCommon
{
	struct FString                                     Time;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetStoreItemsResult
// 0x0040 (0x0048 - 0x0008)
struct FServerGetStoreItemsResult : public FPlayFabResultCommon
{
	struct FString                                     CatalogVersion;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          MarketingData;                                             // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPfSourceType                                      Source;                                                    // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JUX6[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UPlayFabJsonObject*>                  Store;                                                     // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     StoreId;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetSharedGroupDataResult
// 0x0018 (0x0020 - 0x0008)
struct FServerGetSharedGroupDataResult : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          Data;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Members;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetServerCustomIDsFromPlayFabIDsResult
// 0x0010 (0x0018 - 0x0008)
struct FServerGetServerCustomIDsFromPlayFabIDsResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Data;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetRandomResultTablesResult
// 0x0008 (0x0010 - 0x0008)
struct FServerGetRandomResultTablesResult : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          Tables;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetPublisherDataResult
// 0x0008 (0x0010 - 0x0008)
struct FServerGetPublisherDataResult : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          Data;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetPlayFabIDsFromXboxLiveIDsResult
// 0x0010 (0x0018 - 0x0008)
struct FServerGetPlayFabIDsFromXboxLiveIDsResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Data;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetPlayFabIDsFromSteamIDsResult
// 0x0010 (0x0018 - 0x0008)
struct FServerGetPlayFabIDsFromSteamIDsResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Data;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetPlayFabIDsFromPSNAccountIDsResult
// 0x0010 (0x0018 - 0x0008)
struct FServerGetPlayFabIDsFromPSNAccountIDsResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Data;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult
// 0x0010 (0x0018 - 0x0008)
struct FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Data;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetPlayFabIDsFromGenericIDsResult
// 0x0010 (0x0018 - 0x0008)
struct FServerGetPlayFabIDsFromGenericIDsResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Data;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetPlayFabIDsFromFacebookInstantGamesIdsResult
// 0x0010 (0x0018 - 0x0008)
struct FServerGetPlayFabIDsFromFacebookInstantGamesIdsResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Data;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetPlayFabIDsFromFacebookIDsResult
// 0x0010 (0x0018 - 0x0008)
struct FServerGetPlayFabIDsFromFacebookIDsResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Data;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetPlayerTagsResult
// 0x0020 (0x0028 - 0x0008)
struct FServerGetPlayerTagsResult : public FPlayFabResultCommon
{
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Tags;                                                      // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetPlayerStatisticVersionsResult
// 0x0010 (0x0018 - 0x0008)
struct FServerGetPlayerStatisticVersionsResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  StatisticVersions;                                         // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetPlayerStatisticsResult
// 0x0020 (0x0028 - 0x0008)
struct FServerGetPlayerStatisticsResult : public FPlayFabResultCommon
{
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  Statistics;                                                // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetPlayersInSegmentResult
// 0x0028 (0x0030 - 0x0008)
struct FServerGetPlayersInSegmentResult : public FPlayFabResultCommon
{
	struct FString                                     ContinuationToken;                                         // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  PlayerProfiles;                                            // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                ProfilesInSegment;                                         // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HRJ2[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.ServerGetPlayerSegmentsResult
// 0x0010 (0x0018 - 0x0008)
struct FServerGetPlayerSegmentsResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Segments;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetPlayerProfileResult
// 0x0008 (0x0010 - 0x0008)
struct FServerGetPlayerProfileResult : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          PlayerProfile;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetPlayerCombinedInfoResult
// 0x0018 (0x0020 - 0x0008)
struct FServerGetPlayerCombinedInfoResult : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          InfoResultPayload;                                         // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetLeaderboardForUsersCharactersResult
// 0x0010 (0x0018 - 0x0008)
struct FServerGetLeaderboardForUsersCharactersResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Leaderboard;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetLeaderboardAroundUserResult
// 0x0028 (0x0030 - 0x0008)
struct FServerGetLeaderboardAroundUserResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Leaderboard;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     NextReset;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Version;                                                   // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4OAN[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.ServerGetLeaderboardAroundCharacterResult
// 0x0010 (0x0018 - 0x0008)
struct FServerGetLeaderboardAroundCharacterResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Leaderboard;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetFriendsListResult
// 0x0010 (0x0018 - 0x0008)
struct FServerGetFriendsListResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Friends;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetLeaderboardResult
// 0x0028 (0x0030 - 0x0008)
struct FServerGetLeaderboardResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Leaderboard;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     NextReset;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Version;                                                   // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2ZOF[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.ServerGetContentDownloadUrlResult
// 0x0010 (0x0018 - 0x0008)
struct FServerGetContentDownloadUrlResult : public FPlayFabResultCommon
{
	struct FString                                     URL;                                                       // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetCharacterStatisticsResult
// 0x0028 (0x0030 - 0x0008)
struct FServerGetCharacterStatisticsResult : public FPlayFabResultCommon
{
	struct FString                                     CharacterId;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          CharacterStatistics;                                       // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetCharacterLeaderboardResult
// 0x0010 (0x0018 - 0x0008)
struct FServerGetCharacterLeaderboardResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Leaderboard;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetCharacterInventoryResult
// 0x0040 (0x0048 - 0x0008)
struct FServerGetCharacterInventoryResult : public FPlayFabResultCommon
{
	struct FString                                     CharacterId;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  Inventory;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          VirtualCurrency;                                           // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          VirtualCurrencyRechargeTimes;                              // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetCharacterDataResult
// 0x0030 (0x0038 - 0x0008)
struct FServerGetCharacterDataResult : public FPlayFabResultCommon
{
	struct FString                                     CharacterId;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          Data;                                                      // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DataVersion;                                               // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2XVK[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayFabId;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetCatalogItemsResult
// 0x0010 (0x0018 - 0x0008)
struct FServerGetCatalogItemsResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Catalog;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerListUsersCharactersResult
// 0x0010 (0x0018 - 0x0008)
struct FServerListUsersCharactersResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Characters;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerGetAllSegmentsResult
// 0x0010 (0x0018 - 0x0008)
struct FServerGetAllSegmentsResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Segments;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerExecuteCloudScriptResult
// 0x0058 (0x0060 - 0x0008)
struct FServerExecuteCloudScriptResult : public FPlayFabResultCommon
{
	int                                                APIRequestsIssued;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZI82[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPlayFabJsonObject*                          Error;                                                     // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ExecutionTimeSeconds;                                      // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZKCP[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     FunctionName;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          FunctionResult;                                            // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               FunctionResultTooLarge;                                    // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T7DT[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                HttpRequestsIssued;                                        // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  Logs;                                                      // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               LogsTooLarge;                                              // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AQ7Y[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MemoryConsumedBytes;                                       // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ProcessorTimeSeconds;                                      // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Revision;                                                  // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerEvaluateRandomResultTableResult
// 0x0010 (0x0018 - 0x0008)
struct FServerEvaluateRandomResultTableResult : public FPlayFabResultCommon
{
	struct FString                                     ResultItemId;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerDeregisterGameResponse
// 0x0000 (0x0008 - 0x0008)
struct FServerDeregisterGameResponse : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ServerDeletePushNotificationTemplateResult
// 0x0000 (0x0008 - 0x0008)
struct FServerDeletePushNotificationTemplateResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ServerDeletePlayerResult
// 0x0000 (0x0008 - 0x0008)
struct FServerDeletePlayerResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ServerDeleteCharacterFromUserResult
// 0x0000 (0x0008 - 0x0008)
struct FServerDeleteCharacterFromUserResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ServerCreateSharedGroupRequest
// 0x0010 (0x0018 - 0x0008)
struct FServerCreateSharedGroupRequest : public FPlayFabRequestCommon
{
	struct FString                                     SharedGroupId;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerCreateSharedGroupResult
// 0x0010 (0x0018 - 0x0008)
struct FServerCreateSharedGroupResult : public FPlayFabResultCommon
{
	struct FString                                     SharedGroupId;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerConsumeItemRequest
// 0x0038 (0x0040 - 0x0008)
struct FServerConsumeItemRequest : public FPlayFabRequestCommon
{
	struct FString                                     CharacterId;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ConsumeCount;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5X5F[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ItemInstanceId;                                            // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerConsumeItemResult
// 0x0018 (0x0020 - 0x0008)
struct FServerConsumeItemResult : public FPlayFabResultCommon
{
	struct FString                                     ItemInstanceId;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RemainingUses;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DN0Q[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.ServerBanUsersRequest
// 0x0010 (0x0018 - 0x0008)
struct FServerBanUsersRequest : public FPlayFabRequestCommon
{
	TArray<class UPlayFabJsonObject*>                  Bans;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerBanUsersResult
// 0x0010 (0x0018 - 0x0008)
struct FServerBanUsersResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  BanData;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerAwardSteamAchievementRequest
// 0x0010 (0x0018 - 0x0008)
struct FServerAwardSteamAchievementRequest : public FPlayFabRequestCommon
{
	TArray<class UPlayFabJsonObject*>                  Achievements;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerAwardSteamAchievementResult
// 0x0010 (0x0018 - 0x0008)
struct FServerAwardSteamAchievementResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  AchievementResults;                                        // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerAuthenticateSessionTicketRequest
// 0x0010 (0x0018 - 0x0008)
struct FServerAuthenticateSessionTicketRequest : public FPlayFabRequestCommon
{
	struct FString                                     SessionTicket;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerAuthenticateSessionTicketResult
// 0x0008 (0x0010 - 0x0008)
struct FServerAuthenticateSessionTicketResult : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          UserInfo;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerAddUserVirtualCurrencyRequest
// 0x0028 (0x0030 - 0x0008)
struct FServerAddUserVirtualCurrencyRequest : public FPlayFabRequestCommon
{
	int                                                Amount;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DSSW[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayFabId;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VirtualCurrency;                                           // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerModifyUserVirtualCurrencyResult
// 0x0028 (0x0030 - 0x0008)
struct FServerModifyUserVirtualCurrencyResult : public FPlayFabResultCommon
{
	int                                                Balance;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BalanceChange;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VirtualCurrency;                                           // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerAddSharedGroupMembersRequest
// 0x0020 (0x0028 - 0x0008)
struct FServerAddSharedGroupMembersRequest : public FPlayFabRequestCommon
{
	struct FString                                     PlayFabIds;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SharedGroupId;                                             // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerAddSharedGroupMembersResult
// 0x0000 (0x0008 - 0x0008)
struct FServerAddSharedGroupMembersResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ServerAddPlayerTagRequest
// 0x0020 (0x0028 - 0x0008)
struct FServerAddPlayerTagRequest : public FPlayFabRequestCommon
{
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TagName;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerAddPlayerTagResult
// 0x0000 (0x0008 - 0x0008)
struct FServerAddPlayerTagResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ServerAddGenericIDRequest
// 0x0018 (0x0020 - 0x0008)
struct FServerAddGenericIDRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          GenericId;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerEmptyResult
// 0x0000 (0x0008 - 0x0008)
struct FServerEmptyResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ServerAddFriendRequest
// 0x0050 (0x0058 - 0x0008)
struct FServerAddFriendRequest : public FPlayFabRequestCommon
{
	struct FString                                     FriendEmail;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FriendPlayFabId;                                           // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FriendTitleDisplayName;                                    // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FriendUsername;                                            // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerEmptyResponse
// 0x0000 (0x0008 - 0x0008)
struct FServerEmptyResponse : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ServerAddCharacterVirtualCurrencyRequest
// 0x0038 (0x0040 - 0x0008)
struct FServerAddCharacterVirtualCurrencyRequest : public FPlayFabRequestCommon
{
	int                                                Amount;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_58LH[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CharacterId;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VirtualCurrency;                                           // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ServerModifyCharacterVirtualCurrencyResult
// 0x0018 (0x0020 - 0x0008)
struct FServerModifyCharacterVirtualCurrencyResult : public FPlayFabResultCommon
{
	int                                                Balance;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D7ZC[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     VirtualCurrency;                                           // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ProfilesSetEntityProfilePolicyRequest
// 0x0018 (0x0020 - 0x0008)
struct FProfilesSetEntityProfilePolicyRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Entity;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  Statements;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ProfilesSetProfileLanguageRequest
// 0x0020 (0x0028 - 0x0008)
struct FProfilesSetProfileLanguageRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Entity;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ExpectedVersion;                                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YVJF[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Language;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ProfilesSetGlobalPolicyRequest
// 0x0010 (0x0018 - 0x0008)
struct FProfilesSetGlobalPolicyRequest : public FPlayFabRequestCommon
{
	TArray<class UPlayFabJsonObject*>                  Permissions;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest
// 0x0010 (0x0018 - 0x0008)
struct FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest : public FPlayFabRequestCommon
{
	struct FString                                     MasterPlayerAccountIds;                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ProfilesGetEntityProfilesRequest
// 0x0018 (0x0020 - 0x0008)
struct FProfilesGetEntityProfilesRequest : public FPlayFabRequestCommon
{
	bool                                               DataAsObject;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_397K[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UPlayFabJsonObject*>                  Entities;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ProfilesGetEntityProfileRequest
// 0x0010 (0x0018 - 0x0008)
struct FProfilesGetEntityProfileRequest : public FPlayFabRequestCommon
{
	bool                                               DataAsObject;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UJBF[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPlayFabJsonObject*                          Entity;                                                    // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ProfilesGetGlobalPolicyRequest
// 0x0000 (0x0008 - 0x0008)
struct FProfilesGetGlobalPolicyRequest : public FPlayFabRequestCommon
{

};
// ScriptStruct PlayFab.ProfilesSetEntityProfilePolicyResponse
// 0x0010 (0x0018 - 0x0008)
struct FProfilesSetEntityProfilePolicyResponse : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Permissions;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ProfilesSetProfileLanguageResponse
// 0x0008 (0x0010 - 0x0008)
struct FProfilesSetProfileLanguageResponse : public FPlayFabResultCommon
{
	EOperationTypes                                    OperationResult;                                           // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XSGA[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                VersionNumber;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ProfilesSetGlobalPolicyResponse
// 0x0000 (0x0008 - 0x0008)
struct FProfilesSetGlobalPolicyResponse : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse
// 0x0018 (0x0020 - 0x0008)
struct FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse : public FPlayFabResultCommon
{
	struct FString                                     TitleId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          TitlePlayerAccounts;                                       // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ProfilesGetEntityProfilesResponse
// 0x0010 (0x0018 - 0x0008)
struct FProfilesGetEntityProfilesResponse : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Profiles;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ProfilesGetEntityProfileResponse
// 0x0008 (0x0010 - 0x0008)
struct FProfilesGetEntityProfileResponse : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          Profile;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ProfilesGetGlobalPolicyResponse
// 0x0010 (0x0018 - 0x0008)
struct FProfilesGetGlobalPolicyResponse : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Permissions;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerUploadCertificateRequest
// 0x0008 (0x0010 - 0x0008)
struct FMultiplayerUploadCertificateRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          GameCertificate;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerUpdateBuildRegionsRequest
// 0x0020 (0x0028 - 0x0008)
struct FMultiplayerUpdateBuildRegionsRequest : public FPlayFabRequestCommon
{
	struct FString                                     BuildId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  BuildRegions;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerUpdateBuildAliasRequest
// 0x0030 (0x0038 - 0x0008)
struct FMultiplayerUpdateBuildAliasRequest : public FPlayFabRequestCommon
{
	struct FString                                     AliasId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AliasName;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  BuildSelectionCriteria;                                    // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerUntagContainerImageRequest
// 0x0020 (0x0028 - 0x0008)
struct FMultiplayerUntagContainerImageRequest : public FPlayFabRequestCommon
{
	struct FString                                     ImageName;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Tag;                                                       // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerShutdownMultiplayerServerRequest
// 0x0030 (0x0038 - 0x0008)
struct FMultiplayerShutdownMultiplayerServerRequest : public FPlayFabRequestCommon
{
	struct FString                                     BuildId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Region;                                                    // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SessionId;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerRolloverContainerRegistryCredentialsRequest
// 0x0000 (0x0008 - 0x0008)
struct FMultiplayerRolloverContainerRegistryCredentialsRequest : public FPlayFabRequestCommon
{

};
// ScriptStruct PlayFab.MultiplayerRequestMultiplayerServerRequest
// 0x0058 (0x0060 - 0x0008)
struct FMultiplayerRequestMultiplayerServerRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          BuildAliasParams;                                          // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BuildId;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InitialPlayers;                                            // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PreferredRegions;                                          // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SessionCookie;                                             // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SessionId;                                                 // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerListVirtualMachineSummariesRequest
// 0x0038 (0x0040 - 0x0008)
struct FMultiplayerListVirtualMachineSummariesRequest : public FPlayFabRequestCommon
{
	struct FString                                     BuildId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PageSize;                                                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FR84[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Region;                                                    // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SkipToken;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerListServerBackfillTicketsForPlayerRequest
// 0x0018 (0x0020 - 0x0008)
struct FMultiplayerListServerBackfillTicketsForPlayerRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Entity;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     QueueName;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerListQosServersForTitleRequest
// 0x0000 (0x0008 - 0x0008)
struct FMultiplayerListQosServersForTitleRequest : public FPlayFabRequestCommon
{

};
// ScriptStruct PlayFab.MultiplayerListQosServersRequest
// 0x0000 (0x0008 - 0x0008)
struct FMultiplayerListQosServersRequest : public FPlayFabRequestCommon
{

};
// ScriptStruct PlayFab.MultiplayerListPartyQosServersRequest
// 0x0010 (0x0018 - 0x0008)
struct FMultiplayerListPartyQosServersRequest : public FPlayFabRequestCommon
{
	struct FString                                     Version;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerListMatchmakingTicketsForPlayerRequest
// 0x0018 (0x0020 - 0x0008)
struct FMultiplayerListMatchmakingTicketsForPlayerRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Entity;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     QueueName;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerListContainerImageTagsRequest
// 0x0010 (0x0018 - 0x0008)
struct FMultiplayerListContainerImageTagsRequest : public FPlayFabRequestCommon
{
	struct FString                                     ImageName;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerListContainerImagesRequest
// 0x0018 (0x0020 - 0x0008)
struct FMultiplayerListContainerImagesRequest : public FPlayFabRequestCommon
{
	int                                                PageSize;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2SU2[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SkipToken;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerListCertificateSummariesRequest
// 0x0018 (0x0020 - 0x0008)
struct FMultiplayerListCertificateSummariesRequest : public FPlayFabRequestCommon
{
	int                                                PageSize;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NNOP[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SkipToken;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerListBuildSummariesRequest
// 0x0018 (0x0020 - 0x0008)
struct FMultiplayerListBuildSummariesRequest : public FPlayFabRequestCommon
{
	int                                                PageSize;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GM39[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SkipToken;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerMultiplayerEmptyRequest
// 0x0000 (0x0008 - 0x0008)
struct FMultiplayerMultiplayerEmptyRequest : public FPlayFabRequestCommon
{

};
// ScriptStruct PlayFab.MultiplayerListAssetSummariesRequest
// 0x0018 (0x0020 - 0x0008)
struct FMultiplayerListAssetSummariesRequest : public FPlayFabRequestCommon
{
	int                                                PageSize;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TA6M[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SkipToken;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerListMultiplayerServersRequest
// 0x0038 (0x0040 - 0x0008)
struct FMultiplayerListMultiplayerServersRequest : public FPlayFabRequestCommon
{
	struct FString                                     BuildId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PageSize;                                                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GV98[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Region;                                                    // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SkipToken;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerJoinMatchmakingTicketRequest
// 0x0028 (0x0030 - 0x0008)
struct FMultiplayerJoinMatchmakingTicketRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Member;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     QueueName;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TicketId;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerGetTitleMultiplayerServersQuotasRequest
// 0x0000 (0x0008 - 0x0008)
struct FMultiplayerGetTitleMultiplayerServersQuotasRequest : public FPlayFabRequestCommon
{

};
// ScriptStruct PlayFab.MultiplayerGetTitleEnabledForMultiplayerServersStatusRequest
// 0x0000 (0x0008 - 0x0008)
struct FMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest : public FPlayFabRequestCommon
{

};
// ScriptStruct PlayFab.MultiplayerGetServerBackfillTicketRequest
// 0x0028 (0x0030 - 0x0008)
struct FMultiplayerGetServerBackfillTicketRequest : public FPlayFabRequestCommon
{
	bool                                               EscapeObject;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BK30[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     QueueName;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TicketId;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerGetRemoteLoginEndpointRequest
// 0x0030 (0x0038 - 0x0008)
struct FMultiplayerGetRemoteLoginEndpointRequest : public FPlayFabRequestCommon
{
	struct FString                                     BuildId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Region;                                                    // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VmId;                                                      // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerGetQueueStatisticsRequest
// 0x0010 (0x0018 - 0x0008)
struct FMultiplayerGetQueueStatisticsRequest : public FPlayFabRequestCommon
{
	struct FString                                     QueueName;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerGetMultiplayerServerLogsRequest
// 0x0020 (0x0028 - 0x0008)
struct FMultiplayerGetMultiplayerServerLogsRequest : public FPlayFabRequestCommon
{
	struct FString                                     Region;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ServerId;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerGetMultiplayerServerDetailsRequest
// 0x0030 (0x0038 - 0x0008)
struct FMultiplayerGetMultiplayerServerDetailsRequest : public FPlayFabRequestCommon
{
	struct FString                                     BuildId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Region;                                                    // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SessionId;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerGetMatchmakingTicketRequest
// 0x0028 (0x0030 - 0x0008)
struct FMultiplayerGetMatchmakingTicketRequest : public FPlayFabRequestCommon
{
	bool                                               EscapeObject;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FTD9[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     QueueName;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TicketId;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerGetMatchRequest
// 0x0030 (0x0038 - 0x0008)
struct FMultiplayerGetMatchRequest : public FPlayFabRequestCommon
{
	bool                                               EscapeObject;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OZ2Y[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MatchID;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     QueueName;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnMemberAttributes;                                    // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AXZS[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.MultiplayerGetContainerRegistryCredentialsRequest
// 0x0000 (0x0008 - 0x0008)
struct FMultiplayerGetContainerRegistryCredentialsRequest : public FPlayFabRequestCommon
{

};
// ScriptStruct PlayFab.MultiplayerGetBuildAliasRequest
// 0x0010 (0x0018 - 0x0008)
struct FMultiplayerGetBuildAliasRequest : public FPlayFabRequestCommon
{
	struct FString                                     AliasId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerGetBuildRequest
// 0x0010 (0x0018 - 0x0008)
struct FMultiplayerGetBuildRequest : public FPlayFabRequestCommon
{
	struct FString                                     BuildId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerGetAssetUploadUrlRequest
// 0x0010 (0x0018 - 0x0008)
struct FMultiplayerGetAssetUploadUrlRequest : public FPlayFabRequestCommon
{
	struct FString                                     Filename;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerEnableMultiplayerServersForTitleRequest
// 0x0000 (0x0008 - 0x0008)
struct FMultiplayerEnableMultiplayerServersForTitleRequest : public FPlayFabRequestCommon
{

};
// ScriptStruct PlayFab.MultiplayerDeleteRemoteUserRequest
// 0x0040 (0x0048 - 0x0008)
struct FMultiplayerDeleteRemoteUserRequest : public FPlayFabRequestCommon
{
	struct FString                                     BuildId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Region;                                                    // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     username;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VmId;                                                      // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerDeleteCertificateRequest
// 0x0010 (0x0018 - 0x0008)
struct FMultiplayerDeleteCertificateRequest : public FPlayFabRequestCommon
{
	struct FString                                     Name;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerDeleteBuildAliasRequest
// 0x0010 (0x0018 - 0x0008)
struct FMultiplayerDeleteBuildAliasRequest : public FPlayFabRequestCommon
{
	struct FString                                     AliasId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerDeleteBuildRequest
// 0x0010 (0x0018 - 0x0008)
struct FMultiplayerDeleteBuildRequest : public FPlayFabRequestCommon
{
	struct FString                                     BuildId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerDeleteAssetRequest
// 0x0010 (0x0018 - 0x0008)
struct FMultiplayerDeleteAssetRequest : public FPlayFabRequestCommon
{
	struct FString                                     Filename;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerRolloverContainerRegistryCredentialsResponse
// 0x0030 (0x0038 - 0x0008)
struct FMultiplayerRolloverContainerRegistryCredentialsResponse : public FPlayFabResultCommon
{
	struct FString                                     DnsName;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Password;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     username;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerRequestMultiplayerServerResponse
// 0x00A0 (0x00A8 - 0x0008)
struct FMultiplayerRequestMultiplayerServerResponse : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  ConnectedPlayers;                                          // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     FQDN;                                                      // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     IPV4Address;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LastStateTransitionTime;                                   // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  Ports;                                                     // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     Region;                                                    // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ServerId;                                                  // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SessionId;                                                 // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     State;                                                     // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VmId;                                                      // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerListVirtualMachineSummariesResponse
// 0x0028 (0x0030 - 0x0008)
struct FMultiplayerListVirtualMachineSummariesResponse : public FPlayFabResultCommon
{
	int                                                PageSize;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O6SI[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SkipToken;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  VirtualMachines;                                           // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerListServerBackfillTicketsForPlayerResult
// 0x0010 (0x0018 - 0x0008)
struct FMultiplayerListServerBackfillTicketsForPlayerResult : public FPlayFabResultCommon
{
	struct FString                                     TicketIds;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerListQosServersForTitleResponse
// 0x0028 (0x0030 - 0x0008)
struct FMultiplayerListQosServersForTitleResponse : public FPlayFabResultCommon
{
	int                                                PageSize;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2Q8X[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UPlayFabJsonObject*>                  QosServers;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     SkipToken;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerListQosServersResponse
// 0x0028 (0x0030 - 0x0008)
struct FMultiplayerListQosServersResponse : public FPlayFabResultCommon
{
	int                                                PageSize;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NO8F[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UPlayFabJsonObject*>                  QosServers;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     SkipToken;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerListPartyQosServersResponse
// 0x0028 (0x0030 - 0x0008)
struct FMultiplayerListPartyQosServersResponse : public FPlayFabResultCommon
{
	int                                                PageSize;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0SJO[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UPlayFabJsonObject*>                  QosServers;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     SkipToken;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerListMatchmakingTicketsForPlayerResult
// 0x0010 (0x0018 - 0x0008)
struct FMultiplayerListMatchmakingTicketsForPlayerResult : public FPlayFabResultCommon
{
	struct FString                                     TicketIds;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerListContainerImageTagsResponse
// 0x0010 (0x0018 - 0x0008)
struct FMultiplayerListContainerImageTagsResponse : public FPlayFabResultCommon
{
	struct FString                                     Tags;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerListContainerImagesResponse
// 0x0028 (0x0030 - 0x0008)
struct FMultiplayerListContainerImagesResponse : public FPlayFabResultCommon
{
	struct FString                                     Images;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PageSize;                                                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_19UK[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SkipToken;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerListCertificateSummariesResponse
// 0x0028 (0x0030 - 0x0008)
struct FMultiplayerListCertificateSummariesResponse : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  CertificateSummaries;                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                PageSize;                                                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_83N9[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SkipToken;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerListBuildSummariesResponse
// 0x0028 (0x0030 - 0x0008)
struct FMultiplayerListBuildSummariesResponse : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  BuildSummaries;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                PageSize;                                                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y8KI[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SkipToken;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerListBuildAliasesForTitleResponse
// 0x0010 (0x0018 - 0x0008)
struct FMultiplayerListBuildAliasesForTitleResponse : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  BuildAliases;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerListAssetSummariesResponse
// 0x0028 (0x0030 - 0x0008)
struct FMultiplayerListAssetSummariesResponse : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  AssetSummaries;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                PageSize;                                                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UF7E[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SkipToken;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerListMultiplayerServersResponse
// 0x0028 (0x0030 - 0x0008)
struct FMultiplayerListMultiplayerServersResponse : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  MultiplayerServerSummaries;                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                PageSize;                                                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HM7N[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SkipToken;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerJoinMatchmakingTicketResult
// 0x0000 (0x0008 - 0x0008)
struct FMultiplayerJoinMatchmakingTicketResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.MultiplayerGetTitleMultiplayerServersQuotasResponse
// 0x0008 (0x0010 - 0x0008)
struct FMultiplayerGetTitleMultiplayerServersQuotasResponse : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          Quotas;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerGetTitleEnabledForMultiplayerServersStatusResponse
// 0x0008 (0x0010 - 0x0008)
struct FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse : public FPlayFabResultCommon
{
	ETitleMultiplayerServerEnabledStatus               Status;                                                    // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YQTH[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.MultiplayerGetServerBackfillTicketResult
// 0x0080 (0x0088 - 0x0008)
struct FMultiplayerGetServerBackfillTicketResult : public FPlayFabResultCommon
{
	struct FString                                     CancellationReasonString;                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Created;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GiveUpAfterSeconds;                                        // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AM8Z[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MatchID;                                                   // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  Members;                                                   // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     QueueName;                                                 // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          ServerDetails;                                             // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Status;                                                    // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TicketId;                                                  // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerGetRemoteLoginEndpointResponse
// 0x0018 (0x0020 - 0x0008)
struct FMultiplayerGetRemoteLoginEndpointResponse : public FPlayFabResultCommon
{
	struct FString                                     IPV4Address;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Port;                                                      // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YFLH[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.MultiplayerGetQueueStatisticsResult
// 0x0010 (0x0018 - 0x0008)
struct FMultiplayerGetQueueStatisticsResult : public FPlayFabResultCommon
{
	int                                                NumberOfPlayersMatching;                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H2I4[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPlayFabJsonObject*                          TimeToMatchStatisticsInSeconds;                            // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerGetMultiplayerServerLogsResponse
// 0x0010 (0x0018 - 0x0008)
struct FMultiplayerGetMultiplayerServerLogsResponse : public FPlayFabResultCommon
{
	struct FString                                     LogDownloadUrl;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerGetMultiplayerServerDetailsResponse
// 0x00A0 (0x00A8 - 0x0008)
struct FMultiplayerGetMultiplayerServerDetailsResponse : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  ConnectedPlayers;                                          // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     FQDN;                                                      // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     IPV4Address;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LastStateTransitionTime;                                   // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  Ports;                                                     // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     Region;                                                    // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ServerId;                                                  // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SessionId;                                                 // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     State;                                                     // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VmId;                                                      // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerGetMatchmakingTicketResult
// 0x0090 (0x0098 - 0x0008)
struct FMultiplayerGetMatchmakingTicketResult : public FPlayFabResultCommon
{
	struct FString                                     CancellationReasonString;                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Created;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          Creator;                                                   // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GiveUpAfterSeconds;                                        // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V93F[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MatchID;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  Members;                                                   // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  MembersToMatchWith;                                        // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     QueueName;                                                 // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Status;                                                    // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TicketId;                                                  // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerGetMatchResult
// 0x0038 (0x0040 - 0x0008)
struct FMultiplayerGetMatchResult : public FPlayFabResultCommon
{
	struct FString                                     MatchID;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  Members;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     RegionPreferences;                                         // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          ServerDetails;                                             // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerGetContainerRegistryCredentialsResponse
// 0x0030 (0x0038 - 0x0008)
struct FMultiplayerGetContainerRegistryCredentialsResponse : public FPlayFabResultCommon
{
	struct FString                                     DnsName;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Password;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     username;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerGetBuildResponse
// 0x00D0 (0x00D8 - 0x0008)
struct FMultiplayerGetBuildResponse : public FPlayFabResultCommon
{
	struct FString                                     BuildId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BuildName;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BuildStatus;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EContainerFlavor                                   ContainerFlavor;                                           // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UZKJ[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ContainerRunCommand;                                       // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CreationTime;                                              // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          CustomGameContainerImage;                                  // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  GameAssetReferences;                                       // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  GameCertificateReferences;                                 // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          InstrumentationConfiguration;                              // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          MetaData;                                                  // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MultiplayerServerCountPerVm;                               // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BPR1[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UPlayFabJsonObject*>                  Ports;                                                     // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  RegionConfigurations;                                      // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     StartMultiplayerServerCommand;                             // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAzureVmSize                                       VmSize;                                                    // 0x00D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y5WL[0x7];                                     // 0x00D1(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.MultiplayerGetAssetUploadUrlResponse
// 0x0020 (0x0028 - 0x0008)
struct FMultiplayerGetAssetUploadUrlResponse : public FPlayFabResultCommon
{
	struct FString                                     AssetUploadUrl;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Filename;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerEnableMultiplayerServersForTitleResponse
// 0x0008 (0x0010 - 0x0008)
struct FMultiplayerEnableMultiplayerServersForTitleResponse : public FPlayFabResultCommon
{
	ETitleMultiplayerServerEnabledStatus               Status;                                                    // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X9SC[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.MultiplayerEmptyResponse
// 0x0000 (0x0008 - 0x0008)
struct FMultiplayerEmptyResponse : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.MultiplayerCreateServerMatchmakingTicketRequest
// 0x0028 (0x0030 - 0x0008)
struct FMultiplayerCreateServerMatchmakingTicketRequest : public FPlayFabRequestCommon
{
	int                                                GiveUpAfterSeconds;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TBH4[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UPlayFabJsonObject*>                  Members;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     QueueName;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerCreateServerBackfillTicketRequest
// 0x0030 (0x0038 - 0x0008)
struct FMultiplayerCreateServerBackfillTicketRequest : public FPlayFabRequestCommon
{
	int                                                GiveUpAfterSeconds;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SF2B[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UPlayFabJsonObject*>                  Members;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     QueueName;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          ServerDetails;                                             // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerCreateServerBackfillTicketResult
// 0x0010 (0x0018 - 0x0008)
struct FMultiplayerCreateServerBackfillTicketResult : public FPlayFabResultCommon
{
	struct FString                                     TicketId;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerCreateRemoteUserRequest
// 0x0050 (0x0058 - 0x0008)
struct FMultiplayerCreateRemoteUserRequest : public FPlayFabRequestCommon
{
	struct FString                                     BuildId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ExpirationTime;                                            // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Region;                                                    // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     username;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VmId;                                                      // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerCreateRemoteUserResponse
// 0x0030 (0x0038 - 0x0008)
struct FMultiplayerCreateRemoteUserResponse : public FPlayFabResultCommon
{
	struct FString                                     ExpirationTime;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Password;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     username;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerCreateMatchmakingTicketRequest
// 0x0030 (0x0038 - 0x0008)
struct FMultiplayerCreateMatchmakingTicketRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Creator;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GiveUpAfterSeconds;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NTE6[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UPlayFabJsonObject*>                  MembersToMatchWith;                                        // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     QueueName;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerCreateMatchmakingTicketResult
// 0x0010 (0x0018 - 0x0008)
struct FMultiplayerCreateMatchmakingTicketResult : public FPlayFabResultCommon
{
	struct FString                                     TicketId;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerCreateBuildWithManagedContainerRequest
// 0x0088 (0x0090 - 0x0008)
struct FMultiplayerCreateBuildWithManagedContainerRequest : public FPlayFabRequestCommon
{
	struct FString                                     BuildName;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EContainerFlavor                                   ContainerFlavor;                                           // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H48A[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UPlayFabJsonObject*>                  GameAssetReferences;                                       // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  GameCertificateReferences;                                 // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          InstrumentationConfiguration;                              // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          MetaData;                                                  // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MultiplayerServerCountPerVm;                               // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GCU2[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UPlayFabJsonObject*>                  Ports;                                                     // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  RegionConfigurations;                                      // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     StartMultiplayerServerCommand;                             // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAzureVmSize                                       VmSize;                                                    // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1IJO[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.MultiplayerCreateBuildWithManagedContainerResponse
// 0x00A8 (0x00B0 - 0x0008)
struct FMultiplayerCreateBuildWithManagedContainerResponse : public FPlayFabResultCommon
{
	struct FString                                     BuildId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BuildName;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EContainerFlavor                                   ContainerFlavor;                                           // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_789K[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CreationTime;                                              // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  GameAssetReferences;                                       // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  GameCertificateReferences;                                 // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          InstrumentationConfiguration;                              // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          MetaData;                                                  // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MultiplayerServerCountPerVm;                               // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RY1Q[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UPlayFabJsonObject*>                  Ports;                                                     // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  RegionConfigurations;                                      // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     StartMultiplayerServerCommand;                             // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAzureVmSize                                       VmSize;                                                    // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_86EK[0x7];                                     // 0x00A9(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.MultiplayerCreateBuildWithCustomContainerRequest
// 0x0088 (0x0090 - 0x0008)
struct FMultiplayerCreateBuildWithCustomContainerRequest : public FPlayFabRequestCommon
{
	struct FString                                     BuildName;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EContainerFlavor                                   ContainerFlavor;                                           // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SY8J[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPlayFabJsonObject*                          ContainerImageReference;                                   // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ContainerRunCommand;                                       // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  GameAssetReferences;                                       // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  GameCertificateReferences;                                 // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          MetaData;                                                  // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MultiplayerServerCountPerVm;                               // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PS2X[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UPlayFabJsonObject*>                  Ports;                                                     // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  RegionConfigurations;                                      // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	EAzureVmSize                                       VmSize;                                                    // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3TTB[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.MultiplayerCreateBuildWithCustomContainerResponse
// 0x00A8 (0x00B0 - 0x0008)
struct FMultiplayerCreateBuildWithCustomContainerResponse : public FPlayFabResultCommon
{
	struct FString                                     BuildId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BuildName;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EContainerFlavor                                   ContainerFlavor;                                           // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YDXN[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ContainerRunCommand;                                       // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CreationTime;                                              // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          CustomGameContainerImage;                                  // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  GameAssetReferences;                                       // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  GameCertificateReferences;                                 // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          MetaData;                                                  // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MultiplayerServerCountPerVm;                               // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FAZK[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UPlayFabJsonObject*>                  Ports;                                                     // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  RegionConfigurations;                                      // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	EAzureVmSize                                       VmSize;                                                    // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TVG0[0x7];                                     // 0x00A9(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.MultiplayerCreateBuildAliasRequest
// 0x0020 (0x0028 - 0x0008)
struct FMultiplayerCreateBuildAliasRequest : public FPlayFabRequestCommon
{
	struct FString                                     AliasName;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  BuildSelectionCriteria;                                    // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerBuildAliasDetailsResponse
// 0x0048 (0x0050 - 0x0008)
struct FMultiplayerBuildAliasDetailsResponse : public FPlayFabResultCommon
{
	struct FString                                     AliasId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AliasName;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  BuildSelectionCriteria;                                    // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                PageSize;                                                  // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LPU2[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SkipToken;                                                 // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerCancelServerBackfillTicketRequest
// 0x0020 (0x0028 - 0x0008)
struct FMultiplayerCancelServerBackfillTicketRequest : public FPlayFabRequestCommon
{
	struct FString                                     QueueName;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TicketId;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerCancelServerBackfillTicketResult
// 0x0000 (0x0008 - 0x0008)
struct FMultiplayerCancelServerBackfillTicketResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.MultiplayerCancelMatchmakingTicketRequest
// 0x0020 (0x0028 - 0x0008)
struct FMultiplayerCancelMatchmakingTicketRequest : public FPlayFabRequestCommon
{
	struct FString                                     QueueName;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TicketId;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerCancelMatchmakingTicketResult
// 0x0000 (0x0008 - 0x0008)
struct FMultiplayerCancelMatchmakingTicketResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.MultiplayerCancelAllServerBackfillTicketsForPlayerRequest
// 0x0018 (0x0020 - 0x0008)
struct FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Entity;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     QueueName;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerCancelAllServerBackfillTicketsForPlayerResult
// 0x0000 (0x0008 - 0x0008)
struct FMultiplayerCancelAllServerBackfillTicketsForPlayerResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.MultiplayerCancelAllMatchmakingTicketsForPlayerRequest
// 0x0018 (0x0020 - 0x0008)
struct FMultiplayerCancelAllMatchmakingTicketsForPlayerRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Entity;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     QueueName;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MultiplayerCancelAllMatchmakingTicketsForPlayerResult
// 0x0000 (0x0008 - 0x0008)
struct FMultiplayerCancelAllMatchmakingTicketsForPlayerResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.MatchmakerUserInfoRequest
// 0x0018 (0x0020 - 0x0008)
struct FMatchmakerUserInfoRequest : public FPlayFabRequestCommon
{
	int                                                MinCatalogVersion;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FJHS[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayFabId;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MatchmakerStartGameRequest
// 0x0048 (0x0050 - 0x0008)
struct FMatchmakerStartGameRequest : public FPlayFabRequestCommon
{
	struct FString                                     Build;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CustomCommandLineData;                                     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ExternalMatchmakerEventEndpoint;                           // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameMode;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERegion                                            Region;                                                    // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KFN1[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.MatchmakerPlayerLeftRequest
// 0x0020 (0x0028 - 0x0008)
struct FMatchmakerPlayerLeftRequest : public FPlayFabRequestCommon
{
	struct FString                                     LobbyId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MatchmakerPlayerJoinedRequest
// 0x0020 (0x0028 - 0x0008)
struct FMatchmakerPlayerJoinedRequest : public FPlayFabRequestCommon
{
	struct FString                                     LobbyId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MatchmakerUserInfoResponse
// 0x0068 (0x0070 - 0x0008)
struct FMatchmakerUserInfoResponse : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Inventory;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               IsDeveloper;                                               // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_47CF[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayFabId;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SteamId;                                                   // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TitleDisplayName;                                          // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     username;                                                  // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          VirtualCurrency;                                           // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          VirtualCurrencyRechargeTimes;                              // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MatchmakerStartGameResponse
// 0x0048 (0x0050 - 0x0008)
struct FMatchmakerStartGameResponse : public FPlayFabResultCommon
{
	struct FString                                     GameID;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ServerIPV4Address;                                         // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ServerIPV6Address;                                         // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ServerPort;                                                // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JWM4[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ServerPublicDNSName;                                       // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MatchmakerPlayerLeftResponse
// 0x0000 (0x0008 - 0x0008)
struct FMatchmakerPlayerLeftResponse : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.MatchmakerPlayerJoinedResponse
// 0x0000 (0x0008 - 0x0008)
struct FMatchmakerPlayerJoinedResponse : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.MatchmakerAuthUserRequest
// 0x0010 (0x0018 - 0x0008)
struct FMatchmakerAuthUserRequest : public FPlayFabRequestCommon
{
	struct FString                                     AuthorizationTicket;                                       // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.MatchmakerAuthUserResponse
// 0x0018 (0x0020 - 0x0008)
struct FMatchmakerAuthUserResponse : public FPlayFabResultCommon
{
	bool                                               Authorized;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OD3Y[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayFabId;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.LocalizationGetLanguageListRequest
// 0x0000 (0x0008 - 0x0008)
struct FLocalizationGetLanguageListRequest : public FPlayFabRequestCommon
{

};
// ScriptStruct PlayFab.LocalizationGetLanguageListResponse
// 0x0010 (0x0018 - 0x0008)
struct FLocalizationGetLanguageListResponse : public FPlayFabResultCommon
{
	struct FString                                     LanguageList;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.GroupsUpdateGroupRoleRequest
// 0x0030 (0x0038 - 0x0008)
struct FGroupsUpdateGroupRoleRequest : public FPlayFabRequestCommon
{
	int                                                ExpectedProfileVersion;                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4BTL[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPlayFabJsonObject*                          Group;                                                     // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RoleId;                                                    // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RoleName;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.GroupsUpdateGroupRequest
// 0x0040 (0x0048 - 0x0008)
struct FGroupsUpdateGroupRequest : public FPlayFabRequestCommon
{
	struct FString                                     AdminRoleId;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ExpectedProfileVersion;                                    // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2KY0[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPlayFabJsonObject*                          Group;                                                     // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GroupName;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MemberRoleId;                                              // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.GroupsUnblockEntityRequest
// 0x0010 (0x0018 - 0x0008)
struct FGroupsUnblockEntityRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Entity;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          Group;                                                     // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.GroupsRemoveMembersRequest
// 0x0028 (0x0030 - 0x0008)
struct FGroupsRemoveMembersRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Group;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  Members;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     RoleId;                                                    // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.GroupsRemoveGroupInvitationRequest
// 0x0010 (0x0018 - 0x0008)
struct FGroupsRemoveGroupInvitationRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Entity;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          Group;                                                     // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.GroupsRemoveGroupApplicationRequest
// 0x0010 (0x0018 - 0x0008)
struct FGroupsRemoveGroupApplicationRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Entity;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          Group;                                                     // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.GroupsListMembershipOpportunitiesRequest
// 0x0008 (0x0010 - 0x0008)
struct FGroupsListMembershipOpportunitiesRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Entity;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.GroupsListMembershipRequest
// 0x0008 (0x0010 - 0x0008)
struct FGroupsListMembershipRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Entity;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.GroupsListGroupMembersRequest
// 0x0008 (0x0010 - 0x0008)
struct FGroupsListGroupMembersRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Group;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.GroupsListGroupInvitationsRequest
// 0x0008 (0x0010 - 0x0008)
struct FGroupsListGroupInvitationsRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Group;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.GroupsListGroupBlocksRequest
// 0x0008 (0x0010 - 0x0008)
struct FGroupsListGroupBlocksRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Group;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.GroupsListGroupApplicationsRequest
// 0x0008 (0x0010 - 0x0008)
struct FGroupsListGroupApplicationsRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Group;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.GroupsIsMemberRequest
// 0x0020 (0x0028 - 0x0008)
struct FGroupsIsMemberRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Entity;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          Group;                                                     // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RoleId;                                                    // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.GroupsInviteToGroupRequest
// 0x0028 (0x0030 - 0x0008)
struct FGroupsInviteToGroupRequest : public FPlayFabRequestCommon
{
	bool                                               AutoAcceptOutstandingApplication;                          // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UAYO[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPlayFabJsonObject*                          Entity;                                                    // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          Group;                                                     // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RoleId;                                                    // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.GroupsGetGroupRequest
// 0x0018 (0x0020 - 0x0008)
struct FGroupsGetGroupRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Group;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GroupName;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.GroupsDeleteRoleRequest
// 0x0018 (0x0020 - 0x0008)
struct FGroupsDeleteRoleRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Group;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RoleId;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.GroupsDeleteGroupRequest
// 0x0008 (0x0010 - 0x0008)
struct FGroupsDeleteGroupRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Group;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.GroupsUpdateGroupRoleResponse
// 0x0018 (0x0020 - 0x0008)
struct FGroupsUpdateGroupRoleResponse : public FPlayFabResultCommon
{
	struct FString                                     OperationReason;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ProfileVersion;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOperationTypes                                    SetResult;                                                 // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DGCM[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.GroupsUpdateGroupResponse
// 0x0018 (0x0020 - 0x0008)
struct FGroupsUpdateGroupResponse : public FPlayFabResultCommon
{
	struct FString                                     OperationReason;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ProfileVersion;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOperationTypes                                    SetResult;                                                 // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_38QW[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.GroupsListMembershipOpportunitiesResponse
// 0x0020 (0x0028 - 0x0008)
struct FGroupsListMembershipOpportunitiesResponse : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Applications;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  Invitations;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.GroupsListMembershipResponse
// 0x0010 (0x0018 - 0x0008)
struct FGroupsListMembershipResponse : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Groups;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientLoginResult
// 0x0058 (0x0068 - 0x0010)
struct FClientLoginResult : public FPlayFabLoginResultCommon
{
	class UPlayFabJsonObject*                          EntityToken;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          InfoResultPayload;                                         // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LastLoginTime;                                             // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               NewlyCreated;                                              // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WRV0[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayFabId;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SessionTicket;                                             // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          SettingsForUser;                                           // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          TreatmentAssignment;                                       // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientLinkXboxAccountResult
// 0x0000 (0x0008 - 0x0008)
struct FClientLinkXboxAccountResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientLinkWindowsHelloAccountResponse
// 0x0000 (0x0008 - 0x0008)
struct FClientLinkWindowsHelloAccountResponse : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientLinkTwitchAccountResult
// 0x0000 (0x0008 - 0x0008)
struct FClientLinkTwitchAccountResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientLinkSteamAccountResult
// 0x0000 (0x0008 - 0x0008)
struct FClientLinkSteamAccountResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientLinkPSNAccountResult
// 0x0000 (0x0008 - 0x0008)
struct FClientLinkPSNAccountResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientEmptyResult
// 0x0000 (0x0008 - 0x0008)
struct FClientEmptyResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientLinkNintendoSwitchDeviceIdResult
// 0x0000 (0x0008 - 0x0008)
struct FClientLinkNintendoSwitchDeviceIdResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientLinkKongregateAccountResult
// 0x0000 (0x0008 - 0x0008)
struct FClientLinkKongregateAccountResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientLinkIOSDeviceIDResult
// 0x0000 (0x0008 - 0x0008)
struct FClientLinkIOSDeviceIDResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientLinkGoogleAccountResult
// 0x0000 (0x0008 - 0x0008)
struct FClientLinkGoogleAccountResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientLinkGameCenterAccountResult
// 0x0000 (0x0008 - 0x0008)
struct FClientLinkGameCenterAccountResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientLinkFacebookInstantGamesIdResult
// 0x0000 (0x0008 - 0x0008)
struct FClientLinkFacebookInstantGamesIdResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientLinkFacebookAccountResult
// 0x0000 (0x0008 - 0x0008)
struct FClientLinkFacebookAccountResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientLinkCustomIDResult
// 0x0000 (0x0008 - 0x0008)
struct FClientLinkCustomIDResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientLinkAndroidDeviceIDResult
// 0x0000 (0x0008 - 0x0008)
struct FClientLinkAndroidDeviceIDResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientGrantCharacterToUserResult
// 0x0028 (0x0030 - 0x0008)
struct FClientGrantCharacterToUserResult : public FPlayFabResultCommon
{
	struct FString                                     CharacterId;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharacterType;                                             // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Result;                                                    // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S74Q[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.ClientGetWindowsHelloChallengeResponse
// 0x0010 (0x0018 - 0x0008)
struct FClientGetWindowsHelloChallengeResponse : public FPlayFabResultCommon
{
	struct FString                                     Challenge;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetUserInventoryResult
// 0x0020 (0x0028 - 0x0008)
struct FClientGetUserInventoryResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Inventory;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          VirtualCurrency;                                           // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          VirtualCurrencyRechargeTimes;                              // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetUserDataResult
// 0x0010 (0x0018 - 0x0008)
struct FClientGetUserDataResult : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          Data;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DataVersion;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KKJB[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.ClientGetTradeStatusResponse
// 0x0008 (0x0010 - 0x0008)
struct FClientGetTradeStatusResponse : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          Trade;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetTitlePublicKeyResult
// 0x0010 (0x0018 - 0x0008)
struct FClientGetTitlePublicKeyResult : public FPlayFabResultCommon
{
	struct FString                                     RSAPublicKey;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetTitleNewsResult
// 0x0010 (0x0018 - 0x0008)
struct FClientGetTitleNewsResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  News;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetTitleDataResult
// 0x0008 (0x0010 - 0x0008)
struct FClientGetTitleDataResult : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          Data;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetTimeResult
// 0x0010 (0x0018 - 0x0008)
struct FClientGetTimeResult : public FPlayFabResultCommon
{
	struct FString                                     Time;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetStoreItemsResult
// 0x0040 (0x0048 - 0x0008)
struct FClientGetStoreItemsResult : public FPlayFabResultCommon
{
	struct FString                                     CatalogVersion;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          MarketingData;                                             // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPfSourceType                                      Source;                                                    // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_30G5[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UPlayFabJsonObject*>                  Store;                                                     // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     StoreId;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetSharedGroupDataResult
// 0x0018 (0x0020 - 0x0008)
struct FClientGetSharedGroupDataResult : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          Data;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Members;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetPurchaseResult
// 0x0050 (0x0058 - 0x0008)
struct FClientGetPurchaseResult : public FPlayFabResultCommon
{
	struct FString                                     OrderId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PaymentProvider;                                           // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PurchaseDate;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TransactionId;                                             // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TransactionStatus;                                         // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetPublisherDataResult
// 0x0008 (0x0010 - 0x0008)
struct FClientGetPublisherDataResult : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          Data;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromXboxLiveIDsResult
// 0x0010 (0x0018 - 0x0008)
struct FClientGetPlayFabIDsFromXboxLiveIDsResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Data;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromTwitchIDsResult
// 0x0010 (0x0018 - 0x0008)
struct FClientGetPlayFabIDsFromTwitchIDsResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Data;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromSteamIDsResult
// 0x0010 (0x0018 - 0x0008)
struct FClientGetPlayFabIDsFromSteamIDsResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Data;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromPSNAccountIDsResult
// 0x0010 (0x0018 - 0x0008)
struct FClientGetPlayFabIDsFromPSNAccountIDsResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Data;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult
// 0x0010 (0x0018 - 0x0008)
struct FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Data;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromKongregateIDsResult
// 0x0010 (0x0018 - 0x0008)
struct FClientGetPlayFabIDsFromKongregateIDsResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Data;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromGoogleIDsResult
// 0x0010 (0x0018 - 0x0008)
struct FClientGetPlayFabIDsFromGoogleIDsResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Data;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromGenericIDsResult
// 0x0010 (0x0018 - 0x0008)
struct FClientGetPlayFabIDsFromGenericIDsResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Data;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromGameCenterIDsResult
// 0x0010 (0x0018 - 0x0008)
struct FClientGetPlayFabIDsFromGameCenterIDsResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Data;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromFacebookInstantGamesIdsResult
// 0x0010 (0x0018 - 0x0008)
struct FClientGetPlayFabIDsFromFacebookInstantGamesIdsResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Data;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromFacebookIDsResult
// 0x0010 (0x0018 - 0x0008)
struct FClientGetPlayFabIDsFromFacebookIDsResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Data;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetPlayerTradesResponse
// 0x0020 (0x0028 - 0x0008)
struct FClientGetPlayerTradesResponse : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  AcceptedTrades;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  OpenedTrades;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetPlayerTagsResult
// 0x0020 (0x0028 - 0x0008)
struct FClientGetPlayerTagsResult : public FPlayFabResultCommon
{
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Tags;                                                      // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetPlayerStatisticVersionsResult
// 0x0010 (0x0018 - 0x0008)
struct FClientGetPlayerStatisticVersionsResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  StatisticVersions;                                         // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetPlayerStatisticsResult
// 0x0010 (0x0018 - 0x0008)
struct FClientGetPlayerStatisticsResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Statistics;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetPlayerSegmentsResult
// 0x0010 (0x0018 - 0x0008)
struct FClientGetPlayerSegmentsResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Segments;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetPlayerProfileResult
// 0x0008 (0x0010 - 0x0008)
struct FClientGetPlayerProfileResult : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          PlayerProfile;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetPlayerCombinedInfoResult
// 0x0018 (0x0020 - 0x0008)
struct FClientGetPlayerCombinedInfoResult : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          InfoResultPayload;                                         // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetPhotonAuthenticationTokenResult
// 0x0010 (0x0018 - 0x0008)
struct FClientGetPhotonAuthenticationTokenResult : public FPlayFabResultCommon
{
	struct FString                                     PhotonCustomAuthenticationToken;                           // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetPaymentTokenResult
// 0x0020 (0x0028 - 0x0008)
struct FClientGetPaymentTokenResult : public FPlayFabResultCommon
{
	struct FString                                     OrderId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ProviderToken;                                             // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetLeaderboardForUsersCharactersResult
// 0x0010 (0x0018 - 0x0008)
struct FClientGetLeaderboardForUsersCharactersResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Leaderboard;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetLeaderboardAroundPlayerResult
// 0x0028 (0x0030 - 0x0008)
struct FClientGetLeaderboardAroundPlayerResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Leaderboard;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     NextReset;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Version;                                                   // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_02O6[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.ClientGetLeaderboardAroundCharacterResult
// 0x0010 (0x0018 - 0x0008)
struct FClientGetLeaderboardAroundCharacterResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Leaderboard;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGameServerRegionsResult
// 0x0010 (0x0018 - 0x0008)
struct FClientGameServerRegionsResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Regions;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetFriendsListResult
// 0x0010 (0x0018 - 0x0008)
struct FClientGetFriendsListResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Friends;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetFriendLeaderboardAroundPlayerResult
// 0x0028 (0x0030 - 0x0008)
struct FClientGetFriendLeaderboardAroundPlayerResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Leaderboard;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     NextReset;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Version;                                                   // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6JPB[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.ClientGetLeaderboardResult
// 0x0028 (0x0030 - 0x0008)
struct FClientGetLeaderboardResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Leaderboard;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     NextReset;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Version;                                                   // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0LV9[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.ClientCurrentGamesResult
// 0x0020 (0x0028 - 0x0008)
struct FClientCurrentGamesResult : public FPlayFabResultCommon
{
	int                                                GameCount;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N1T9[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UPlayFabJsonObject*>                  Games;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                PlayerCount;                                               // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LJ3M[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.ClientGetContentDownloadUrlResult
// 0x0010 (0x0018 - 0x0008)
struct FClientGetContentDownloadUrlResult : public FPlayFabResultCommon
{
	struct FString                                     URL;                                                       // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetCharacterStatisticsResult
// 0x0008 (0x0010 - 0x0008)
struct FClientGetCharacterStatisticsResult : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          CharacterStatistics;                                       // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetCharacterLeaderboardResult
// 0x0010 (0x0018 - 0x0008)
struct FClientGetCharacterLeaderboardResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Leaderboard;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetCharacterInventoryResult
// 0x0030 (0x0038 - 0x0008)
struct FClientGetCharacterInventoryResult : public FPlayFabResultCommon
{
	struct FString                                     CharacterId;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  Inventory;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          VirtualCurrency;                                           // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          VirtualCurrencyRechargeTimes;                              // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetCharacterDataResult
// 0x0020 (0x0028 - 0x0008)
struct FClientGetCharacterDataResult : public FPlayFabResultCommon
{
	struct FString                                     CharacterId;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          Data;                                                      // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DataVersion;                                               // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LWL7[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.ClientGetCatalogItemsResult
// 0x0010 (0x0018 - 0x0008)
struct FClientGetCatalogItemsResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Catalog;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientListUsersCharactersResult
// 0x0010 (0x0018 - 0x0008)
struct FClientListUsersCharactersResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Characters;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetAccountInfoResult
// 0x0008 (0x0010 - 0x0008)
struct FClientGetAccountInfoResult : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          AccountInfo;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientExecuteCloudScriptResult
// 0x0058 (0x0060 - 0x0008)
struct FClientExecuteCloudScriptResult : public FPlayFabResultCommon
{
	int                                                APIRequestsIssued;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D0N1[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPlayFabJsonObject*                          Error;                                                     // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ExecutionTimeSeconds;                                      // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YIBK[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     FunctionName;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          FunctionResult;                                            // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               FunctionResultTooLarge;                                    // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ASHT[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                HttpRequestsIssued;                                        // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  Logs;                                                      // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               LogsTooLarge;                                              // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q1A6[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MemoryConsumedBytes;                                       // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ProcessorTimeSeconds;                                      // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Revision;                                                  // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientCreateSharedGroupRequest
// 0x0010 (0x0018 - 0x0008)
struct FClientCreateSharedGroupRequest : public FPlayFabRequestCommon
{
	struct FString                                     SharedGroupId;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientCreateSharedGroupResult
// 0x0010 (0x0018 - 0x0008)
struct FClientCreateSharedGroupResult : public FPlayFabResultCommon
{
	struct FString                                     SharedGroupId;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientConsumeXboxEntitlementsRequest
// 0x0020 (0x0028 - 0x0008)
struct FClientConsumeXboxEntitlementsRequest : public FPlayFabRequestCommon
{
	struct FString                                     CatalogVersion;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     XboxToken;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientConsumeXboxEntitlementsResult
// 0x0010 (0x0018 - 0x0008)
struct FClientConsumeXboxEntitlementsResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Items;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientConsumePSNEntitlementsRequest
// 0x0018 (0x0020 - 0x0008)
struct FClientConsumePSNEntitlementsRequest : public FPlayFabRequestCommon
{
	struct FString                                     CatalogVersion;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ServiceLabel;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SZ5F[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.ClientConsumePSNEntitlementsResult
// 0x0010 (0x0018 - 0x0008)
struct FClientConsumePSNEntitlementsResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  ItemsGranted;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientConsumeItemRequest
// 0x0028 (0x0030 - 0x0008)
struct FClientConsumeItemRequest : public FPlayFabRequestCommon
{
	struct FString                                     CharacterId;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ConsumeCount;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HNU7[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ItemInstanceId;                                            // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientConsumeItemResult
// 0x0018 (0x0020 - 0x0008)
struct FClientConsumeItemResult : public FPlayFabResultCommon
{
	struct FString                                     ItemInstanceId;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RemainingUses;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HW7I[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.ClientConfirmPurchaseRequest
// 0x0010 (0x0018 - 0x0008)
struct FClientConfirmPurchaseRequest : public FPlayFabRequestCommon
{
	struct FString                                     OrderId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientConfirmPurchaseResult
// 0x0030 (0x0038 - 0x0008)
struct FClientConfirmPurchaseResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Items;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     OrderId;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PurchaseDate;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientCancelTradeRequest
// 0x0010 (0x0018 - 0x0008)
struct FClientCancelTradeRequest : public FPlayFabRequestCommon
{
	struct FString                                     TradeId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientCancelTradeResponse
// 0x0008 (0x0010 - 0x0008)
struct FClientCancelTradeResponse : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          Trade;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientAttributeInstallRequest
// 0x0020 (0x0028 - 0x0008)
struct FClientAttributeInstallRequest : public FPlayFabRequestCommon
{
	struct FString                                     Adid;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Idfa;                                                      // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientAttributeInstallResult
// 0x0000 (0x0008 - 0x0008)
struct FClientAttributeInstallResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientAndroidDevicePushNotificationRegistrationRequest
// 0x0028 (0x0030 - 0x0008)
struct FClientAndroidDevicePushNotificationRegistrationRequest : public FPlayFabRequestCommon
{
	struct FString                                     ConfirmationMessage;                                       // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DeviceToken;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SendPushNotificationConfirmation;                          // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_98BY[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.ClientAndroidDevicePushNotificationRegistrationResult
// 0x0000 (0x0008 - 0x0008)
struct FClientAndroidDevicePushNotificationRegistrationResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientAddUserVirtualCurrencyRequest
// 0x0018 (0x0020 - 0x0008)
struct FClientAddUserVirtualCurrencyRequest : public FPlayFabRequestCommon
{
	int                                                Amount;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ICVL[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     VirtualCurrency;                                           // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientModifyUserVirtualCurrencyResult
// 0x0028 (0x0030 - 0x0008)
struct FClientModifyUserVirtualCurrencyResult : public FPlayFabResultCommon
{
	int                                                Balance;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BalanceChange;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VirtualCurrency;                                           // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientAddUsernamePasswordRequest
// 0x0030 (0x0038 - 0x0008)
struct FClientAddUsernamePasswordRequest : public FPlayFabRequestCommon
{
	struct FString                                     Email;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Password;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     username;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientAddUsernamePasswordResult
// 0x0010 (0x0018 - 0x0008)
struct FClientAddUsernamePasswordResult : public FPlayFabResultCommon
{
	struct FString                                     username;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientAddSharedGroupMembersRequest
// 0x0020 (0x0028 - 0x0008)
struct FClientAddSharedGroupMembersRequest : public FPlayFabRequestCommon
{
	struct FString                                     PlayFabIds;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SharedGroupId;                                             // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientAddSharedGroupMembersResult
// 0x0000 (0x0008 - 0x0008)
struct FClientAddSharedGroupMembersResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientAddOrUpdateContactEmailRequest
// 0x0010 (0x0018 - 0x0008)
struct FClientAddOrUpdateContactEmailRequest : public FPlayFabRequestCommon
{
	struct FString                                     EmailAddress;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientAddOrUpdateContactEmailResult
// 0x0000 (0x0008 - 0x0008)
struct FClientAddOrUpdateContactEmailResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientAddGenericIDRequest
// 0x0008 (0x0010 - 0x0008)
struct FClientAddGenericIDRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          GenericId;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientAddGenericIDResult
// 0x0000 (0x0008 - 0x0008)
struct FClientAddGenericIDResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientAddFriendRequest
// 0x0040 (0x0048 - 0x0008)
struct FClientAddFriendRequest : public FPlayFabRequestCommon
{
	struct FString                                     FriendEmail;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FriendPlayFabId;                                           // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FriendTitleDisplayName;                                    // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FriendUsername;                                            // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientAddFriendResult
// 0x0008 (0x0010 - 0x0008)
struct FClientAddFriendResult : public FPlayFabResultCommon
{
	bool                                               Created;                                                   // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4OFV[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.ClientAcceptTradeRequest
// 0x0030 (0x0038 - 0x0008)
struct FClientAcceptTradeRequest : public FPlayFabRequestCommon
{
	struct FString                                     AcceptedInventoryInstanceIds;                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OfferingPlayerId;                                          // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TradeId;                                                   // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientAcceptTradeResponse
// 0x0008 (0x0010 - 0x0008)
struct FClientAcceptTradeResponse : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          Trade;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AuthenticationValidateEntityTokenRequest
// 0x0010 (0x0018 - 0x0008)
struct FAuthenticationValidateEntityTokenRequest : public FPlayFabRequestCommon
{
	struct FString                                     EntityToken;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AuthenticationGetEntityTokenRequest
// 0x0008 (0x0010 - 0x0008)
struct FAuthenticationGetEntityTokenRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Entity;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AuthenticationValidateEntityTokenResponse
// 0x0018 (0x0020 - 0x0008)
struct FAuthenticationValidateEntityTokenResponse : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          Entity;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ELoginIdentityProvider                             IdentityProvider;                                          // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5H3Y[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPlayFabJsonObject*                          Lineage;                                                   // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AuthenticationGetEntityTokenResponse
// 0x0028 (0x0030 - 0x0008)
struct FAuthenticationGetEntityTokenResponse : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          Entity;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EntityToken;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TokenExpiration;                                           // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminSetPlayerSecretRequest
// 0x0020 (0x0028 - 0x0008)
struct FAdminSetPlayerSecretRequest : public FPlayFabRequestCommon
{
	struct FString                                     PlayerSecret;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminSendAccountRecoveryEmailRequest
// 0x0020 (0x0028 - 0x0008)
struct FAdminSendAccountRecoveryEmailRequest : public FPlayFabRequestCommon
{
	struct FString                                     Email;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EmailTemplateId;                                           // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminRunTaskRequest
// 0x0008 (0x0010 - 0x0008)
struct FAdminRunTaskRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          Identifier;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminRevokeInventoryItemsRequest
// 0x0010 (0x0018 - 0x0008)
struct FAdminRevokeInventoryItemsRequest : public FPlayFabRequestCommon
{
	TArray<class UPlayFabJsonObject*>                  Items;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminRevokeInventoryItemRequest
// 0x0030 (0x0038 - 0x0008)
struct FAdminRevokeInventoryItemRequest : public FPlayFabRequestCommon
{
	struct FString                                     CharacterId;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemInstanceId;                                            // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminRevokeBansRequest
// 0x0010 (0x0018 - 0x0008)
struct FAdminRevokeBansRequest : public FPlayFabRequestCommon
{
	struct FString                                     BanIds;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminRevokeAllBansForUserRequest
// 0x0010 (0x0018 - 0x0008)
struct FAdminRevokeAllBansForUserRequest : public FPlayFabRequestCommon
{
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminResolvePurchaseDisputeRequest
// 0x0038 (0x0040 - 0x0008)
struct FAdminResolvePurchaseDisputeRequest : public FPlayFabRequestCommon
{
	struct FString                                     OrderId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EResolutionOutcome                                 Outcome;                                                   // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QADI[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayFabId;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Reason;                                                    // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminResetUserStatisticsRequest
// 0x0010 (0x0018 - 0x0008)
struct FAdminResetUserStatisticsRequest : public FPlayFabRequestCommon
{
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminResetPasswordRequest
// 0x0020 (0x0028 - 0x0008)
struct FAdminResetPasswordRequest : public FPlayFabRequestCommon
{
	struct FString                                     Password;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Token;                                                     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminResetCharacterStatisticsRequest
// 0x0020 (0x0028 - 0x0008)
struct FAdminResetCharacterStatisticsRequest : public FPlayFabRequestCommon
{
	struct FString                                     CharacterId;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminRemoveVirtualCurrencyTypesRequest
// 0x0010 (0x0018 - 0x0008)
struct FAdminRemoveVirtualCurrencyTypesRequest : public FPlayFabRequestCommon
{
	TArray<class UPlayFabJsonObject*>                  VirtualCurrencies;                                         // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminRemoveServerBuildRequest
// 0x0010 (0x0018 - 0x0008)
struct FAdminRemoveServerBuildRequest : public FPlayFabRequestCommon
{
	struct FString                                     BuildId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminRemovePlayerTagRequest
// 0x0020 (0x0028 - 0x0008)
struct FAdminRemovePlayerTagRequest : public FPlayFabRequestCommon
{
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TagName;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminRefundPurchaseRequest
// 0x0030 (0x0038 - 0x0008)
struct FAdminRefundPurchaseRequest : public FPlayFabRequestCommon
{
	struct FString                                     OrderId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Reason;                                                    // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminModifyServerBuildRequest
// 0x0068 (0x0070 - 0x0008)
struct FAdminModifyServerBuildRequest : public FPlayFabRequestCommon
{
	struct FString                                     ActiveRegions;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BuildId;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CommandLineTemplate;                                       // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Comment;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ExecutablePath;                                            // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxGamesPerHost;                                           // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinFreeGameSlots;                                          // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Timestamp;                                                 // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminModifyMatchmakerGameModesRequest
// 0x0020 (0x0028 - 0x0008)
struct FAdminModifyMatchmakerGameModesRequest : public FPlayFabRequestCommon
{
	struct FString                                     BuildVersion;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  GameModes;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminListVirtualCurrencyTypesRequest
// 0x0000 (0x0008 - 0x0008)
struct FAdminListVirtualCurrencyTypesRequest : public FPlayFabRequestCommon
{

};
// ScriptStruct PlayFab.AdminListBuildsRequest
// 0x0000 (0x0008 - 0x0008)
struct FAdminListBuildsRequest : public FPlayFabRequestCommon
{

};
// ScriptStruct PlayFab.AdminListOpenIdConnectionRequest
// 0x0000 (0x0008 - 0x0008)
struct FAdminListOpenIdConnectionRequest : public FPlayFabRequestCommon
{

};
// ScriptStruct PlayFab.AdminIncrementPlayerStatisticVersionRequest
// 0x0010 (0x0018 - 0x0008)
struct FAdminIncrementPlayerStatisticVersionRequest : public FPlayFabRequestCommon
{
	struct FString                                     StatisticName;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.AdminIncrementLimitedEditionItemAvailabilityRequest
// 0x0028 (0x0030 - 0x0008)
struct FAdminIncrementLimitedEditionItemAvailabilityRequest : public FPlayFabRequestCommon
{
	int                                                Amount;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I4Z4[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CatalogVersion;                                            // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemId;                                                    // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGrantCharacterToUserRequest
// 0x0030 (0x0038 - 0x0008)
struct FClientGrantCharacterToUserRequest : public FPlayFabRequestCommon
{
	struct FString                                     CatalogVersion;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharacterName;                                             // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemId;                                                    // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetWindowsHelloChallengeRequest
// 0x0010 (0x0018 - 0x0008)
struct FClientGetWindowsHelloChallengeRequest : public FPlayFabRequestCommon
{
	struct FString                                     PublicKeyHint;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetUserInventoryRequest
// 0x0000 (0x0008 - 0x0008)
struct FClientGetUserInventoryRequest : public FPlayFabRequestCommon
{

};
// ScriptStruct PlayFab.ClientGetUserDataRequest
// 0x0028 (0x0030 - 0x0008)
struct FClientGetUserDataRequest : public FPlayFabRequestCommon
{
	int                                                IfChangedFromDataVersion;                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_98BE[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Keys;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetTradeStatusRequest
// 0x0020 (0x0028 - 0x0008)
struct FClientGetTradeStatusRequest : public FPlayFabRequestCommon
{
	struct FString                                     OfferingPlayerId;                                          // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TradeId;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetTitlePublicKeyRequest
// 0x0010 (0x0018 - 0x0008)
struct FClientGetTitlePublicKeyRequest : public FPlayFabRequestCommon
{
	struct FString                                     TitleSharedSecret;                                         // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetTitleNewsRequest
// 0x0008 (0x0010 - 0x0008)
struct FClientGetTitleNewsRequest : public FPlayFabRequestCommon
{
	int                                                Count;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U0T9[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.ClientGetTitleDataRequest
// 0x0010 (0x0018 - 0x0008)
struct FClientGetTitleDataRequest : public FPlayFabRequestCommon
{
	struct FString                                     Keys;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetTimeRequest
// 0x0000 (0x0008 - 0x0008)
struct FClientGetTimeRequest : public FPlayFabRequestCommon
{

};
// ScriptStruct PlayFab.ClientGetStoreItemsRequest
// 0x0020 (0x0028 - 0x0008)
struct FClientGetStoreItemsRequest : public FPlayFabRequestCommon
{
	struct FString                                     CatalogVersion;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StoreId;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetSharedGroupDataRequest
// 0x0028 (0x0030 - 0x0008)
struct FClientGetSharedGroupDataRequest : public FPlayFabRequestCommon
{
	bool                                               GetMembers;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B7KN[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Keys;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SharedGroupId;                                             // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetPurchaseRequest
// 0x0010 (0x0018 - 0x0008)
struct FClientGetPurchaseRequest : public FPlayFabRequestCommon
{
	struct FString                                     OrderId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetPublisherDataRequest
// 0x0010 (0x0018 - 0x0008)
struct FClientGetPublisherDataRequest : public FPlayFabRequestCommon
{
	struct FString                                     Keys;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromXboxLiveIDsRequest
// 0x0020 (0x0028 - 0x0008)
struct FClientGetPlayFabIDsFromXboxLiveIDsRequest : public FPlayFabRequestCommon
{
	struct FString                                     Sandbox;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     XboxLiveAccountIDs;                                        // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromTwitchIDsRequest
// 0x0010 (0x0018 - 0x0008)
struct FClientGetPlayFabIDsFromTwitchIDsRequest : public FPlayFabRequestCommon
{
	struct FString                                     TwitchIds;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromSteamIDsRequest
// 0x0010 (0x0018 - 0x0008)
struct FClientGetPlayFabIDsFromSteamIDsRequest : public FPlayFabRequestCommon
{
	struct FString                                     SteamStringIDs;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromPSNAccountIDsRequest
// 0x0018 (0x0020 - 0x0008)
struct FClientGetPlayFabIDsFromPSNAccountIDsRequest : public FPlayFabRequestCommon
{
	int                                                IssuerId;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LZEK[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PSNAccountIDs;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest
// 0x0010 (0x0018 - 0x0008)
struct FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest : public FPlayFabRequestCommon
{
	struct FString                                     NintendoSwitchDeviceIds;                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromKongregateIDsRequest
// 0x0010 (0x0018 - 0x0008)
struct FClientGetPlayFabIDsFromKongregateIDsRequest : public FPlayFabRequestCommon
{
	struct FString                                     KongregateIDs;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromGoogleIDsRequest
// 0x0010 (0x0018 - 0x0008)
struct FClientGetPlayFabIDsFromGoogleIDsRequest : public FPlayFabRequestCommon
{
	struct FString                                     GoogleIDs;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromGenericIDsRequest
// 0x0010 (0x0018 - 0x0008)
struct FClientGetPlayFabIDsFromGenericIDsRequest : public FPlayFabRequestCommon
{
	TArray<class UPlayFabJsonObject*>                  GenericIDs;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromGameCenterIDsRequest
// 0x0010 (0x0018 - 0x0008)
struct FClientGetPlayFabIDsFromGameCenterIDsRequest : public FPlayFabRequestCommon
{
	struct FString                                     GameCenterIDs;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest
// 0x0010 (0x0018 - 0x0008)
struct FClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest : public FPlayFabRequestCommon
{
	struct FString                                     FacebookInstantGamesIds;                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromFacebookIDsRequest
// 0x0010 (0x0018 - 0x0008)
struct FClientGetPlayFabIDsFromFacebookIDsRequest : public FPlayFabRequestCommon
{
	struct FString                                     FacebookIDs;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetPlayerTradesRequest
// 0x0008 (0x0010 - 0x0008)
struct FClientGetPlayerTradesRequest : public FPlayFabRequestCommon
{
	ETradeStatus                                       StatusFilter;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KWXU[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.ClientGetPlayerTagsRequest
// 0x0020 (0x0028 - 0x0008)
struct FClientGetPlayerTagsRequest : public FPlayFabRequestCommon
{
	struct FString                                     Namespace;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetPlayerStatisticVersionsRequest
// 0x0010 (0x0018 - 0x0008)
struct FClientGetPlayerStatisticVersionsRequest : public FPlayFabRequestCommon
{
	struct FString                                     StatisticName;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetPlayerStatisticsRequest
// 0x0020 (0x0028 - 0x0008)
struct FClientGetPlayerStatisticsRequest : public FPlayFabRequestCommon
{
	struct FString                                     StatisticNames;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  StatisticNameVersions;                                     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetPlayerSegmentsRequest
// 0x0000 (0x0008 - 0x0008)
struct FClientGetPlayerSegmentsRequest : public FPlayFabRequestCommon
{

};
// ScriptStruct PlayFab.ClientGetPlayerProfileRequest
// 0x0018 (0x0020 - 0x0008)
struct FClientGetPlayerProfileRequest : public FPlayFabRequestCommon
{
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          ProfileConstraints;                                        // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetPlayerCombinedInfoRequest
// 0x0018 (0x0020 - 0x0008)
struct FClientGetPlayerCombinedInfoRequest : public FPlayFabRequestCommon
{
	class UPlayFabJsonObject*                          InfoRequestParameters;                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetPhotonAuthenticationTokenRequest
// 0x0010 (0x0018 - 0x0008)
struct FClientGetPhotonAuthenticationTokenRequest : public FPlayFabRequestCommon
{
	struct FString                                     PhotonApplicationId;                                       // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetPaymentTokenRequest
// 0x0010 (0x0018 - 0x0008)
struct FClientGetPaymentTokenRequest : public FPlayFabRequestCommon
{
	struct FString                                     TokenProvider;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetLeaderboardForUsersCharactersRequest
// 0x0018 (0x0020 - 0x0008)
struct FClientGetLeaderboardForUsersCharactersRequest : public FPlayFabRequestCommon
{
	int                                                MaxResultsCount;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SVVC[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     StatisticName;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetLeaderboardAroundPlayerRequest
// 0x0038 (0x0040 - 0x0008)
struct FClientGetLeaderboardAroundPlayerRequest : public FPlayFabRequestCommon
{
	int                                                MaxResultsCount;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GARW[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayFabId;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          ProfileConstraints;                                        // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StatisticName;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseSpecificVersion;                                        // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NMU8[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Version;                                                   // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetLeaderboardAroundCharacterRequest
// 0x0038 (0x0040 - 0x0008)
struct FClientGetLeaderboardAroundCharacterRequest : public FPlayFabRequestCommon
{
	struct FString                                     CharacterId;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharacterType;                                             // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxResultsCount;                                           // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AMX1[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     StatisticName;                                             // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetLeaderboardRequest
// 0x0030 (0x0038 - 0x0008)
struct FClientGetLeaderboardRequest : public FPlayFabRequestCommon
{
	int                                                MaxResultsCount;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DLL7[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPlayFabJsonObject*                          ProfileConstraints;                                        // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartPosition;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_URDT[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     StatisticName;                                             // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseSpecificVersion;                                        // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TBKD[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Version;                                                   // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGameServerRegionsRequest
// 0x0010 (0x0018 - 0x0008)
struct FClientGameServerRegionsRequest : public FPlayFabRequestCommon
{
	struct FString                                     BuildVersion;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetFriendsListRequest
// 0x0020 (0x0028 - 0x0008)
struct FClientGetFriendsListRequest : public FPlayFabRequestCommon
{
	bool                                               IncludeFacebookFriends;                                    // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IncludeSteamFriends;                                       // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9KHG[0x6];                                     // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPlayFabJsonObject*                          ProfileConstraints;                                        // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     XboxToken;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetFriendLeaderboardAroundPlayerRequest
// 0x0048 (0x0050 - 0x0008)
struct FClientGetFriendLeaderboardAroundPlayerRequest : public FPlayFabRequestCommon
{
	bool                                               IncludeFacebookFriends;                                    // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IncludeSteamFriends;                                       // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8R3D[0x2];                                     // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxResultsCount;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          ProfileConstraints;                                        // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StatisticName;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseSpecificVersion;                                        // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T8MW[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Version;                                                   // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     XboxToken;                                                 // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetFriendLeaderboardRequest
// 0x0040 (0x0048 - 0x0008)
struct FClientGetFriendLeaderboardRequest : public FPlayFabRequestCommon
{
	bool                                               IncludeFacebookFriends;                                    // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IncludeSteamFriends;                                       // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8ZJD[0x2];                                     // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxResultsCount;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          ProfileConstraints;                                        // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartPosition;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T32U[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     StatisticName;                                             // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseSpecificVersion;                                        // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FM7C[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Version;                                                   // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     XboxToken;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientCurrentGamesRequest
// 0x0040 (0x0048 - 0x0008)
struct FClientCurrentGamesRequest : public FPlayFabRequestCommon
{
	struct FString                                     BuildVersion;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameMode;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERegion                                            Region;                                                    // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5Y5Z[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     StatisticName;                                             // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          TagFilter;                                                 // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetContentDownloadUrlRequest
// 0x0028 (0x0030 - 0x0008)
struct FClientGetContentDownloadUrlRequest : public FPlayFabRequestCommon
{
	struct FString                                     HttpMethod;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ThruCDN;                                                   // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QNRK[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.ClientGetCharacterStatisticsRequest
// 0x0010 (0x0018 - 0x0008)
struct FClientGetCharacterStatisticsRequest : public FPlayFabRequestCommon
{
	struct FString                                     CharacterId;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetCharacterLeaderboardRequest
// 0x0028 (0x0030 - 0x0008)
struct FClientGetCharacterLeaderboardRequest : public FPlayFabRequestCommon
{
	struct FString                                     CharacterType;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxResultsCount;                                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartPosition;                                             // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StatisticName;                                             // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetCharacterInventoryRequest
// 0x0020 (0x0028 - 0x0008)
struct FClientGetCharacterInventoryRequest : public FPlayFabRequestCommon
{
	struct FString                                     CatalogVersion;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharacterId;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetCharacterDataRequest
// 0x0038 (0x0040 - 0x0008)
struct FClientGetCharacterDataRequest : public FPlayFabRequestCommon
{
	struct FString                                     CharacterId;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IfChangedFromDataVersion;                                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZFTV[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Keys;                                                      // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetCatalogItemsRequest
// 0x0010 (0x0018 - 0x0008)
struct FClientGetCatalogItemsRequest : public FPlayFabRequestCommon
{
	struct FString                                     CatalogVersion;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientListUsersCharactersRequest
// 0x0010 (0x0018 - 0x0008)
struct FClientListUsersCharactersRequest : public FPlayFabRequestCommon
{
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientGetAccountInfoRequest
// 0x0040 (0x0048 - 0x0008)
struct FClientGetAccountInfoRequest : public FPlayFabRequestCommon
{
	struct FString                                     Email;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TitleDisplayName;                                          // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     username;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientExecuteCloudScriptRequest
// 0x0020 (0x0028 - 0x0008)
struct FClientExecuteCloudScriptRequest : public FPlayFabRequestCommon
{
	struct FString                                     FunctionName;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          FunctionParameter;                                         // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               GeneratePlayStreamEvent;                                   // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECloudScriptRevisionOption                         RevisionSelection;                                         // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V4EX[0x2];                                     // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SpecificRevision;                                          // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientWriteEventResponse
// 0x0010 (0x0018 - 0x0008)
struct FClientWriteEventResponse : public FPlayFabResultCommon
{
	struct FString                                     EventId;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientValidateWindowsReceiptResult
// 0x0010 (0x0018 - 0x0008)
struct FClientValidateWindowsReceiptResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Fulfillments;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientValidateIOSReceiptResult
// 0x0010 (0x0018 - 0x0008)
struct FClientValidateIOSReceiptResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Fulfillments;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientValidateGooglePlayPurchaseResult
// 0x0010 (0x0018 - 0x0008)
struct FClientValidateGooglePlayPurchaseResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Fulfillments;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientValidateAmazonReceiptResult
// 0x0010 (0x0018 - 0x0008)
struct FClientValidateAmazonReceiptResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Fulfillments;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientUpdateUserTitleDisplayNameResult
// 0x0010 (0x0018 - 0x0008)
struct FClientUpdateUserTitleDisplayNameResult : public FPlayFabResultCommon
{
	struct FString                                     DisplayName;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientUpdateUserDataResult
// 0x0008 (0x0010 - 0x0008)
struct FClientUpdateUserDataResult : public FPlayFabResultCommon
{
	int                                                DataVersion;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P41V[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.ClientUpdateSharedGroupDataResult
// 0x0000 (0x0008 - 0x0008)
struct FClientUpdateSharedGroupDataResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientUpdatePlayerStatisticsResult
// 0x0000 (0x0008 - 0x0008)
struct FClientUpdatePlayerStatisticsResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientUpdateCharacterStatisticsResult
// 0x0000 (0x0008 - 0x0008)
struct FClientUpdateCharacterStatisticsResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientUpdateCharacterDataResult
// 0x0008 (0x0010 - 0x0008)
struct FClientUpdateCharacterDataResult : public FPlayFabResultCommon
{
	int                                                DataVersion;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PAC6[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.ClientUnlockContainerItemResult
// 0x0038 (0x0040 - 0x0008)
struct FClientUnlockContainerItemResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  GrantedItems;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     UnlockedItemInstanceId;                                    // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     UnlockedWithItemInstanceId;                                // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          VirtualCurrency;                                           // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientUnlinkXboxAccountResult
// 0x0000 (0x0008 - 0x0008)
struct FClientUnlinkXboxAccountResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientUnlinkWindowsHelloAccountResponse
// 0x0000 (0x0008 - 0x0008)
struct FClientUnlinkWindowsHelloAccountResponse : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientUnlinkTwitchAccountResult
// 0x0000 (0x0008 - 0x0008)
struct FClientUnlinkTwitchAccountResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientUnlinkSteamAccountResult
// 0x0000 (0x0008 - 0x0008)
struct FClientUnlinkSteamAccountResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientUnlinkPSNAccountResult
// 0x0000 (0x0008 - 0x0008)
struct FClientUnlinkPSNAccountResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientUnlinkNintendoSwitchDeviceIdResult
// 0x0000 (0x0008 - 0x0008)
struct FClientUnlinkNintendoSwitchDeviceIdResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientUnlinkKongregateAccountResult
// 0x0000 (0x0008 - 0x0008)
struct FClientUnlinkKongregateAccountResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientUnlinkIOSDeviceIDResult
// 0x0000 (0x0008 - 0x0008)
struct FClientUnlinkIOSDeviceIDResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientUnlinkGoogleAccountResult
// 0x0000 (0x0008 - 0x0008)
struct FClientUnlinkGoogleAccountResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientUnlinkGameCenterAccountResult
// 0x0000 (0x0008 - 0x0008)
struct FClientUnlinkGameCenterAccountResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientUnlinkFacebookInstantGamesIdResult
// 0x0000 (0x0008 - 0x0008)
struct FClientUnlinkFacebookInstantGamesIdResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientUnlinkFacebookAccountResult
// 0x0000 (0x0008 - 0x0008)
struct FClientUnlinkFacebookAccountResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientUnlinkCustomIDResult
// 0x0000 (0x0008 - 0x0008)
struct FClientUnlinkCustomIDResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientUnlinkAndroidDeviceIDResult
// 0x0000 (0x0008 - 0x0008)
struct FClientUnlinkAndroidDeviceIDResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientStartPurchaseResult
// 0x0038 (0x0040 - 0x0008)
struct FClientStartPurchaseResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Contents;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     OrderId;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>                  PaymentOptions;                                            // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          VirtualCurrencyBalances;                                   // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientStartGameResult
// 0x0078 (0x0080 - 0x0008)
struct FClientStartGameResult : public FPlayFabResultCommon
{
	struct FString                                     Expires;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LobbyId;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Password;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ServerIPV4Address;                                         // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ServerIPV6Address;                                         // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ServerPort;                                                // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5I3V[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ServerPublicDNSName;                                       // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Ticket;                                                    // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientSetPlayerSecretResult
// 0x0000 (0x0008 - 0x0008)
struct FClientSetPlayerSecretResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientSetFriendTagsResult
// 0x0000 (0x0008 - 0x0008)
struct FClientSetFriendTagsResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientSendAccountRecoveryEmailResult
// 0x0000 (0x0008 - 0x0008)
struct FClientSendAccountRecoveryEmailResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientRestoreIOSPurchasesResult
// 0x0010 (0x0018 - 0x0008)
struct FClientRestoreIOSPurchasesResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Fulfillments;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientReportPlayerClientResult
// 0x0008 (0x0010 - 0x0008)
struct FClientReportPlayerClientResult : public FPlayFabResultCommon
{
	int                                                SubmissionsRemaining;                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_46HG[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};
// ScriptStruct PlayFab.ClientRemoveSharedGroupMembersResult
// 0x0000 (0x0008 - 0x0008)
struct FClientRemoveSharedGroupMembersResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientRemoveGenericIDResult
// 0x0000 (0x0008 - 0x0008)
struct FClientRemoveGenericIDResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientRemoveFriendResult
// 0x0000 (0x0008 - 0x0008)
struct FClientRemoveFriendResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientRemoveContactEmailResult
// 0x0000 (0x0008 - 0x0008)
struct FClientRemoveContactEmailResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientRegisterPlayFabUserResult
// 0x0040 (0x0048 - 0x0008)
struct FClientRegisterPlayFabUserResult : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          EntityToken;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SessionTicket;                                             // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          SettingsForUser;                                           // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     username;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientRegisterForIOSPushNotificationResult
// 0x0000 (0x0008 - 0x0008)
struct FClientRegisterForIOSPushNotificationResult : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientEmptyResponse
// 0x0000 (0x0008 - 0x0008)
struct FClientEmptyResponse : public FPlayFabResultCommon
{

};
// ScriptStruct PlayFab.ClientRedeemCouponResult
// 0x0010 (0x0018 - 0x0008)
struct FClientRedeemCouponResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  GrantedItems;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientPurchaseItemResult
// 0x0010 (0x0018 - 0x0008)
struct FClientPurchaseItemResult : public FPlayFabResultCommon
{
	TArray<class UPlayFabJsonObject*>                  Items;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientPayForPurchaseResult
// 0x0070 (0x0078 - 0x0008)
struct FClientPayForPurchaseResult : public FPlayFabResultCommon
{
	int                                                CreditApplied;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4AWK[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     OrderId;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ProviderData;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ProviderToken;                                             // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PurchaseConfirmationPageURL;                               // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PurchaseCurrency;                                          // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PurchasePrice;                                             // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETransactionStatus                                 Status;                                                    // 0x0064(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K3XX[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPlayFabJsonObject*                          VCAmount;                                                  // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          VirtualCurrency;                                           // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientOpenTradeResponse
// 0x0008 (0x0010 - 0x0008)
struct FClientOpenTradeResponse : public FPlayFabResultCommon
{
	class UPlayFabJsonObject*                          Trade;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct PlayFab.ClientMatchmakeResult
// 0x0078 (0x0080 - 0x0008)
struct FClientMatchmakeResult : public FPlayFabResultCommon
{
	struct FString                                     Expires;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LobbyId;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PollWaitTimeMS;                                            // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PX43[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ServerIPV4Address;                                         // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ServerIPV6Address;                                         // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ServerPort;                                                // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0PIC[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ServerPublicDNSName;                                       // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMatchmakeStatus                                   Status;                                                    // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MVNF[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Ticket;                                                    // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
