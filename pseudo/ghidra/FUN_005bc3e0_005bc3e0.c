// FUN_005bc3e0  005bc3e0

void __fastcall FUN_005bc3e0(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 local_1c [8];
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  uVar1 = *(uint *)(param_1 + 8);
  local_c = 0;
  if (((param_1 == 0) || (uVar1 < *(uint *)(param_1 + 4))) || (*(uint *)(param_1 + 8) < uVar1)) {
    _invalid_parameter_noinfo();
  }
  uVar2 = *(uint *)(param_1 + 4);
  local_14 = 0;
  local_c = param_1;
  local_8 = uVar1;
  if (((param_1 == 0) || (uVar2 < *(uint *)(param_1 + 4))) || (*(uint *)(param_1 + 8) < uVar2)) {
    _invalid_parameter_noinfo();
  }
  local_14 = param_1;
  local_10 = uVar2;
  FUN_005bc490(local_1c,param_1,uVar2,local_c,local_8);
  return;
}

