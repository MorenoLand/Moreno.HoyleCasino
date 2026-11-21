// FUN_0064e390  0064e390

undefined4 __thiscall FUN_0064e390(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int local_8;
  
  if (param_3 != (int *)0x0) {
    for (local_8 = 0; iVar1 = (**(code **)(*DAT_0162ee84 + 0xec))(param_1), local_8 < iVar1;
        local_8 = local_8 + 1) {
      piVar2 = (int *)(**(code **)(*DAT_0162ee84 + 0xe0))(local_8);
      if (piVar2 != (int *)0x0) {
        iVar1 = (**(code **)(*piVar2 + 0x70))(param_2);
        *param_3 = iVar1;
        if (*param_3 != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}

