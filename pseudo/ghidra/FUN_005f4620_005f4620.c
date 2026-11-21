// FUN_005f4620  005f4620

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005f4620(int param_1,undefined4 param_2)

{
  int local_5c;
  int local_58 [21];
  
  local_58[1] = 0xffffffff;
  local_58[0] = 0;
  while( true ) {
    if (*(int *)(&DAT_0076d6f0 + local_58[0] * 0x50) == -1) goto LAB_005f46df;
    if (*(int *)(&DAT_0076d6f0 + local_58[0] * 0x50) == param_1) break;
    local_58[0] = local_58[0] + 1;
  }
  local_5c = 1;
  while (*(int *)(&DAT_0076d6f0 + local_5c * 4 + local_58[0] * 0x50) != -1) {
    local_58[local_5c] = *(int *)(&DAT_0076d6f0 + local_5c * 4 + local_58[0] * 0x50);
    local_5c = local_5c + 1;
  }
  local_58[local_5c] = -1;
  FUN_0060a9c0(param_1,local_58 + 1,0,param_2,_DAT_006b3654);
LAB_005f46df:
  if (*(int *)(&DAT_0076d6f0 + local_58[0] * 0x50) == -1) {
    FUN_0060a9c0(param_1,0,0,param_2,_DAT_006b3654);
  }
  return;
}

