// FUN_005e9aa0  005e9aa0

void FUN_005e9aa0(void)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_24;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a9b20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
    pvVar1 = operator_new(0x1e8);
    local_8 = 0;
    if (pvVar1 == (void *)0x0) {
      local_24 = 0;
    }
    else {
      local_24 = FUN_00603120(0,*(undefined4 *)(&DAT_0075ede0 + local_14 * 4),0);
    }
    local_8 = 0xffffffff;
    FUN_005f9de0(local_24,local_14 + 100,*(undefined4 *)(&DAT_0075edd8 + local_14 * 4),0,0,1,
                 &PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0);
    uVar5 = 1;
    uVar4 = 0;
    uVar3 = 1;
    uVar2 = 0;
    FUN_005fb300(local_14 + 100);
    FUN_006023d0(uVar2,uVar3,uVar4,uVar5);
    uVar2 = 1;
    FUN_005fb300(local_14 + 100);
    FUN_005eb700(uVar2);
  }
  ExceptionList = local_10;
  return;
}

