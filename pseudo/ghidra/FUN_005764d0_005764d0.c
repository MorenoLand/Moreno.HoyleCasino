// FUN_005764d0  005764d0

void __fastcall FUN_005764d0(int param_1)

{
  if (*(int *)(param_1 + 0x74) != 3) {
    if (*(int *)(param_1 + 0x70) == 0) {
      FUN_00576740(3 - *(int *)(param_1 + 0x74));
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x50) + 0xcc))();
      if (3U - *(int *)(param_1 + 0x74) < *(uint *)(param_1 + 0x70)) {
        FUN_00575d70(3 - *(int *)(param_1 + 0x74));
        FUN_00575e20(3);
      }
      else {
        FUN_00575e20(*(undefined4 *)(param_1 + 0x70));
        FUN_00575d70(*(undefined4 *)(param_1 + 0x70));
      }
    }
  }
  return;
}

