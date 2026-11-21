// FUN_005c13e0  005c13e0

void __fastcall FUN_005c13e0(int param_1)

{
  uint uVar1;
  void *pvVar2;
  int *local_3c;
  int local_28;
  int local_24 [4];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a8508;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24[0] = param_1 + 0x38;
  local_24[1] = param_1 + 0x3c;
  local_24[2] = param_1 + 0x40;
  local_24[3] = param_1 + 0x44;
  local_14 = param_1 + 0x48;
  for (local_28 = 0; local_28 < 5; local_28 = local_28 + 1) {
    pvVar2 = operator_new(0x1d4);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_3c = (int *)0x0;
    }
    else {
      local_3c = (int *)FUN_0060f380(uVar1);
    }
    local_8 = 0xffffffff;
    *(int **)local_24[local_28] = local_3c;
    FUN_0060f560(CONCAT22((short)((uint)(local_28 * 0x28) >> 0x10),
                          *(undefined2 *)(&DAT_00759d9c + local_28 * 0x28)),
                 *(undefined4 *)(&DAT_00759d84 + local_28 * 0x28),
                 *(undefined4 *)(&DAT_00759d94 + local_28 * 0x28),
                 *(undefined4 *)(&DAT_00759d98 + local_28 * 0x28),
                 *(undefined4 *)(&DAT_00759d90 + local_28 * 0x28),0xffffffff);
    FUN_0060fb30(0,0);
    (**(code **)(*local_3c + 0x74))();
    local_3c[0x5e] = 0xe;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x178) = 2;
  FUN_0060f870(&DAT_00759e40);
  ExceptionList = local_10;
  return;
}

