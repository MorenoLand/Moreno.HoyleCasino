// FUN_0066ccb0  0066ccb0

void __thiscall FUN_0066ccb0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 local_8;
  
  if ((*(int *)(param_1 + 0x194) == 0) && (param_2 == 3)) {
    iVar1 = (**(code **)(*DAT_0162ee84 + 0x280))();
    if (iVar1 != 0) {
      local_8 = 0;
      while( true ) {
        iVar1 = (**(code **)(*DAT_0162ee84 + 0x25c))();
        if (iVar1 <= local_8) break;
        if (*(int *)(*(int *)(DAT_016306c0 + 0x5c) + local_8 * 4) == param_1) {
          piVar2 = (int *)FUN_005fb2b0(0);
          uVar3 = (**(code **)(*DAT_0162ee84 + 0x284))(local_8);
          (**(code **)(*piVar2 + 0xb0))(uVar3);
          break;
        }
        local_8 = local_8 + 1;
      }
      piVar2 = (int *)FUN_005fb2b0(0);
      (**(code **)(*piVar2 + 0x74))();
    }
  }
  if ((*(int *)(param_1 + 0x194) == 3) && (param_2 == 0)) {
    iVar1 = (**(code **)(*DAT_0162ee84 + 0x280))();
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_005fb2b0(0);
      (**(code **)(*piVar2 + 0x70))();
    }
  }
  FUN_006031d0(param_2);
  return;
}

