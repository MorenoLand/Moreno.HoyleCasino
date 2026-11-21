// FUN_00463710  00463710

undefined1 __thiscall FUN_00463710(undefined4 param_1,undefined2 *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  
  if (param_3 == 5) {
    cVar1 = FUN_00463760(param_2,5,param_1);
    if ((cVar1 == '\0') || (iVar2 = FUN_00641280(*param_2), iVar2 != 10)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    return uVar3;
  }
  return 0;
}

