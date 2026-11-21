// FUN_005b8a30  005b8a30

void __thiscall FUN_005b8a30(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  
  if (DAT_007935f8 != 0) {
    cVar1 = FUN_005b6660(param_2);
    if ((cVar1 != '\0') && (iVar2 = FUN_005b5010(param_2,1), iVar2 == -1)) {
      return;
    }
    if (param_1 == *(int *)(DAT_00793604 + 0x634 + param_2 * 4)) {
      FUN_005a8210(param_2,0x65);
    }
    else {
      FUN_005a8210(param_2,param_3);
    }
  }
  return;
}

