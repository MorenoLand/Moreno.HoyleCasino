// FUN_005c38f0  005c38f0

int __thiscall FUN_005c38f0(int param_1,int param_2)

{
  undefined1 local_19;
  undefined1 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a8677;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = &local_19;
  FUN_005bef20(0);
  local_8 = 0;
  if (param_2 != param_1) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    FUN_005c3a20(param_2);
  }
  ExceptionList = local_10;
  return param_1;
}

