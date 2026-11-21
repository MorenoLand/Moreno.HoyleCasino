// FUN_005b3240  005b3240

void __thiscall FUN_005b3240(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_8;
  
  local_8 = FUN_005b5f60(param_2,param_3,param_4);
  if (local_8 == 1) {
    local_8 = 0xb;
    *(int *)(param_1 + 0x5d0) = *(int *)(param_1 + 0x5d0) + 1;
  }
  if (local_8 < 7) {
    *(int *)(param_1 + 0x5cc) = *(int *)(param_1 + 0x5cc) + 1;
  }
  if (9 < local_8) {
    *(int *)(param_1 + 0x5cc) = *(int *)(param_1 + 0x5cc) + -1;
  }
  *(int *)(param_1 + 0x5c4) = *(int *)(param_1 + 0x5c4) + 1;
  uVar1 = FUN_005b3340();
  *(undefined4 *)(param_1 + 0x5c8) = uVar1;
  FUN_005b70b0(param_2,param_3,param_4,1);
  return;
}

