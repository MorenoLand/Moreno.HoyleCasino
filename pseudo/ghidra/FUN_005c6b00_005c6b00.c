// FUN_005c6b00  005c6b00

void FUN_005c6b00(int param_1,int param_2,undefined4 param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_006a87e1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; local_8 = 0, param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != 0) {
      FUN_005c38f0(param_3);
    }
    param_1 = param_1 + 0x34;
  }
  FUN_005c6bdb();
  return;
}

