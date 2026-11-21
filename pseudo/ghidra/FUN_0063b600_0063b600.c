// FUN_0063b600  0063b600

undefined4 * __fastcall FUN_0063b600(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006abb98;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005f71f0(1,0);
  local_8 = 0;
  *param_1 = SettingsDialog::vftable;
  FUN_005f83d0(0x30d4dd,0);
  *(undefined1 *)(param_1 + 0x6e) = 1;
  FUN_00636e70(uVar1);
  uVar2 = FUN_005f3bf0(param_1 + 0x73,0xffffffff);
  (**(code **)(*DAT_0162ee84 + 0x364))(uVar2);
  uVar1 = (**(code **)(*DAT_0162ee84 + 0x10c))();
  pvVar3 = operator_new(-(uint)((int)((ulonglong)uVar1 * 4 >> 0x20) != 0) |
                        (uint)((ulonglong)uVar1 * 4));
  param_1[0x6f] = pvVar3;
  param_1[0x70] = 0;
  local_14 = 0;
  while( true ) {
    iVar4 = (**(code **)(*DAT_0162ee84 + 0x10c))();
    if (iVar4 <= local_14) break;
    uVar2 = (**(code **)(*DAT_0162ee84 + 0x31c))();
    *(undefined4 *)(param_1[0x6f] + local_14 * 4) = uVar2;
    (**(code **)(*DAT_0162ee80 + 0x154))
              (*(undefined4 *)(param_1[0x6f] + local_14 * 4),
               *(undefined4 *)(DAT_0162ee84[0x16] + local_14 * 4));
    *(undefined4 *)(*(int *)(param_1[0x6f] + local_14 * 4) + 0x20) = 0;
    *(undefined4 *)(*(int *)(param_1[0x6f] + local_14 * 4) + 0xc) =
         *(undefined4 *)(*(int *)(DAT_0162ee84[0x16] + local_14 * 4) + 0xc);
    local_14 = local_14 + 1;
  }
  param_1[0x7a] = 0;
  param_1[0x72] = 0;
  ExceptionList = local_10;
  return param_1;
}

