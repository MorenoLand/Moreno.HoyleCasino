// FUN_00442490  00442490

void __fastcall FUN_00442490(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_20;
  int local_8;
  
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    FUN_005f5d50(0);
  }
  *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
  FUN_005f1ad0(0x1d4df);
  FUN_005eaf00(0x1d4de);
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    FUN_0043fab0(local_8,*(undefined4 *)(param_1 + 0xb0));
    if ((*(int *)(DAT_007906f0 + 0x268 + local_8 * 4) + -0x86 < 0) ||
       (*(int *)(DAT_007906f0 + 0x268 + local_8 * 4) == 0x94)) {
      (**(code **)(**(int **)(param_1 + 4 + local_8 * 4) + 0x70))();
    }
    else {
      (**(code **)(**(int **)(param_1 + 4 + local_8 * 4) + 0xb0))
                (*(int *)(DAT_007906f0 + 0x268 + local_8 * 4) + -0x86);
    }
  }
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    for (local_20 = 0; local_20 < 5; local_20 = local_20 + 1) {
      if (local_8 != local_20) {
        if (*(int *)(DAT_007906f0 + 0x268 + local_8 * 4) ==
            *(int *)(DAT_007906f0 + 0x268 + local_20 * 4)) {
          iVar1 = FUN_005eb220();
          if (iVar1 == 10) {
            iVar1 = FUN_005eb220();
            if (iVar1 == 10) {
              iVar1 = (**(code **)(**(int **)(param_1 + 4 + local_20 * 4) + 0x4c))(0);
              (**(code **)(**(int **)(param_1 + 4 + local_20 * 4) + 0x44))(iVar1 + -5);
              iVar1 = (**(code **)(**(int **)(param_1 + 4 + local_8 * 4) + 0x4c))(0);
              (**(code **)(**(int **)(param_1 + 4 + local_8 * 4) + 0x44))(iVar1 + -5);
              if (*(int *)(DAT_007906f0 + 0x6c + local_8 * 0x78) <
                  *(int *)(DAT_007906f0 + 0x6c + local_20 * 0x78)) {
                iVar1 = (**(code **)(**(int **)(param_1 + 4 + local_20 * 4) + 0x4c))(0);
                iVar2 = FUN_0062fbf0(3);
                (**(code **)(**(int **)(param_1 + 4 + local_20 * 4) + 0x44))((iVar1 + -2) - iVar2);
              }
              else {
                iVar1 = (**(code **)(**(int **)(param_1 + 4 + local_8 * 4) + 0x4c))(0);
                iVar2 = FUN_0062fbf0(3);
                (**(code **)(**(int **)(param_1 + 4 + local_8 * 4) + 0x44))((iVar1 + -2) - iVar2);
              }
            }
          }
        }
      }
    }
  }
  iVar1 = FUN_005fb300(2);
  if (iVar1 == 0) {
    FUN_005f9de0(0,2,0x1d4f1,0x1e0,0x1b7,2,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,0xffffffff
                 ,0);
  }
  piVar3 = (int *)FUN_005fb300(2);
  (**(code **)(*piVar3 + 0x74))();
  FUN_0043d730();
  return;
}

