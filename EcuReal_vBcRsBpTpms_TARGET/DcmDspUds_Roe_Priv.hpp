

#ifndef DCMDSPUDS_ROE_PRIV_H
#define DCMDSPUDS_ROE_PRIV_H

#if(DCM_CFG_DSP_RESPONSEONEVENT_ENABLED != DCM_CFG_OFF)

#if(DCM_CFG_ROE_WINTIMEINREPEVENTSREQ != DCM_CFG_OFF)
#define DCM_DSP_ROE_MINREQLEN        0x2u
#else
#define DCM_DSP_ROE_MINREQLEN        0x1u
#endif

#define DCM_DSP_ROE_STORAGEBIT_MSK   0x40u
#define DCM_DSP_ROE_POSEVENT         0x0u
#define DCM_DSP_ROE_POSWINDOWTIME    0x1u
#define DCM_ROE_POSDIDEVENTRECORD       0x2u
#define DCM_ROE_POSDIDSRVTORESPTORECORD       0x4u
#define DCM_ROE_POSDTCEVENTRECORD       0x2u
#define DCM_ROE_POSDTCSRVTORESPTORECORD       0x3u
#define DCM_ROE_POSEVENTRECORD  0x02u
#define DCM_DSP_ROE_DIDRECORDLEN     0X05u
#define DCM_DSP_ROE_DTCRECORDLEN     0X03u
#define DCM_ROE_INFINITETIME         0x02u

typedef enum{
    DCM_DSP_ROE_INIT
   ,   DCM_DSP_ROE_CONTROLEVENT
   ,   DCM_DSP_ROE_SETUPEVENT
   ,   DCM_DSP_ROE_REPORTEVENTS
}Dcm_DspRoeState_ten;

#endif

#endif
