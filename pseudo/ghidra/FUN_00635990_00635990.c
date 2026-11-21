// FUN_00635990  00635990

void __thiscall FUN_00635990(int *param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int local_8;
  
  if ((DAT_0163069c == 0) || (piVar2 = (int *)FUN_0063aac0(), *piVar2 != 0)) {
    for (local_8 = 0; iVar3 = (**(code **)(*param_1 + 0xec))(), local_8 < iVar3;
        local_8 = local_8 + 1) {
      iVar3 = (**(code **)(*param_1 + 0xe0))(local_8);
      if (iVar3 != 0) {
        piVar2 = (int *)(**(code **)(*param_1 + 0xe0))(local_8);
        cVar1 = (**(code **)(*piVar2 + 100))(param_2);
        if (cVar1 != '\0') {
          return;
        }
      }
    }
  }
  return;
}

