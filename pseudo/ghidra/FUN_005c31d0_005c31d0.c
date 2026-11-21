// FUN_005c31d0  005c31d0

int * FUN_005c31d0(int param_1,undefined4 param_2)

{
  uint uVar1;
  void *pvVar2;
  int *local_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a8651;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005c3140(param_1,param_2,&local_20);
  pvVar2 = operator_new(400);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_30 = (int *)0x0;
  }
  else {
    local_30 = (int *)FUN_005f5f50(uVar1);
  }
  local_8 = 0xffffffff;
  local_14 = local_30;
  FUN_005eae80(local_20,0,0,0x16,param_1 + 0x3158dc);
  FUN_005eb000(local_1c);
  (**(code **)(*local_14 + 0xb0))(local_18);
  (**(code **)(*local_14 + 0x74))();
  ExceptionList = local_10;
  return local_14;
}

