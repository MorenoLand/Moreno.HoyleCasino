// FUN_00610350  00610350

void FUN_00610350(int param_1,undefined4 param_2,undefined4 param_3)

{
  void *pvVar1;
  int local_24;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aaeeb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 4) != 0) {
    local_14 = __RTDynamicCast(param_3,0,&sciFeature::RTTI_Type_Descriptor,
                               &sciView::RTTI_Type_Descriptor,0,
                               DAT_00781870 ^ (uint)&stack0xfffffffc);
    if (local_14 == 0) {
      pvVar1 = operator_new(0x178);
      local_8 = 0;
      if (pvVar1 == (void *)0x0) {
        local_24 = 0;
      }
      else {
        local_24 = FUN_005eaaf0();
      }
      local_8 = 0xffffffff;
      local_14 = local_24;
    }
    FUN_005f9ce0(local_14,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                 *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
                 *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x14),0xff,0);
    FUN_005eb000(*(undefined4 *)(param_1 + 0x10));
  }
  ExceptionList = local_10;
  return;
}

