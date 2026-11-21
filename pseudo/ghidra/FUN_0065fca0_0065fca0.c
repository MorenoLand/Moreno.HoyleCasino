// FUN_0065fca0  0065fca0

undefined4 __fastcall FUN_0065fca0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *_Source;
  int iVar3;
  
  if ((*(int *)(param_1 + 0x1cc) != 0) && (*(undefined4 **)(param_1 + 0x1cc) != (undefined4 *)0x0))
  {
    (**(code **)**(undefined4 **)(param_1 + 0x1cc))(1);
  }
  uVar2 = (**(code **)(*DAT_0162ee84 + 0x31c))();
  *(undefined4 *)(param_1 + 0x1cc) = uVar2;
  FUN_0063a3e0(0,3);
  _Source = (char *)FUN_00660f70();
  iVar3 = FUN_0063aac0();
  strcpy((char *)(iVar3 + 4),_Source);
  FUN_0065fde0();
  strcpy((char *)(*(int *)(param_1 + 0x1cc) + 0x10),(char *)(param_1 + 0x1d7));
  cVar1 = (**(code **)(*DAT_0162ee84 + 0xdc))();
  if (cVar1 != '\0') {
    FUN_0066fdf0();
    FUN_0066f960(*(undefined4 *)(param_1 + 0x1cc));
  }
  uVar2 = FUN_0063b0a0();
  return uVar2;
}

