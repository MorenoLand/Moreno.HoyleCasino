// FUN_006033f0  006033f0

undefined4 * __thiscall FUN_006033f0(undefined4 *param_1,char *param_2)

{
  size_t sVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aa95e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0062aea0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = ResourceManager::vftable;
  FUN_0062a870();
  local_8._0_1_ = 1;
  FUN_0062a870();
  local_8 = CONCAT31(local_8._1_3_,2);
  if (param_2 == (char *)0x0) {
    param_1[0x12] = 0;
    FUN_00603670();
  }
  else {
    sVar1 = strlen(param_2);
    pvVar2 = operator_new(sVar1 + 1);
    param_1[0x12] = pvVar2;
    strcpy((char *)param_1[0x12],param_2);
    FUN_00604500(param_2);
  }
  FUN_0062aa20(param_1);
  ExceptionList = local_10;
  return param_1;
}

