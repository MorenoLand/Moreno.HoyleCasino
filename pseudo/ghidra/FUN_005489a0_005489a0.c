// FUN_005489a0  005489a0

void __fastcall FUN_005489a0(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a52be;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x10) == 0) {
    pvVar2 = operator_new(0x810);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_00642e10();
    }
    *(undefined4 *)(param_1 + 0x10) = local_20;
  }
  local_8 = 0xffffffff;
  FUN_00642e70(0);
  FUN_00548960(uVar1);
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_00548ab0();
  FUN_00548b20();
  *(undefined1 *)(param_1 + 0x1d) = 1;
  FUN_005f2ba0(0x1391);
  FUN_0057ab80(5,&DAT_0073bf80);
  ExceptionList = local_10;
  return;
}

