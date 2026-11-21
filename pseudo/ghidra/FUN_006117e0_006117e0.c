// FUN_006117e0  006117e0

void __thiscall FUN_006117e0(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint local_54;
  uint local_50;
  undefined1 local_17;
  undefined1 local_14 [8];
  int local_c;
  uint local_8;
  
  if (*(int *)(param_1 + 4) == 0) {
    local_50 = 0;
  }
  else {
    local_50 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x48;
  }
  if (*(int *)(param_1 + 4) == 0) {
    local_54 = 0;
  }
  else {
    local_54 = (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) / 0x48;
  }
  if (local_50 < local_54) {
    uVar1 = *(uint *)(param_1 + 8);
    FUN_00612970(uVar1,1,param_2,param_1,local_17,uVar1 & 0xffffff00);
    *(uint *)(param_1 + 8) = uVar1 + 0x48;
  }
  else {
    uVar1 = *(uint *)(param_1 + 8);
    local_c = 0;
    if (((param_1 == 0) || (uVar1 < *(uint *)(param_1 + 4))) || (*(uint *)(param_1 + 8) < uVar1)) {
      _invalid_parameter_noinfo();
    }
    local_c = param_1;
    local_8 = uVar1;
    FUN_00611ae0(local_14,param_1,uVar1,param_2);
  }
  return;
}

