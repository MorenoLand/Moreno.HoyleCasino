// FUN_005afba0  005afba0

void FUN_005afba0(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 extraout_var;
  
  cVar1 = FUN_005df700(0xffffffff);
  if ((cVar1 != '\0') && (cVar1 = FUN_005da7b0(extraout_var), cVar1 == '\0')) {
    if (*(int *)(DAT_007935f8 + 0x34) != 0) {
      uVar2 = FUN_005b4f00();
      uVar2 = FUN_005a4b20(uVar2);
      FUN_005a8e90(uVar2);
    }
    if (*(int *)(DAT_007935f8 + 0x30) != 0) {
      (**(code **)(**(int **)(*(int *)(DAT_007935f8 + 0x30) + 0x1bc) + 0x74))();
    }
  }
  return;
}

