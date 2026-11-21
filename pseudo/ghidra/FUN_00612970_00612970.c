// FUN_00612970  00612970

void FUN_00612970(int param_1,int param_2,undefined4 param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_006aaff1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; local_8 = 0, param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != 0) {
      FUN_00610570(param_3);
    }
    param_1 = param_1 + 0x48;
  }
  FUN_00612a54();
  return;
}

