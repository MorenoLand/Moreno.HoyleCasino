// FUN_0059c780  0059c780

void __fastcall FUN_0059c780(int param_1)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a753c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0059c2d0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if (*(int *)(param_1 + 0x50) == 0) {
    pvVar2 = operator_new(0x1bc);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_0059cb50();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x50) = local_20;
    (**(code **)(**(int **)(param_1 + 0x50) + 0x3c))();
    FUN_005f7340(0,0xaa);
  }
  FUN_005f85d0();
  FUN_005f2b20(0x315103,1);
  FUN_005f2b20(0x315104,1);
  FUN_005f2b20(0x315105,1);
  iVar3 = FUN_005a2020(2);
  cVar1 = FUN_004639c0(DAT_007935d0 + 200 + iVar3 * 6);
  if (cVar1 == '\0') {
    FUN_005f2ba0(0x315105);
    piVar4 = (int *)FUN_005fb300(2);
    (**(code **)(*piVar4 + 0xd0))();
  }
  ExceptionList = local_10;
  return;
}

