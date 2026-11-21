// FUN_005a3880  005a3880

void __fastcall FUN_005a3880(int param_1)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_005a3e50();
  FUN_005a3ad0(0xffffffff,0);
  FUN_005a3b40(0xffffffff,0xffffffff);
  *(undefined1 *)(param_1 + 0xf0) = 0;
  for (local_8 = 0; local_8 < 0xc; local_8 = local_8 + 1) {
    FUN_005cb9b0();
    *(undefined4 *)(param_1 + 0x98 + local_8 * 4) = 0xffffffff;
  }
  for (local_c = 0; local_c < 6; local_c = local_c + 1) {
    FUN_005a3c20(local_c,0);
    for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
      FUN_005a3b70(local_c,local_10,0);
    }
  }
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    iVar1 = FUN_005dcb00(local_14);
    *(undefined1 *)(iVar1 + 0x4a0) = 0;
    iVar1 = FUN_005dcb00(local_14);
    *(undefined1 *)(iVar1 + 0x4a1) = 0;
    iVar1 = FUN_005dcb00(local_14);
    *(undefined1 *)(iVar1 + 0x4a2) = 0;
    *(undefined1 *)(param_1 + local_14 + 0x104) = 0;
    *(undefined1 *)(param_1 + local_14 + 0xfb) = 0;
    *(undefined1 *)(param_1 + local_14 + 0xff) = 0;
  }
  FUN_005a1e60();
  return;
}

