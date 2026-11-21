// FUN_00540ed0  00540ed0

void __thiscall FUN_00540ed0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_c;
  
  iVar2 = param_2 * 3;
  cVar1 = FUN_00540e80(param_2);
  if ((cVar1 != '\0') && (iVar3 = FUN_005dcb00(param_2), iVar3 != 0)) {
    (**(code **)(*DAT_007933e8 + 0x290))(param_2);
    for (local_c = 0; local_c < 3; local_c = local_c + 1) {
      if (0 < *(int *)(param_1 + 0x38 + (iVar2 + local_c) * 8)) {
        (**(code **)(**(int **)(param_1 + 8 + (iVar2 + local_c) * 4) + 0xc4))
                  (param_1 + 0x38 + (iVar2 + local_c) * 8,0,1);
      }
    }
    iVar2 = FUN_005dcb00(param_2);
    *(undefined1 *)(iVar2 + 0x4a0) = 1;
    FUN_0053b1a0();
    FUN_005db890();
    (**(code **)(*(int *)DAT_007933e8[1] + 8))(1,0);
  }
  return;
}

