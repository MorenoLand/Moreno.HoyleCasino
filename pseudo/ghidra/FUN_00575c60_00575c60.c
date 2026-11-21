// FUN_00575c60  00575c60

void __thiscall FUN_00575c60(int param_1,int param_2)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a638f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = FUN_00637630(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if ((cVar1 != '\0') && (0 < param_2)) {
    (**(code **)(**(int **)(param_1 + 0x34) + 0x74))();
    pvVar2 = operator_new(0x1c);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_00578180();
    }
    local_8 = 0xffffffff;
    FUN_005f5d50(local_20);
  }
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + param_2;
  if (999999999 < *(uint *)(param_1 + 0x70)) {
    uVar3 = FUN_00630f40("SID_THREEWISHES",0);
    uVar3 = FUN_00630f40("SID_THREEWISHES_MAXCREDITS",uVar3);
    FUN_0062ff10(uVar3);
    FUN_00576600();
  }
  FUN_005777d0(*(undefined4 *)(param_1 + 0x70));
  ExceptionList = local_10;
  return;
}

