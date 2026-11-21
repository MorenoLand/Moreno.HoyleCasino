// FUN_004079b0  004079b0

void __fastcall FUN_004079b0(int param_1)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_00407be0(0xffffffff,0);
  *(undefined4 *)(param_1 + 0x10e0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10e4) = 0xffffffff;
  if (DAT_007902f8 != 0) {
    FUN_004024c0();
  }
  FUN_00407c50();
  for (local_8 = 0; local_8 < 0xc; local_8 = local_8 + 1) {
    FUN_005cb9b0();
    FUN_00409ea0();
  }
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    *(undefined1 *)(param_1 + local_8 + 0xb3) = 1;
    for (local_c = 0; local_c < 3; local_c = local_c + 1) {
      FUN_004093a0(local_8,local_c,0);
    }
  }
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    iVar1 = FUN_005dcb00(local_8);
    *(undefined1 *)(iVar1 + 0x4a0) = 0;
    iVar1 = FUN_005dcb00(local_8);
    *(undefined1 *)(iVar1 + 0x4a1) = 0;
    iVar1 = FUN_005dcb00(local_8);
    *(undefined1 *)(iVar1 + 0x4a2) = 0;
    *(undefined1 *)(param_1 + local_8 + 0xb8) = 0;
  }
  return;
}

