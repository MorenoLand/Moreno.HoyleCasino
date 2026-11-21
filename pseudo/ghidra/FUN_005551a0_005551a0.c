// FUN_005551a0  005551a0

void __fastcall FUN_005551a0(int param_1)

{
  undefined4 local_8;
  
  FUN_00552f70();
  if (*(int *)(DAT_00793420 + 0x14) == 0) {
    FUN_005f4510(*(undefined4 *)(param_1 + 0x94),1);
    FUN_005f4510(*(undefined4 *)(param_1 + 0x98),1);
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      (**(code **)(**(int **)(param_1 + 4 + local_8 * 4) + 0x70))();
    }
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x74) + 0x70))();
    FUN_005f5d50(0);
    (**(code **)(**(int **)(param_1 + 0x70) + 0x70))();
    FUN_005f5d50(0);
  }
  return;
}

