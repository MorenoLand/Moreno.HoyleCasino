// FUN_006127f0  006127f0

void __thiscall FUN_006127f0(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 local_1c [8];
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  uVar1 = *(uint *)(param_1 + 4);
  local_c = 0;
  if (((param_1 == 0) || (uVar1 < *(uint *)(param_1 + 4))) || (*(uint *)(param_1 + 8) < uVar1)) {
    _invalid_parameter_noinfo();
  }
  local_c = param_1;
  local_8 = uVar1;
  FUN_00612780(param_2);
  local_14 = param_1;
  local_10 = uVar1;
  FUN_006128b0(local_1c,param_1,uVar1);
  return;
}

