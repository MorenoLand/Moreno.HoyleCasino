// FUN_00631960  00631960

undefined4 __fastcall FUN_00631960(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int local_8;
  
  (**(code **)(*param_1 + 0x90))(0xffffffff);
  if (param_1[0x16] != 0) {
    for (local_8 = 0; iVar1 = (**(code **)(*DAT_0162ee84 + 0x10c))(), local_8 < iVar1;
        local_8 = local_8 + 1) {
      puVar2 = *(undefined4 **)(param_1[0x16] + local_8 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
      *(undefined4 *)(param_1[0x16] + local_8 * 4) = 0;
    }
  }
  for (local_8 = 0; iVar1 = (**(code **)(*DAT_0162ee84 + 0xe4))(), local_8 < iVar1;
      local_8 = local_8 + 1) {
    puVar2 = (undefined4 *)(**(code **)(*DAT_0162ee84 + 0xe0))(local_8);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
  }
  return 1;
}

