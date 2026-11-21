// FUN_005c6c50  005c6c50

void FUN_005c6c50(int param_1,int param_2,int param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_006a8811;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; local_8 = 0, param_1 != param_2; param_1 = param_1 + 0x34) {
    local_8 = 1;
    if (param_3 != 0) {
      FUN_005c38f0(param_1);
    }
    param_3 = param_3 + 0x34;
  }
  FUN_005c6d2d();
  return;
}

