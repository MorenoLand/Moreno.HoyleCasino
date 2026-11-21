// FUN_00680da0  00680da0

undefined4 FUN_00680da0(void)

{
  uint uVar1;
  void *pvVar2;
  char *_Source;
  int *local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006add9b;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pvVar2 = operator_new(0x28);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_1c = (int *)0x0;
  }
  else {
    local_1c = (int *)FUN_00689750(uVar1);
  }
  local_8 = 0xffffffff;
  DAT_007960d8 = local_1c;
  FUN_00666490();
  (**(code **)(*DAT_007960d8 + 4))();
  DAT_0163184c = 1;
  FUN_006664b0();
  DAT_0162ee84 = (int *)FUN_005dca80();
  FUN_006664c0();
  _Source = (char *)(**(code **)(*DAT_0162ee84 + 0x128))();
  strcpy(&DAT_0079542c,_Source);
  (**(code **)(*DAT_007960d8 + 8))();
  ExceptionList = local_10;
  return 1;
}

