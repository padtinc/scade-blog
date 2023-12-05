/* $********** SCADE Suite KCG 32-bit 6.6.4 (build i3) **********
** Command: kcg664.exe -config C:/Users/noah.asherbranner/Documents/SCADE-BLOG/SCADE-Gen-Code/config.txt
** Generation date: 2023-12-01T12:00:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "servocontrol.h"

/* servocontrol/ */
void servocontrol(inC_servocontrol *inC, outC_servocontrol *outC)
{
  kcg_size idx;

  /* _L14= */
  for (idx = 0; idx < 3; idx++) {
    outC->output[idx] = /* _L14=(Operator1)/ */ Operator1(inC->input[idx]);
  }
}

#ifndef KCG_USER_DEFINED_INIT
void servocontrol_init(outC_servocontrol *outC)
{
  kcg_size idx;

  for (idx = 0; idx < 3; idx++) {
    outC->output[idx] = kcg_lit_int32(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void servocontrol_reset(outC_servocontrol *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.4 (build i3) **********
** servocontrol.c
** Generation date: 2023-12-01T12:00:58
*************************************************************$ */

