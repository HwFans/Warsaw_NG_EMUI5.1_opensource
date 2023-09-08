/******************************************************************************

                  版权所有 (C), 2001-2011, 华为技术有限公司

 ******************************************************************************
  文 件 名   : CasNvInterface.h
  版 本 号   : 初稿
  作    者   : w00287212
  生成日期   : 2015年3月24日
  最近修改   :
  功能描述   : CasNvInterface.h 的头文件
  函数列表   :
  修改历史   :
  1.日    期   : 2015年3月24日
    作    者   : w00287212
    修改内容   : 创建文件

******************************************************************************/

#ifndef __CASNVINTERFACE_H__
#define __CASNVINTERFACE_H__


/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "PsTypeDef.h"


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#pragma pack(4)

/*****************************************************************************
  2 宏定义
*****************************************************************************/
#define CAS_1X_MAX_RLP_BLOB_LEN                     (15)
#define CAS_1X_MAX_SCH_MO_NUM                       (4)                         /* MS支持的SCH上最大速率的MO个数 */
#define CAS_1X_FCH_DCCH_MAX_MO                      (3)
#define CAS_1X_MAX_SUPPORT_SCH_NUM                  (1)
#define CAS_1X_MAX_LOW_EXCEED_NUM                   (6)                         /* TCH PSMM 弱信号迟滞列表最大值 */
#define CAS_1X_MAX_MID_EXCEED_NUM                   (21)                        /* TCH PSMM 中信号迟滞列表最大值 */
#define NV_ITEM_CAS_1X_TERMINAL_INFO_SIZE           (16)
#define NV_ITEM_CAS_1X_CAPA_INFO_SIZE               (28)
#define NV_ITEM_CAS_1X_RATE_FEATURE_CAPA_INFO_SIZE  (20)
#define NV_ITEM_CAS_1X_CHANNEL_CFG_CAPA_INFO_SIZE   (52)
#define NV_ITEM_CAS_1X_MO_CAPA_SIZE                 (32)
#define NV_ITEM_CAS_1X_RC_PREF_SIZE                 (4)
#define NV_ITEM_CAS_1X_ENCRYPT_CAPA_SIZE            (4)
#define NV_ITEM_CAS_1X_CELL_THRESHOLD_SIZE          (16)
#define NV_ITEM_CAS_1X_IMSI_TYPE_INFO_SIZE          (4)
#define NV_ITEM_CAS_1X_PROTOCOL_OPTIMIZE_SIZE       (8)
#define NV_ITEM_CAS_1X_TIMER_LEN_SIZE               (16)
#define NV_ITEM_CAS_1X_TCH_MEAS_FILTER_INFO_SIZE    (8)                         /* 对应 NV_Item_CAS_1X_NVIM_TCH_MEAS_FILTER */
#define NV_ITEM_CAS_1X_PM_LOG_THRESHOLD_INFO_SIZE   (8)                         /* PM LOG模块对应NV_Item_CAS_1X_PM_LOG_THRESHOLD */
#define NV_ITEM_CAS_1X_TCH_RELEASE_OPTIMIZE_SIZE    (8)                         /* 1x业务释放不搜网优化项目对应NV_ITEM_CAS_1X_TCH_RELEASE_OPTIMIZE */
#define NV_ITEM_CAS_1X_VOWIFI_THRESH_SIZE           (12)                        /* VoWiFi域选增强项目，对应NV_ITEM_CAS_1X_VOWIFI_THRESH */

#define NV_ITEM_CPORC_1X_FILTER_COEF_SIZE           (36)                        /* 对应NV_ITEM_CPROC_1X_FILTER_COEF */
#define NV_ITEM_CPROC_1X_OPTIMIZE_SWITCH_SIZE       (24)
#define NV_Item_CPROC_1X_NVIM_SM_MPS_THRESHOLD_SIZE (32)
#define NV_ITEM_CPORC_1X_TAS_PARA_SIZE              (40)                        /* 对应CPROC_1X_NVIM_TAS_CTRL_STRU */
#define NV_ITEM_CPROC_HRPD_OPTIMIZE_SWITCH_SIZE     (32)


#define NV_ITEM_CAS_HRPD_AT_REV_SIZE                    (4)
#define NV_ITEM_CDMA_SUPPORT_BANDCLASS_MASK_SIZE        (4)
#define NV_ITEM_CAS_HRPD_CELL_THRESHOLD_SIZE            (4)
#define NV_ITEM_CAS_HRPD_SUSPEND_TIMER_SIZE             (4)
#define NV_ITEM_CAS_HRPD_CONNCLOSE_TO_1X_SWITCH_SIZE    (4)
#define NV_ITEM_CAS_HRPD_C2L_PARA_SIZE                  (8)
#define NV_ITEM_CAS_HRPD_IDLE_HO_PARA_SIZE              (8)
#define NV_ITEM_CAS_HRPD_CFG_PARA_SIZE                  (8)
#define NV_ITEM_CAS_HRPD_TIMER_SIZE                     (16)
#define NV_ITEM_CAS_HRPD_SESSION_CFG_DATA_VALUE_SIZE    (1950)                  /* NV中实体大小 */
#define NV_ITEM_CAS_HRPD_SESSION_CFG_DATA_PART1_SIZE    (1972)                  /* 第一块NV结构体总大小 */
#define NV_ITEM_CAS_HRPD_SESSION_CFG_DATA_PART2_SIZE    (1964)                  /* 第二块NV结构体总大小 */
#define NV_ITEM_CAS_HRPD_SWITCH_PARA_SIZE               (8)
#define NV_ITEM_CAS_HRPD_STRENGTH_FILTER_RATIO_SIZE     (4)
#define NV_ITEM_CAS_HRPD_INTERFREQ_MEAS_THRESHOLD_SIZE  (4)
#define NV_ITEM_CAS_HRPD_EUTRA_CELL_RESEL_CTR_INFO_SIZE (8)
#define NV_ITEM_CAS_HRPD_PM_LOG_THRESHOLD_INFO_SIZE     (8)                     /* PM LOG模块对应NV_Item_CAS_HRPD_PM_LOG_THRESHOLD */

#define NV_ITEM_CPROC_RM_NVIM_1X_OCCUPY_INFO_SIZE       (4)
#define NV_ITEM_CPROC_HRPD_NVIM_PILOT_SEARCH_CTRL_SIZE  (8)


/*****************************************************************************
  3 枚举定义
*****************************************************************************/


/*****************************************************************************
  4 全局变量声明
*****************************************************************************/


/*****************************************************************************
  5 消息头定义
*****************************************************************************/


/*****************************************************************************
  6 消息定义
*****************************************************************************/

/** ****************************************************************************
 * Name        : CAS_1X_FCH_FRAME_SIZE_ENUM_UINT16
 *
 * Description :
 *******************************************************************************/
enum CAS_1X_FCH_FRAME_SIZE_ENUM
{
    CAS_1X_FCH_FRAME_SIZE_20MS        = 0x0000,
    CAS_1X_FCH_FRAME_SIZE_5MS_20MS    = 0x0001,
    CAS_1X_FCH_FRAME_SIZE_BUTT        = 0x0002
};
typedef VOS_UINT16 CAS_1X_FCH_FRAME_SIZE_ENUM_UINT16;

/** ****************************************************************************
 * Name        : CAS_1X_DCCH_FRAME_SIZE_ENUM_UINT16
 *
 * Description :
 *******************************************************************************/
enum CAS_1X_DCCH_FRAME_SIZE_ENUM
{
    CAS_1X_DCCH_FRAME_SIZE_20MS       = 0x0001,
    CAS_1X_DCCH_FRAME_SIZE_5MS        = 0x0002,
    CAS_1X_DCCH_FRAME_SIZE_5MS_20MS   = 0x0003,
    CAS_1X_DCCH_FRAME_SIZE_BUTT       = 0x0004
};
typedef VOS_UINT16 CAS_1X_DCCH_FRAME_SIZE_ENUM_UINT16;

/*****************************************************************************
 枚举名    :CPROC_1X_NVIM_TAS_ENUM
 协议表格  :
 ASN.1描述 :
 枚举说明  :0表示不支持TAS，1表示支持TAS
*****************************************************************************/
enum CPROC_1X_NVIM_TAS_ENUM
{
    CPROC_1X_NVIM_TAS_DISABLE                = 0,                                /* 不支持TAS */                                                           /* 上行仅存在DPCH */
    CPROC_1X_NVIM_TAS_ENABLE                 = 1,                                /* 支持TAS */                                                             /* 上行存在RACH */
    CPROC_1X_NVIM_TAS_BUTT
};
typedef VOS_UINT16 CPROC_1X_NVIM_TAS_ENUM_UINT16;

/*****************************************************************************
  7 STRUCT定义
*****************************************************************************/

/*****************************************************************************
 结构名    : CAS_1X_NVIM_RC_PREF_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : RC PREF能力 3500
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucForRcPref;                            /* FOR_RC_PREF */
    VOS_UINT8                           ucRevRcPref;                            /* REV_RC_PREF */
    VOS_UINT8                           aucReserve[2];
}CAS_1X_NVIM_RC_PREF_STRU;

/*****************************************************************************
 结构名    : CAS_1X_MEID_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : MEID一共56个bit
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          ulMeidLow;                              /* Low 32 bit of MEID */
    VOS_UINT32                          ulMeidHigh;                             /* High 24 bit of MEID */
}CAS_1X_MEID_STRU;

/*****************************************************************************
 结构名    : CAS_1X_TERMINAL_INFO_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 手机规格信息 , not handle it now 3501
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           aucReserve[12];                         /* ESN 和 MEID 的结构挪到外层结构 */

    VOS_UINT8                           ucMobMfgCode;                           /* Manufacturer code */
    VOS_UINT8                           ucMobModel;                             /* Model number */
    VOS_UINT16                          usMobFirmRev;                           /* Firmware revision number */
} CAS_1X_NVIM_TERMINAL_INFO_STRU;                                        /* modify as CAS_1X_NVIM_TERMINAL_INFO_STRU */

/*****************************************************************************
 结构名    : CAS_1X_NVIM_CELL_THRESHOLD_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 门限相关信息结构 3502
*****************************************************************************/
typedef struct
{
    VOS_INT16                           sPilotSrchRssiThreshold;                /* PILOT搜索过程中使用非优选频点的RSSI的最低门限 */
    VOS_INT16                           sPrefChanPilotSrchRssiThreshold;        /* PILOT搜索过程中使用优选频点的RSSI的最低门限 */
    VOS_INT8                            cNbrSetStrengthOffset;                  /* 公式中的邻区截距 */
    VOS_INT8                            cRemainSetStrengthOffset;               /* 公式中的剩余集截距 */
    VOS_INT16                           sDiffStrengthK;                         /* 公式中的线性系数 */
    VOS_INT8                            cDropThresh;                            /* 掉网导频门限 单位:db 默认值为:-14db  */
    VOS_UINT8                           ucIdleHoMinThresh;                      /* idle态切换最低门限, 剩余集小区是邻区的2倍，此处配置为邻区门限 单位:1/8dB 默认值为:8 */
    VOS_UINT16                          ulTCandCellLen;                         /* 切换列表元素的定时器时长 单位:ms 默认值为1000 */
    VOS_UINT8                           ucWeakThreshold;                        /* 邻区信号变差的容忍门限，单位: 次，默认值为1次 */
    VOS_INT8                            cAcsWeakPilotThreshold;                 /* 接入弱信号门限,默认-12db */
    VOS_INT8                            cIdleExitQpchThresh;                    /* 退出QPCH的门限,默认-13db */
    VOS_INT8                            cIdleEnterQpchThresh;                   /* 进入QPCH的门限,默认-11db */
} CAS_1X_NVIM_CELL_THRESHOLD_STRU;

/*****************************************************************************
 结构名    : CAS_1X_ENCRYPT_CAPA_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 手机加密能力信息 3503
*****************************************************************************/
typedef struct
{
    /* wanglingping:add ucEncryptAlgSupport to this struct */
    VOS_UINT8                           ucEncryptAlgSupport;                    /* Encryption algorithms supported */
    VOS_UINT8                           ucSigEncryptSpt;                        /* Signaling Encryption supported indicator */
    VOS_UINT8                           ucUiEncryptSpt;                         /* User information Encryption supported indicator */
    VOS_UINT8                           aucReserve[1];
} CAS_1X_NVIM_ENCRYPT_CAPA_STRU;

/*****************************************************************************
 结构名    : CAS_1X_FCH_CFG_INFO_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : FCH信道能力
*****************************************************************************/
typedef struct
{
    PS_BOOL_ENUM_UINT8                  enFchSupport;                           /* Fundamental Channel supported indicator */
    VOS_UINT8                           ucReserve;
    CAS_1X_FCH_FRAME_SIZE_ENUM_UINT16   enFchFrameSize;                         /* Fundamental Channel Frame Size capability indicator */
    VOS_UINT16                          usFwdFchRc;                             /* Fwd Rc,UE支持的所有下行RC,也是FCH信道支持的下行RC */
    VOS_UINT16                          usRevFchRc;                             /* Rev Rc UE支持的所有上行RC,也是FCH信道支持的上行RC */
} CAS_1X_FCH_CFG_INFO_STRU;

/*****************************************************************************
 结构名    : CAS_1X_DCCH_CFG_INFO_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : DCCH信道能力
*****************************************************************************/
typedef struct
{
    PS_BOOL_ENUM_UINT8                      enDcchSupport;                      /* Dedicated Control Channel supported indicator */
    VOS_UINT8                               ucReserve;
    CAS_1X_DCCH_FRAME_SIZE_ENUM_UINT16      enDcchFrameSize;                    /* Dedicated Control Channel Frame Size capability */
    VOS_UINT16                              usDcchFwdRc;                        /* DCCH支持的下行RC */
    VOS_UINT16                              usDcchRevRc;                        /* DCCH支持的上行RC */
} CAS_1X_DCCH_CFG_INFO_STRU;

/*****************************************************************************
 结构名    : CAS_1X_SCH_REC_INFO_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  :  SCH配置能力信息
*****************************************************************************/
typedef struct
{
    PS_BOOL_ENUM_UINT8                  enTurboSpt;                             /* Turbo Coding supported indicator */
    VOS_UINT8                           ucMaxTurboBlockSize;                    /* maximum Turbo Coding block size */
    PS_BOOL_ENUM_UINT8                  enConvSpt;                              /* Convolutional Coding supported indicator */
    VOS_UINT8                           ucMaxConvBlockSize;                     /* maximum Convolutional Coding block size */
    PS_BOOL_ENUM_UINT8                  enFrame40Spt;                           /* 40ms frame indicator */
    PS_BOOL_ENUM_UINT8                  enFrame80Spt;                           /* 80ms frame indicator */
    VOS_UINT8                           ucMaxRate;                              /* Maximum forward supplemental channels rate */
    VOS_UINT8                           ucReserve;
} CAS_1X_SCH_REC_INFO_STRU;

/*****************************************************************************
 结构名    : CAS_1X_SCH_CFG_INFO_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : SCH信道能力
*****************************************************************************/
typedef struct
{
    PS_BOOL_ENUM_UINT8                  enForSchSupport;                                /* Forward Supplemental Channel supported indicator */
    VOS_UINT8                           ucReserve1;
    VOS_UINT16                          usForSchRcMap;                                  /* Forward Supplemental Channel Radio Configuration capability */
    VOS_UINT8                           ucForSchNum;                                    /* Number of Forward Supplemental Channels */
    VOS_UINT8                           aucReserve2[3];
    CAS_1X_SCH_REC_INFO_STRU            astForSchRecInfo[CAS_1X_MAX_SUPPORT_SCH_NUM];   /* 下行SCH REC INFO */

    PS_BOOL_ENUM_UINT8                  enRevSchSupport;                                /* Reverse Supplemental Channel supported indicator */
    VOS_UINT8                           ucReserve3;
    VOS_UINT16                          usRevSchRcMap;                                  /* Reverse Supplemental Channel Radio Configuration capability */
    VOS_UINT8                           ucRevSchNum;                                    /* Number of Reverse Supplemental Channels */
    VOS_UINT8                           aucReserve4[3];
    CAS_1X_SCH_REC_INFO_STRU            astRevSchRecInfo[CAS_1X_MAX_SUPPORT_SCH_NUM];   /* 上行SCH REC INFO */
} CAS_1X_SCH_CFG_INFO_STRU;

/*****************************************************************************
 结构名    : CAS_1X_NVIM_CHANNEL_CFG_CAPA_INFO_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  :  信道支持的能力 add a nv id 3504
*****************************************************************************/
typedef struct
{
    PS_BOOL_ENUM_UINT8                  enOtdSupport;                           /* OTD supported indcator */
    PS_BOOL_ENUM_UINT8                  enStsSupport;                           /* STS supported indicator */
    PS_BOOL_ENUM_UINT8                  en3XCchSupport;                         /* 3X Common Channel supported */
    VOS_UINT8                           ucReserve;
    CAS_1X_FCH_CFG_INFO_STRU            stFchCfgInfo;                           /* fch 配置信息 */
    CAS_1X_DCCH_CFG_INFO_STRU           stDcchCfgInfo;                          /* dcch 配置信息 */
    CAS_1X_SCH_CFG_INFO_STRU            stSchCfgInfo;                           /* sch 配置信息 */
} CAS_1X_NVIM_CHANNEL_CFG_CAPA_INFO_STRU;

/*****************************************************************************
 结构名    : CAS_1X_FLEX_SPT_INFO_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  :  flex支持能力
*****************************************************************************/
typedef struct
{
    PS_BOOL_ENUM_UINT8                  enFlexSupport;                          /* Flexible rate feature supported indicator */
    PS_BOOL_ENUM_UINT8                  enFFchFlexSpt;                          /* Forward Fundamental channel flexible rate feature supported indicator */
    PS_BOOL_ENUM_UINT8                  enRFchFlexSpt;                          /* Reverse Fundamental channel flexible rate feature supported indicator */
    PS_BOOL_ENUM_UINT8                  enFDcchFlexSpt;                         /* Forward Dedicated Control channel flexible rate feature supported indicator */
    PS_BOOL_ENUM_UINT8                  enRDcchFlexSpt;                         /* Reverse Dedicated Control channel flexible rate feature supported indicator */
    PS_BOOL_ENUM_UINT8                  enFSchFlexSpt;                          /* Forward Supplemental channel flexible rate feature supported indicator */
    PS_BOOL_ENUM_UINT8                  enRSchFlexSpt;                          /* Reverse Supplemental channel flexible rate feature supported indicator */
    VOS_UINT8                           ucReserve;
} CAS_1X_FLEX_SPT_INFO_STRU;

/*****************************************************************************
 结构名    : CAS_1X_VAR_SPT_INFO_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : variable rate feature支持能力
*****************************************************************************/
typedef struct
{
    PS_BOOL_ENUM_UINT8                  enVarSupport;                           /* Variable rate feature supported indicator */
    PS_BOOL_ENUM_UINT8                  enFSchVarSpt;                           /* Forward Supplemental Channel Variable Rate supported indicator */
    PS_BOOL_ENUM_UINT8                  enRSchVarSpt;                           /* Reverse Supplemental Channel Variable Rate supported indicator */
    VOS_UINT8                           ucReserve;
    VOS_UINT16                          usMaxSumNumBitsC;                       /* Maximum sum of number of bits corresponding to Convolutional rates in the variable rate set */
    VOS_UINT16                          usMaxSumNumBitsT;                       /* Maximum sum of number of bits corresponding to Turbo Code rates in the variable rate set */
} CAS_1X_VAR_SPT_INFO_STRU;

/*****************************************************************************
 结构名    : CAS_1X_NVIM_CAPA_INFO_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  :  capability infomation 3505
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucMobPRev;                              /* MOB_P_REV: UE支持的协议版本 */
    PS_BOOL_ENUM_UINT8                  enPacketDataServSupp;                   /* MS supports packet data service */
    PS_BOOL_ENUM_UINT8                  enDeviceInfoMsgSupp;                    /* MS supports the  Device Information Message on the r-csch */
    VOS_UINT8                           ucReserve;
    PS_BOOL_ENUM_UINT8                  enSyncIdReportCapa;                     /* 标识MS是否支持上报SYNC ID */

    PS_BOOL_ENUM_UINT8                  enAccessEntryHo;                        /* Access Entry Handoff Support */
    PS_BOOL_ENUM_UINT8                  enAccessProbeHo;                        /* Access Probe Handoff Support */
    PS_BOOL_ENUM_UINT8                  enAnalogSearch;                         /* Analog Search Support */
    PS_BOOL_ENUM_UINT8                  enHoppingBeacon;                        /* Hopping Beacon Support */
    PS_BOOL_ENUM_UINT8                  enMahHo;                                /* Mobile Assisted Hard Handoff Support */
    PS_BOOL_ENUM_UINT8                  enPuf;                                  /* Location Power Up Function Support */
    PS_BOOL_ENUM_UINT8                  enAnalog553A;                           /* Analog Support */
    PS_BOOL_ENUM_UINT8                  enQpchSupport;                          /* QPCH是否支持的标记 */
    PS_BOOL_ENUM_UINT8                  enBroadCastSupport;                     /* BC是否支持的标记 */

    PS_BOOL_ENUM_UINT8                  enSlottedClass;                         /* Slotted Class, scm第5位 */
    PS_BOOL_ENUM_UINT8                  enSlottedTimer;                         /* Slotted Timer Support */
    PS_BOOL_ENUM_UINT8                  enChsSupport;                           /* Control Hold Mode supported indicator */
    VOS_UINT8                           ucGatingRateSet;                        /* Set of supported Reverse Pilot gating rates */
    PS_BOOL_ENUM_UINT8                  enExtCapIncluded;                       /* Extended Capabilities Included indicator */
    PS_BOOL_ENUM_UINT8                  enMabo;                                 /* Mobile Assisted Burst Operation capability indicator */
    PS_BOOL_ENUM_UINT8                  enSdb;                                  /* Short Data Burst supported indicator */

    VOS_UINT8                           ucCdmaSptOpMode;                        /* UE支持的操作模式 */
    VOS_UINT8                           ucMinPwrCntlStep;                       /* Minimum power control step size */
    PS_BOOL_ENUM_UINT8                  enRevFchGating;                         /* REV_FCH_GATING_REQ */
    VOS_UINT8                           ucGeoLoc;                               /* Geo-location */

    PS_BOOL_ENUM_UINT8                  enTransMode;                            /* Transmission, scm第2位  */
    PS_BOOL_ENUM_UINT8                  enSupportMeid;                          /* Meid support, scm第4位 */
    PS_BOOL_ENUM_UINT8                  enDualmode;                             /* Dual mode, scm第6位 */
} CAS_1X_NVIM_CAPA_INFO_STRU;

/*****************************************************************************
 结构名    : CAS_1X_NVIM_RATE_FEATURE_CAPA_INFO_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  :  rate feature capability infomation 3506
*****************************************************************************/
typedef struct
{
    CAS_1X_FLEX_SPT_INFO_STRU           stFlexSptInfo;                          /* flex info 支持能力 */
    CAS_1X_VAR_SPT_INFO_STRU            stVarSptInfo;                           /* VAR支持能力 */
    PS_BOOL_ENUM_UINT8                  enCsSupport;                            /* Concurrent Services supported indicator */
    PS_BOOL_ENUM_UINT8                  enFSchLtuTabSpt;                        /* Forward Supplemental Channel Downloadable LTU tables supported indicator */
    PS_BOOL_ENUM_UINT8                  enRSchLtuTabSpt;                        /* Reverse Supplemental Channel Downloadable LTU tables supported indicator */
    VOS_UINT8                           aucReserve2[1];
} CAS_1X_NVIM_RATE_FEATURE_CAPA_INFO_STRU;

/*****************************************************************************
 结构名    : CAS_1X_SCH_MO_INFO_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  :  SCH支持的MO
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          ausMoForSch[CAS_1X_MAX_SCH_MO_NUM];
    VOS_UINT16                          ausMoRevSch[CAS_1X_MAX_SCH_MO_NUM];
} CAS_1X_SCH_MO_INFO_STRU;

/*****************************************************************************
 结构名    : CAS_1X_FCH_DCCH_MO_LIST_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : FCH DCCH MO能力
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          usMoNum;
    VOS_UINT16                          ausMoList[CAS_1X_FCH_DCCH_MAX_MO];
} CAS_1X_FCH_DCCH_MO_LIST_STRU;

/*****************************************************************************
 结构名    : CAS_1X_NVIM_MO_CAPA_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : MO能力 3507
*****************************************************************************/
typedef struct
{
    CAS_1X_FCH_DCCH_MO_LIST_STRU        stFwdMo;                                /* Fwd Mo,FCH和DCCH支持的下行MO */
    CAS_1X_FCH_DCCH_MO_LIST_STRU        stRevMo;                                /* Rev Mo,FCH和DCCH支持的上行MO */
    CAS_1X_SCH_MO_INFO_STRU             stSchMoInfo;                            /* sch上支持的MO */
}CAS_1X_NVIM_MO_CAPA_STRU;

/*****************************************************************************
 结构名    : CAS_1X_NVIM_IMSI_TYPE_INFO_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : Imsi_T programmed标志 3508
*****************************************************************************/
typedef struct
{
    PS_BOOL_ENUM_UINT8                  enProgrammedImsiT;                      /* IMSI_T programmed or not*/
    VOS_UINT8                           aucReserve[3];
}CAS_1X_NVIM_IMSI_TYPE_INFO_STRU;

/*****************************************************************************
 结构名    : CAS_1X_NVIM_PROTOCOL_OPTIMIZE_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 协议优化选项 3509
*****************************************************************************/
typedef struct
{
    PS_BOOL_ENUM_UINT8                  enSaveSystemInfo;                       /* 是否缓存系统消息，默认值为TRUE, 默认缓存 */
    VOS_UINT8                           ucTaddDelta;                            /* Tadd增量系数 单位:0.5db 默认值为0 */
    VOS_UINT8                           ucTdropDelta;                           /* Tdrop增量系数 单位:0.5db 默认值为0 */
    VOS_UINT8                           ucTSysReselLen;                         /* 系统重选延时定时器时长 单位: s 默认值为16, 0表示不使用延时定时器 */
    VOS_UINT16                          usRschApplyTime;                        /* 提前申请RSCH时间，默认为400ms */
    VOS_UINT16                          usTOhmMsgRcvLen;                        /* 当前服务小区系统消息接收的定时器时长 单位:s 默认值为600 */
}CAS_1X_NVIM_PROTOCOL_OPTIMIZE_STRU;

/*****************************************************************************
 结构名    : CAS_1X_NVIM_TIMER_LENGTH_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : CAS维护的NV可配的定时器时长,SRLTE特性开发增加, 3514
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucWaitCprocRfIndTimerLen;               /* SRLTE:时隙模式下收到NO_RF_IND,等CPROC的RF_IND的定时器时长, 单位秒 */
    VOS_UINT8                           ucWaitSrlteSysSyncTimerAddLen;          /* SRLTE:搜网流程中定时器延长的长度, 单位秒 */
    VOS_UINT8                           ucWaitSrlteT21ExternAddLen;             /* SRLTE:搜网流程中T21延长的长度, 单位秒 */
    VOS_UINT8                           ucRfDeprotectDelayTimerLen;              /* DTS2016051906517: 等SCCM发送后, 去RF保护的延迟定时器时长, 单位10ms */
    VOS_UINT8                           aucReserve[12];
}CAS_1X_NVIM_TIMER_LENGTH_STRU;

/*****************************************************************************
 结构名    : CAS_1X_NVIM_TCH_MEAS_FILTER_INFO_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : DTS2016030805560, TCH态滤波NV, 3515
*****************************************************************************/
typedef struct
{
    PS_BOOL_ENUM_UINT8                  enTchMeasFilterSw;                      /* TCH态滤波开关 */

    VOS_UINT8                           ucMfOldFactor;                          /* TCH测量老值的滤波因子 */
    VOS_UINT8                           ucMfNewFactor;                          /* TCH测量新值的滤波因子 */

    VOS_UINT8                           ucMfLowThod;                            /* TCH滤波低门限, 单位 1db, 新老测量值之差小于等于此门限时滤波 */
    VOS_UINT8                           ucMfHighThod;                           /* TCH滤波高门限, 单位 1db, 新老测量值之差大于此门限时滤波 */

    VOS_UINT8                           aucReserve[3];

} CAS_1X_NVIM_TCH_MEAS_FILTER_INFO_STRU;

/*****************************************************************************
 结构名    : CAS_1X_NVIM_PM_LOG_THRESHOLD_INFO_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : PM LOG模块功耗统计信息，接收信号能量强弱RSCP临界值NV, 3516
*****************************************************************************/
typedef struct
{
    VOS_INT16                           sLowSignalCrisisValue;                  /* PM LOG模块IDLE态接收弱信号临界值(-720) 单位0.125dB */
    VOS_INT16                           sHighSignalCrisisValue;                 /* PM LOG模块IDLE态接收强信号临界值(-480) 单位0.125dB */
    VOS_UINT8                           aucReserve[4];
}CAS_1X_NVIM_PM_LOG_THRESHOLD_INFO_STRU;

/*****************************************************************************
 结构名    : CAS_1X_NVIM_TCH_MEAS_REPORT_OPTIMIZE_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : DTS2016051108469, TCH能量报告迟滞系数, 3517
*****************************************************************************/
typedef struct
{
    VOS_INT8                            cActSetLowLevel;                        /* 激活集弱信号门限，单位 1db */
    VOS_INT8                            cActSetMidLevel;                        /* 激活集中信号门限，单位 1db */
    VOS_INT8                            cActSetHighLevel;                       /* 激活集强信号门限，单位 1db */

    VOS_INT8                            cCandSetMeasReportThod;                 /* 候选集触发报告门限, 单位 1db, 候选集中测量值大于此门限值时上报PSMM */

    PS_BOOL_ENUM_UINT8                  enEnhanceSwitch;                        /* 迟滞策略分两类，FALSE--基础迟滞策略， TRUE--增强迟滞策略 */

    /* 基础迟滞策略系数，有激活集超过弱信号门限，候选集和邻区集统一额外增加一定评估次数 */

    VOS_UINT8                           ucCandBaseExtExcTimes;                              /* 候选集额外增加的评估次数 */
    VOS_UINT8                           ucNghbrBaseExtExcTimes;                             /* 邻区集额外增加的评估次数 */

    /* 增强迟滞策略系数，根据激活集多种信号等级，候选集和邻区集取额外增加不同评估次数 */

    /* 候选集按激活集分两个等级:
       有激活集超过弱信号门限，按激活集个数取相应额外评估次数;
       有激活集超过强信号门限，在弱信号取值上再加一定补偿次数*/
    VOS_UINT8                           aucCandLowExtExcTimes[CAS_1X_MAX_LOW_EXCEED_NUM];   /* 候选集弱信号门限额外增加评估次数列表 */
    VOS_UINT8                           ucCandHighSupExcTimes;                              /* 候选集强信号门限额外补偿增加评估次数 */

    /* 邻区集按激活集分三个等级:
       有激活集超过弱信号门限，按激活集个数取相应额外评估次数;
       有激活集超过中信号门限，按激活集个数和超过中信号激活小区个数，取相应额外评估次数;
       有激活集超过强信号门限，在中信号取值上再加一定补偿次数*/
    VOS_UINT8                           aucNghbrLowExtExcTimes[CAS_1X_MAX_LOW_EXCEED_NUM];  /* 邻区集弱信号门限额外增加评估次数列表 */
    VOS_UINT8                           aucNghbrMidExtExcTimes[CAS_1X_MAX_MID_EXCEED_NUM];  /* 邻区集中信号门限额外增加评估次数列表 */
    VOS_UINT8                           ucNghbrHighSupExcTimes;                             /* 候选集强信号门限额外补偿增加评估次数 */

    VOS_UINT8                           aucReserve[14];
}CAS_1X_NVIM_TCH_MEAS_REPORT_OPTIMIZE_STRU;

/*****************************************************************************
 结构名    : CAS_1X_NVIM_TCH_RELEASE_OPTIMIZE_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 业务释放优化流程控制NV项,3518
*****************************************************************************/
typedef struct
{
    PS_BOOL_ENUM_UINT8                  enTchReleaseOptimizeSw;                 /* 业务释放优化流程控制开关 */
    VOS_INT8                            cTchReleaseOptimizeThreshold;           /* 业务释放优化流程参考小区门限,单位 1dB,参考小区测量值大于此门限值时进入业务释放不搜网优化流程 */
    VOS_UINT8                           aucReserve[6];
}CAS_1X_NVIM_TCH_RELEASE_OPTIMIZE_STRU;

/*****************************************************************************
 结构名    : CAS_1X_NVIM_VOWIFI_THRESH_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : VoWiFi域选增强项目,信号门限、迟滞门限以及信号评估时长NV, 3519
*****************************************************************************/
typedef struct
{
    VOS_INT8                            cGoodStrengthThresh;                    /* 好信号门限(-96) 单位0.125dB 默认值为-12dB */
    VOS_INT8                            cBadStrengthThresh;                     /* 差信号门限(-96) 单位0.125dB 默认值为-12dB */
    VOS_UINT16                          usAssessTimeLen;                        /* 信号评估时长    单位秒 默认值为5s */
    VOS_UINT8                           ucOffset;                               /* 迟滞门限(24)    单位0.125dB 默认值为3dB */
    VOS_UINT8                           aucReserve[7];
}CAS_1X_NVIM_VOWIFI_THRESH_STRU;

/*****************************************************************************
 结构名    : CPROC_1X_NVIM_FILTER_COEF_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : CPROC 滤波系数,CAS 维护
*****************************************************************************/
typedef struct
{
    /* SF continuous */
    VOS_UINT16                          usSfContMpsAlphaEc;
    VOS_UINT16                          usSfContMpsAlphaEcIo;

    VOS_UINT16                          usSfContMeasAlphaEc;
    VOS_UINT16                          usSfContMeasAlphaEcIo;

    /* CF TCH */
    VOS_UINT16                          usCfContTchAlphaEc;
    VOS_UINT16                          usCfContTchAlphaEcIo;

    /* SF DRX */
    VOS_UINT16                          usSfDrxMpsOsAlphaEc;
    VOS_UINT16                          usSfDrxMpsOsAlphaEcIo;

    VOS_UINT16                          usSfDrxMpsContAlphaEc;
    VOS_UINT16                          usSfDrxMpsContAlphaEcIo;

    VOS_UINT16                          usSfDrxMeasAlphaEc;
    VOS_UINT16                          usSfDrxMeasAlphaEcIo;

    /* CF DRX */
    VOS_UINT16                          usCfDrxMeasAlphaEc;
    VOS_UINT16                          usCfDrxMeasAlphaEcIo;

    /* ilde continuous(reserve) */
    VOS_UINT16                          usSfContIdleMpsAlphaEc;
    VOS_UINT16                          usSfContIdleMpsAlphaEcIo;

    VOS_UINT16                          usSfContIdleMeasAlphaEc;
    VOS_UINT16                          usSfContIdleMeasAlphaEcIo;

}CPROC_1X_NVIM_FILTER_COEF_STRU;

/*****************************************************************************
 结构名    : CPROC_1X_NVIM_PILOT_SEARCH_PARA_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : Pilot search 参数
*****************************************************************************/
typedef struct
{
    VOS_INT16                           shwVaildPilotThres;                     /* 搜网阶段判断导频是否有效的门限。根据导频MPS测量的ECNO进行判断，如果导频ECNO大于此门限，
                                                                                   认为该导频有效，在该导频下解SYNC，如果低于此门限，根据2轮MPS的平均值判断导频是否有效 */
    VOS_INT16                           shwVaildPilotAverageThres;              /* 搜网阶段导频平均ECNO的判断门限。如果导频的单次MPS ECNO不超过有效门限，对导频进行MPS 多轮，
                                                                                   如果导频的平均ECNO 大于此门限，认为导频有效，否则认为此导频无效                     */
    VOS_UINT16                          uhwMaxPNNumDoMps;                       /* 搜网阶段MPS测量的相位个数。MPS测量的相位个数取此值和PILOT SEARCH IND上报的PNPhase Num 中的较小值 */
    VOS_UINT16                          uhwMaxMpsLoopsTime;                     /* 搜网阶段MPS测量的轮数。如果所有相位单次MPS测量ECNO不超过有效门限，则对所有相位测量该值定义的轮数 */
    VOS_UINT16                          uhwMaxPSTimeIfNoPnPhaseNum;             /* 单频点PILOT SEARCH 最大次数。*/
    VOS_UINT16                          usReserve1;
}CPROC_1X_NVIM_PILOT_SEARCH_PARA_STRU;

/*****************************************************************************
 结构名    : CPROC_1X_NVIM_OPTIMIZE_SWITCH_STRU
 协议表格  : C.S0005 Table D-2.
 ASN.1描述 :
 结构说明  : CPROC 1X 优化开关, 3511
*****************************************************************************/
typedef struct
{
    VOS_UINT8                               ucN2mHuaweiConfigValue;                /*N2m自定义配置值*/
    VOS_UINT8                               ucN3mHuaweiConfigValue;                /*N3m自定义配置值*/
    CPROC_1X_NVIM_PILOT_SEARCH_PARA_STRU    stPsPara;
    VOS_UINT8                               enTimeInterruptResetFlag;              /*Wake up time is inconsistent with BBP.
                                                                                     1 Reset.
                                                                                     0 send error ind to cas. Expected release all from Cas*/
    VOS_UINT8                               enEricFlag;
    VOS_UINT8                               enEricNeighborFlag;
    VOS_UINT8                               enIdleDrxNonPreemptFlag;
    VOS_UINT8                               enIdleDrxHighPrioFlag;                 /* Use high priority when DRX cycle confict with other mode */
    VOS_UINT8                               enIdleDrxHighPrioWithWFlag;            /* Use high priority when DRX cycle confict with W */
    VOS_UINT8                               enIdleDrxHighPrioWithLFlag;            /* Use high priority when DRX cycle confict with L */
    VOS_UINT8                               aucReserved[3];
}CPROC_1X_NVIM_OPTIMIZE_SWITCH_STRU;
/*****************************************************************************
 结构名    : CPROC_1X_MPS_REF_PN_THRESHOLD_STRU；
 协议表格  :
 ASN.1描述 :
 结构说明  : Threshold for refrence PN change.
*****************************************************************************/
typedef struct
{
    VOS_INT16                           sRemoveOldRefPNThreshold;   /* Threshold for changing to a new reference */
    VOS_UINT16                          usNewRefPNThreshold;        /* Threshold above reference EcNo before changing reference */
    VOS_UINT16                          usNewRefPNCount;            /* Number of times above threshold berfore changing reference */
    VOS_UINT16                          usReserved;
}CPROC_1X_MPS_REF_PN_THRESHOLD_STRU;


/*****************************************************************************
 结构名    : CPROC_1X_CF_MEAS_THRESHOLD_STRU；
 协议表格  :
 ASN.1描述 :
 结构说明  : Threshold for CF measurement.
*****************************************************************************/
typedef struct
{
    VOS_INT16                           sCfMeasSignalLevelThreshold;        /* Threshold for idle cf start measurement */
    VOS_INT16                           sCfMeasEmergencyModeThreshold;      /* Threshold for idle cf emergency search mode */
}CPROC_1X_CF_MEAS_THRESHOLD_STRU;


/*****************************************************************************
 结构名    : CPROC_1X_NVIM_SM_MPS_THRESHOLD_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : Threshold for mps. 3512
*****************************************************************************/
typedef struct
{
    CPROC_1X_MPS_REF_PN_THRESHOLD_STRU  stCproc1xMpsRefPNThreshold; /* Threshold for refrence PN change. */
    CPROC_1X_CF_MEAS_THRESHOLD_STRU     stCproc1xCfMeasThreshold;   /* Threshold for idle cf measurement */
    VOS_UINT16                          usReserved[10];
}CPROC_1X_NVIM_SM_MPS_THRESHOLD_STRU;

/*****************************************************************************
 结构名    : CPROC_1X_NVIM_DM_THRESHOLD_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : Threshold for DM. 3570
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucDiversitySwitch;          /* 分集开关 */
    VOS_UINT8                           ucIdleCrcInitCounter;       /* CRC校验关闭分集计数初始值 */
    VOS_UINT16                          usSimCardTemperature;       /* SIM卡温度门限 */
    VOS_INT16                           shwIdleMeasRscpOn;          /* 开启分集RSCP门限 */
    VOS_INT16                           shwIdleMeasRscpOff;         /* 关闭分集RSCP门限 */
    VOS_INT16                           shwIdleMeasEcN0On;          /* 开启分集EcN0门限 */
    VOS_INT16                           shwIdleMeasEcN0Off;         /* 关闭分集EcN0门限 */
    VOS_UINT8                           ucTchCSFerOnCounter;        /* CS业务开启分集FER门限 */
    VOS_UINT8                           ucTchCSFerOffCounter;       /* CS业务关闭分集FER门限 */
    VOS_UINT8                           ucTchCSFerOnWinSize;        /* CS业务开启分集FER统计窗 */
    VOS_UINT8                           ucTchCSFerOffWinSize;       /* CS业务关闭分集FER统计窗 */
}CPROC_1X_NVIM_DM_THRESHOLD_STRU;

/*****************************************************************************
 结构名    : CPROC_1X_NVIM_DM_TESTMODE_THRESHOLD_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 分集控制测试模式门限. 3571
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucTchTestModeFerOnCounter;  /* 测试业务开启分集FER门限 */
    VOS_UINT8                           ucTchTestModeFerOffCounter; /* 测试业务关闭分集FER门限 */
    VOS_UINT8                           ucTchTestModeFerOnWinSize;  /* 测试业务开启分集FER统计窗 */
    VOS_UINT8                           ucTchTestModeFerOffWinSize; /* 测试业务关闭分集FER统计窗 */
    VOS_UINT8                           ucTchHandoffRuleFlag;       /* 业务态切换打开分集开关 */
    VOS_UINT8                           ucReserved[15];             /* 预留 */
}CPROC_1X_NVIM_DM_TESTMODE_THRESHOLD_STRU;

/*****************************************************************************
 结构名    : CPROC_1X_NVIM_STATISTICS_THRESHOLD_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : PM log功耗实网信息统计门限 3572
*****************************************************************************/
typedef struct
{
    VOS_UINT8                          ucNCellMeasCountFew;     /* 时隙模式唤醒到睡眠测量所有小区个数统计低门限 */
    VOS_UINT8                          ucNCellMeasCountMany;    /* 时隙模式唤醒到睡眠测量所有小区个数统计高门限 */
    VOS_INT8                           cVoiceTxPwrLow;          /* 语音业务统计低门限 */
    VOS_INT8                           cVoiceTxPwrHigh;         /* 语音业务统计高门限 */
    VOS_INT8                           cDataTxPwrLow;           /* 数据业务统计低门限 */
    VOS_INT8                           cDataTxPwrHigh;          /* 语音业务统计高门限 */
    VOS_UINT8                          aucReserved[2];
}CPROC_1X_NVIM_STATISTICS_THRESHOLD_STRU;

/*****************************************************************************
 结构名    : CPROC_1X_NVIM_TAS_PHY_EVALUATE_PARA_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 1X TAS物理层搜网流程所需门限值
*****************************************************************************/
typedef struct
{
    VOS_INT16                               shwRscpThres;       /* IDLE态S准则RSCP门限，单位0.125db*/
    VOS_UINT16                              bSupportRscpJudge;  /* IDLE态S准则中打开/关闭RSCP作为判决条件 */
                                                                /* 0:关闭 ，1:打开 */
}CPROC_1X_NVIM_TAS_PHY_EVALUATE_PARA_STRU;

/*****************************************************************************
 结构名    : CPROC_1X_NVIM_TAS_PHY_STATE_PARA_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 1X TAS物理层状态上报所需门限值，
             联调X模专用，后续考虑复用，对用户的nv个数越少越好
*****************************************************************************/
typedef struct
{
    VOS_INT16                               shwGoodRscpThres;                   /* 属于好信号RSCP门限值(单位为0.125dbm)，复用GU */
    VOS_INT16                               shwPoorRscpThres;                   /* 属于差信号RSCP门限值(单位为0.125dbm)，复用GU */
    VOS_INT16                               shwGoodEcIoThres;                   /* 属于好信号EcIo门限值(单位为0.125db)，X模专用 */
    VOS_INT16                               shwPoorEcIoThres;                   /* 属于差信号EcIo门限值(单位为0.125db)，X模专用，后续考虑复用，对用户的nv个数越少越好 */
    VOS_UINT16                              uhwSFailNum;                        /* S准则连续失败次数，复用GU */
    VOS_UINT16                              uhwSPassNum;                        /* S准则连续成功次数，复用GU */
}CPROC_1X_NVIM_TAS_PHY_STATE_PARA_STRU;

/*****************************************************************************
 结构名    : CPROC_1X_NVIM_TAS_BLIND_MEAS_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : TAS盲切测量的控制参量，
             联调X模专用，后续考虑复用，对用户的nv个数越少越好
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwStateOneTime;                    /* 阶段一比较时间 */
    VOS_INT16                               shwWorstRscpValue;                  /* 最差RSCP信号门限值 */
    VOS_INT16                               shwWorseRscpValue;                  /* 较差RSCP信号门限值 */
    VOS_UINT16                              uhwDeltaRscpValue;                  /* s1状态手握导致信号强度下降判决门限 */
    VOS_UINT16                              uhwStateTwoTime;                    /* 阶段二比较时间 */
    VOS_UINT16                              uhwDeltaRscp2Value;                 /* s2状态手握导致信号强度下降判决门限 */
    VOS_UINT16                              auhwFrozenTime[4];                  /* 天线切换冻结保护时间, Ta Tb Tc Td */
}CPROC_1X_NVIM_TAS_BLIND_MEAS_STRU;



/*****************************************************************************
 结构名    : CPROC_1X_NVIM_TAS_CTRL_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 1x TAS算法控制参量 3513
*****************************************************************************/
typedef struct
{
    VOS_UINT16                                  uhwReserve1;
    VOS_UINT16                                  uhwReserve2;
    CPROC_1X_NVIM_TAS_PHY_EVALUATE_PARA_STRU    stTasPhyStateEvaluatePara;          /* 物理层状态上报参数门限2 */
    CPROC_1X_NVIM_TAS_PHY_STATE_PARA_STRU       stTasPhyStatePara;                  /* 物理层状态上报参数门限1 */
    CPROC_1X_NVIM_TAS_BLIND_MEAS_STRU           stTasBlindCtrl;                     /* TAS盲切测量的控制参量 */
}CPROC_1X_NVIM_TAS_CTRL_STRU;

/*****************************************************************************
 结构名    : CAS_HRPD_NVIM_REV_INFO_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : EVDO终端版本信息 3600
*****************************************************************************/
typedef struct
{
    PS_BOOL_ENUM_UINT8                  enSuppOnlyDo0;                          /* 是否只支持DO0版本 */
    PS_BOOL_ENUM_UINT8                  enSuppDoaWithMfpa;                      /* 是否支持DOA版本，应用类型只支持MFPA */
    PS_BOOL_ENUM_UINT8                  enSuppDoaWithEmfpa;                     /* 是否支持DOA版本，应用类型支持MFPA和EMPA */
    PS_BOOL_ENUM_UINT8                  enSuppDoaEhrpd;                         /* 是否支持eHRPD */
}CAS_HRPD_NVIM_REV_INFO_STRU;

/*****************************************************************************
 结构名    : CAS_CDMA_NVIM_SUPPORT_BANDCLASS_MASK_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 终端支持的频段能力掩码  3601
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          ulSupportBandclassMask;               /* 终端支持的频段能力掩码，每bit表示是否支持对应的频段能力，比如0x00000001表示只支持频段0 */
}CAS_CDMA_NVIM_SUPPORT_BANDCLASS_MASK_STRU;

/*****************************************************************************
 结构名    : CAS_HRPD_NVIM_CELL_THRESHOLD_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 搜网门限相关信息结构  3602
*****************************************************************************/
typedef struct
{
    VOS_INT16                           sPilotSrchRssiThreshold;                /* PILOT搜索过程中使用非优选频点的RSSI的最低门限 */
    VOS_INT16                           sPrefChanPilotSrchRssiThreshold;        /* PILOT搜索过程中使用优选频点的RSSI的最低门限 */
}CAS_HRPD_NVIM_CELL_THRESHOLD_STRU;

/*****************************************************************************
 结构名    : CAS_HRPD_NVIM_SUSPEND_TIMER_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 挂起定时器时长 3603
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          usConnSuspendTimerLength;             /* AT进入挂起模式时，挂起定时器的时长，单位为ms */
    VOS_UINT8                           aucReserve[2];
}CAS_HRPD_NVIM_SUSPEND_TIMER_STRU;

/*****************************************************************************
 结构名    : CAS_HRPD_NVIM_CONNCLOSE_TO_1X_SWITCH_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : DO到1x切换开关    3604
*****************************************************************************/
typedef struct
{
    PS_BOOL_ENUM_UINT8                  enDO21XSwitch;                        /* 当HRPD连接态能量值低于sStrengthThresholdTo1x时，是否断开HRPD连接 */
    VOS_UINT8                           ucReserve;
    VOS_INT16                           sStrengthThresholdTo1x;               /* 连接态时激活集能量值监控门限，低于该门限，EVDO主动发起连接关闭，切换到1x */
}CAS_HRPD_NVIM_CONNCLOSE_TO_1X_SWITCH_STRU;



/*****************************************************************************
 结构名    : CAS_HRPD_C2L_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : HRPD到LTE重选相关的参数  3605
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          ulLteReselectTimerLen;                /* EVDO到LTE的重选时间 */
    VOS_INT16                           sHrpdQualityThreshold;                /* Hrpd Quality Threshold value, CL互操作使用，DO能建立业务信道的门限 */
    PS_BOOL_ENUM_UINT8                  enSortEUTRAFreqByOhmOrder;            /* 是否根据otherRatNeighbor list消息中的频点顺序，对要重选的频点进行排序 */
    VOS_UINT8                           ucReserve;
}CAS_HRPD_NVIM_C2L_STRU;

/*****************************************************************************
 结构名    : CAS_HRPD_NVIM_IDLE_HO_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : HRPD版本信息   3606
*****************************************************************************/
typedef struct
{
    VOS_INT8                            cIdleHoOffset;                          /* idle ho 参数f */
    VOS_INT8                            cIdleHoStrengthK;                       /* idle ho 参数k */
    VOS_INT8                            cIdleHoThresh;                          /* idle ho 参数y */
    VOS_UINT8                           ucReserve;
    VOS_UINT16                          usTimeLength;                           /* 监控时常,单位ms */
    VOS_INT8                            ucReserve1;
    VOS_INT8                            ucReserve2;
}CAS_HRPD_NVIM_IDLE_HO_STRU;

/*****************************************************************************
 结构名    : CAS_HRPD_NVIM_CFG_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : HRPD配置协商相关参数  3607
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          ulHscpAnPhaseTimerLength;             /* 配置协商AT协商阶段的保护定时器时长 */
    VOS_UINT8                           ucCfgMsgSendTimes;                    /* 配置协商过程中，ConfigurationRequest消息的发送次数，默认值为1 */
    VOS_UINT8                           ucKeyResponseTimeout;                 /* KeyResponse消息中的Timeout字段，单位为秒 */
    VOS_UINT8                           ucSuppItatProtocol;                   /* eAT发起初始配置协商时，是否携带Irat的协议子类型 */
    VOS_UINT8                           ucMaxConnAttemptTimes;                /* 初始配置协商时,连接建立的最大尝试次数 */
}CAS_HRPD_NVIM_CFG_STRU;

/*****************************************************************************
 结构名    : CAS_HRPD_NVIM_TIMER_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  :  HRPD Timer类NV定义  3608
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          usConnectCloseDelayTimerLength;         /* 等待ConnectionClose消息发出时长，单位为ms */
    VOS_UINT16                          usWaitRfOccupyResApplyCnfTimerLength;   /* 在短抢过程中等待RF资源申请相应时长，单位:ms */
    VOS_UINT16                          usSvlteWaitCprocNoRfIndTimerLength;     /* SVLTE下Cproc上报NO_RF_IND后等待RF_IND时长，单位:s */
    VOS_UINT16                          usWaitInitSrchRfResApplycnfTimerLength; /* 在搜网过程中等待RF资源申请时长，单位:ms */
    VOS_UINT16                          usMonitorInterFreqMeasTimerLength;      /* 异频测量监控定时器时长，单位:ms */
    VOS_UINT16                          usInterFreqOutFromCanSetTimerLength;    /* 异频邻区从候选集中剔除定时器时长，单位:ms */
    VOS_UINT16                          usTcaProtectRFTimerLength;              /* 收到上行建链消息的DataCnf后保护射频资源的时长，单位:ms */
    VOS_UINT16                          usSrlteWaitCprocNoRfIndTimerLength;     /* SRLTE下Cproc上报NO_RF_IND后等待RF_IND时长，单位:s */
}CAS_HRPD_NVIM_TIMER_STRU;

/*****************************************************************************
 结构名    : CAS_HRPD_NVIM_SESSION_CFG_DATA_PART1_STRU
 协议表格  :
 ASN.1描述 : 每块NV最大存储1.95K字节，配置协商属性比较多，
             所以用两部分NV存储配置协商属性，此结构为第一部分NV
 结构说明  : HRPD 配置协商完成后属性列表 NV定义  3609
*****************************************************************************/
typedef struct
{
    PS_BOOL_ENUM_UINT8                  enPersonalityTblListValid;              /* Personality列表是否有效 */
    PS_BOOL_ENUM_UINT8                  enPart2Valid;                           /* 第二部分NV是否存储Personality */
    VOS_UINT16                          usPersonalityNum;                       /* 当前有效Personality的套数 */
    VOS_UINT16                          usPersonalityIdx;                       /* 当前在使用的Personality的下标 */
    VOS_UINT16                          usSessionToken;
    VOS_UINT16                          usPart1Length;                          /* 第一部分有效数据长度 */
    VOS_UINT16                          usReserve1;
    VOS_UINT16                          usReserve2;
    VOS_UINT16                          usReserve3;
    VOS_UINT16                          usReserve4;
    VOS_UINT16                          usReserve5;
    VOS_UINT16                          usReserve6;
    VOS_UINT8                           aucPart1Value[NV_ITEM_CAS_HRPD_SESSION_CFG_DATA_VALUE_SIZE];  /* 数据实体 */
}CAS_HRPD_NVIM_SESSION_CFG_DATA_PART1_STRU;

/*****************************************************************************
 结构名    : CAS_HRPD_NVIM_SESSION_CFG_DATA_PART2_STRU
 协议表格  :
 ASN.1描述 : 每块NV最大存储1.95K字节，配置协商属性比较多，
             所以用两部分NV存储配置协商属性，此结构为第二部分NV
 结构说明  : HRPD 配置协商完成后属性列表 NV定义  3610
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          usPart2Length;                          /* 第二部分有效数据长度 */
    VOS_UINT16                          usReserve1;
    VOS_UINT16                          usReserve2;
    VOS_UINT16                          usReserve3;
    VOS_UINT16                          usReserve4;
    VOS_UINT16                          usReserve5;
    VOS_UINT16                          usReserve6;
    VOS_UINT8                           aucPart2Value[NV_ITEM_CAS_HRPD_SESSION_CFG_DATA_VALUE_SIZE];/* 数据实体 */
}CAS_HRPD_NVIM_SESSION_CFG_DATA_PART2_STRU;


/*****************************************************************************
 结构名    : CAS_HRPD_NVIM_SWITCH_PARA_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : HRPD开关参数    3611
*****************************************************************************/
typedef struct
{
    PS_BOOL_ENUM_UINT8                  enInterFreqMeasThresJudgeSwitch;        /* 异频测量启动是否判断门限开关 0:表示开关关闭，此时在空闲态和连接态，只要有异频邻区都会下发测量配置测，
                                                                                   1:表示开关打开，此时在空闲态不测异频邻区，在连接态，如果候选集和相邻集中有异频邻区，并且
                                                                                   激活集和候选集中的同频频点能量值都小于-5db的门限时，才启动异频测量，否则不则异频*/
    PS_BOOL_ENUM_UINT8                  enSlotModeSwitch;                       /* 时隙模式开关，1表示开关打开 */
    PS_BOOL_ENUM_UINT8                  enScpDeactiveInitOhmSwitch;             /* SCP去激活初始化OHM开关，1表示开关打开 */
    PS_BOOL_ENUM_UINT8                  enConnOpenSndRuSwitch;                  /* 连接建立上报RU开关，1表示开关打开 */
    PS_BOOL_ENUM_UINT8                  enIdleHoFromCndAndNbrSwitch;            /* 空闲态切换从候选集和相邻集选择的开关，1表示开关打开 */
    VOS_INT8                            ucReserve5;
    VOS_UINT8                           ucReserve6;
    VOS_UINT8                           ucReserve7;
}CAS_HRPD_NVIM_SWITCH_PARA_STRU;

/*****************************************************************************
 结构名    : CAS_HRPD_NVIM_STRENGTH_FILTER_RATIO_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : HRPD能量值滤波系数 3612
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucIdleOldStrengthFilterRatio;           /* 空闲态旧能量值滤波系数 */
    VOS_UINT8                           ucIdleNewStrengthFilterRatio;           /* 空闲态新能量值滤波系数 */
    VOS_UINT8                           ucConnOldStrengthFilterRatio;           /* 连接态旧能量值滤波系数 */
    VOS_UINT8                           ucConnNewStrengthFilterRatio;           /* 连接态新能量值滤波系数 */
}CAS_HRPD_NVIM_STRENGTH_FILTER_RATIO_STRU;

/*****************************************************************************
 结构名    : CAS_HRPD_NVIM_INTERFREQ_MEAS_THRESHOLD_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 异频测量启停门限 3613 for DTS2016022304697
*****************************************************************************/
typedef struct
{
    VOS_INT16                           sInterFreqMeasLowThreshold;             /* 异频测量低门限，所有同频小区能量低于低门限，则开启异频测量，单位:1/8db */
    VOS_INT16                           sInterFreqMeasHighThreshold;            /* 异频测量高门限，存在同频小区能量高于高门限，则停止异频测量，单位:1/8db */
}CAS_HRPD_NVIM_INTERFREQ_MEAS_THRESHOLD_STRU;

/*****************************************************************************
 结构名    : CAS_HRPD_NVIM_EUTRA_CELL_RESEL_CTR_INFO_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : C2L重选相关定制参数，用于解决3G、4G制式之间平凡切换的问题 3614
*****************************************************************************/
typedef struct
{
    VOS_UINT8                          ucJudgeL2CReselOrRedirTimeLen;           /* 在该定时器规定时长内判断是否发生L2C重选或重定向 */
    VOS_UINT8                          ucL2CReselOrRedirMaxNum;                 /* 长度为ucJudgeL2CReselOrRedirTimeLen时间内从L模重选或重定向到C模的最大次数 */
    VOS_UINT8                          ucC2LReselPenalTimeLen;                  /* C2L重选惩罚定时器时长 */
    VOS_UINT8                          ucC2LReselOffset;                        /* 当惩罚定时器启动时，C2L重选偏置参数 */
    VOS_UINT8                          ucReserve1;
    VOS_UINT8                          ucReserve2;
    VOS_UINT8                          ucReserve3;
    VOS_UINT8                          ucReserve4;
}CAS_HRPD_NVIM_EUTRA_CELL_RESEL_CTR_INFO_STRU;

/*****************************************************************************
 结构名    : CAS_HRPD_NVIM_CHR_REPORT_CTR_INFO_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : CHR特性，主动上报的控制信息 3615
*****************************************************************************/
typedef struct
{
    PS_BOOL_ENUM_UINT8                  enRcvTcaFailRptFlag;                    /* 收不到TCA是否需要主动上报标记，TRUE 上报，FALSE 不上报 */
    VOS_UINT8                           ucCLMultiReselPenaltyTimes;             /* CL乒乓重选惩罚次数 */
    PS_BOOL_ENUM_UINT8                  enPersonalityCountInvalidFlag;          /* 配置协商属性套数大于2上报异常Chr开关 */
    VOS_UINT8                           ucReserve3;
}CAS_HRPD_NVIM_CHR_REPORT_CTR_INFO_STRU;

/*****************************************************************************
 结构名    : CAS_HRPD_NVIM_PM_LOG_THRESHOLD_INFO_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : PM LOG模块功耗统计信息，接收信号能量强弱RSCP临界值
*****************************************************************************/
typedef struct
{
    VOS_INT16                           sLowSignalCrisisValue;                  /* PM LOG模块IDLE态接收弱信号临界值(-720) 单位0.125dB */
    VOS_INT16                           sHighSignalCrisisValue;                 /* PM LOG模块IDLE态接收强信号临界值(-480) 单位0.125dB */
    VOS_UINT8                           aucReserve[4];
}CAS_HRPD_NVIM_PM_LOG_THRESHOLD_INFO_STRU;

/* CPROC_HRPD start here */

/*****************************************************************************
 结构名    : CPROC_HRPD_NVIM_PILOT_SEARCH_CTRL_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : cproc hrpd搜网控制相关参数 3671 for DTS2016022502918
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucQuickFlag;                            /**< 0----normal  1-----quick mode, only for evdo only */
    VOS_UINT8                           ucReserved1;
    VOS_UINT16                          usReserved2[3];
}CPROC_HRPD_NVIM_PILOT_SEARCH_CTRL_STRU;

/*****************************************************************************
 结构名    : CPROC_RM_NVIM_1X_OCCUPY_INFO_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 1x可否抢占参数 3672 for DTS2016030805442
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          us1xOccupyFlag;                         /* 1X可否被本抢占参数 0:表示不可被抢占 1:表示可以被抢占 */
    VOS_UINT8                           ucReserve[2];
}CPROC_RM_NVIM_1X_OCCUPY_INFO_STRU;

/*****************************************************************************
 结构名    : CPROC_HRPD_NVIM_OPTIMIZE_SWITCH_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : CPROC HRPD 优化开关, 3673
*****************************************************************************/
typedef struct
{
    VOS_UINT8                               enTimeInterruptResetFlag;               /*Wake up time is inconsistent with BBP.
                                                                                     1 Reset.
                                                                                     0 send error ind to cas. Expected release all from Cas*/

    VOS_UINT8                               aucReserved[31];
}CPROC_HRPD_NVIM_OPTIMIZE_SWITCH_STRU;

/*****************************************************************************
 结构名    : CPROC_HRPD_NVIM_TCH_HO_CTRL_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : CPROC_HRPD用于控制tch切换的控制参数 3674 for DTS2016031405459
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucLevel1CreditEcn0filterThresh;         /* 激活集小区与服务小区Ecn0Filter比较一级门限，精度0.125DB，默认值为0.5db*8 */
    VOS_UINT8                           ucLevel1CreditTimeThresh;               /* 一级门限连续满足切换的次数，默认为4次 */
    VOS_UINT8                           ucLevel2CreditEcn0filterThresh;         /* 激活集小区与服务小区Ecn0Filter比较二级门限，精度0.125DB，默认值为1db*8 */
    VOS_UINT8                           ucLevel2CreditTimeThresh;               /* 二级门限连续满足切换的次数，默认为2次 */
    VOS_UINT8                           ucCreditCalcPeriod;                     /* 激活集中小区与服务小区能量比较的周期，以1slot为单位，
                                                                                   默认为16slot,即每隔16slot计算一次小区是否满足一级或二级门限 */
    VOS_UINT8                           ucScunlockHoDelay;                      /* 服务小区unlock后启动的HO定时器，以1slot为单位，默认为64slot */
    VOS_UINT8                           ucDrcHoRelativeEcn0filterThresh;        /* 服务小区unlock后查找满足切换的小区时相对于当前服务小区的ECN0FILTER门限，精度0.125db，默认为 6db*8 */
    VOS_UINT8                           ucHoDrclockedTimeTh;                    /* 切换时drclock的最小连续次数 */
}CPROC_HRPD_NVIM_TCH_HO_CTRL_STRU;

/*****************************************************************************
 结构名    : CPROC_HRPD_NVIM_1X_PAGING_FAIL_CTRL_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : CPROC_RM用于控制1X因为HRPD信令失败通知HRPD是否使能保护 3675 for DTS2016022201365
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucDeprotectHrpdFor1xPaging;             /* 1x连续寻呼失败情况下，通知HRPD不做信令保护的功能开关 */
    VOS_UINT8                           uc1xPagingFailMaxCnt128;                /* 1x时隙周期配置为1.28s时，如果连续paging fail达到MAXCNT，通知HRPD不做保护 */
    VOS_UINT8                           uc1xPagingFailMaxCnt256;                /* 1x时隙周期配置为2.56s时，如果连续paging fail达到MAXCNT，通知HRPD不做保护 */
    VOS_UINT8                           uc1xPagingFailMaxCnt512;                /* 1x时隙周期配置为5.12s时，如果连续paging fail达到MAXCNT，通知HRPD不做保护 */
}CPROC_HRPD_NVIM_1X_PAGING_FAIL_CTRL_STRU;

/*****************************************************************************
 结构名    : CPROC_HRPD_NVIM_MEASURENT_CTRL_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : CPROC_HRPD测量相关的参数控制 3676 for DTS2016032105464
*****************************************************************************/
typedef struct
{
    VOS_INT16                           sThAddIc;                               /* ecn0_filter 加入IC的相对门限，0.125db为单位，默认值( -12 * 8 ) */
    VOS_INT16                           sThDeleteIc;                            /* ecn0_filter IC小区删除的相对门限，0.125db为单位，默认值( -15 * 8 )*/
    VOS_INT16                           sThAbsAddIc;                            /* ecn0 加入IC的绝对门限，0.125db为单位，默认值( -14 * 8 ) */
    VOS_INT16                           sThAbsDelIc;                            /* ecn0 删除IC的绝对门限，0.125db为单位，默认值( -18 * 8 ) */
    VOS_INT16                           sThReplaceIc1;                          /* ecn0_filter IC小区替换的相对门限1，0.125db为单位，默认值( 3 * 8 ) */
    VOS_INT16                           sThReplaceIc2;                          /* ecn0_filter IC小区替换的相对门限2，0.125db为单位，默认值( 3 * 8 ) */
    VOS_INT16                           sThAgeIc2;                              /* IC小区替换门限2满足的次数 默认值( 3 ) */
    VOS_UINT8                           ucMaxIcNum;                             /* IC小区的最大个数 默认值( 3 ) */
    VOS_UINT8                           ucReserved;
    VOS_UINT16                          usNsfPeriodInSlot;                      /* 异频测量周期，默认为576，以slot为单位 */
    VOS_UINT16                          usReserved1;
    VOS_UINT16                          usReserved2;
    VOS_UINT16                          usReserved3;
}CPROC_HRPD_NVIM_MEASURENT_CTRL_STRU;

/*****************************************************************************
 结构名    : CPROC_HRPD_NVIM_STATISTICS_THRESHOLD_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : PM log功耗实网信息统计门限 3677
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucNCellMeasCountFew;     /* 时隙模式唤醒到睡眠测量所有小区个数统计低门限 */
    VOS_UINT8                           ucNCellMeasCountMany;    /* 时隙模式唤醒到睡眠测量所有小区个数统计高门限 */
    VOS_INT8                            cPsTxPwrLow;             /* 数据业务上行功率统计低门限 */
    VOS_INT8                            cPsTxPwrHigh;            /* 数据业务上行功率统计高门限 */
    VOS_UINT8                           aucReserved[4];
}CPROC_HRPD_NVIM_STATISTICS_THRESHOLD_STRU;

/*****************************************************************************
 结构名    : CPROC_HRPD_NVIM_MEASUREMENT_FILTER_FACTOR_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : CPROC_HRPD测量ecn0滤波因子 3678 for DTS2016030301032
*****************************************************************************/
typedef struct
{
    VOS_UINT8                          ucCcOldFactor;                           /* CC ecn0 filter old factor */
    VOS_UINT8                          ucCcCurFactor;                           /* CC ecn0 filter current factor */
    VOS_UINT8                          ucTchOldFactor;                          /* TCH ecn0 filter old factor */
    VOS_UINT8                          ucTchCurFactor;                          /* TCH ecn0 filter current factor */
    VOS_UINT8                          ucDrxOldFactor;                          /* DRX ecn0 filter old factor */
    VOS_UINT8                          ucDrxCurFactor;                          /* DRX ecn0 filter current factor */
    VOS_UINT8                          ucContFilterBetweenDrxPeriods;           /* Flag indicates if do continuous filter between DRX periods.
                                                                                 * 1: continuous filter, 0: not. default 0. */
    VOS_UINT8                          ucReserved;
}CPROC_HRPD_NVIM_MEASUREMENT_FILTER_FACTOR_STRU;

/*****************************************************************************
  8 UNION定义
*****************************************************************************/


/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/


/*****************************************************************************
  10 函数声明
*****************************************************************************/


#if (VOS_OS_VER == VOS_WIN32)
#pragma pack()
#else
#pragma pack(0)
#endif

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of CasNvInterface.h */


