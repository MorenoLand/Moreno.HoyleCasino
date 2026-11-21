// FUN_0042dc90  0042dc90

void __fastcall FUN_0042dc90(undefined4 param_1)

{
  int iVar1;
  undefined4 local_8;
  
  iVar1 = FUN_005eb220(param_1);
  if (iVar1 == 0xb) {
    for (local_8 = 0; local_8 < 0x4c; local_8 = local_8 + 1) {
      if (*(int *)(*(int *)(DAT_007906d4 + 4 + local_8 * 4) + 0x110) == 0) {
        FUN_005cb9b0();
      }
    }
  }
  return;
}

