// FUN_00434460  00434460

void __fastcall FUN_00434460(int param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined4 local_30;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069e7fe;
  local_10 = ExceptionList;
  uVar3 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  for (local_18 = 0; local_18 < 0x4c; local_18 = local_18 + 1) {
    pvVar4 = operator_new(0x114);
    local_8 = 0;
    if (pvVar4 == (void *)0x0) {
      local_30 = 0;
    }
    else {
      local_30 = FUN_0043bb00();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 4 + local_18 * 4) = local_30;
    FUN_005f53e0(*(undefined4 *)(&DAT_007134b0 + local_18 * 4));
  }
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    for (local_18 = 0; local_18 < 0x4c; local_18 = local_18 + 1) {
      uVar5 = FUN_0064c8a0(0,0);
      iVar1 = param_1 + 0x134 + local_14 * 0x260;
      *(int *)(iVar1 + local_18 * 8) = (int)uVar5;
      *(int *)(iVar1 + 4 + local_18 * 8) = (int)((ulonglong)uVar5 >> 0x20);
    }
  }
  *(undefined4 *)(param_1 + 0xae4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xae8) = 0xffffffff;
  cVar2 = FUN_004343d0(uVar3);
  FUN_00434c20((-(uint)(cVar2 != '\0') & 0xfffffffe) + 1);
  *(undefined4 *)(param_1 + 0xab8) = 1;
  *(undefined4 *)(param_1 + 0xac4) = 0;
  *(undefined4 *)(param_1 + 0xabc) = 0;
  *(undefined1 *)(param_1 + 0xad4) = 0;
  *(undefined1 *)(param_1 + 0xad5) = 0;
  *(undefined4 *)(param_1 + 0xaec) = 0;
  *(undefined4 *)(param_1 + 0xadc) = 0;
  *(undefined1 *)(param_1 + 0xac0) = 0;
  FUN_00434620();
  ExceptionList = local_10;
  return;
}

