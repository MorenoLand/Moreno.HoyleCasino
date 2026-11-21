// FUN_00542980  00542980

undefined4 FUN_00542980(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00549e80(0,1);
  iVar2 = FUN_00548f80(0);
  FUN_00549e80(1,1);
  FUN_00549e80(2,1);
  if (iVar2 == 6) {
    uVar3 = 1;
  }
  else if (iVar1 < 0x11) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

