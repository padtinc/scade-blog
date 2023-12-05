/* $********** SCADE Suite KCG 32-bit 6.6.4 (build i3) **********
** Command: kcg664.exe -config C:/Users/noah.asherbranner/Documents/SCADE-BLOG/SCADE-Gen-Code/config.txt
** Generation date: 2023-12-01T12:00:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Operator1.h"

/* Operator1/ */
kcg_int32 Operator1(/* Input1/, _L1/ */ kcg_char Input1)
{
  /* Output1/, _L6/ */
  kcg_int32 Output1;

  /* _L6= */
  switch (Input1) {
    case '0' :
      Output1 = kcg_lit_int32(0);
      break;
    case '1' :
      Output1 = kcg_lit_int32(127);
      break;
    case '2' :
      Output1 = kcg_lit_int32(255);
      break;
    default :
      Output1 = kcg_lit_int32(127);
      break;
  }
  return Output1;
}



/* $********** SCADE Suite KCG 32-bit 6.6.4 (build i3) **********
** Operator1.c
** Generation date: 2023-12-01T12:00:58
*************************************************************$ */

