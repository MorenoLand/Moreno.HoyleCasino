// FUN_005d66b0  005d66b0

void __fastcall FUN_005d66b0(int param_1)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a906b;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x49c) == 0) {
    pvVar2 = operator_new(0x18c);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_005d7580();
    }
    *(undefined4 *)(param_1 + 0x49c) = local_20;
  }
  local_8 = 0xffffffff;
  uVar6 = 0xffffffff;
  FUN_00646f80(0xffffffff,uVar1);
  iVar3 = FUN_005f53c0();
  FUN_005eae80(0x4e2,0,0,iVar3 + 100,uVar6);
  if (*(int *)(param_1 + 0x20) != 0) {
    piVar4 = (int *)FUN_00646f80();
    piVar5 = (int *)FUN_00646f80();
    uVar6 = (**(code **)(*piVar4 + 0x54))();
    uVar6 = (**(code **)(*piVar5 + 0x4c))(uVar6);
    (**(code **)(**(int **)(param_1 + 0x49c) + 0x44))(uVar6);
  }
  ExceptionList = local_10;
  return;
}

