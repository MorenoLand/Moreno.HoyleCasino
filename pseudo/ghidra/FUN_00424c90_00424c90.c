// FUN_00424c90  00424c90

void FUN_00424c90(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 extraout_var;
  
  cVar1 = FUN_005df700(0xffffffff);
  if (((cVar1 != '\0') && (cVar1 = FUN_005da7b0(extraout_var), cVar1 == '\0')) &&
     (*(int *)(DAT_00790360 + 0x40) != 0)) {
    uVar2 = FUN_0041e290(*(undefined4 *)(DAT_00790358 + 0xa0));
    FUN_00422110(uVar2);
  }
  return;
}

