// FUN_0063b7e0  0063b7e0

void __fastcall FUN_0063b7e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006abbbb;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = SettingsDialog::vftable;
  local_8 = 0;
  for (local_14 = 0; iVar3 = (**(code **)(*DAT_0162ee84 + 0x10c))(uVar2), local_14 < iVar3;
      local_14 = local_14 + 1) {
    FUN_0063a2a0();
    puVar1 = *(undefined4 **)(param_1[0x6f] + local_14 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  if ((undefined4 *)param_1[0x7a] == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*(code *)**(undefined4 **)param_1[0x7a])(1);
  }
  if (param_1[0x6f] != 0) {
    operator_delete((void *)param_1[0x6f]);
  }
  if (param_1[0x70] != 0) {
    operator_delete((void *)param_1[0x70]);
  }
  local_8 = 0xffffffff;
  FUN_005f7260(uVar2,uVar4);
  ExceptionList = local_10;
  return;
}

