#pragma once
/******************************************************************************/
/* File   : infServiceDcm_ServicePduR.hpp                                                   */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_ServiceDcm.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class infServiceDcm_ServicePduR{
   public:
      virtual FUNC(void, SERVICEDCM_CODE) StartOfReception (void) = 0;
      virtual FUNC(void, SERVICEDCM_CODE) CopyRxData       (void) = 0;
      virtual FUNC(void, SERVICEDCM_CODE) RxIndication     (void) = 0;
      virtual FUNC(void, SERVICEDCM_CODE) CopyTxData       (void) = 0;
      virtual FUNC(void, SERVICEDCM_CODE) TxConfirmation   (void) = 0;
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
