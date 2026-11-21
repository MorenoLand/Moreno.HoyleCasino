// FUN_0057ea10  0057ea10

undefined4 * __thiscall FUN_0057ea10(undefined4 *param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a691e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005fc0d0(0);
  local_8 = 0;
  *param_1 = KenoDrawing::vftable;
  param_1[3] = param_2;
  FUN_005fc4c0(0);
  param_1[8] = param_1[3];
  param_1[9] = 0;
  ExceptionList = local_10;
  return param_1;
}

