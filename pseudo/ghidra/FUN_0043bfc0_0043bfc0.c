// FUN_0043bfc0  0043bfc0

uint __fastcall FUN_0043bfc0(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  iVar2 = FUN_004347f0();
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    FUN_004347f0();
    piVar3 = (int *)FUN_0063aac0();
    piVar3 = (int *)*piVar3;
    if ((piVar3 == (int *)0x2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((bVar1) && (piVar3 = (int *)FUN_004347f0(), (char)piVar3[0x128] == '\0')) {
      uVar4 = FUN_00435290(param_1);
      return uVar4;
    }
  }
  return (uint)piVar3 & 0xffffff00;
}

