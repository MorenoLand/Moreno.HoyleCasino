// FUN_00648cd0  00648cd0

void __thiscall FUN_00648cd0(int param_1,int param_2)

{
  char cVar1;
  
  cVar1 = FUN_005f54a0();
  if ((((cVar1 != '\0') && (*(int *)(param_1 + 0x17c) != 0)) && (*(int *)(param_2 + 0x18) == 1)) &&
     (cVar1 = FUN_006480d0(), cVar1 != '\0')) {
    if ((*(char *)(param_2 + 4) != '\0') && (*(char *)(param_2 + 0x14) == 'r')) {
      return;
    }
    cVar1 = (**(code **)(*DAT_0162ee80 + 0x200))();
    if (cVar1 != '\0') {
      return;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x184) + 0x48) = 0;
    FUN_006464d0(1,0);
  }
  FUN_005f4d00(param_2);
  return;
}

