// FUN_0041f9c0  0041f9c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0041f9c0(int param_1,int param_2)

{
  void *pvVar1;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069dfbd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(**(int **)(param_1 + 0x54 + param_2 * 4) + 0xb0))
            (0,DAT_00781870 ^ (uint)&stack0xfffffffc);
  (**(code **)(**(int **)(param_1 + 0x54 + param_2 * 4) + 0x74))();
  pvVar1 = operator_new(0x20);
  local_8 = 0;
  if (pvVar1 == (void *)0x0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_00600f30(3,0);
  }
  local_8 = 0xffffffff;
  FUN_005f5d50(local_20);
  (**(code **)(*DAT_0162ee84 + 0x80))(0x3106c8,0,0,5,1,0x3f800000,_DAT_006b3654,0);
  ExceptionList = local_10;
  return;
}

