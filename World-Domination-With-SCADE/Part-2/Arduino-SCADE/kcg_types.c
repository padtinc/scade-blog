/* $********** SCADE Suite KCG 32-bit 6.6.4 (build i3) **********
** Command: kcg664.exe -config C:/Users/noah.asherbranner/Documents/SCADE-BLOG/SCADE-Gen-Code/config.txt
** Generation date: 2023-12-01T12:00:58
*************************************************************$ */

#include "kcg_types.h"

#ifdef kcg_use_array_int32_3
kcg_bool kcg_comp_array_int32_3(array_int32_3 *kcg_c1, array_int32_3 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 3; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_3 */

#ifdef kcg_use_array_char_3
kcg_bool kcg_comp_array_char_3(array_char_3 *kcg_c1, array_char_3 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 3; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_char_3 */

/* $********** SCADE Suite KCG 32-bit 6.6.4 (build i3) **********
** kcg_types.c
** Generation date: 2023-12-01T12:00:58
*************************************************************$ */

