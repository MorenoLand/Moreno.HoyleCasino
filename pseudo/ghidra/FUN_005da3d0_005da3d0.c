// FUN_005da3d0  005da3d0

void __fastcall FUN_005da3d0(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a91fb;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x68) == 0) {
    pvVar2 = operator_new(0x34);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_005c9a50(uVar1);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x68) = local_20;
    FUN_005c9c70();
  }
  ExceptionList = local_10;
  return;
}

