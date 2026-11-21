// FUN_006622a0  006622a0

void FUN_006622a0(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int extraout_var;
  int iVar4;
  
  uVar1 = FUN_005fb4c0(0x67);
  iVar4 = extraout_var;
  iVar2 = FUN_00606490();
  piVar3 = (int *)FUN_005ff920(iVar2 + -1);
  (**(code **)(*piVar3 + 0xf4))(piVar3,iVar4,uVar1);
  FUN_00662ce0();
  *(undefined4 *)(iVar4 + 0x8c) = 0;
  CPropertySection::Get(*(CPropertySection **)(iVar4 + 0x80),iVar2 + 1,(ulong *)0x67);
  FUN_005ff840();
  FUN_005ffb40(iVar2);
  if (iVar2 < 2) {
    FUN_005fbc80(0,100);
    FUN_005fbcb0(0,0x65);
  }
  return;
}

