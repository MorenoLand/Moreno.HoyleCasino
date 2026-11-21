// FUN_00548b20  00548b20

void __fastcall FUN_00548b20(int param_1)

{
  undefined4 local_8;
  
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    *(undefined4 *)(param_1 + 0x50 + local_8 * 4) = 0;
  }
  return;
}

