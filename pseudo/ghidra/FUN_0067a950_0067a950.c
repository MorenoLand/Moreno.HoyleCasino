// FUN_0067a950  0067a950

void __fastcall FUN_0067a950(int param_1)

{
  void *pvVar1;
  undefined4 local_30;
  undefined4 local_2c;
  int local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_006ad888;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006044b0(0x20564157,0x1f4e,0);
  FUN_006044b0(0x20564157,0x1f4f,0);
  FUN_006044b0(0x20564157,0x1f50,0);
  FUN_006044b0(0x20564157,0x1f51,0);
  FUN_006044b0(0x20564157,0x1f52,0);
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    FUN_006044b0(0x20584554,local_14 + 0x249f22,0);
    FUN_006044b0(0x20584554,local_14 + 0x249f69,0);
  }
  FUN_006044b0(0x20584554,0x249f2a,0);
  FUN_006044b0(0x20584554,0x249f2b,0);
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    if (*(int *)(param_1 + 0x20c + local_14 * 4) == 0) {
      pvVar1 = operator_new(400);
      local_8 = 0;
      if (pvVar1 == (void *)0x0) {
        local_2c = 0;
      }
      else {
        local_2c = FUN_005f5f50();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x20c + local_14 * 4) = local_2c;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x20c + local_14 * 4) + 4) = *(undefined4 *)(param_1 + 4);
    FUN_005eaf00(local_14 + 0x249f22);
    (**(code **)(**(int **)(param_1 + 0x20c + local_14 * 4) + 0x40))();
    FUN_005eae80(local_14 + 0x249f22,0,0,60000,0);
    if (*(int *)(param_1 + 0x21c + local_14 * 4) == 0) {
      pvVar1 = operator_new(400);
      local_8 = 1;
      if (pvVar1 == (void *)0x0) {
        local_30 = 0;
      }
      else {
        local_30 = FUN_005f5f50();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x21c + local_14 * 4) = local_30;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x21c + local_14 * 4) + 4) = *(undefined4 *)(param_1 + 4);
    FUN_005eaf00(local_14 + 0x249f26);
    (**(code **)(**(int **)(param_1 + 0x21c + local_14 * 4) + 0x40))();
    FUN_005eae80(local_14 + 0x249f26,0,0,0xea61,0);
  }
  ExceptionList = local_10;
  return;
}

