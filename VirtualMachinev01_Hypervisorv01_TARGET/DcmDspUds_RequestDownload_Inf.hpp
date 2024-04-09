

#ifndef DCMDSPUDS_REQUESTDOWNLOAD_INF_H
#define DCMDSPUDS_REQUESTDOWNLOAD_INF_H

#include "Dcm.hpp"

#if(DCM_CFG_DSPUDSSUPPORT_ENABLED != DCM_CFG_OFF)

#include "DcmCore_DslDsd_Prot.hpp"
#include "DcmDspUds_Uds_Prot.hpp"
#if(DCM_CFG_DSP_REQUESTDOWNLOAD_ENABLED != DCM_CFG_OFF)
#include "DcmDspUds_RequestDownload_Prot.hpp"
#include "DcmDspUds_Memaddress_Calc_Prot.hpp"
#include "DcmAppl.hpp"
#endif

#endif

#endif

