// FUN_005ac850  005ac850

void __fastcall FUN_005ac850(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 4) != 4) {
    for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
      (**(code **)(**(int **)(param_1 + 0x18 + local_8 * 4) + 0x70))();
    }
    for (local_c = 0; iVar3 = FUN_005b58f0(*(undefined4 *)(param_1 + 4)), local_c < iVar3;
        local_c = local_c + 1) {
      uVar4 = FUN_005b5010(*(undefined4 *)(param_1 + 4),local_c);
      switch(uVar4) {
      case 0:
        (**(code **)(**(int **)(param_1 + 0x18 + local_c * 4) + 0xb0))(1);
        break;
      case 1:
        (**(code **)(**(int **)(param_1 + 0x18 + local_c * 4) + 0xb0))(0);
        break;
      case 2:
        (**(code **)(**(int **)(param_1 + 0x18 + local_c * 4) + 0xb0))(3);
        break;
      default:
        (**(code **)(**(int **)(param_1 + 0x18 + local_c * 4) + 0x70))();
        break;
      case 5:
        (**(code **)(**(int **)(param_1 + 0x18 + local_c * 4) + 0xb0))(4);
        break;
      case 6:
        (**(code **)(**(int **)(param_1 + 0x18 + local_c * 4) + 0xb0))(2);
        break;
      case 7:
        (**(code **)(**(int **)(param_1 + 0x18 + local_c * 4) + 0xb0))(5);
      }
      iVar3 = FUN_005b5010(*(undefined4 *)(param_1 + 4),local_c);
      if (iVar3 != -1) {
        piVar1 = *(int **)(param_1 + 0x28 + local_c * 0x58);
        iVar3 = FUN_005b5830(*(undefined4 *)(param_1 + 4),local_c);
        piVar2 = *(int **)(param_1 + local_c * 0x58 + 0x24 + iVar3 * 4);
        iVar3 = (**(code **)(*piVar1 + 0x4c))();
        iVar5 = (**(code **)(*piVar2 + 0x4c))();
        iVar6 = FUN_005f5550();
        iVar7 = (**(code **)(*piVar1 + 0x4c))();
        iVar8 = (**(code **)(*piVar2 + 0x54))();
        iVar9 = (**(code **)(*piVar1 + 0x54))();
        iVar10 = FUN_005f5590();
        iVar11 = (**(code **)(*piVar2 + 0x54))();
        iVar12 = FUN_005f5550();
        iVar13 = FUN_005f5590();
        (**(code **)(**(int **)(param_1 + 0x18 + local_c * 4) + 0x44))
                  ((iVar3 + ((iVar5 + iVar6) - iVar7) / 2) - iVar12 / 2,
                   (iVar8 + ((iVar9 + iVar10) - iVar11) / 2) - iVar13 / 2);
        (**(code **)(**(int **)(param_1 + 0x18 + local_c * 4) + 0x74))();
      }
    }
  }
  return;
}

