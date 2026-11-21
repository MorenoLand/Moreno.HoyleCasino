// FUN_00427670  00427670

undefined1 __thiscall FUN_00427670(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  uVar2 = FUN_00426370(param_2);
  iVar3 = FUN_00462ba0(param_1 + 0x6c + param_2 * 10,uVar2,uVar4);
  if ((*(char *)(param_1 + param_2 + 0xdc) == '\0') &&
     ((cVar1 = FUN_004272e0(param_2), cVar1 == '\0' || (iVar3 != 10)))) {
    return 0;
  }
  return 1;
}

