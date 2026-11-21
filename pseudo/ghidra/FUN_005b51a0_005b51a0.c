// FUN_005b51a0  005b51a0

int * __thiscall FUN_005b51a0(int param_1,int *param_2,int param_3)

{
  uint uVar1;
  int extraout_EDX;
  uint uVar2;
  int local_10;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x580 + param_3 * 4) + 0x48 + param_3 * 0x20);
  FUN_0064c8a0(0,0);
  uVar2 = uVar1 & 0x80000001;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
  }
  local_10 = extraout_EDX;
  if (uVar2 == 1) {
    local_10 = 0x32;
  }
  *param_2 = (int)uVar1 / 2;
  param_2[1] = local_10;
  return param_2;
}

