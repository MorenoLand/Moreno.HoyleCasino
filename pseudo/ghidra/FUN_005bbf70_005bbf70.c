// FUN_005bbf70  005bbf70

void FUN_005bbf70(int param_1,int param_2,undefined4 param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a8080;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_005bc520(param_1,param_3);
    param_1 = param_1 + 0x10;
  }
  FUN_005bc020();
  return;
}

