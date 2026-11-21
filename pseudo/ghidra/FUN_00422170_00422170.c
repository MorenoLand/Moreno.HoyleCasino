// FUN_00422170  00422170

void FUN_00422170(int param_1)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 local_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069e23b;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  cVar1 = FUN_00426c80(*(undefined4 *)(DAT_00790358 + 0xa0),
                       CONCAT31((int3)((uint)DAT_00790358 >> 8),param_1 == 0));
  if (cVar1 == '\0') {
    FUN_0041fc50(uVar2);
    pvVar3 = operator_new(0x24);
    local_8 = 0;
    if (pvVar3 == (void *)0x0) {
      local_28 = 0;
    }
    else {
      local_28 = CPrintDialog(param_1);
    }
    local_8 = 0xffffffff;
    FUN_005fc420(local_28);
  }
  ExceptionList = local_10;
  return;
}

