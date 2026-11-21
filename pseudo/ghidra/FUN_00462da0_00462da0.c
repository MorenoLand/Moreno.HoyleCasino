// FUN_00462da0  00462da0

void FUN_00462da0(int param_1,short *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined2 local_64 [20];
  short local_3c [20];
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  for (local_8 = 0; local_8 < 0x14; local_8 = local_8 + 1) {
    local_64[local_8] = 0;
    local_3c[local_8] = 0;
  }
  if (*param_2 != 0) {
    local_10 = FUN_00462ba0(param_1,param_3,0);
    local_c = FUN_00462ba0(param_2,param_3,0);
    if ((local_10 <= local_c) && (local_c <= local_10)) {
      for (local_8 = 0; local_8 < param_3; local_8 = local_8 + 1) {
        local_64[local_8] = *(undefined2 *)(param_1 + local_8 * 2);
        local_3c[local_8] = param_2[local_8];
      }
      FUN_00641e20(local_64,param_3);
      FUN_00641e20(local_3c,param_3);
      for (local_8 = 0; local_8 < param_3; local_8 = local_8 + 1) {
        iVar1 = FUN_004630c0(local_64,local_8,param_3);
        iVar2 = FUN_004630c0(local_3c,local_8,param_3);
        if (iVar2 < iVar1) break;
        iVar1 = FUN_004630c0(local_64,local_8,param_3);
        iVar2 = FUN_004630c0(local_3c,local_8,param_3);
        if (iVar1 < iVar2) break;
      }
    }
  }
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

