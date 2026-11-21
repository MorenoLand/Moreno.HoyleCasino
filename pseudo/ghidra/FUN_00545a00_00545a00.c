// FUN_00545a00  00545a00

void FUN_00545a00(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 extraout_var;
  undefined4 uVar3;
  
  cVar1 = FUN_0054a740(1);
  if ((cVar1 == '\0') || (*(char *)(DAT_00793404 + 0x24) == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  uVar3 = extraout_var;
  if ((char)uVar2 == '\0') {
    FUN_005456a0(1);
  }
  if (*(char *)(DAT_00793404 + 0x24) != '\0') {
    FUN_005456a0(2);
  }
  FUN_00545920(uVar2,uVar3);
  return;
}

