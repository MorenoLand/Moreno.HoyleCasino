// FUN_00563fb0  00563fb0

void __fastcall FUN_00563fb0(int param_1)

{
  undefined1 uVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 0x31; local_8 = local_8 + 1) {
    uVar1 = FUN_0056b950(local_8,0);
    *(undefined1 *)(param_1 + local_8 + 0x564) = uVar1;
    for (local_c = 0; local_c < 5; local_c = local_c + 1) {
      if (*(int *)(param_1 + 200 + local_8 * 0x14 + local_c * 4) != 0) {
        (**(code **)(**(int **)(param_1 + 200 + local_8 * 0x14 + local_c * 4) + 0xb0))(0x35);
      }
      if (*(int *)(param_1 + 4 + local_8 * 4) != 0) {
        FUN_005eaf00(0x31222a);
        (**(code **)(**(int **)(param_1 + 4 + local_8 * 4) + 0xb0))(local_8 << 1);
      }
    }
    if (*(int *)(param_1 + 0x49c + local_8 * 4) != 0) {
      FUN_00566310();
    }
  }
  *(undefined1 *)(param_1 + 0x90c) = 0;
  return;
}

