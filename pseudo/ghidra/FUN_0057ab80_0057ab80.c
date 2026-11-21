// FUN_0057ab80  0057ab80

void __thiscall FUN_0057ab80(int param_1,uint param_2,undefined4 *param_3)

{
  void *pvVar1;
  CMFCToolBarEditCtrl *this;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int local_30;
  undefined4 local_2c;
  CMFCToolBarEditBoxButton *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a6724;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0057ae30(DAT_00781870 ^ (uint)&stack0xfffffffc);
  *(undefined4 *)(param_1 + 0x1c0) = *param_3;
  *(undefined1 *)(param_1 + 0x1c4) = *(undefined1 *)(param_3 + 1);
  strcpy((char *)(param_1 + 0x1c5),(char *)((int)param_3 + 5));
  pvVar1 = operator_new(-(uint)((int)((ulonglong)param_2 * 0x224 >> 0x20) != 0) |
                        (uint)((ulonglong)param_2 * 0x224));
  *(void **)(param_1 + 0x19d0) = pvVar1;
  *(uint *)(param_1 + 0x19d4) = param_2;
  pvVar1 = operator_new(-(uint)((int)((ulonglong)param_2 * 4 >> 0x20) != 0) |
                        (uint)((ulonglong)param_2 * 4));
  *(void **)(param_1 + 0x19d8) = pvVar1;
  *(uint *)(param_1 + 0x19dc) = param_2;
  for (local_14 = (CMFCToolBarEditBoxButton *)0x0; (int)local_14 < (int)param_2;
      local_14 = local_14 + 1) {
    puVar4 = param_3 + (int)local_14 * 0x86 + 0x42;
    puVar5 = (undefined4 *)(*(int *)(param_1 + 0x19d0) + (int)local_14 * 0x224);
    for (iVar3 = 0x86; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    *(undefined1 *)(*(int *)(param_1 + 0x19d0) + 0x218 + (int)local_14 * 0x224) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x19d0) + 0x219 + (int)local_14 * 0x224) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x19d0) + 0x21c + (int)local_14 * 0x224) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x19d0) + 0x220 + (int)local_14 * 0x224) = 0;
    this = operator_new(0x1d8);
    local_8 = 0;
    if (this == (CMFCToolBarEditCtrl *)0x0) {
      local_2c = 0;
    }
    else {
      local_2c = CMFCToolBarEditCtrl::CMFCToolBarEditCtrl(this,local_14);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(*(int *)(param_1 + 0x19d8) + (int)local_14 * 4) = local_2c;
    *(int *)(*(int *)(*(int *)(param_1 + 0x19d8) + (int)local_14 * 4) + 4) = param_1;
    if ((int)local_14 < 2) {
      local_30 = (int)local_14 * 0xf;
    }
    else {
      local_30 = (int)(local_14 + -1) * 0xf + 0x3c;
    }
    uVar9 = 0xffffffff;
    uVar8 = 0x11;
    uVar7 = 0x1f5;
    local_30 = local_30 + 0x44;
    iVar3 = ((1 < (int)local_14) - 1 & 0xfffffff6) + 0x19;
    uVar6 = 0xf;
    iVar2 = FUN_005f8550(0xf,iVar3,local_30,0x1f5,0x11,0xffffffff);
    FUN_005ec8f0(&PTR_006b27f8,((1 < (int)local_14) - 1 & 0xffffffc8) + 0x67,
                 iVar2 - (((1 < (int)local_14) - 1 & 0xfffffff6) + 0x23),uVar6,iVar3,local_30,uVar7,
                 uVar8,uVar9);
  }
  FUN_0057b050();
  ExceptionList = local_10;
  return;
}

