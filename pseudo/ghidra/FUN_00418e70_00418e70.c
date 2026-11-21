// FUN_00418e70  00418e70

void FUN_00418e70(void)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined4 uVar3;
  
  cVar1 = FUN_005da7b0();
  uVar3 = extraout_var;
  if (cVar1 == '\0') {
    cVar1 = FUN_00418510();
    iVar2 = (int)cVar1;
  }
  else {
    iVar2 = 0x50;
  }
  FUN_00686cc0(iVar2,uVar3,(double)iVar2);
  return;
}

