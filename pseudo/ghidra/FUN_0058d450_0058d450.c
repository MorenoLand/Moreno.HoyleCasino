// FUN_0058d450  0058d450

void __fastcall FUN_0058d450(int param_1)

{
  int iVar1;
  void *pvVar2;
  undefined1 extraout_var;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a6f59;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_0058a470(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if (((iVar1 != 0x14) || (**(char **)(*(int *)(DAT_00793584 + 0x3b68) + 4) == '\x04')) &&
     (FUN_00600160(), *(int *)(param_1 + 0x208) == 0)) {
    pvVar2 = operator_new(0x1d0);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_005ec5a0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x208) = local_20;
    *(undefined4 *)(*(int *)(param_1 + 0x208) + 4) = *(undefined4 *)(param_1 + 4);
    (**(code **)(**(int **)(param_1 + 0x208) + 0xb4))(&DAT_006cc040);
    FUN_005ecd00(0x2b,0xffffffff,CONCAT13(extraout_var,CONCAT12(DAT_0075ee1e,DAT_0075ee1c)));
    (**(code **)(**(int **)(param_1 + 0x208) + 0x40))();
    iVar1 = FUN_005eb4b0();
    iVar1 = FUN_005eb470(iVar1 + -6);
    (**(code **)(**(int **)(param_1 + 0x208) + 0x44))(iVar1 + -3);
    FUN_005ecc60(0x1e);
    FUN_005eccb0(0x32);
    FUN_005ef310(0x30);
    (**(code **)(**(int **)(param_1 + 0x208) + 0x6c))(1);
    (**(code **)(**(int **)(param_1 + 0x208) + 0x74))();
  }
  ExceptionList = local_10;
  return;
}

