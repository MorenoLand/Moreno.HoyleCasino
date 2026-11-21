// FUN_00585b00  00585b00

void __thiscall FUN_00585b00(int param_1,int param_2)

{
  int iVar1;
  int local_8;
  
  if ((((param_2 == 1) || (param_2 == 2)) || (param_2 == 3)) ||
     (**(char **)(param_1 + 4) != param_2)) {
    **(undefined1 **)(param_1 + 4) = (undefined1)param_2;
    for (local_8 = 0; local_8 < 0x14; local_8 = local_8 + 1) {
      *(undefined1 *)(*(int *)(param_1 + 4) + 5 + local_8) = 0;
    }
    switch(param_2) {
    case 1:
      while (iVar1 = FUN_00585ed0(), iVar1 != 5) {
        iVar1 = FUN_0062fbf0(0x50);
        FUN_00585850(iVar1 + 1);
        **(undefined1 **)(*(int *)(DAT_00793584 + 0x3b68) + 4) = 1;
      }
      break;
    case 2:
      while (iVar1 = FUN_00585ed0(), iVar1 != 10) {
        iVar1 = FUN_0062fbf0(0x50);
        FUN_00585850(iVar1 + 1);
        **(undefined1 **)(*(int *)(DAT_00793584 + 0x3b68) + 4) = 2;
      }
      break;
    case 3:
      while (iVar1 = FUN_00585ed0(), iVar1 != 0x14) {
        iVar1 = FUN_0062fbf0(0x50);
        FUN_00585850(iVar1 + 1);
        **(undefined1 **)(*(int *)(DAT_00793584 + 0x3b68) + 4) = 3;
      }
      break;
    case 4:
      FUN_00585ad0(5);
      break;
    case 5:
      FUN_00585ad0(5);
      break;
    case 6:
      FUN_00585ad0(5);
    }
    FUN_00589290();
    FUN_00585830();
  }
  return;
}

