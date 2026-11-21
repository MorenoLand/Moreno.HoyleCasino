// FUN_0062ecf0  0062ecf0

void __fastcall FUN_0062ecf0(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006ab7f1;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = StringManagerBase::vftable;
  local_8 = 0;
  if (param_1[8] != 0) {
    FUN_005e9f20("!m_Start","..\\scilib\\platform\\StringManagerBase.cpp",0x23,uVar1);
  }
  if (param_1[9] != 0) {
    FUN_005e9f20("!m_ptr","..\\scilib\\platform\\StringManagerBase.cpp",0x24,uVar1);
  }
  operator_delete((void *)param_1[0xb]);
  param_1[0xb] = 0;
  for (local_14 = (undefined4 *)param_1[5]; local_14 != (undefined4 *)(param_1[5] + param_1[3] * 8);
      local_14 = local_14 + 2) {
    operator_delete((void *)*local_14);
    operator_delete((void *)local_14[1]);
  }
  local_8 = 0xffffffff;
  FUN_0062f990();
  ExceptionList = local_10;
  return;
}

