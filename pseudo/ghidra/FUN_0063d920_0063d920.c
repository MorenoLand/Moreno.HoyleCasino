// FUN_0063d920  0063d920

void __thiscall FUN_0063d920(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *local_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006abc5c;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x1c4) = param_2;
  if (DAT_01630690 == (int *)0x0) {
    pvVar3 = operator_new(0x1ec);
    local_8 = 0;
    if (pvVar3 == (void *)0x0) {
      local_30 = (int *)0x0;
    }
    else {
      puVar4 = (uint *)FUN_0063aac0();
      uVar1 = *puVar4;
      uVar5 = FUN_0057a470();
      uVar6 = FUN_004842b0(uVar5);
      local_30 = (int *)FUN_00640d00(*(undefined4 *)(param_1 + 0x1c4),uVar1 & 0xff,uVar6,uVar5);
    }
    local_8 = 0xffffffff;
    DAT_01630690 = local_30;
    (**(code **)(*local_30 + 0x3c))();
    FUN_005f7340(0,0);
  }
  FUN_0065c4d0(uVar2);
  ExceptionList = local_10;
  return;
}

