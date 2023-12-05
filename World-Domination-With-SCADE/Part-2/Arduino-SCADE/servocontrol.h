/* $********** SCADE Suite KCG 32-bit 6.6.4 (build i3) **********
** Command: kcg664.exe -config C:/Users/noah.asherbranner/Documents/SCADE-BLOG/SCADE-Gen-Code/config.txt
** Generation date: 2023-12-01T12:00:58
*************************************************************$ */
#ifndef KCG_servocontrol_H_
#define KCG_servocontrol_H_

#include "kcg_types.h"
#include "Operator1.h"

/* ========================  input structure  ====================== */
typedef struct { array_char_3 /* _L1/, input/ */ input; } inC_servocontrol;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_int32_3 /* _L14/, output/ */ output;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_servocontrol;

/* ===========  node initialization and cycle functions  =========== */
/* servocontrol/ */
extern void servocontrol(inC_servocontrol *inC, outC_servocontrol *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void servocontrol_reset(outC_servocontrol *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void servocontrol_init(outC_servocontrol *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* KCG_servocontrol_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.4 (build i3) **********
** servocontrol.h
** Generation date: 2023-12-01T12:00:58
*************************************************************$ */

