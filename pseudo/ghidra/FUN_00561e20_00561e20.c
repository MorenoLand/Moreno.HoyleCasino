// FUN_00561e20  00561e20

void FUN_00561e20(void)

{
  undefined4 uVar1;
  undefined4 extraout_var;
  undefined4 uVar2;
  undefined4 local_8;
  
  uVar2 = *(undefined4 *)(DAT_007947e0 + 0x4f14);
  uVar1 = FUN_005592a0(uVar2,DAT_0079343c + 0x24);
  FUN_00561f20(extraout_var,uVar2,uVar1);
  if (*(char *)(DAT_0079343c + 0x2e) != '\0') {
    FUN_005645c0(1);
    FUN_00564b10();
    for (local_8 = 0; local_8 < 0x31; local_8 = local_8 + 1) {
      FUN_00564880(local_8);
    }
    FUN_00564490();
  }
  return;
}

