// FUN_00419ad0  00419ad0

void __thiscall FUN_00419ad0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_8;
  
  local_8 = FUN_00419780(param_2,param_3,param_4);
  if (local_8 == 1) {
    local_8 = 0xb;
  }
  *(int *)(param_1 + 0x4dc) = *(int *)(param_1 + 0x4dc) + 1;
  if (local_8 < 7) {
    *(int *)(param_1 + 0x4e4) = *(int *)(param_1 + 0x4e4) + 1;
  }
  if (9 < local_8) {
    *(int *)(param_1 + 0x4e4) = *(int *)(param_1 + 0x4e4) + -1;
  }
  if (local_8 == 0xb) {
    *(int *)(param_1 + 0x4e8) = *(int *)(param_1 + 0x4e8) + 1;
  }
  uVar1 = FUN_00419c90();
  *(undefined4 *)(param_1 + 0x4e0) = uVar1;
  FUN_00419420(param_2,param_3,param_4,1);
  return;
}

