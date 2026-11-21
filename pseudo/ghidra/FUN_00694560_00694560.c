// FUN_00694560  00694560

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00694560(float param_1,uint param_2,uint param_3,float *param_4,undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = ((int)param_3 < (int)param_2) - 1;
  uVar2 = (int)(param_2 - param_3) >> 0x1f;
  uVar2 = 0x1f - ((param_2 - param_3 ^ uVar2) - uVar2);
  *param_4 = (*(float *)(&DAT_00787850 + (((int)uVar2 < 0) - 1 & uVar2) * 4) + _DAT_006b3650) *
             *(float *)(&DAT_00787450 + (~uVar1 & param_2 | uVar1 & param_3) * 4) * param_1;
  *param_5 = 0;
  return;
}

