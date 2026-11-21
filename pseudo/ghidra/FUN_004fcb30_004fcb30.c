// FUN_004fcb30  004fcb30

void __thiscall FUN_004fcb30(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined4 local_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a27ff;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined1 *)(DAT_00791364 + 0x408) = 1;
  if (param_2 == 3) {
    uVar2 = FUN_00479860(uVar1);
    FUN_00480580(uVar2);
    FUN_0047ffe0();
  }
  if (*(int *)(param_1 + 0x88) == 0) {
    pvVar3 = operator_new(0x1e4);
    local_8 = 0;
    if (pvVar3 == (void *)0x0) {
      local_28 = 0;
    }
    else {
      local_28 = FUN_0051a6b0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x88) = local_28;
    FUN_0051a7d0(param_2);
    FUN_0051a7f0(*(undefined4 *)(DAT_00791364 + 0xf4),*(undefined4 *)(DAT_00791364 + 0xf8));
    (**(code **)(**(int **)(param_1 + 0x88) + 0x3c))();
    FUN_005f7340(0,0);
  }
  FUN_005f85d0();
  ExceptionList = local_10;
  return;
}

