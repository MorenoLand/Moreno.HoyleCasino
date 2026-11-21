// FUN_005649e0  005649e0

void __fastcall FUN_005649e0(int param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 0x31; local_8 = local_8 + 1) {
    FUN_00566310();
    if (*(char *)(param_1 + local_8 + 0x564) != '\0') {
      FUN_005eaf00(0x31222a);
      (**(code **)(**(int **)(param_1 + 4 + local_8 * 4) + 0xb0))(local_8 << 1);
      *(undefined1 *)(param_1 + local_8 + 0x68a) = 0;
    }
  }
  for (local_8 = 0; local_8 < 0x31; local_8 = local_8 + 1) {
    if (*(char *)(param_1 + local_8 + 0x564) != '\0') {
      for (local_c = 0; local_c < 5; local_c = local_c + 1) {
        if (*(short *)(*(int *)(DAT_0079343c + 0x34) + 0x3ac + local_c * 2) == 0) {
          *(undefined1 *)(param_1 + 0x595 + local_8 * 5 + local_c) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0x595 + local_8 * 5 + local_c) = 1;
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x90c) = 1;
  return;
}

