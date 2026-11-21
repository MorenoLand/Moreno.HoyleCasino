// FUN_0040e520  0040e520

void __fastcall FUN_0040e520(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_14;
  
  if (*(int *)(param_1 + 4) != 4) {
    for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
      (**(code **)(**(int **)(param_1 + 0x18 + local_14 * 4) + 0x70))();
    }
    for (local_14 = 0; iVar3 = FUN_004194c0(*(undefined4 *)(param_1 + 4)), local_14 < iVar3;
        local_14 = local_14 + 1) {
      switch(*(undefined1 *)(DAT_00790324 + 0x110 + *(int *)(param_1 + 4) * 0x118 + local_14)) {
      case 0:
        (**(code **)(**(int **)(param_1 + 0x18 + local_14 * 4) + 0xb0))(1);
        break;
      case 1:
        (**(code **)(**(int **)(param_1 + 0x18 + local_14 * 4) + 0xb0))(0);
        break;
      case 2:
        (**(code **)(**(int **)(param_1 + 0x18 + local_14 * 4) + 0xb0))(3);
        break;
      default:
        (**(code **)(**(int **)(param_1 + 0x18 + local_14 * 4) + 0x70))();
        break;
      case 5:
        (**(code **)(**(int **)(param_1 + 0x18 + local_14 * 4) + 0xb0))(4);
        break;
      case 6:
        (**(code **)(**(int **)(param_1 + 0x18 + local_14 * 4) + 0xb0))(2);
        break;
      case 7:
        (**(code **)(**(int **)(param_1 + 0x18 + local_14 * 4) + 0xb0))(5);
      }
      if (*(char *)(DAT_00790324 + 0x110 + *(int *)(param_1 + 4) * 0x118 + local_14) != -1) {
        piVar1 = *(int **)(param_1 + 0x28 + local_14 * 0x58);
        iVar3 = FUN_00419530(*(undefined4 *)(param_1 + 4),local_14);
        piVar2 = *(int **)(param_1 + local_14 * 0x58 + 0x24 + iVar3 * 4);
        iVar3 = (**(code **)(*piVar1 + 0x4c))();
        iVar4 = (**(code **)(*piVar2 + 0x4c))();
        iVar5 = FUN_005f5550();
        iVar6 = (**(code **)(*piVar1 + 0x4c))();
        iVar7 = (**(code **)(*piVar2 + 0x54))();
        iVar8 = (**(code **)(*piVar1 + 0x54))();
        iVar9 = FUN_005f5590();
        iVar10 = (**(code **)(*piVar2 + 0x54))();
        iVar11 = FUN_005f5550();
        iVar12 = FUN_005f5590();
        (**(code **)(**(int **)(param_1 + 0x18 + local_14 * 4) + 0x44))
                  ((iVar3 + ((iVar4 + iVar5) - iVar6) / 2) - iVar11 / 2,
                   (iVar7 + ((iVar8 + iVar9) - iVar10) / 2) - iVar12 / 2);
        (**(code **)(**(int **)(param_1 + 0x18 + local_14 * 4) + 0x74))();
      }
    }
  }
  return;
}

