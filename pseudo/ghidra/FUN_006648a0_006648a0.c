// FUN_006648a0  006648a0

void __thiscall FUN_006648a0(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  void *pvVar8;
  undefined4 local_34;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006acbf9;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar3 = FUN_006647c0(param_2);
  iVar4 = FUN_00664830(param_2);
  iVar5 = FUN_006651e0(param_2);
  for (local_14 = 0; local_14 < iVar3; local_14 = local_14 + 1) {
    if (iVar5 == 0) {
      (**(code **)(**(int **)(param_1 + 0x5c + (iVar4 + local_14) * 4) + 0x70))();
      FUN_005eaf00(0);
      FUN_005f5d50(0);
    }
    else {
      if ((local_14 == 1) && (((param_2 == 0 || (param_2 == 5)) || (param_2 == 2)))) {
        if ((param_2 == 0) || (param_2 == 2)) {
          FUN_005eaf00(iVar5);
          (**(code **)(**(int **)(param_1 + 0x5c + (iVar4 + 1) * 4) + 0xb0))(4);
        }
        else if (param_2 == 5) {
          FUN_005eaf00(iVar5);
          (**(code **)(**(int **)(param_1 + 0x5c + (iVar4 + 1) * 4) + 0xb0))(1);
        }
      }
      else {
        uVar6 = (**(code **)(*DAT_0162ee84 + 800))(iVar5,local_14,iVar3,uVar2);
        FUN_005eaf00(uVar6);
        if ((param_2 == 0) || (param_2 == 2)) {
          cVar1 = FUN_00664cb0();
          (**(code **)(**(int **)(param_1 + 0x5c + iVar4 * 4) + 0xb0))((int)cVar1);
        }
      }
      iVar7 = FUN_00664830(0xb);
      if (iVar4 + local_14 == iVar7) {
        iVar7 = FUN_005eb240();
        if (iVar7 == 0) {
          *(undefined4 *)(*(int *)(param_1 + 0x5c + (iVar4 + local_14) * 4) + 0x178) = 4;
          FUN_005f5d50(0);
        }
        else if (*(int *)(*(int *)(param_1 + 0x5c + (iVar4 + local_14) * 4) + 0x180) == 0) {
          *(undefined4 *)(*(int *)(param_1 + 0x5c + (iVar4 + local_14) * 4) + 0x178) = 10;
          pvVar8 = operator_new(0x1c);
          local_8 = 0;
          if (pvVar8 == (void *)0x0) {
            local_34 = 0;
          }
          else {
            local_34 = FUN_00600a70(0);
          }
          local_8 = 0xffffffff;
          FUN_005f5d50(local_34);
        }
      }
    }
  }
  FUN_00665040(param_2);
  for (local_14 = 0; local_14 < iVar3; local_14 = local_14 + 1) {
    if (0 < iVar5) {
      cVar1 = FUN_00664d20(param_2);
      iVar7 = (int)cVar1 + *(int *)(param_1 + 8);
      cVar1 = FUN_00664d00(param_2);
      (**(code **)(**(int **)(param_1 + 0x5c + (iVar4 + local_14) * 4) + 0x44))
                ((int)cVar1 + *(int *)(param_1 + 4),iVar7);
      (**(code **)(**(int **)(param_1 + 0x5c + (iVar4 + local_14) * 4) + 0x74))();
    }
  }
  ExceptionList = local_10;
  return;
}

