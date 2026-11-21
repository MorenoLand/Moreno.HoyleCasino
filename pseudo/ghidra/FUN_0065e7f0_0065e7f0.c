// FUN_0065e7f0  0065e7f0

void FUN_0065e7f0(undefined4 param_1,char *param_2,undefined **param_3,char param_4,char param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *local_28;
  undefined **local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac938;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = param_3;
  local_28 = operator_new(0x3c);
  local_8 = 0;
  if (local_28 == (undefined4 *)0x0) {
    local_28 = (undefined4 *)0x0;
  }
  else {
    FUN_00629ab0(uVar2);
    *local_28 = LoginListBoxItem::vftable;
  }
  local_8 = 0xffffffff;
  uVar6 = 0;
  uVar5 = 0xffffffff;
  puVar4 = local_28;
  FUN_005fb720(0);
  FUN_00628980(puVar4,param_1,uVar5,uVar6);
  if (param_4 != '\x02') {
    cVar1 = FUN_00663bb0(param_3);
    if (cVar1 == '\0') {
      param_4 = '\x02';
      param_5 = '\0';
      local_14 = &PTR_006b27f8;
    }
  }
  strcpy((char *)(local_28 + 5),param_2);
  strcpy((char *)((int)local_28 + 0x21),(char *)local_14);
  *(char *)((int)local_28 + 0x3a) = param_4;
  *(char *)((int)local_28 + 0x3b) = param_5;
  iVar3 = (**(code **)(*DAT_0162ee84 + 500))();
  if (iVar3 <= param_5) {
    DAT_00795fbe = 1;
  }
  ExceptionList = local_10;
  return;
}

