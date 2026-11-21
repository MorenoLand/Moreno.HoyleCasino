// FUN_0042ba50  0042ba50

void __fastcall FUN_0042ba50(undefined4 param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int local_18;
  int local_c;
  int local_8;
  
  (**(code **)(**(int **)(DAT_0162ee80 + 4) + 4))(1,param_1);
  for (local_8 = 0; local_8 < 0x4c; local_8 = local_8 + 1) {
    if (((*(int *)(*(int *)(DAT_007906d4 + 4 + local_8 * 4) + 0x110) == -1) &&
        ((iVar3 = FUN_005f5400(), iVar3 == 4 || (iVar3 = FUN_005f5400(), iVar3 == 5)))) &&
       ((iVar3 = FUN_005f5400(), iVar3 != 5 ||
        (*(int *)(DAT_007906d4 + 0xacc) + *(int *)(DAT_007906d4 + 0xad0) != 0xc)))) {
      iVar3 = FUN_005f5400();
      if (iVar3 == 4) {
        local_18 = FUN_0042b8f0(*(int *)(DAT_007906d4 + 0xacc) + *(int *)(DAT_007906d4 + 0xad0));
      }
      else {
        local_18 = FUN_0042b9a0(*(int *)(DAT_007906d4 + 0xacc) + *(int *)(DAT_007906d4 + 0xad0));
      }
      for (local_c = 0; local_c < 4; local_c = local_c + 1) {
        uVar4 = FUN_005f5400();
        cVar2 = FUN_004369a0(local_c,uVar4);
        if (cVar2 != '\0') {
          puVar1 = (undefined4 *)(*(int *)(DAT_007906d4 + 4 + local_8 * 4) + 0x48 + local_c * 0x20);
          (**(code **)(**(int **)(DAT_007906d4 + 4 + local_18 * 4) + 0xb8))
                    (*puVar1,puVar1[1],local_c,0);
          (**(code **)(**(int **)(DAT_007906d4 + 4 + local_8 * 4) + 0xbc))(local_c,0);
        }
      }
    }
  }
  (**(code **)(**(int **)(DAT_0162ee80 + 4) + 0x1c))(0xf);
  return;
}

