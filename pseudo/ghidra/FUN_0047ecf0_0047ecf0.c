// FUN_0047ecf0  0047ecf0

void FUN_0047ecf0(void)

{
  int iVar1;
  int iVar2;
  int extraout_var;
  int iVar3;
  
  FUN_004c6180();
  iVar3 = extraout_var;
  iVar1 = FUN_00646e40();
  FUN_004c6180(iVar3,iVar1);
  iVar2 = FUN_00646e70();
  if ((1 < *(int *)(iVar3 + 0x488)) && (*(int *)(iVar3 + 0x488) < 6)) {
    iVar1 = iVar1 + 0x50;
  }
  (**(code **)(**(int **)(iVar3 + 0x49c) + 0x44))(iVar1,iVar2 + 0x41);
  (**(code **)(**(int **)(iVar3 + 0x49c) + 0x74))();
  return;
}

