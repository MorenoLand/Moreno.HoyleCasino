// FUN_004266c0  004266c0

void __thiscall FUN_004266c0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_c;
  
  iVar2 = param_2 * 2;
  iVar3 = FUN_005dcb00(param_2);
  if ((iVar3 != 0) && (cVar1 = FUN_00426670(param_2), cVar1 != '\0')) {
    (**(code **)(*DAT_00790354 + 0x290))(param_2);
    for (local_c = 0; local_c < 2; local_c = local_c + 1) {
      if (0 < *(int *)(param_1 + 0x28 + (iVar2 + local_c) * 8)) {
        (**(code **)(**(int **)(param_1 + 8 + (iVar2 + local_c) * 4) + 0xc4))
                  (param_1 + 0x28 + (iVar2 + local_c) * 8,0,1);
      }
    }
    if (*(char *)(param_1 + param_2 + 0x68) != '\0') {
      FUN_005dcb00(param_2);
      iVar2 = FUN_005d5a50();
      if (1 < iVar2) {
        FUN_00426620(param_2);
        FUN_0041f9c0(param_2);
      }
    }
    iVar2 = FUN_005dcb00(param_2);
    *(undefined1 *)(iVar2 + 0x4a0) = 1;
    FUN_0041f1b0();
    FUN_005db890();
    (**(code **)(*(int *)DAT_00790354[1] + 8))(1,0);
  }
  return;
}

