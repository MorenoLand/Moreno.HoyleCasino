// FUN_005b6880  005b6880

void __thiscall FUN_005b6880(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_005b6700(param_2);
  if ((cVar1 != '\0') && (iVar2 = FUN_005dcb00(param_2), iVar2 != 0)) {
    (**(code **)(*DAT_00793600 + 0x290))(param_2);
    if (0 < *(int *)(param_1 + 0x590 + param_2 * 8)) {
      (**(code **)(**(int **)(param_1 + 0x580 + param_2 * 4) + 0xc4))
                (param_1 + 0x590 + param_2 * 8,0,1);
    }
    if (0 < *(int *)(param_1 + 0x644 + param_2 * 8)) {
      (**(code **)(**(int **)(param_1 + 0x634 + param_2 * 4) + 0xc4))
                (param_1 + 0x644 + param_2 * 8,0,1);
    }
    iVar2 = FUN_005dcb00(param_2);
    *(undefined1 *)(iVar2 + 0x4a0) = 1;
    FUN_005a7ea0();
    FUN_005db890();
    (**(code **)(*(int *)DAT_00793600[1] + 8))(1,0);
  }
  return;
}

