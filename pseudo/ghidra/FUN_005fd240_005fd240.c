// FUN_005fd240  005fd240

void __fastcall FUN_005fd240(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  
  iVar1 = FUN_005f5400();
  if (iVar1 != -2) {
    if (*(int *)(*(int *)(param_1 + 0x1f0) + 0x1b4) == 1) {
      if (*(int *)(*(int *)(param_1 + 0x1f0) + 0x1c0) != 0) {
        uVar2 = FUN_005f5400(1);
        (**(code **)(**(int **)(*(int *)(param_1 + 0x1f0) + 0x1c0) + 0xf0))(uVar2);
      }
    }
    else if (*(int *)(param_1 + 0x1ec) == -1) {
      FUN_005f2870();
      if (*(int *)(param_1 + 0x1f0) == 0) {
        local_10 = 0xffffffff;
      }
      else {
        local_10 = *(undefined4 *)(*(int *)(param_1 + 0x1f0) + 0x1c4);
      }
      uVar2 = FUN_005f5400(local_10);
      (**(code **)(*DAT_015e55e4 + 0x4c))(uVar2);
    }
    else {
      FUN_005fd330();
    }
  }
  return;
}

