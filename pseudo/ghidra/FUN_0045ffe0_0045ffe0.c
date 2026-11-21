// FUN_0045ffe0  0045ffe0

void __fastcall FUN_0045ffe0(int param_1)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_00460420(0xffffffff,0);
  *(undefined4 *)(param_1 + 0x124) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x128) = 0xffffffff;
  FUN_00460470();
  *(undefined1 *)(param_1 + 0x115) = 0;
  *(undefined1 *)(param_1 + 0x114) = 0;
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    if (local_8 < 4) {
      iVar1 = FUN_005dcb00(local_8);
      *(undefined1 *)(iVar1 + 0x4a0) = 0;
      iVar1 = FUN_005dcb00(local_8);
      *(undefined1 *)(iVar1 + 0x4a1) = 0;
      iVar1 = FUN_005dcb00(local_8);
      *(undefined1 *)(iVar1 + 0x4a2) = 0;
    }
  }
  FUN_005cb9b0();
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    for (local_c = 0; local_c < 7; local_c = local_c + 1) {
      FUN_004604a0(local_8,local_c,0);
    }
    *(undefined2 *)(param_1 + 0xa2 + local_8 * 2) = 0;
    *(undefined2 *)(param_1 + 0xac + local_8 * 2) = 0;
    *(undefined4 *)(param_1 + 0xb8 + local_8 * 4) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xcc + local_8 * 4) = 0xffffffff;
    *(undefined1 *)(param_1 + local_8 + 0xe0) = 0;
    *(undefined1 *)(param_1 + local_8 + 0xe5) = 0;
    *(undefined1 *)(param_1 + local_8 + 0xea) = 0;
    *(undefined1 *)(param_1 + local_8 + 0xef) = 0;
  }
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    *(undefined1 *)(param_1 + local_8 + 0xf4) = 0;
    *(undefined1 *)(param_1 + local_8 + 0xfe) = 0;
    *(undefined1 *)(param_1 + local_8 + 0xf9) = 0;
  }
  return;
}

