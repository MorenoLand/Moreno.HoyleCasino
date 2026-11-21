// FUN_00650400  00650400

void __thiscall FUN_00650400(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined4 local_24;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac2b3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0xffffffff;
  FUN_005f2870(DAT_00781870 ^ (uint)&stack0xfffffffc);
  cVar1 = FUN_00637630();
  if (((cVar1 == '\0') || (DAT_00795f94 != '\0')) || (DAT_00795f95 != '\0')) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 0x1c))(0);
    }
  }
  else {
    cVar1 = FUN_00637670();
    if ((cVar1 != '\0') && (iVar2 = FUN_0060a950(), iVar2 != 0)) {
      local_14 = FUN_005f4760();
      FUN_005f4780(local_14);
    }
    if (*(int *)(param_1 + 0x30) == 0) {
      pvVar3 = operator_new(0x2b0);
      local_8 = 0;
      if (pvVar3 == (void *)0x0) {
        local_24 = 0;
      }
      else {
        local_24 = FUN_00678900();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x30) = local_24;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x2a4) = local_14;
    FUN_006795f0(param_2,param_3,param_4);
  }
  ExceptionList = local_10;
  return;
}

