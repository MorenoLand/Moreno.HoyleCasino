// FUN_005bfd30  005bfd30

void __thiscall FUN_005bfd30(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint local_7c;
  uint local_78;
  undefined1 local_14 [8];
  int local_c;
  uint local_8;
  
  if (*(int *)(param_1 + 4) == 0) {
    local_78 = 0;
  }
  else {
    local_78 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  }
  if (*(int *)(param_1 + 4) == 0) {
    local_7c = 0;
  }
  else {
    local_7c = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 2;
  }
  if (local_78 < local_7c) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_005c0910(iVar1,1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 4;
  }
  else {
    uVar2 = *(uint *)(param_1 + 8);
    local_c = 0;
    if (((param_1 == 0) || (uVar2 < *(uint *)(param_1 + 4))) || (*(uint *)(param_1 + 8) < uVar2)) {
      _invalid_parameter_noinfo();
    }
    local_c = param_1;
    local_8 = uVar2;
    FUN_005bfe30(local_14,param_1,uVar2,param_2);
  }
  return;
}

