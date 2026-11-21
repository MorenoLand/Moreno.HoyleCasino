// FUN_005bc520  005bc520

void FUN_005bc520(int param_1,undefined4 param_2)

{
  undefined1 local_25;
  undefined1 *local_24;
  int local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a80b9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = param_1;
  local_1c = param_1;
  local_8 = 0;
  if (param_1 != 0) {
    local_24 = &local_25;
    FUN_005bbd80(0);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_005bc040(param_2);
  }
  ExceptionList = local_10;
  return;
}

