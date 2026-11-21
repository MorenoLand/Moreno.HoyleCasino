// FUN_0058d840  0058d840

void __thiscall FUN_0058d840(int param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined1 extraout_var;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a6fa2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x88) == 0) {
    pvVar1 = operator_new(0x1d0);
    local_8 = 0;
    if (pvVar1 == (void *)0x0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_005ec5a0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x88) = local_20;
    *(undefined4 *)(*(int *)(param_1 + 0x88) + 4) = *(undefined4 *)(param_1 + 4);
    (**(code **)(**(int **)(param_1 + 0x88) + 0xb4))(&PTR_006b27f8);
    FUN_005ecd00((*(int *)(param_1 + 0x84) == 0) * '\x02' + '+',0xffffffff,
                 CONCAT13(extraout_var,CONCAT12(DAT_0075ee1e,DAT_0075ee1c)));
    (**(code **)(**(int **)(param_1 + 0x88) + 0x40))();
    (**(code **)(**(int **)(param_1 + 0x88) + 0x44))
              ((-(*(int *)(param_1 + 0x84) != 0) & 0x70U) + 0x3a,0x2d);
    (**(code **)(**(int **)(param_1 + 0x88) + 0x6c))(2);
  }
  FUN_005ee710(param_2);
  ExceptionList = local_10;
  return;
}

