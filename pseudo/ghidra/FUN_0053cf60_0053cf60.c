// FUN_0053cf60  0053cf60

void FUN_0053cf60(int param_1)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 local_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a4caf;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  cVar1 = FUN_00541540(*(undefined4 *)(DAT_007933ec + 0xe8),
                       CONCAT31((int3)((uint)DAT_007933ec >> 8),param_1 == 0));
  if (cVar1 == '\0') {
    FUN_0053ba60(uVar2);
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

