/*
* Copyright (C) Huawei Technologies Co., Ltd. 2012-2015. All rights reserved.
* foss@huawei.com
*
* If distributed as part of the Linux kernel, the following license terms
* apply:
*
* * This program is free software; you can redistribute it and/or modify
* * it under the terms of the GNU General Public License version 2 and
* * only version 2 as published by the Free Software Foundation.
* *
* * This program is distributed in the hope that it will be useful,
* * but WITHOUT ANY WARRANTY; without even the implied warranty of
* * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* * GNU General Public License for more details.
* *
* * You should have received a copy of the GNU General Public License
* * along with this program; if not, write to the Free Software
* * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307, USA
*
* Otherwise, the following license terms apply:
*
* * Redistribution and use in source and binary forms, with or without
* * modification, are permitted provided that the following conditions
* * are met:
* * 1) Redistributions of source code must retain the above copyright
* *    notice, this list of conditions and the following disclaimer.
* * 2) Redistributions in binary form must reproduce the above copyright
* *    notice, this list of conditions and the following disclaimer in the
* *    documentation and/or other materials provided with the distribution.
* * 3) Neither the name of Huawei nor the names of its contributors may
* *    be used to endorse or promote products derived from this software
* *    without specific prior written permission.
*
* * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
* ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
* LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
* CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
* SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
* INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
* CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
* ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
* POSSIBILITY OF SUCH DAMAGE.
*
*/

#ifndef  AT_IMSA_INTERFACE_H
#define  AT_IMSA_INTERFACE_H

/*****************************************************************************
  1 ͷ�ļ�����
*****************************************************************************/
#include "vos.h"
#include "TafTypeDef.h"

#include "TafApsApi.h"
#include "AtMnInterface.h"
#include "MnCallApi.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(4)

#define AT_IMSA_IMPU_MAX_LENGTH        (128)
#define AT_IMSA_IMPI_MAX_LENGTH        (128)
#define AT_IMSA_DOMAIN_MAX_LENGTH      (128)


/* equals IMSA_MAX_CALL_NUMBER_LENGTH */
#define AT_IMSA_CALL_ASCII_NUM_MAX_LENGTH     (40)

#define IMSA_PHONECONTEXT_MAX_LENGTH     (128)

#define IMSA_PUBLICEUSERID_MAX_LENGTH    (128)
#define AT_IMSA_IPV4_ADDR_LEN              (4)

#define AT_IMSA_IPV6_ADDR_LEN              (16)


#define IMSA_IMS_STRING_LENGTH           (128)
#define AT_IMSA_MAX_SMSPSI_LEN           (128)

#define IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN      (0x0100)

/* ��ǰimsע��ʧ�������ϱ�����ַ�������Ϊ255 */
#define IMSA_AT_REG_FAIL_CAUSE_STR_MAX_LEN              (256)
/*****************************************************************************
  2 ö�ٶ���
*****************************************************************************/
/*****************************************************************************
ö����    : AT_IMSA_MSG_TYPE_ENUM
�ṹ˵��  : AT ��IMSA��֮�����Ϣ

  1.��    ��   : 2013��9��13��
    ��    ��   : Y00213812
    �޸�����   : ����AT��IMSA֮��Ľӿ���Ϣ
*****************************************************************************/
enum AT_IMSA_MSG_TYPE_ENUM
{
    /* AT->IMSA */
    ID_AT_IMSA_CIREG_SET_REQ                = 0x0001,                           /* _H2ASN_MsgChoice AT_IMSA_CIREG_SET_REQ_STRU */
    ID_AT_IMSA_CIREG_QRY_REQ                = 0x0002,                           /* _H2ASN_MsgChoice AT_IMSA_CIREG_QRY_REQ_STRU */
    ID_AT_IMSA_CIREP_SET_REQ                = 0x0003,                           /* _H2ASN_MsgChoice AT_IMSA_CIREP_SET_REQ_STRU */
    ID_AT_IMSA_CIREP_QRY_REQ                = 0x0004,                           /* _H2ASN_MsgChoice AT_IMSA_CIREP_QRY_REQ_STRU */
    ID_AT_IMSA_VOLTEIMPU_QRY_REQ            = 0x0005,                           /* _H2ASN_MsgChoice AT_IMSA_VOLTEIMPU_QRY_REQ_STRU */



    ID_AT_IMSA_IMS_REG_DOMAIN_QRY_REQ       = 0x0006,                           /* _H2ASN_MsgChoice AT_IMSA_IMS_REG_DOMAIN_QRY_REQ_STRU */
    ID_AT_IMSA_IMS_CTRL_MSG                 = 0x0007,                           /* _H2ASN_MsgChoice AT_IMSA_IMS_CTRL_MSG_STRU */

    ID_AT_IMSA_CALL_ENCRYPT_SET_REQ         = 0x0008,                           /* _H2ASN_MsgChoice AT_IMSA_CALL_ENCRYPT_SET_REQ_STRU */

    ID_AT_IMSA_ROAMING_IMS_QRY_REQ          = 0x0009,                           /* _H2ASN_MsgChoice AT_IMSA_ROAMING_IMS_QRY_REQ_STRU */

    ID_AT_IMSA_PCSCF_SET_REQ                = 0x000A,                           /* _H2ASN_MsgChoice AT_IMSA_PCSCF_SET_REQ_STRU */
    ID_AT_IMSA_PCSCF_QRY_REQ                = 0x000B,                           /* _H2ASN_MsgChoice AT_IMSA_PCSCF_QRY_REQ_STRU */
    ID_AT_IMSA_DMDYN_SET_REQ                = 0x000C,                           /* _H2ASN_MsgChoice AT_IMSA_DMDYN_SET_REQ_STRU */
    ID_AT_IMSA_DMDYN_QRY_REQ                = 0x000D,                           /* _H2ASN_MsgChoice AT_IMSA_DMDYN_QRY_REQ_STRU */

    ID_AT_IMSA_IMSTIMER_SET_REQ             = 0x000E,                           /* _H2ASN_MsgChoice AT_IMSA_IMSTIMER_SET_REQ_STRU */
    ID_AT_IMSA_IMSTIMER_QRY_REQ             = 0x000F,                           /* _H2ASN_MsgChoice AT_IMSA_IMSTIMER_QRY_REQ_STRU */
    ID_AT_IMSA_SMSPSI_SET_REQ               = 0x0010,                           /* _H2ASN_MsgChoice AT_IMSA_SMSPSI_SET_REQ_STRU */
    ID_AT_IMSA_SMSPSI_QRY_REQ               = 0x0011,                           /* _H2ASN_MsgChoice AT_IMSA_SMSPSI_QRY_REQ_STRU */
    ID_AT_IMSA_DMUSER_QRY_REQ               = 0x0012,

    ID_AT_IMSA_NICKNAME_SET_REQ             = 0x0013,                           /* _H2ASN_MsgChoice AT_IMSA_NICKNAME_SET_REQ_STRU */
    ID_AT_IMSA_NICKNAME_QRY_REQ             = 0x0014,                           /* _H2ASN_MsgChoice AT_IMSA_NICKNAME_QRY_REQ_STRU */
    ID_AT_IMSA_BATTERYINFO_SET_REQ          = 0x0015,                           /* _H2ASN_MsgChoice AT_IMSA_BATTERY_INFO_SET_REQ_STRU */
    ID_AT_IMSA_VOLTEREG_NTF                 = 0x0016,                           /* _H2ASN_MsgChoice AT_IMSA_VOLTEREG_NTF_STRU */

    ID_AT_IMSA_CANCEL_ADD_VIDEO_REQ         = 0x0017,                           /* _H2ASN_MsgChoice AT_IMSA_CANCEL_ADD_VIDEO_REQ_STRU */

    ID_AT_IMSA_VOLTEIMPI_QRY_REQ            = 0x0018,                                               /* _H2ASN_MsgChoice AT_IMSA_VOLTEIMPI_QRY_REQ_STRU */
    ID_AT_IMSA_VOLTEDOMAIN_QRY_REQ          = 0x0019,                                             /* _H2ASN_MsgChoice AT_IMSA_VOLTEDOMAIN_QRY_REQ_STRU */
    ID_AT_IMSA_REGERR_REPORT_SET_REQ        = 0x001A,                           /* _H2ASN_MsgChoice AT_IMSA_REGERR_REPORT_SET_REQ_STRU*/
    ID_AT_IMSA_REGERR_REPORT_QRY_REQ        = 0x001B,                           /* _H2ASN_MsgChoice AT_IMSA_REGERR_REPORT_QRY_REQ_STRU*/


    /* IMSA->AT */
    ID_IMSA_AT_CIREG_SET_CNF                = 0x1001,                           /* _H2ASN_MsgChoice IMSA_AT_CIREG_SET_CNF_STRU */
    ID_IMSA_AT_CIREG_QRY_CNF                = 0x1002,                           /* _H2ASN_MsgChoice IMSA_AT_CIREG_QRY_CNF_STRU */
    ID_IMSA_AT_CIREP_SET_CNF                = 0x1003,                           /* _H2ASN_MsgChoice IMSA_AT_CIREP_SET_CNF_STRU */
    ID_IMSA_AT_CIREP_QRY_CNF                = 0x1004,                           /* _H2ASN_MsgChoice IMSA_AT_CIREP_QRY_CNF_STRU */

    ID_IMSA_AT_VOLTEIMPU_QRY_CNF            = 0x1005,                           /* _H2ASN_MsgChoice IMSA_AT_VOLTEIMPU_QRY_CNF_STRU */




    ID_IMSA_AT_CIREGU_IND                   = 0x1006,                           /* _H2ASN_MsgChoice IMSA_AT_CIREGU_IND_STRU */
    ID_IMSA_AT_CIREPH_IND                   = 0x1007,                           /* _H2ASN_MsgChoice IMSA_AT_CIREPH_IND_STRU */
    ID_IMSA_AT_CIREPI_IND                   = 0x1008,                           /* _H2ASN_MsgChoice IMSA_AT_CIREPI_IND_STRU */

    ID_IMSA_AT_VT_PDP_ACTIVATE_IND          = 0x1009,                           /* _H2ASN_MsgChoice IMSA_AT_VT_PDP_ACTIVATE_IND_STRU */
    ID_IMSA_AT_VT_PDP_DEACTIVATE_IND        = 0x100A,                           /* _H2ASN_MsgChoice IMSA_AT_VT_PDP_DEACTIVATE_IND_STRU */

    ID_IMSA_AT_MT_STATES_IND                = 0x100B,                           /* _H2ASN_MsgChoice IMSA_AT_MT_STATES_IND_STRU */

    ID_IMSA_AT_IMS_REG_DOMAIN_QRY_CNF       = 0x100C,                           /* _H2ASN_MsgChoice IMSA_AT_IMS_REG_DOMAIN_QRY_CNF_STRU */
    ID_IMSA_AT_IMS_CTRL_MSG                 = 0x100D,                           /* _H2ASN_MsgChoice IMSA_AT_IMS_CTRL_MSG_STRU */

    ID_IMSA_AT_CALL_ENCRYPT_SET_CNF         = 0x100E,                           /* _H2ASN_MsgChoice IMSA_AT_CALL_ENCRYPT_SET_CNF_STRU */

    ID_IMSA_AT_ROAMING_IMS_QRY_CNF          = 0x100F,                           /* _H2ASN_MsgChoice IMSA_AT_ROAMING_IMS_QRY_CNF_STRU */

    ID_IMSA_AT_IMS_RAT_HANDOVER_IND         = 0x1010,                           /* _H2ASN_MsgChoice IMSA_AT_IMS_RAT_HANDOVER_IND_STRU */
    ID_IMSA_AT_IMS_SRV_STATUS_UPDATE_IND    = 0x1011,                           /* _H2ASN_MsgChoice IMSA_AT_IMS_SRV_STATUS_UPDATE_IND_STRU */

    ID_IMSA_AT_PCSCF_SET_CNF                = 0x1012,                           /* _H2ASN_MsgChoice IMSA_AT_PCSCF_SET_CNF_STRU */
    ID_IMSA_AT_PCSCF_QRY_CNF                = 0x1013,                           /* _H2ASN_MsgChoice IMSA_AT_PCSCF_QRY_CNF_STRU */

    ID_IMSA_AT_DMDYN_SET_CNF                = 0x1014,                           /* _H2ASN_MsgChoice IMSA_AT_DMDYN_SET_CNF_STRU */
    ID_IMSA_AT_DMDYN_QRY_CNF                = 0x1015,                           /* _H2ASN_MsgChoice IMSA_AT_DMDYN_QRY_CNF_STRU */

    ID_IMSA_AT_DMCN_IND                     = 0x1016,                           /* _H2ASN_MsgChoice IMSA_AT_DMCN_IND_STRU */

    ID_IMSA_AT_IMSTIMER_SET_CNF             = 0x1017,                           /* _H2ASN_MsgChoice IMSA_AT_IMSTIMER_SET_CNF_STRU*/
    ID_IMSA_AT_IMSTIMER_QRY_CNF             = 0x1018,                           /* _H2ASN_MsgChoice IMSA_AT_IMSTIMER_QRY_CNF_STRU*/
    ID_IMSA_AT_SMSPSI_SET_CNF               = 0x1019,                           /* _H2ASN_MsgChoice IMSA_AT_SMSPSI_SET_CNF_STRU*/
    ID_IMSA_AT_SMSPSI_QRY_CNF               = 0x101A,                           /* _H2ASN_MsgChoice IMSA_AT_SMSPSI_SET_CNF_STRU*/
    ID_IMSA_AT_DMUSER_QRY_CNF               = 0x101B,

    ID_IMSA_AT_NICKNAME_SET_CNF             = 0x101C,                           /* _H2ASN_MsgChoice IMSA_AT_NICKNAME_SET_CNF_STRU */
    ID_IMSA_AT_NICKNAME_QRY_CNF             = 0x101D,                           /* _H2ASN_MsgChoice IMSA_AT_NICKNAME_QRY_CNF_STRU */
    ID_IMSA_AT_REGFAIL_IND                  = 0x101E,                           /* _H2ASN_MsgChoice IMSA_AT_REG_FAIL_IND_STRU */
    ID_IMSA_AT_BATTERYINFO_SET_CNF          = 0x101F,                           /* _H2ASN_MsgChoice IMSA_AT_BATTERY_INFO_SET_CNF_STRU */

    ID_IMSA_AT_CANCEL_ADD_VIDEO_CNF         = 0x1020,                           /* _H2ASN_MsgChoice IMSA_AT_CANCEL_ADD_VIDEO_CNF_STRU */

    ID_IMSA_AT_VOLTEIMPI_QRY_CNF            = 0x1021,                           /* _H2ASN_MsgChoice IMSA_AT_VOLTEIMPI_QRY_CNF_STRU */
    ID_IMSA_AT_VOLTEDOMAIN_QRY_CNF          = 0x1022,                           /* _H2ASN_MsgChoice IMSA_AT_VOLTEDOMAIN_QRY_CNF_STRU */
    ID_IMSA_AT_REGERR_REPORT_SET_CNF        = 0x1023,                           /* _H2ASN_MsgChoice IMSA_AT_REGERR_REPORT_SET_CNF_STRU*/
    ID_IMSA_AT_REGERR_REPORT_QRY_CNF        = 0x1024,                           /* _H2ASN_MsgChoice IMSA_AT_REGERR_REPORT_QRY_CNF_STRU*/
    ID_IMSA_AT_REGERR_REPORT_IND            = 0x1025,                           /* _H2ASN_MsgChoice IMSA_AT_REGERR_REPORT_IND_STRU */

    ID_AT_IMSA_MSG_BUTT
};
typedef  VOS_UINT32  AT_IMSA_MSG_TYPE_ENUM_UINT32;


/*****************************************************************************
ö����    : AT_IMSA_IMS_REG_STATE_REPORT_ENUM
�ṹ˵��  : IMSע��״̬�ϱ�����

  1.��    ��   : 2013��9��13��
    ��    ��   : Y00213812
    �޸�����   : ����ö��
*****************************************************************************/
enum AT_IMSA_IMS_REG_STATE_REPORT_ENUM
{
    AT_IMSA_IMS_REG_STATE_DISABLE_REPORT        = 0,
    AT_IMSA_IMS_REG_STATE_ENABLE_REPORT,
    AT_IMSA_IMS_REG_STATE_ENABLE_EXTENDED_REPROT,

    AT_IMSA_IMS_REG_STATE_REPROT_BUTT
};
typedef  VOS_UINT32  AT_IMSA_IMS_REG_STATE_REPORT_ENUM_UINT32;

/*****************************************************************************
ö����    : AT_IMSA_CCWAI_MODE_ENUM
�ṹ˵��  : �����Ƿ�֧��IMSVOPS

  1.��    ��   : 2013��9��13��
    ��    ��   : Y00213812
    �޸�����   : ����ö��
*****************************************************************************/
enum AT_IMSA_CCWAI_MODE_ENUM
{
    AT_IMSA_CCWAI_MODE_DISABLE               = 0,
    AT_IMSA_CCWAI_MODE_ENABLE,

    AT_IMSA_CCWAI_MODE_BUTT
};
typedef  VOS_UINT8 AT_IMSA_CCWAI_MODE_ENUM_UINT8;


/*****************************************************************************
ö����    : AT_IMSA_IMSVOPS_CAPABILITY_ENUM
�ṹ˵��  : �����Ƿ�֧��IMSVOPS

  1.��    ��   : 2013��9��13��
    ��    ��   : Y00213812
    �޸�����   : ����ö��
*****************************************************************************/
enum AT_IMSA_IMSVOPS_CAPABILITY_ENUM
{
    AT_IMSA_NW_NOT_SUPORT_IMSVOPS               = 0,
    AT_IMSA_NW_SUPORT_IMSVOPS,

    AT_IMSA_IMSVOPS_CAPABILITY_BUTT
};
typedef  VOS_UINT32  AT_IMSA_IMSVOPS_CAPABILITY_ENUM_UINT32;


/*****************************************************************************
ö����    : AT_IMSA_CIREP_REPORT_ENUM
�ṹ˵��  : �Ƿ�����CIREPH��CIREPI�����ϱ�

  1.��    ��   : 2013��9��13��
    ��    ��   : Y00213812
    �޸�����   : ����ö��
*****************************************************************************/
enum AT_IMSA_CIREP_REPORT_ENUM
{
    AT_IMSA_CIREP_REPORT_DISENABLE      = 0,
    AT_IMSA_CIREP_REPORT_ENABLE,

    AT_IMSA_CIREP_REPORT_BUTT
};
typedef  VOS_UINT32  AT_IMSA_CIREP_REPORT_ENUM_UINT32;


/*****************************************************************************
ö����    : AT_IMSA_SRVCC_HANDVOER_ENUM
�ṹ˵��  : SRVCC����״̬

  1.��    ��   : 2013��9��13��
    ��    ��   : Y00213812
    �޸�����   : ����ö��
*****************************************************************************/
enum AT_IMSA_SRVCC_HANDVOER_ENUM
{
    AT_IMSA_SRVCC_HANDOVER_STARTED                = 0,
    AT_IMSA_SRVCC_HANDOVER_SUCCESS,
    AT_IMSA_SRVCC_HANDOVER_CANCEL,
    AT_IMSA_SRVCC_HANDOVER_FAILURE,

    AT_IMSA_SRVCC_HANDOVER_BUTT
};
typedef  VOS_UINT32  AT_IMSA_SRVCC_HANDVOER_ENUM_UINT32;

/*****************************************************************************
ö����    : AT_IMSA_BATTERY_STATUS_ENUM
�ṹ˵��  : ��ص���״̬

  1.��    ��   : 2016��07��05��
    ��    ��   : w00316404
    �޸�����   : ����ö��
*****************************************************************************/
enum AT_IMSA_BATTERY_STATUS_ENUM
{
    AT_IMSA_BATTERY_STATUS_NORMAL                 = 0,                          /* ���� */
    AT_IMSA_BATTERY_STATUS_LOW,                                                 /* �͵� */
    AT_IMSA_BATTERY_STATUS_EXHAUST,                                             /* ��غľ� */

    AT_IMSA_BATTERY_STATUS_BUTT
};
typedef  VOS_UINT8  AT_IMSA_BATTERY_STATUS_ENUM_UINT8;

/*****************************************************************************
ö����    : IMSA_AT_REG_FAIL_CODE_ENUM
�ṹ˵��  : IMSע��ʧ����Ϣ

  1.��    ��   : 2016��07��05��
    ��    ��   : w00316404
    �޸�����   : ����ö��
*****************************************************************************/
enum IMSA_AT_REG_FAIL_CODE_ENUM
{
    IMSA_AT_REG_FAIL_CODE_PERM                    = 1,

    IMSA_AT_REG_FAIL_CODE_BUTT
};
typedef  VOS_UINT8  IMSA_AT_REG_FAIL_CODE_ENUM_UINT8;

/*****************************************************************************
 ö����    : IMSA_AT_IMS_RAT_TYPE_ENUM
 ö��˵��  : IMS��������
 1.��    ��   : 2015��10��07��
   ��    ��   : f00179208
   �޸�����   : ����
*****************************************************************************/
enum IMSA_AT_IMS_RAT_TYPE_ENUM
{
    IMSA_AT_IMS_RAT_TYPE_LTE            = 0x00,
    IMSA_AT_IMS_RAT_TYPE_WIFI           = 0x01,
    IMSA_AT_IMS_RAT_TYPE_BUTT
};
typedef VOS_UINT8 IMSA_AT_IMS_RAT_TYPE_ENUM_UINT8;
/*****************************************************************************
ö����    : AT_IMSA_ROAMING_IMS_SUPPORT_ENUM
�ṹ˵��  : ����״̬���Ƿ�֧��IMS����

  1.��    ��   : 2016��1��15��
    ��    ��   : w00316404
    �޸�����   : ����ö��
*****************************************************************************/
enum AT_IMSA_ROAMING_IMS_SUPPORT_ENUM
{
    AT_IMSA_ROAMING_IMS_SUPPORT         = 1,
    AT_IMSA_ROAMING_IMS_NOT_SUPPORT     = 2,

    AT_IMSA_ROAMING_IMS_BUTT
};
typedef  VOS_UINT32  AT_IMSA_ROAMING_IMS_SUPPORT_ENUM_UINT32;

/*****************************************************************************
 ö����    : IMSA_AT_IMS_REG_DOMAIN_TYPE_ENUM
 ö��˵��  : IMSע��������
 1.��    ��   : 2015��10��07��
   ��    ��   : f00179208
   �޸�����   : ����
*****************************************************************************/
enum IMSA_AT_IMS_REG_DOMAIN_TYPE_ENUM
{
    IMSA_AT_IMS_REG_DOMAIN_TYPE_LTE     = 0x00,
    IMSA_AT_IMS_REG_DOMAIN_TYPE_WIFI    = 0x01,
    IMSA_AT_IMS_REG_DOMAIN_TYPE_UNKNOWN = 0x02,
    IMSA_AT_IMS_REG_DOMAIN_TYPE_BUTT
};
typedef VOS_UINT8 IMSA_AT_IMS_REG_DOMAIN_TYPE_ENUM_UINT8;


/*****************************************************************************
 ö����    : IMSA_AT_IMS_RAT_HO_STATUS_ENUM
 ö��˵��  : IMSע�����л�״̬
 1.��    ��   : 2016��04��07��
   ��    ��   : f00179208
   �޸�����   : ����
*****************************************************************************/
enum IMSA_AT_IMS_RAT_HO_STATUS_ENUM
{
    IMSA_AT_IMS_RAT_HO_STATUS_SUCCESS               = 0x00,     /* RAT handover was successful */
    IMSA_AT_IMS_RAT_HO_STATUS_FAILURE               = 0x01,     /* RAT handover was failed */
    IMSA_AT_IMS_RAT_HO_STATUS_NOT_TRIGGERED         = 0x02,     /* RAT handover could nut be triggered */
    IMSA_AT_IMS_RAT_HO_STATUS_BUTT
};
typedef VOS_UINT8 IMSA_AT_IMS_RAT_HO_STATUS_ENUM_UINT8;

/*****************************************************************************
 ö����    : IMSA_AT_IMS_SERVICE_STATUS_ENUM
 ö��˵��  : IMS�ķ���״̬
 1.��    ��   : 2016��04��07��
   ��    ��   : f00179208
   �޸�����   : ����
*****************************************************************************/
enum IMSA_AT_IMS_SERVICE_STATUS_ENUM
{
    IMSA_AT_IMS_SERVICE_STATUS_NO_SERVICE           = 0x00,     /* IMS is no service */
    IMSA_AT_IMS_SERVICE_STATUS_LIMITED_SERVICE      = 0x01,     /* IMS is in limited service */
    IMSA_AT_IMS_SERVICE_STATUS_FULL_SERVICE         = 0x02,     /* IMS is in full service */
    IMSA_AT_IMS_SERVICE_STATUS_SOS_PENDING          = 0x08,     /* IMS is in sos pending */
    IMSA_AT_IMS_SERVICE_STATUS_BUTT
};
typedef VOS_UINT8 IMSA_AT_IMS_SERVICE_STATUS_ENUM_UINT8;

/*****************************************************************************
 ö����    : IMSA_AT_HO_CAUSE_ENUM
 ö��˵��  : IMS��HO״̬
 1.��    ��   : 2016��04��07��
   ��    ��   :  z00353461
   �޸�����   : ����
*****************************************************************************/

enum IMSA_AT_HO_CAUSE_ENUM
{
    IMSA_AT_HO_CAUSE_SUCCESS                    = 0,       /**< HO����ִ�гɹ� */
    IMSA_AT_HO_CAUSE_FAIL_PARA_ERR              = 1,       /**< HO����ִ��ʧ�ܣ����ڲ������� */
    IMSA_AT_HO_CAUSE_FAIL_CN_REJ                = 2,       /**< HO����ִ��ʧ�ܣ����ڱ�����ܾ� */
    IMSA_AT_HO_CAUSE_FAIL_TIMER_EXP             = 3,       /**< HO����ִ��ʧ�ܣ����ڶ�ʱ����ʱ */
    IMSA_AT_HO_CAUSE_FAIL_CONN_RELEASING        = 4,       /**< HO����ִ��ʧ�ܣ����������ͷ����� */
    IMSA_AT_HO_CAUSE_FAIL_PDP_ACTIVATE_LIMIT    = 5,       /**< HO����ִ��ʧ�ܣ����ڼ���ĳ��������� */
    IMSA_AT_HO_CAUSE_FAIL_SAME_APN_OPERATING    = 6,       /**< HO����ִ��ʧ�ܣ�����APS����ִ�в��� */
    IMSA_AT_HO_CAUSE_FAIL_TEMP_FORBIDDEN        = 7,       /**< HO����ִ��ʧ�ܣ��յ���ʱ����ԭ��ֵ�������಻��Ӧ */
    IMSA_AT_HO_CAUSE_FAIL_PERM_FORBIDDEN        = 8,       /**< HO����ִ��ʧ�ܣ��յ����ñ���ԭ��ֵ */
    IMSA_AT_HO_CAUSE_FAIL_WIFI_READY_IND_TIMEOUT    = 9,   /**< HO����ִ��ʧ�ܣ�����WIFI�·���READY IND��ʱ */

    IMSA_AT_HO_CAUSE_FAIL_OHTERS                    = 11,    /**< HO����ִ��ʧ�ܣ���������ԭ�� */
	IMSA_AT_HO_CAUSE_FAIL_NO_DSDS_RESOURCE			= 12,    /**< HO����ִ��ʧ�ܣ�����DSDS������������Դʧ�� */

    IMSA_AT_HO_CAUSE_BUTT
};
typedef VOS_UINT32 IMSA_AT_HO_CAUSE_ENUM_UINT32;





enum IMSA_AT_PCSCF_SRC_ENUM
{
    IMSA_AT_PCSCF_SRC_DM_DEFAULT    = 0,    /* P-CSCF��ַ��Դ��DMĬ������ */
    IMSA_AT_PCSCF_SRC_DM            = 1,    /* P-CSCF��ַ��Դ��DM������ */

    IMSA_AT_PCSCF_SRC_BUTT
};
typedef VOS_UINT32 IMSA_AT_PCSCF_SRC_ENUM_UINT32;

enum AT_IMSA_VOICE_DOMAIN_ENUM
{
    AT_IMSA_VOICE_DOMAIN_CS_ONLY                = 0,  /* CS voice only */
    AT_IMSA_VOICE_DOMAIN_IMS_PS_ONLY            = 1,  /* IMS PS voice only */
    AT_IMSA_VOICE_DOMAIN_CS_PREFERRED           = 2,  /* CS voice preferred, IMS PS voice as secondary */
    AT_IMSA_VOICE_DOMAIN_IMS_PS_PREFERRED       = 3,  /* IMS PS voice preferred, CS voice as secondary  */

    AT_IMSA_VOICE_DOMAIN_BUTT
};
typedef VOS_UINT32 AT_IMSA_VOICE_DOMAIN_ENUM_UINT32;
/*****************************************************************************
 ö����    : IMSA_AT_REG_ERR_TYPE_ENUM_UINT8
 ö��˵��  : IMSע��ʧ������
 1.��    ��   : 2016��11��09��
   ��    ��   : w00209181
   �޸�����   : ����
*****************************************************************************/
enum IMSA_AT_REG_ERR_TYPE_ENUM
{
    IMSA_AT_REG_ERR_TYPE_PDN_FAIL       = 0x00,
    IMSA_AT_REG_ERR_TYPE_IMS_REG_FAIL   = 0x01,
    IMSA_AT_REG_ERR_TYPE_BUTT
};
typedef VOS_UINT8 IMSA_AT_REG_ERR_TYPE_ENUM_UINT8;
/*****************************************************************************
 ö����    : IMSA_AT_REG_ERR_TYPE_ENUM_UINT8
 ö��˵��  : IMSע��ʧ������
 1.��    ��   : 2016��11��09��
   ��    ��   : w00209181
   �޸�����   : ����
*****************************************************************************/
enum IMSA_AT_PDN_FAIL_CAUSE_ENUM
{
    IMSA_AT_PDN_FAIL_CAUSE_PARA_ERR                             = 1,
    /* IMSA_AT_PDN_FAIL_CAUSE_CN_REJ                               = 2,*/
    IMSA_AT_PDN_FAIL_CAUSE_TIMER_EXP                            = 3,
    IMSA_AT_PDN_FAIL_CAUSE_CONN_RELEASING                       = 4,
    IMSA_AT_PDN_FAIL_CAUSE_PDP_ACTIVATE_LIMIT                   = 5,
    IMSA_AT_PDN_FAIL_CAUSE_SAME_APN_OPERATING                   = 6,
    IMSA_AT_PDN_FAIL_CAUSE_TEMP_FORBIDDEN                       = 7,
    IMSA_AT_PDN_FAIL_CAUSE_PERM_FORBIDDEN                       = 8,
    IMSA_AT_PDN_FAIL_CAUSE_WIFI_READY_IND_TIMEOUT               = 9,
    IMSA_AT_PDN_FAIL_CAUSE_HO_NEW_PDN_SETUP_FAIL                = 10,
    IMSA_AT_PDN_FAIL_CAUSE_WIFI_FAIL_TEMP_FORBIDDEN             = 11,
    IMSA_AT_PDN_FAIL_CAUSE_WIFI_FAIL_PERM_FORBIDDEN             = 12,
    IMSA_AT_PDN_FAIL_CAUSE_WIFI_FAIL_TEMP_FORBIDDEN_WITH_TIMERLEN   = 13,
    IMSA_AT_PDN_FAIL_CAUSE_WIFI_FAIL_LINKLOST                   = 14,
    IMSA_AT_PDN_FAIL_CAUSE_OHTERS                               = 15,

    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_OPERATOR_DETERMINED_BARRING          = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 8),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_MBMS_BC_INSUFFICIENT                 = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 24),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_LLC_OR_SNDCP_FAILURE                 = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 25),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_INSUFFICIENT_RESOURCES               = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 26),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_MISSING_OR_UKNOWN_APN                = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 27),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_UNKNOWN_PDP_ADDR_OR_TYPE             = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 28),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_USER_AUTHENTICATION_FAIL             = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 29),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_ACTIVATION_REJECTED_BY_GGSN_SGW_OR_PGW         = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 30),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_ACTIVATION_REJECTED_UNSPECIFIED      = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 31),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SERVICE_OPTION_NOT_SUPPORTED         = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 32),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_REQUESTED_SERVICE_NOT_SUBSCRIBED     = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 33),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SERVICE_OPTION_TEMP_OUT_ORDER        = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 34),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_NSAPI_ALREADY_USED                   = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 35),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_REGULAR_DEACTIVATION                 = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 36),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_QOS_NOT_ACCEPTED                     = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 37),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_NETWORK_FAILURE                      = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 38),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_REACTIVATION_REQUESTED               = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 39),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_FEATURE_NOT_SUPPORT                  = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 40),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SEMANTIC_ERR_IN_TFT                  = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 41),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SYNTACTIC_ERR_IN_TFT                 = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 42),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_UKNOWN_PDP_CONTEXT                   = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 43),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SEMANTIC_ERR_IN_PACKET_FILTER        = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 44),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SYNCTACTIC_ERR_IN_PACKET_FILTER      = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 45),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_PDP_CONTEXT_WITHOUT_TFT_ACTIVATED    = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 46),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_MULTICAST_GROUP_MEMBERHHSHIP_TIMEOUT = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 47),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_REQUEST_REJECTED_BCM_VIOLATION       = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 48),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_LAST_PDN_DISCONN_NOT_ALLOWED         = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 49),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_PDP_TYPE_IPV4_ONLY_ALLOWED           = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 50),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_PDP_TYPE_IPV6_ONLY_ALLOWED           = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 51),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SINGLE_ADDR_BEARERS_ONLY_ALLOWED     = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 52),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_INFORMATION_NOT_RECEIVED             = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 53),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_PDN_CONNECTION_DOES_NOT_EXIST        = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 54),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SAME_APN_MULTI_PDN_CONNECTION_NOT_ALLOWED = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 55),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_COLLISION_WITH_NW_INITIATED_REQUEST  = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 56),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_UNSUPPORTED_QCI_VALUE                = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 59),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_BEARER_HANDLING_NOT_SUPPORTED        = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 60),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_INVALID_TI                           = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 81),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SEMANTICALLY_INCORRECT_MESSAGE       = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 95),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_INVALID_MANDATORY_INFO               = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 96),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_MSG_TYPE_NON_EXISTENT                = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 97),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_MSG_TYPE_NOT_COMPATIBLE              = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 98),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_IE_NON_EXISTENT                      = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 99),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_CONDITIONAL_IE_ERR                   = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 100),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_MSG_NOT_COMPATIBLE                   = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 101),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_PROTOCOL_ERR_UNSPECIFIED             = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 111),
    IMSA_AT_PDN_FAIL_CAUSE_SM_NW_APN_RESTRICTION_INCOMPATIBLE         = (IMSA_AT_PDN_FAIL_CAUSE_SM_NW_SECTION_BEGIN + 112),

    IMSA_AT_PDN_FAIL_CAUSE_BUTT
};
typedef VOS_UINT32 IMSA_AT_PDN_FAIL_CAUSE_ENUM_UINT32;
/*****************************************************************************
 ö����    : IMSA_AT_REG_FAIL_CAUSE_ENUM
 ö��˵��  : IMSע��ʧ������
 1.��    ��   : 2016��11��09��
   ��    ��   : w00209181
   �޸�����   : ����
*****************************************************************************/
enum IMSA_AT_REG_FAIL_CAUSE_ENUM
{
    IMSA_AT_REG_FAIL_CAUSE_FAIL                = 1,
    IMSA_AT_REG_FAIL_CAUSE_FAIL_REMOTE         = 2,
    IMSA_AT_REG_FAIL_CAUSE_FAIL_TIMEOUT        = 3,
    IMSA_AT_REG_FAIL_CAUSE_FAIL_TRANSPORT      = 4,
    IMSA_AT_REG_FAIL_CAUSE_FAIL_SA             = 5,
    IMSA_AT_REG_FAIL_CAUSE_FAIL_MT_DEREG       = 6,
    IMSA_AT_REG_FAIL_CAUSE_FAIL_NO_ADDR_PAIR   = 7,
    IMSA_AT_REG_FAIL_CAUSE_FAIL_LACK_PARAM     = 8,
    IMSA_AT_REG_FAIL_CAUSE_FAIL_FORBIDDEN      = 9,
    IMSA_AT_REG_FAIL_CAUSE_FAIL_REREG_FAIL     = 10,

    /* IMS����ܾ�ԭ��ֵ 300~699,ֱ�������֣�����һһ�о�  */

    IMSA_AT_REG_FAIL_CAUSE_BUTT                = 700,
};
typedef VOS_UINT32 IMSA_AT_REG_FAIL_CAUSE_ENUM_UINT32;


/*****************************************************************************
  3 ���Ͷ���
*****************************************************************************/
/*****************************************************************************
�ṹ��    : AT_IMSA_MSG_STRU
�ṹ˵��  : ATģ����IMSAģ������Ϣ�ṹ

1.��    ��  : 2013��09��12��
  ��    ��  : Y00213812
  �޸�����  : �����ṹ
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                              /* _H2ASN_Skip */
    VOS_UINT32                          ulMsgId;                                /* _H2ASN_Skip */
    VOS_UINT16                          usClientId;
    VOS_UINT8                           ucOpId;
    VOS_UINT8                           aucReserved[1];
    VOS_UINT8                           aucContent[4];
} AT_IMSA_MSG_STRU;

/*****************************************************************************
�ṹ��    : AT_IMSA_MSG_STRU
�ṹ˵��  : IMSAģ����ATģ���CNF����Ϣ�ṹ

1.��    ��  : 2016��7��5��
  ��    ��  : w00316404
  �޸�����  : �����ṹ
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                              /* _H2ASN_Skip */
    VOS_UINT32                              ulMsgId;                            /* _H2ASN_Skip */
    AT_APPCTRL_STRU                         stAppCtrl;
    VOS_UINT32                              ulResult;                           /* �ɹ�����VOS_OK��ʧ�ܷ���VOS_ERR */
} IMSA_AT_CNF_MSG_STRU;

/*****************************************************************************
�ṹ��    : AT_IMSA_CIREG_QRY_REQ_STRU
�ṹ˵��  : ID_AT_IMSA_CIREG_QRY_REQ����Ϣ�ṹ

1.��    ��  : 2013��09��12��
  ��    ��  : Y00213812
  �޸�����  : �����ṹ
*****************************************************************************/
typedef AT_IMSA_MSG_STRU AT_IMSA_CIREG_QRY_REQ_STRU;


/*****************************************************************************
�ṹ��    : AT_IMSA_CIREP_QRY_REQ_STRU
�ṹ˵��  : ID_AT_IMSA_CIREP_QRY_REQ����Ϣ�ṹ

1.��    ��  : 2013��09��12��
  ��    ��  : Y00213812
  �޸�����  : �����ṹ
*****************************************************************************/
typedef AT_IMSA_MSG_STRU AT_IMSA_CIREP_QRY_REQ_STRU;

/*****************************************************************************
�ṹ��    : AT_IMSA_VOLTEIMPU_QRY_REQ_STRU
�ṹ˵��  : ID_AT_IMSA_VOLTEIMPU_QRY_REQ����Ϣ�ṹ

1.��    ��  : 2013��12��05��
  ��    ��  : Y00213812
  �޸�����  : �����ṹ
*****************************************************************************/
typedef AT_IMSA_MSG_STRU AT_IMSA_VOLTEIMPU_QRY_REQ_STRU;


/*****************************************************************************
�ṹ��    : AT_IMSA_VOLTEIMPI_QRY_REQ_STRU
�ṹ˵��  : ID_AT_IMSA_VOLTEIMPI_QRY_REQ����Ϣ�ṹ

1.��    ��  : 2016��10��27��
  ��    ��  : W00209181
  �޸�����  : �����ṹ
*****************************************************************************/
typedef AT_IMSA_MSG_STRU AT_IMSA_VOLTEIMPI_QRY_REQ_STRU;


/*****************************************************************************
�ṹ��    : AT_IMSA_VOLTEDOMAIN_QRY_REQ_STRU
�ṹ˵��  : ID_AT_IMSA_VOLTEDOMAIN_QRY_REQ����Ϣ�ṹ

1.��    ��  : 2016��10��27��
  ��    ��  : W00209181
  �޸�����  : �����ṹ
*****************************************************************************/
typedef AT_IMSA_MSG_STRU AT_IMSA_VOLTEDOMAIN_QRY_REQ_STRU;


/*****************************************************************************
 �ṹ��  : AT_IMSA_CCWAI_SET_REQ_STRU
 �ṹ˵��: ^CCWAI IMS  ���еȴ�
 �޸���ʷ      :
  1.��    ��   : 2014��3��11��
    ��    ��   : w00209181
    �޸�����   : �����ṹ
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                              /* _H2ASN_Skip */
    VOS_UINT32                          ulMsgId;                                /* _H2ASN_Skip */
    VOS_UINT16                          usClientId;
    VOS_UINT8                           ucOpId;
    AT_IMSA_CCWAI_MODE_ENUM_UINT8       enMode;
    VOS_UINT32                          ulSrvClass;
} AT_IMSA_CCWAI_SET_REQ_STRU;

/*****************************************************************************
 �ṹ��  : IMSA_AT_CCWAI_SET_CNF_STRU
 �ṹ˵��: ^CCWAI IMS  ���еȴ�
 �޸���ʷ      :
  1.��    ��   : 2014��3��11��
    ��    ��   : w00209181
    �޸�����   : �����ṹ
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                              /* _H2ASN_Skip */
    VOS_UINT32                          ulMsgId;                                /* _H2ASN_Skip */
    VOS_UINT16                          usClientId;
    VOS_UINT8                           ucOpId;
    VOS_UINT8                           ucReserved;
    VOS_UINT32                          ulResult;
} IMSA_AT_CCWAI_SET_CNF_STRU;


/*****************************************************************************
 �ṹ��  : AT_IMSA_CALL_ENCRYPT_SET_REQ_STRU
 �ṹ˵��: ^CALLENCRYPT: ����������������
 �޸���ʷ      :
  1.��    ��   : 2015��10��14��
    ��    ��   : f00179208
    �޸�����   : �����ṹ
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                              /* _H2ASN_Skip */
    VOS_UINT32                          ulMsgId;                                /* _H2ASN_Skip */
    VOS_UINT16                          usClientId;
    VOS_UINT8                           ucOpId;
    VOS_UINT8                           aucReserved1[1];
    VOS_UINT8                           ucEncrypt;                              /* 0:�����ܣ�1:���� */
    VOS_UINT8                           aucReserved2[3];
} AT_IMSA_CALL_ENCRYPT_SET_REQ_STRU;

/*****************************************************************************
 �ṹ��  : AT_IMSA_CALL_ENCRYPT_SET_CNF_STRU
 �ṹ˵��: ^CALLENCRYPT: �����������ܻظ�
 �޸���ʷ      :
  1.��    ��   : 2015��10��14��
    ��    ��   : f00179208
    �޸�����   : �����ṹ
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                              /* _H2ASN_Skip */
    VOS_UINT32                          ulMsgId;                                /* _H2ASN_Skip */
    VOS_UINT16                          usClientId;
    VOS_UINT8                           ucOpId;
    VOS_UINT8                           ucReserved;
    VOS_UINT32                          ulResult;                               /* �ɹ�����VOS_OK��ʧ�ܷ���VOS_ERR */
} IMSA_AT_CALL_ENCRYPT_SET_CNF_STRU;

/*****************************************************************************
 �ṹ��  : AT_IMSA_CIREG_SET_REQ_STRU
 �ṹ˵��: +CIREG IMSע��״̬�����ϱ���������

 �޸���ʷ      :
  1.��    ��   : 2013��9��13��
    ��    ��   : Y00213812
    �޸�����   : �����ṹ
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                              /* _H2ASN_Skip */
    VOS_UINT32                          ulMsgId;                                /* _H2ASN_Skip */
    VOS_UINT16                          usClientId;
    VOS_UINT8                           ucOpId;
    VOS_UINT8                           aucReserved[1];
    AT_IMSA_IMS_REG_STATE_REPORT_ENUM_UINT32    enCireg;
} AT_IMSA_CIREG_SET_REQ_STRU;


/*****************************************************************************
 �ṹ��  : IMSA_AT_CIREG_SET_CNF_STRU
 �ṹ˵��: +CIREG IMSע��״̬�����ϱ�����

 �޸���ʷ      :
  1.��    ��   : 2013��9��13��
    ��    ��   : Y00213812
    �޸�����   : �����ṹ
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                              /* _H2ASN_Skip */
    VOS_UINT32                          ulMsgId;                                /* _H2ASN_Skip */
    VOS_UINT16                          usClientId;
    VOS_UINT8                           ucOpId;
    VOS_UINT8                           aucReserved[1];
    VOS_UINT32                          ulResult;                               /* �ɹ�����VOS_OK��ʧ�ܷ���VOS_ERR */
} IMSA_AT_CIREG_SET_CNF_STRU;


/*****************************************************************************
 �ṹ��  : IMSA_AT_CIREG_QRY_CNF_STRU
 �ṹ˵��: +CIREG IMSע��״̬��ѯ���

 �޸���ʷ      :
  1.��    ��   : 2013��9��13��
    ��    ��   : Y00213812
    �޸�����   : �����ṹ
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                              /* _H2ASN_Skip */
    VOS_UINT32                          ulMsgId;                                /* _H2ASN_Skip */
    VOS_UINT16                          usClientId;
    VOS_UINT8                           ucOpId;
    VOS_UINT8                           aucReserved[1];

    VOS_UINT32                          bitOpExtInfo    : 1 ;                   /* +CIREG=2ʱ,��־λ��1 */
    VOS_UINT32                          bitOpSpare      : 31;

    AT_IMSA_IMS_REG_STATE_REPORT_ENUM_UINT32    enCireg;
    VOS_UINT32                          ulRegInfo;
    VOS_UINT32                          ulExtInfo;                              /* +CIREG=2ʱ ����չ��Ϣ��ʱ�ظ�0 */
    VOS_UINT32                          ulResult;                               /* �ɹ�����VOS_OK��ʧ�ܷ���VOS_ERR */
} IMSA_AT_CIREG_QRY_CNF_STRU;

/*****************************************************************************
 �ṹ��  : IMSA_AT_CIREGU_IND_STRU
 �ṹ˵��: ID_IMSA_AT_CIREGU_IND IMSע��״̬�����ϱ�

 �޸���ʷ      :
  1.��    ��   : 2013��9��13��
    ��    ��   : Y00213812
    �޸�����   : �����ṹ
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                              /* _H2ASN_Skip */
    VOS_UINT32                          ulMsgId;                                /* _H2ASN_Skip */
    VOS_UINT16                          usClientId;                             /* �����ϱ�ʱ��0X3FFF */
    VOS_UINT8                           ucOpId;                                 /* ��0 */
    VOS_UINT8                           aucReserved[1];

    VOS_UINT32                          bitOpExtInfo    : 1 ;
    VOS_UINT32                          bitOpSpare      : 31;

    VOS_UINT32                          ulRegInfo;
    VOS_UINT32                          ulExtInfo;
} IMSA_AT_CIREGU_IND_STRU;


/*****************************************************************************
 �ṹ��  : AT_IMSA_CIREP_SET_REQ_STRU
 �ṹ˵��: +CIREP SRVCC�л�״̬�����ϱ�����

 �޸���ʷ      :
  1.��    ��   : 2013��9��13��
    ��    ��   : Y00213812
    �޸�����   : �����ṹ
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                              /* _H2ASN_Skip */
    VOS_UINT32                          ulMsgId;                                /* _H2ASN_Skip */
    VOS_UINT16                          usClientId;
    VOS_UINT8                           ucOpId;
    VOS_UINT8                           aucReserved[1];
    AT_IMSA_CIREP_REPORT_ENUM_UINT32    enReport;
} AT_IMSA_CIREP_SET_REQ_STRU;


/*****************************************************************************
 �ṹ��  : IMSA_AT_CIREP_SET_CNF_STRU
 �ṹ˵��: +CIREP SRVCC�л�״̬�����ϱ�����

 �޸���ʷ      :
  1.��    ��   : 2013��9��13��
    ��    ��   : Y00213812
    �޸�����   : �����ṹ
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                              /* _H2ASN_Skip */
    VOS_UINT32                          ulMsgId;                                /* _H2ASN_Skip */
    VOS_UINT16                          usClientId;
    VOS_UINT8                           ucOpId;
    VOS_UINT8                           aucReserved[1];
    VOS_UINT32                          ulResult;                               /* �ɹ�����VOS_OK��ʧ�ܷ���VOS_ERR */
} IMSA_AT_CIREP_SET_CNF_STRU;


/*****************************************************************************
 �ṹ��  : IMSA_AT_CIREP_QRY_CNF_STRU
 �ṹ˵��: +CIREP IMSVOPS������ѯ

 �޸���ʷ      :
  1.��    ��   : 2013��9��13��
    ��    ��   : Y00213812
    �޸�����   : �����ṹ
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                              /* _H2ASN_Skip */
    VOS_UINT32                          ulMsgId;                                /* _H2ASN_Skip */
    VOS_UINT16                          usClientId;
    VOS_UINT8                           ucOpId;
    VOS_UINT8                           aucReserved[1];
    AT_IMSA_CIREP_REPORT_ENUM_UINT32            enReport;
    AT_IMSA_IMSVOPS_CAPABILITY_ENUM_UINT32      enImsvops;
    VOS_UINT32                          ulResult;                               /* �ɹ�����VOS_OK��ʧ�ܷ���VOS_ERR */
} IMSA_AT_CIREP_QRY_CNF_STRU;

/*****************************************************************************
 �ṹ��  : IMSA_AT_VOLTEIMPU_QRY_CNF_STRU
 �ṹ˵��: ^VOLTEIMPU IMPU��Ϣ��ѯ���

 �޸���ʷ      :
  1.��    ��   : 2013��12��05��
    ��    ��   : Y00213812
    �޸�����   : �����ṹ

  2.��    ��   : 2016��07��05��
    ��    ��   : w00316404
    �޸�����   : LGU+ Project������������ѯ
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                             /* _H2ASN_Skip */
    VOS_UINT32                          ulMsgId;               /* _H2ASN_Skip */
    VOS_UINT16                          usClientId;
    VOS_UINT8                           ucOpId;
    VOS_UINT8                           aucReserved[1];
    VOS_UINT32                          ulResult;              /* �ɹ�����VOS_OK��ʧ�ܷ���VOS_ERR */
    VOS_UINT32                          ulImpuLen;
    VOS_CHAR                            aucImpu[AT_IMSA_IMPU_MAX_LENGTH];
    VOS_UINT32                          ulImpuLenVirtual;
    VOS_CHAR                            aucImpuVirtual[AT_IMSA_IMPU_MAX_LENGTH];
} IMSA_AT_VOLTEIMPU_QRY_CNF_STRU;

/*****************************************************************************
 �ṹ��  : IMSA_AT_VOLTEIMPI_QRY_CNF_STRU
 �ṹ˵��: ^VOLTEIMPI IMPI��Ϣ��ѯ���

 �޸���ʷ      :
  1.��    ��   : 2016��10��27��
    ��    ��   : W00209181
    �޸�����   : �����ṹ

*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                             /* _H2ASN_Skip */
    VOS_UINT32                          ulMsgId;               /* _H2ASN_Skip */
    VOS_UINT16                          usClientId;
    VOS_UINT8                           ucOpId;
    VOS_UINT8                           aucReserved[1];
    VOS_UINT32                          ulResult;              /* �ɹ�����VOS_OK��ʧ�ܷ���VOS_ERR */
    VOS_UINT32                          ulImpiLen;
    VOS_CHAR                            aucImpi[AT_IMSA_IMPI_MAX_LENGTH];
} IMSA_AT_VOLTEIMPI_QRY_CNF_STRU;
/*****************************************************************************
 �ṹ��  : IMSA_AT_VOLTEDOMAIN_QRY_CNF_STRU
 �ṹ˵��: ^VOLTEDOMAIN DOMAIN��Ϣ��ѯ���

 �޸���ʷ      :
  1.��    ��   : 2016��10��27��
    ��    ��   : W00209181
    �޸�����   : �����ṹ

*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                             /* _H2ASN_Skip */
    VOS_UINT32                          ulMsgId;               /* _H2ASN_Skip */
    VOS_UINT16                          usClientId;
    VOS_UINT8                           ucOpId;
    VOS_UINT8                           aucReserved[1];
    VOS_UINT32                          ulResult;              /* �ɹ�����VOS_OK��ʧ�ܷ���VOS_ERR */
    VOS_UINT32                          ulDomainLen;
    VOS_CHAR                            aucDomain[AT_IMSA_DOMAIN_MAX_LENGTH];
} IMSA_AT_VOLTEDOMAIN_QRY_CNF_STRU;


/*****************************************************************************
 �ṹ��  : AT_IMSA_ROAMING_IMS_QRY_REQ_STRU
 �ṹ˵��: AT֪ͨIMSA��ѯ�����Ƿ�֧�ֵĽṹ

 �޸���ʷ      :
  1.��    ��   : 2016��1��15��
    ��    ��   : w00316404
    �޸�����   : �����ṹ
*****************************************************************************/
typedef AT_IMSA_MSG_STRU AT_IMSA_ROAMING_IMS_QRY_REQ_STRU;

/*****************************************************************************
 �ṹ��  : IMSA_AT_ROAMING_IMS_QRY_CNF_STRU
 �ṹ˵��: ^ROAMIMSSERVICE ����״̬��IMS�����Ƿ�֧�ֲ�ѯ����CNF��Ϣ

 �޸���ʷ      :
  1.��    ��   : 2016��1��15��
    ��    ��   : w00316404
    �޸�����   : �����ṹ
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                              /* _H2ASN_Skip */
    VOS_UINT32                              ulMsgId;                            /* _H2ASN_Skip */
    VOS_UINT16                              usClientId;
    VOS_UINT8                               ucOpId;
    VOS_UINT8                               aucReserved[1];
    AT_IMSA_ROAMING_IMS_SUPPORT_ENUM_UINT32 enRoamingImsSupportFlag;
    VOS_UINT32                              ulResult;
} IMSA_AT_ROAMING_IMS_QRY_CNF_STRU;


/*****************************************************************************
 �ṹ��  : IMSA_AT_CIREPH_IND_STRU
 �ṹ˵��: +CIREPH SRVCC�л�״̬�����ϱ�

 �޸���ʷ      :
  1.��    ��   : 2013��9��13��
    ��    ��   : Y00213812
    �޸�����   : �����ṹ
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                              /* _H2ASN_Skip */
    VOS_UINT32                          ulMsgId;                                /* _H2ASN_Skip */
    VOS_UINT16                          usClientId;                             /* �����ϱ�ʱ��0X3FFF */
    VOS_UINT8                           ucOpId;                                 /* ��0 */
    VOS_UINT8                           aucReserved[1];
    AT_IMSA_SRVCC_HANDVOER_ENUM_UINT32  enHandover;
} IMSA_AT_CIREPH_IND_STRU;

/*****************************************************************************
 �ṹ��  : IMSA_AT_CIREPI_IND_STRU
 �ṹ˵��: +CIREPI IMSVOPS�����ϱ�

 �޸���ʷ      :
  1.��    ��   : 2013��9��23��
    ��    ��   : Y00213812
    �޸�����   : �����ṹ
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                              /* _H2ASN_Skip */
    VOS_UINT32                          ulMsgId;                                /* _H2ASN_Skip */
    VOS_UINT16                          usClientId;                             /* �����ϱ�ʱ��0X3FFF */
    VOS_UINT8                           ucOpId;                                 /* ��0 */
    VOS_UINT8                           aucReserved[1];
    AT_IMSA_IMSVOPS_CAPABILITY_ENUM_UINT32      enImsvops;
} IMSA_AT_CIREPI_IND_STRU;


/*****************************************************************************
 �ṹ����: IMSA_AT_VT_PDP_ACTIVATE_IND_STRU
 �ṹ˵��: IMSA�ϱ�VT���ؼ���ɹ�����Ľṹ

 �޸���ʷ      :
  1.��    ��   : 2014��07��31��
    ��    ��   : f00179208
    �޸�����   : �����ṹ
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                             /* _H2ASN_Skip */
    VOS_UINT32                          ulMsgId;               /* _H2ASN_Skip */
    VOS_UINT16                          usClientId;
    VOS_UINT8                           ucOpId;
    IMSA_AT_IMS_RAT_TYPE_ENUM_UINT8     enRatType;                  /* ע���� */
    TAF_PDP_ADDR_STRU                   stPdpAddr;
    TAF_PDP_DNS_STRU                    stIpv4Dns;
    TAF_PDP_IPV6_DNS_STRU               stIpv6Dns;
} IMSA_AT_VT_PDP_ACTIVATE_IND_STRU;


/*****************************************************************************
 �ṹ����: IMSA_AT_VT_PDP_DEACTIVATE_IND_STRU
 �ṹ˵��: IMSA�ϱ�VT����ȥ����ɹ�����Ľṹ

 �޸���ʷ      :
  1.��    ��   : 2014��07��31��
    ��    ��   : f00179208
    �޸�����   : �����ṹ
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                             /* _H2ASN_Skip */
    VOS_UINT32                          ulMsgId;               /* _H2ASN_Skip */
    VOS_UINT16                          usClientId;
    VOS_UINT8                           ucOpId;
    TAF_PDP_TYPE_ENUM_UINT8             enPdpType;
    IMSA_AT_IMS_RAT_TYPE_ENUM_UINT8     enRatType;             /* ע���� */
    VOS_UINT8                           aucReserved[3];
} IMSA_AT_VT_PDP_DEACTIVATE_IND_STRU;

/*****************************************************************************
 �ṹ���ƣ� IMSA_AT_MT_STATES_IND_STRU
 �ṹ˵��:  IMSA�ϱ�AT�յ������¼��Ľṹ

 �޸���ʷ:
 1.����: 2015��03��18��
   ����: m00277840
   �޸�����:�����ṹ
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                          /* _H2ASN_Skip */
    VOS_UINT32                          ulMsgId;            /* _H2ASN_Skip */
    VOS_UINT16                          usClientId;
    VOS_UINT8                           ucOpId;
    VOS_UINT8                           aucReserved[1];
    VOS_UINT32                          ulCauseCode;
    VOS_UINT8                           ucMtStatus;
    VOS_UINT8                           aucRsv[3];
    VOS_UINT8                           aucAsciiCallNum[AT_IMSA_CALL_ASCII_NUM_MAX_LENGTH];
} IMSA_AT_MT_STATES_IND_STRU;

/*****************************************************************************
 �ṹ��  : AT_IMSA_IMS_REG_DOMAIN_QRY_REQ_STRU
 �ṹ˵��: ��ѯIMSע��������
 �޸���ʷ      :
  1.��    ��   : 2015��10��07��
    ��    ��   : f00179208
    �޸�����   : �����ṹ
*****************************************************************************/
typedef AT_IMSA_MSG_STRU AT_IMSA_IMS_REG_DOMAIN_QRY_REQ_STRU;

/*****************************************************************************
 �ṹ��  : IMSA_AT_IMS_REG_DOMAIN_QRY_CNF_STRU
 �ṹ˵��: ��ѯIMSע����ظ�
 �޸���ʷ      :
  1.��    ��   : 2015��10��07��
    ��    ��   : f00179208
    �޸�����   : �����ṹ
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                              /* _H2ASN_Skip */
    VOS_UINT32                              ulMsgId;                            /* _H2ASN_Skip */
    VOS_UINT16                              usClientId;
    VOS_UINT8                               ucOpId;
    IMSA_AT_IMS_REG_DOMAIN_TYPE_ENUM_UINT8  enImsRegDomain;
} IMSA_AT_IMS_REG_DOMAIN_QRY_CNF_STRU;

/*****************************************************************************
 �ṹ��  : AT_IMSA_IMS_CTRL_MSG_STRU
 �ṹ˵��: ATת��MAPCON->IMSA���ڲ���Ϣ
 �޸���ʷ      :
  1.��    ��   : 2015��10��07��
    ��    ��   : f00179208
    �޸�����   : �����ṹ
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                              /* _H2ASN_Skip */
    VOS_UINT32                              ulMsgId;                            /* _H2ASN_Skip */
    VOS_UINT16                              usClientId;
    VOS_UINT8                               ucOpId;
    VOS_UINT8                               aucReserved[1];
    VOS_UINT32                              ulWifiMsgLen;
    VOS_UINT8                               aucWifiMsg[4];
} AT_IMSA_IMS_CTRL_MSG_STRU;

/*****************************************************************************
 �ṹ��  : IMSA_AT_IMS_CTRL_MSG_STRU
 �ṹ˵��: ATת��IMSA->MAPCON���ڲ���Ϣ
 �޸���ʷ      :
  1.��    ��   : 2015��10��07��
    ��    ��   : f00179208
    �޸�����   : �����ṹ
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                              /* _H2ASN_Skip */
    VOS_UINT32                              ulMsgId;                            /* _H2ASN_Skip */
    VOS_UINT16                              usClientId;
    VOS_UINT8                               ucOpId;
    VOS_UINT8                               aucReserved[1];
    VOS_UINT32                              ulWifiMsgLen;
    VOS_UINT8                               aucWifiMsg[4];
} IMSA_AT_IMS_CTRL_MSG_STRU;


/*****************************************************************************
 �ṹ��  : IMSA_AT_IMS_RAT_HANDOVER_IND_STRU
 �ṹ˵��: IMSע�����л�ָʾ

 �޸���ʷ      :
  1.��    ��   : 2016��04��07��
    ��    ��   : f00179208
    �޸�����   : �����ṹ
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                              /* _H2ASN_Skip */
    VOS_UINT32                              ulMsgId;                            /* _H2ASN_Skip */
    VOS_UINT16                              usClientId;                         /* �����ϱ�ʱ��0X3FFF */
    VOS_UINT8                               ucOpId;                             /* ��0 */
    IMSA_AT_IMS_RAT_HO_STATUS_ENUM_UINT8    enHoStatus;                         /* �л�״̬ */
    IMSA_AT_IMS_RAT_TYPE_ENUM_UINT8         enSrcRat;                           /* ԭ��IMSע���� */
    IMSA_AT_IMS_RAT_TYPE_ENUM_UINT8         enDstRat;                           /* Ŀ��IMSע���� */
    VOS_UINT8                               aucReserved[2];
    IMSA_AT_HO_CAUSE_ENUM_UINT32            enCause;                            /* �л�ʧ��ԭ��ֵ */
} IMSA_AT_IMS_RAT_HANDOVER_IND_STRU;

/*****************************************************************************
 �ṹ��  : IMSA_AT_IMS_SRV_STATUS_UPDATE_IND_STRU
 �ṹ˵��: IMS����״̬�仯ָʾ

 �޸���ʷ      :
  1.��    ��   : 2016��04��07��
    ��    ��   : f00179208
    �޸�����   : �����ṹ
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                              /* _H2ASN_Skip */
    VOS_UINT32                              ulMsgId;                            /* _H2ASN_Skip */
    VOS_UINT16                              usClientId;                         /* �����ϱ�ʱ��0X3FFF */
    VOS_UINT8                               ucOpId;                             /* ��0 */
    VOS_UINT8                               aucReserved[1];
    IMSA_AT_IMS_SERVICE_STATUS_ENUM_UINT8   enSmsSrvStatus;                     /* ���ŵ�IMS����״̬ */
    IMSA_AT_IMS_RAT_TYPE_ENUM_UINT8         enSmsSrvRat;                        /* ���ŵ�IMS������ */
    IMSA_AT_IMS_SERVICE_STATUS_ENUM_UINT8   enVoIpSrvStatus;                    /* VoIP��IMS����״̬ */
    IMSA_AT_IMS_RAT_TYPE_ENUM_UINT8         enVoIpSrvRat;                       /* VoIP��IMS������ */
    IMSA_AT_IMS_SERVICE_STATUS_ENUM_UINT8   enVtSrvStatus;                      /* VT��IMS����״̬ */
    IMSA_AT_IMS_RAT_TYPE_ENUM_UINT8         enVtSrvRat;                         /* VT��IMS������ */
    IMSA_AT_IMS_SERVICE_STATUS_ENUM_UINT8   enVsSrvStatus;                      /* VS��IMS����״̬ */
    IMSA_AT_IMS_RAT_TYPE_ENUM_UINT8         enVsSrvRat;                         /* VS��IMS������ */
} IMSA_AT_IMS_SRV_STATUS_UPDATE_IND_STRU;

typedef struct
{
    VOS_MSG_HEADER                                                              /* _H2ASN_Skip */
    VOS_UINT32                              ulMsgId;                            /* _H2ASN_Skip */
    AT_APPCTRL_STRU                         stAppCtrl;
} IMSA_AT_DMCN_IND_STRU;

/*****************************************************************************
 �ṹ��  : AT_IMSA_DMDYN_STRU
 �ṹ˵��: DMDYN���ò����ṹ��

 �޸���ʷ      :
  1.��    ��   : 2016��6��12��
    ��    ��   : z00308719
    �޸�����   : �����ṹ
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          bitOpAmrWbOctetAcigned       : 1;
    VOS_UINT32                          bitOpAmrWbBandWidthEfficient : 1;
    VOS_UINT32                          bitOpAmrOctetAcigned         : 1;
    VOS_UINT32                          bitOpAmrBandWidthEfficient   : 1;
    VOS_UINT32                          bitOpAmrWbMode               : 1;
    VOS_UINT32                          bitOpDtmfWb                  : 1;
    VOS_UINT32                          bitOpDtmfNb                  : 1;
    VOS_UINT32                          bitOpSpeechStart             : 1;
    VOS_UINT32                          bitOpSpeechEnd               : 1;
    VOS_UINT32                          bitOpVideoStart              : 1;
    VOS_UINT32                          bitOpVideoEnd                : 1;
    VOS_UINT32                          bitOpRetryBaseTime           : 1;
    VOS_UINT32                          bitOpRetryMaxTime            : 1;
    VOS_UINT32                          bitOpPhoneContext            : 1;
    VOS_UINT32                          bitOpPhoneContextImpu        : 1;
    VOS_UINT32                          bitOpSpare                   : 17;

    VOS_UINT32                          ulAmrWbOctetAcigned;
    VOS_UINT32                          ulAmrWbBandWidthEfficient;              /* �ӿ�Ԥ����IMSA������ */
    VOS_UINT32                          ulAmrOctetAcigned;
    VOS_UINT32                          ulAmrBandWidthEfficient;                /* �ӿ�Ԥ����IMSA������ */
    VOS_UINT32                          ulAmrWbMode;
    VOS_UINT32                          ulDtmfWb;                               /* �ӿ�Ԥ����IMSA������ */
    VOS_UINT32                          ulDtmfNb;                               /* �ӿ�Ԥ����IMSA������ */
    VOS_UINT32                          ulSpeechStart;
    VOS_UINT32                          ulSpeechEnd;
    VOS_UINT32                          ulVideoStart;
    VOS_UINT32                          ulVideoEnd;
    VOS_UINT32                          ulRetryBaseTime;
    VOS_UINT32                          ulRetryMaxTime;
    VOS_CHAR                            acPhoneContext[IMSA_PHONECONTEXT_MAX_LENGTH + 1];
    VOS_UINT8                           aucReserved1[3];
    VOS_CHAR                            acPhoneContextImpu[IMSA_PUBLICEUSERID_MAX_LENGTH + 1];
    VOS_UINT8                           aucReserved2[3];

} AT_IMSA_DMDYN_STRU;

/*****************************************************************************
 �ṹ��  : AT_IMSA_DMDYN_SET_REQ_STRU
 �ṹ˵��: DMDYN������������

 �޸���ʷ      :
  1.��    ��   : 2016��6��12��
    ��    ��   : z00308719
    �޸�����   : �����ṹ
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                              /* _H2ASN_Skip */
    VOS_UINT32                          ulMsgId;                                /* _H2ASN_Skip */
    AT_APPCTRL_STRU                     stAppCtrl;
    AT_IMSA_DMDYN_STRU                  stDmdyn;
} AT_IMSA_DMDYN_SET_REQ_STRU;

/*****************************************************************************
 �ṹ��  : IMSA_AT_DMDYN_SET_CNF_STRU
 �ṹ˵��: DMDYN������ѯ���

 �޸���ʷ      :
  1.��    ��   : 2016��6��12��
    ��    ��   : z00308719
    �޸�����   : �����ṹ
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                              /* _H2ASN_Skip */
    VOS_UINT32                          ulMsgId;                                /* _H2ASN_Skip */
    AT_APPCTRL_STRU                     stAppCtrl;
    VOS_UINT32                          ulResult;                               /* �ɹ�����VOS_OK��ʧ�ܷ���VOS_ERR */
} IMSA_AT_DMDYN_SET_CNF_STRU;

/*****************************************************************************
 �ṹ��  : AT_IMSA_DMDYN_QRY_REQ_STRU
 �ṹ˵��: DMDYN������ѯ��������

 �޸���ʷ      :
  1.��    ��   : 2016��6��12��
    ��    ��   : z00308719
    �޸�����   : �����ṹ
*****************************************************************************/
typedef AT_IMSA_MSG_STRU AT_IMSA_DMDYN_QRY_REQ_STRU;

typedef struct
{
    VOS_MSG_HEADER                                                              /* _H2ASN_Skip */
    VOS_UINT32                          ulMsgId;                                /* _H2ASN_Skip */
    AT_APPCTRL_STRU                     stAppCtrl;
    VOS_UINT32                          ulResult;
    AT_IMSA_DMDYN_STRU                  stDmdyn;
} IMSA_AT_DMDYN_QRY_CNF_STRU;


/*****************************************************************************
 �ṹ����: IMSA_PDP_IPV4_PCSCF_STRU
 �ṹ˵��: IPv4 P-CSCF��ַ�ṹ��
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          bitOpPrimPcscfAddr      : 1;
    VOS_UINT32                          bitOpSecPcscfAddr       : 1;
    VOS_UINT32                          bitOpThiPcscfAddr       : 1;
    VOS_UINT32                          bitOpPrimPcscfSipPort   : 1;
    VOS_UINT32                          bitOpSecPcscfSipPort    : 1;
    VOS_UINT32                          bitOpThiPcscfSipPort    : 1;
    VOS_UINT32                          bitOpSpare              : 26;

    VOS_UINT8                           aucPrimPcscfAddr[TAF_IPV4_ADDR_LEN];
    VOS_UINT8                           aucSecPcscfAddr[TAF_IPV4_ADDR_LEN];
    VOS_UINT8                           aucThiPcscfAddr[TAF_IPV4_ADDR_LEN];
    VOS_UINT32                          ulPrimPcscfSipPort;
    VOS_UINT32                          ulSecPcscfSipPort;
    VOS_UINT32                          ulThiPcscfSipPort;
} IMSA_AT_IPV4_PCSCF_STRU;

/*****************************************************************************
 �ṹ����: IMSA_PDP_IPV6_PCSCF_STRU
 �ṹ˵��: IPv6 P-CSCF��ַ�ṹ��
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          bitOpPrimPcscfAddr      : 1;
    VOS_UINT32                          bitOpSecPcscfAddr       : 1;
    VOS_UINT32                          bitOpThiPcscfAddr       : 1;
    VOS_UINT32                          bitOpPrimPcscfSipPort   : 1;
    VOS_UINT32                          bitOpSecPcscfSipPort    : 1;
    VOS_UINT32                          bitOpThiPcscfSipPort    : 1;
    VOS_UINT32                          bitOpSpare              : 26;

    VOS_UINT8                           aucPrimPcscfAddr[TAF_IPV6_ADDR_LEN];
    VOS_UINT8                           aucSecPcscfAddr[TAF_IPV6_ADDR_LEN];
    VOS_UINT8                           aucThiPcscfAddr[TAF_IPV6_ADDR_LEN];
    VOS_UINT32                          ulPrimPcscfSipPort;
    VOS_UINT32                          ulSecPcscfSipPort;
    VOS_UINT32                          ulThiPcscfSipPort;
} IMSA_AT_IPV6_PCSCF_STRU;

typedef struct
{
    IMSA_AT_PCSCF_SRC_ENUM_UINT32         enSrc;                                /* ����P-CSCF��ַ��Դ�� */
    IMSA_AT_IPV6_PCSCF_STRU               stIpv6Pcscf;
    IMSA_AT_IPV4_PCSCF_STRU               stIpv4Pcscf;
}IMSA_AT_PCSCF_STRU;

typedef struct
{
    VOS_MSG_HEADER                                                              /* _H2ASN_Skip */
    VOS_UINT32                          ulMsgId;                                /* _H2ASN_Skip */
    AT_APPCTRL_STRU                     stAppCtrl;
    IMSA_AT_PCSCF_STRU                  stAtPcscf;
} AT_IMSA_PCSCF_SET_REQ_STRU;

typedef struct
{
    VOS_MSG_HEADER                                                              /* _H2ASN_Skip */
    VOS_UINT32                          ulMsgId;                                /* _H2ASN_Skip */
    AT_APPCTRL_STRU                     stAppCtrl;
    VOS_UINT32                          ulResult;                               /* �ɹ�����VOS_OK��ʧ�ܷ���VOS_ERR */
} IMSA_AT_PCSCF_SET_CNF_STRU;

typedef AT_IMSA_MSG_STRU AT_IMSA_PCSCF_QRY_REQ_STRU;

typedef struct
{
    VOS_MSG_HEADER                                                              /* _H2ASN_Skip */
    VOS_UINT32                          ulMsgId;                                /* _H2ASN_Skip */
    AT_APPCTRL_STRU                     stAppCtrl;
    VOS_UINT32                          ulResult;
    IMSA_AT_PCSCF_STRU                  stAtPcscf;
} IMSA_AT_PCSCF_QRY_CNF_STRU;

/*****************************************************************************
 �ṹ��  : IMSA_AT_IMS_TIMER_STRU
 �ṹ˵��: IMS��ʱ��ʱ����Ϣ�ṹ��

 �޸���ʷ      :
  1.��    ��   : 2016��6��18��
    ��    ��   : f00367319
    �޸�����   : �½�
*****************************************************************************/
typedef struct
{
    VOS_UINT32                              bitOpTimerT1Value   : 1;
    VOS_UINT32                              bitOpTimerT2Value   : 1;
    VOS_UINT32                              bitOpTimerT4Value   : 1;
    VOS_UINT32                              bitOpTimerTAValue   : 1;
    VOS_UINT32                              bitOpTimerTBValue   : 1;
    VOS_UINT32                              bitOpTimerTCValue   : 1;
    VOS_UINT32                              bitOpTimerTDValue   : 1;
    VOS_UINT32                              bitOpTimerTEValue   : 1;
    VOS_UINT32                              bitOpTimerTFValue   : 1;
    VOS_UINT32                              bitOpTimerTGValue   : 1;
    VOS_UINT32                              bitOpTimerTHValue   : 1;
    VOS_UINT32                              bitOpTimerTIValue   : 1;
    VOS_UINT32                              bitOpTimerTJValue   : 1;
    VOS_UINT32                              bitOpTimerTKValue   : 1;
    VOS_UINT32                              bitOpSpare          : 18;

    VOS_UINT32                              ulTimerT1Value;
    VOS_UINT32                              ulTimerT2Value;
    VOS_UINT32                              ulTimerT4Value;
    VOS_UINT32                              ulTimerTAValue;
    VOS_UINT32                              ulTimerTBValue;
    VOS_UINT32                              ulTimerTCValue;
    VOS_UINT32                              ulTimerTDValue;
    VOS_UINT32                              ulTimerTEValue;
    VOS_UINT32                              ulTimerTFValue;
    VOS_UINT32                              ulTimerTGValue;
    VOS_UINT32                              ulTimerTHValue;
    VOS_UINT32                              ulTimerTIValue;
    VOS_UINT32                              ulTimerTJValue;
    VOS_UINT32                              ulTimerTKValue;

}IMSA_AT_IMS_TIMER_STRU;

/*****************************************************************************
 �ṹ��  : AT_IMSA_IMSTIMER_SET_REQ_STRU
 �ṹ˵��: ID_AT_IMSA_IMSTIMER_SET_REQ��Ϣ��Ӧ�ṹ��

 �޸���ʷ      :
  1.��    ��   : 2016��6��18��
    ��    ��   : f00367319
    �޸�����   : ����
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT32                              ulMsgId;
    AT_APPCTRL_STRU                         stAppCtrl;
    IMSA_AT_IMS_TIMER_STRU                  stImsTimer;
}AT_IMSA_IMSTIMER_SET_REQ_STRU;

/*****************************************************************************
 �ṹ��  : IMSA_AT_IMSTIMER_SET_CNF_STRU
 �ṹ˵��: ID_IMSA_AT_IMSTIMER_SET_CNF��Ϣ��Ӧ�ṹ��

 �޸���ʷ      :
  1.��    ��   : 2016��6��18��
    ��    ��   : f00367319
    �޸�����   : ����
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT32                              ulMsgId;
    AT_APPCTRL_STRU                         stAppCtrl;
    VOS_UINT32                              ulResult;                   /* �ɹ����� VOS_OK,ʧ�ܷ��� VOS_ERR*/
}IMSA_AT_IMSTIMER_SET_CNF_STRU;

/*****************************************************************************
 �ṹ��  : AT_IMSA_IMSTIMER_QRY_REQ_STRU
 �ṹ˵��: ID_AT_IMSA_IMSTIMER_QRY_REQ��Ϣ��Ӧ�ṹ��

 �޸���ʷ      :
  1.��    ��   : 2016��6��18��
    ��    ��   : f00367319
    �޸�����   : ����
*****************************************************************************/
typedef AT_IMSA_MSG_STRU AT_IMSA_IMSTIMER_QRY_REQ_STRU;

/*****************************************************************************
 �ṹ��  : IMSA_AT_IMSTIMER_QRY_CNF_STRU
 �ṹ˵��: ID_IMSA_AT_IMSTIMER_QRY_CNF��Ϣ��Ӧ�ṹ��

 �޸���ʷ      :
  1.��    ��   : 2016��6��18��
    ��    ��   : f00367319
    �޸�����   : ����
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT32                              ulMsgId;
    AT_APPCTRL_STRU                         stAppCtrl;
    VOS_UINT32                              ulResult;
    IMSA_AT_IMS_TIMER_STRU                  stImsTimer;
}IMSA_AT_IMSTIMER_QRY_CNF_STRU;

/*****************************************************************************
 �ṹ��  : IMSA_SMS_PSI_STRU
 �ṹ˵��: IMS��̬�仯������Ӧ�ṹ��

  1.��    ��   : 2016��6��20��
    ��    ��   : f00367319
    �޸�����   : �½�
*****************************************************************************/
typedef struct
{
    VOS_CHAR                                acSmsPsi[AT_IMSA_MAX_SMSPSI_LEN + 1];
    VOS_UINT8                               aucReserved[3];
}IMSA_SMS_PSI_STRU;

/*****************************************************************************
 �ṹ��  : AT_IMSA_SMSPSI_SET_REQ_STRU
 �ṹ˵��: ID_AT_IMSA_SMSPSI_SET_REQ��Ϣ��Ӧ�ṹ��

  1.��    ��   : 2016��6��20��
    ��    ��   : f00367319
    �޸�����   : �½�
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT32                              ulMsgId;
    AT_APPCTRL_STRU                         stAppCtrl;
    IMSA_SMS_PSI_STRU                       stSmsPsi;
}AT_IMSA_SMSPSI_SET_REQ_STRU;

/*****************************************************************************
 �ṹ��  : IMSA_AT_SMSPSI_SET_CNF_STRU
 �ṹ˵��: ID_IMSA_AT_SMSPSI_SET_CNF��Ϣ��Ӧ�ṹ��

  1.��    ��   : 2016��6��20��
    ��    ��   : f00367319
    �޸�����   : �½�
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT32                              ulMsgId;
    AT_APPCTRL_STRU                         stAppCtrl;
    VOS_UINT32                              ulResult;
}IMSA_AT_SMSPSI_SET_CNF_STRU;

/*****************************************************************************
 �ṹ��  : AT_IMSA_SMSPSI_QRY_REQ_STRU
 �ṹ˵��: ID_AT_IMSA_SMSPSI_QRY_REQ��Ϣ��Ӧ�ṹ��

 �޸���ʷ      :
  1.��    ��   : 2016��6��20��
    ��    ��   : f00367319
    �޸�����   : ����
*****************************************************************************/
typedef AT_IMSA_MSG_STRU AT_IMSA_SMSPSI_QRY_REQ_STRU;

/*****************************************************************************
 �ṹ��  : IMSA_AT_SMSPSI_QRY_CNF_STRU
 �ṹ˵��: ID_IMSA_AT_SMSPSI_QRY_CNF��Ϣ��Ӧ�ṹ��

 �޸���ʷ      :
  1.��    ��   : 2016��6��18��
    ��    ��   : f00367319
    �޸�����   : ����
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT32                              ulMsgId;
    AT_APPCTRL_STRU                         stAppCtrl;
    VOS_UINT32                              ulResult;
    IMSA_SMS_PSI_STRU                       stSmsPsi;

}IMSA_AT_SMSPSI_QRY_CNF_STRU;

/*****************************************************************************
 �ṹ��  : AT_IMSA_DMUSER_QRY_REQ_STRU
 �ṹ˵��: ID_IMSA_AT_DMUSER_QRY_REQ��Ϣ��Ӧ�ṹ��

 �޸���ʷ      :
  1.��    ��   : 2016��6��18��
    ��    ��   : f00367319
    �޸�����   : ����
*****************************************************************************/
typedef AT_IMSA_MSG_STRU AT_IMSA_DMUSER_QRY_REQ_STRU;

/*****************************************************************************
 �ṹ��  : IMSA_AT_DMUSER_STRU
 �ṹ˵��: DM�û���Ϣ��Ӧ�ṹ��

 �޸���ʷ      :
  1.��    ��   : 2016��6��18��
    ��    ��   : f00367319
    �޸�����   : ����
*****************************************************************************/
typedef struct
{
    VOS_CHAR                                acImpi[AT_IMSA_IMPI_MAX_LENGTH + 1];
    VOS_CHAR                                acImpu[AT_IMSA_IMPU_MAX_LENGTH + 1];
    VOS_CHAR                                acHomeNetWorkDomain[IMSA_IMS_STRING_LENGTH + 1];
    VOS_UINT8                               aucReserved[1];
    AT_IMSA_VOICE_DOMAIN_ENUM_UINT32        enVoiceDomain;
    VOS_UINT32                              ulIpsecEnable;
}IMSA_AT_DMUSER_STRU;

/*****************************************************************************
 �ṹ��  : IMSA_AT_DMUSER_STRU
 �ṹ˵��: DM�û���Ϣ��Ӧ�ṹ��

 �޸���ʷ      :
  1.��    ��   : 2016��6��18��
    ��    ��   : f00367319
    �޸�����   : ����
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT32                              ulMsgId;
    AT_APPCTRL_STRU                         stAppCtrl;
    VOS_UINT32                              ulResult;
    IMSA_AT_DMUSER_STRU                     stDmUser;
}IMSA_AT_DMUSER_QRY_CNF_STRU;


/*****************************************************************************
 �ṹ��  : AT_IMSA_NICKNAME_INFO_STRU
 �ṹ˵��: IMS�ǳƽṹ��

 �޸���ʷ      :
  1.��    ��   : 2016��07��05��
    ��    ��   : w00316404
    �޸�����   : �����ṹ
*****************************************************************************/
typedef struct
{
    VOS_UINT8                               ucNickNameLen;
    VOS_CHAR                                acNickName[MN_CALL_DISPLAY_NAME_STRING_SZ];
    VOS_UINT8                               aucReserved[2];
} IMSA_AT_NICKNAME_INFO_STRU;

/*****************************************************************************
 �ṹ��  : AT_IMSA_NICKNAME_SET_REQ_STRU
 �ṹ˵��: ����IMS�ǳ�����ṹ��

 �޸���ʷ      :
  1.��    ��   : 2016��07��05��
    ��    ��   : w00316404
    �޸�����   : �����ṹ
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                              /* _H2ASN_Skip */
    VOS_UINT32                              ulMsgId;                            /* _H2ASN_Skip */
    AT_APPCTRL_STRU                         stAppCtrl;
    IMSA_AT_NICKNAME_INFO_STRU              stNickName;
} AT_IMSA_NICKNAME_SET_REQ_STRU;

/*****************************************************************************
 �ṹ��  : IMSA_AT_NICKNAME_SET_CNF_STRU
 �ṹ˵��: ����IMS�ǳƷ��ؽ���ṹ��

 �޸���ʷ      :
  1.��    ��   : 2016��07��05��
    ��    ��   : w00316404
    �޸�����   : �����ṹ
*****************************************************************************/
typedef IMSA_AT_CNF_MSG_STRU IMSA_AT_NICKNAME_SET_CNF_STRU;

/*****************************************************************************
�ṹ��    : AT_IMSA_NICKNAME_QRY_REQ_STRU
�ṹ˵��  : ��ѯIMS�ǳƽṹ��

1.��    ��  : 2016��07��05��
  ��    ��  : w00316404
  �޸�����  : �����ṹ
*****************************************************************************/
typedef AT_IMSA_MSG_STRU AT_IMSA_NICKNAME_QRY_REQ_STRU;

/*****************************************************************************
 �ṹ��  : IMSA_AT_NICKNAME_QRY_CNF_STRU
 �ṹ˵��: ��ѯIMS�ǳƷ��ؽ���ṹ��

 �޸���ʷ      :
  1.��    ��   : 2016��07��05��
    ��    ��   : w00316404
    �޸�����   : �����ṹ
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                              /* _H2ASN_Skip */
    VOS_UINT32                              ulMsgId;                            /* _H2ASN_Skip */
    AT_APPCTRL_STRU                         stAppCtrl;
    VOS_UINT32                              ulResult;                           /* �ɹ�����VOS_OK��ʧ�ܷ���VOS_ERR */
    IMSA_AT_NICKNAME_INFO_STRU              stNickName;
} IMSA_AT_NICKNAME_QRY_CNF_STRU;

/*****************************************************************************
 �ṹ��  : AT_IMSA_BATTERY_STATUS_INFO_STRU
 �ṹ˵��: IMS��ǰ��ص�����Ϣ�ṹ��

 �޸���ʷ      :
  1.��    ��   : 2016��07��05��
    ��    ��   : w00316404
    �޸�����   : �����ṹ
*****************************************************************************/
typedef struct
{
    AT_IMSA_BATTERY_STATUS_ENUM_UINT8       enBatteryStatus;
    VOS_UINT8                               aucReserved[3];
} AT_IMSA_BATTERY_STATUS_INFO_STRU;

/*****************************************************************************
 �ṹ��  : AT_IMSA_BATTERY_INFO_SET_REQ_STRU
 �ṹ˵��: ����IMS��ǰ��ص�����Ϣ����ṹ��

 �޸���ʷ      :
  1.��    ��   : 2016��07��05��
    ��    ��   : w00316404
    �޸�����   : �����ṹ
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                              /* _H2ASN_Skip */
    VOS_UINT32                              ulMsgId;                            /* _H2ASN_Skip */
    AT_APPCTRL_STRU                         stAppCtrl;
    AT_IMSA_BATTERY_STATUS_INFO_STRU        stBatteryStatusInfo;
} AT_IMSA_BATTERY_INFO_SET_REQ_STRU;

/*****************************************************************************
 �ṹ��  : IMSA_AT_BATTERY_INFO_SET_CNF_STRU
 �ṹ˵��: ����IMS��ǰ��ص�����Ϣ���ؽ���ṹ��

 �޸���ʷ      :
  1.��    ��   : 2016��07��05��
    ��    ��   : w00316404
    �޸�����   : �����ṹ
*****************************************************************************/
typedef IMSA_AT_CNF_MSG_STRU IMSA_AT_BATTERY_INFO_SET_CNF_STRU;

/*****************************************************************************
 �ṹ��  : IMSA_AT_REG_FAIL_INFO_STRU
 �ṹ˵��: IMSע��ʧ��ԭ��ֵ�ṹ��

 �޸���ʷ      :
  1.��    ��   : 2016��07��05��
    ��    ��   : w00316404
    �޸�����   : �����ṹ
*****************************************************************************/
typedef struct
{
    IMSA_AT_REG_FAIL_CODE_ENUM_UINT8        enFailCode;
    VOS_UINT8                               aucReserved[3];
} IMSA_AT_REG_FAIL_INFO_STRU;

/*****************************************************************************
 �ṹ��  : IMSA_AT_REG_FAIL_IND_STRU
 �ṹ˵��: �����ϱ�IMSע��ʧ��ԭ��ֵ�ṹ��

 �޸���ʷ      :
  1.��    ��   : 2016��07��05��
    ��    ��   : w00316404
    �޸�����   : �����ṹ
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                              /* _H2ASN_Skip */
    VOS_UINT32                              ulMsgId;                            /* _H2ASN_Skip */
    AT_APPCTRL_STRU                         stAppCtrl;
    IMSA_AT_REG_FAIL_INFO_STRU              stRegFailInfo;
} IMSA_AT_REG_FAIL_IND_STRU;

/*****************************************************************************
�ṹ��    : AT_IMSA_VOLTEREG_NTF_STRU
�ṹ˵��  : ����VOLTE REG NOTIFY�ṹ��

1.��    ��  : 2016��09��06��
  ��    ��  : w00316404
  �޸�����  : �����ṹ
*****************************************************************************/
typedef AT_IMSA_MSG_STRU AT_IMSA_VOLTEREG_NTF_STRU;

/*****************************************************************************
�ṹ��    : AT_IMSA_CANCEL_ADD_VIDEO_REQ_STRU
�ṹ˵��  : ����IMS VIDEO CALL CANCEL�ṹ��

1.��    ��  : 2016��10��13��
  ��    ��  : w00316404
  �޸�����  : �����ṹ
*****************************************************************************/
typedef AT_IMSA_MSG_STRU AT_IMSA_CANCEL_ADD_VIDEO_REQ_STRU;

/*****************************************************************************
 �ṹ��  : IMSA_AT_CANCEL_ADD_VIDEO_CNF_STRU
 �ṹ˵��: ����VOLTE��������Ƶ������ȡ����Ƶ���ؽ���ṹ��

 �޸���ʷ      :
  1.��    ��   : 2016��10��13��
    ��    ��   : w00316404
    �޸�����   : �����ṹ
*****************************************************************************/
typedef IMSA_AT_CNF_MSG_STRU IMSA_AT_CANCEL_ADD_VIDEO_CNF_STRU;

/*****************************************************************************
 �ṹ��  : AT_IMSA_REGERR_REPORT_SET_REQ_STRU
 �ṹ˵��: ����IMSע������Ƿ��ϱ�����ṹ��

 �޸���ʷ      :
  1.��    ��   : 2016��11��09��
    ��    ��   : w00209181
    �޸�����   : �����ṹ
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                              /* _H2ASN_Skip */
    VOS_UINT32                          ulMsgId;                            /* _H2ASN_Skip */
    AT_APPCTRL_STRU                     stAppCtrl;
    VOS_UINT8                           ucReportFlag;   /* VOS_TRUE:���������ϱ���VOS_FALSE:�������ϱ� */
    VOS_UINT8                           aucReserv[3];
} AT_IMSA_REGERR_REPORT_SET_REQ_STRU;

/*****************************************************************************
 �ṹ��  : IMSA_AT_REGERR_REPORT_SET_CNF_STRU
 �ṹ˵��: ����IMSע������Ƿ��ϱ��ظ��ṹ��

 �޸���ʷ      :
  1.��    ��   : 2016��11��09��
    ��    ��   : w00209181
    �޸�����   : �����ṹ
*****************************************************************************/
typedef IMSA_AT_CNF_MSG_STRU IMSA_AT_REGERR_REPORT_SET_CNF_STRU;

/*****************************************************************************
 �ṹ��  : AT_IMSA_REGERR_REPORT_QRY_REQ_STRU
 �ṹ˵��: ��ѯIMSע������Ƿ��ϱ�����ṹ��

 �޸���ʷ      :
  1.��    ��   : 2016��11��09��
    ��    ��   : w00209181
    �޸�����   : �����ṹ
*****************************************************************************/
typedef AT_IMSA_MSG_STRU AT_IMSA_REGERR_REPORT_QRY_REQ_STRU;

/*****************************************************************************
 �ṹ��  : IMSA_AT_REGERR_REPORT_QRY_CNF_STRU
 �ṹ˵��: ��ѯIMSע������Ƿ��ϱ��ظ��ṹ��

 �޸���ʷ      :
  1.��    ��   : 2016��11��09��
    ��    ��   : w00209181
    �޸�����   : �����ṹ
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                              /* _H2ASN_Skip */
    VOS_UINT32                          ulMsgId;                                /* _H2ASN_Skip */

    AT_APPCTRL_STRU                     stAppCtrl;
    VOS_UINT32                          ulResult;                               /* �ɹ�����VOS_OK��ʧ�ܷ���VOS_ERR */

    VOS_UINT8                           ucReportFlag;
    VOS_UINT8                           aucReserved[7];
} IMSA_AT_REGERR_REPORT_QRY_CNF_STRU;

/*****************************************************************************
 �ṹ��  : IMSA_AT_REGERR_REPORT_IND_STRU
 �ṹ˵��: �����ϱ�IMSע��ʧ��ԭ��ֵ�ṹ��

 �޸���ʷ      :
  1.��    ��   : 2016��11��09��
    ��    ��   : w00209181
    �޸�����   : �����ṹ
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                              /* _H2ASN_Skip */
    VOS_UINT32                              ulMsgId;                            /* _H2ASN_Skip */
    AT_APPCTRL_STRU                         stAppCtrl;
    IMSA_AT_IMS_REG_DOMAIN_TYPE_ENUM_UINT8  enImsaRegDomain;
    IMSA_AT_REG_ERR_TYPE_ENUM_UINT8         enImsaRegErrType;
    VOS_UINT8                               aucRsv[2];
    IMSA_AT_PDN_FAIL_CAUSE_ENUM_UINT32      enImsaPdnFailCause;
    IMSA_AT_REG_FAIL_CAUSE_ENUM_UINT32      enImsaRegFailCause;
    VOS_CHAR                                acImsRegFailReasonCtx[IMSA_AT_REG_FAIL_CAUSE_STR_MAX_LEN];         /* ���ַ���ʱȫ0 */
} IMSA_AT_REGERR_REPORT_IND_STRU;

/*****************************************************************************
  4 �궨��
*****************************************************************************/


/*****************************************************************************
  5 ȫ�ֱ�������
*****************************************************************************/


/*****************************************************************************
  6 �ӿں�������
*****************************************************************************/

/*****************************************************************************
  7 OTHERS����
*****************************************************************************/

/* ASN�����ṹ */
typedef struct
{
    VOS_UINT32                          ulMsgId;                                /*_H2ASN_MsgChoice_Export AT_IMSA_MSG_TYPE_ENUM_UINT32 */
    VOS_UINT8                           aucMsg[4];
    /***************************************************************************
        _H2ASN_MsgChoice_When_Comment          AT_IMSA_MSG_TYPE_ENUM_UINT32
    ****************************************************************************/
}AT_IMSA_INTERFACE_MSG_DATA;
/*_H2ASN_Length UINT32*/

typedef struct
{
    VOS_MSG_HEADER
    AT_IMSA_INTERFACE_MSG_DATA           stMsgData;
} AtImsaInterface_MSG;


#if ((VOS_OS_VER == VOS_WIN32) || (VOS_OS_VER == VOS_NUCLEUS))
#pragma pack()
#else
#pragma pack(0)
#endif


#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

#endif

