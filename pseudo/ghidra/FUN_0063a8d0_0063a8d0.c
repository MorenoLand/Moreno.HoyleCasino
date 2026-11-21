// FUN_0063a8d0  0063a8d0

void __thiscall
FUN_0063a8d0(int param_1,int param_2,int param_3,undefined1 param_4,undefined1 param_5,
            undefined1 param_6)

{
  char cVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 local_50;
  undefined4 local_34;
  undefined1 local_30 [8];
  int local_28;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006abb34;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  local_34 = 0;
  if (param_3 == 0) {
    param_3 = DAT_0162ee84[5];
  }
  if (param_2 != -1) {
    puVar2 = (undefined4 *)FUN_0063aac0(DAT_00781870 ^ (uint)&stack0xfffffffc);
    *puVar2 = 1;
  }
  FUN_0063b490(param_2);
  if ((*(int *)(param_1 + 0x20) != 0) && (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0)) {
    (**(code **)**(undefined4 **)(param_1 + 0x20))(1);
  }
  pvVar3 = operator_new(0x60);
  local_8 = 0;
  if (pvVar3 == (void *)0x0) {
    local_50 = 0;
  }
  else {
    local_50 = FUN_006454f0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = local_50;
  FUN_00645820(param_1,param_3,param_4,param_5,param_6);
  cVar1 = (**(code **)(*DAT_0162ee84 + 0x33c))(0xffffffff);
  if (cVar1 != '\0') {
    uVar4 = FUN_005f3bf0(local_30,0xffffffff);
    (**(code **)(*DAT_0162ee84 + 0x364))(uVar4);
    if ((-1 < *(int *)(param_1 + 4)) && (*(int *)(param_1 + 4) < local_28)) {
      local_14 = (**(code **)(*DAT_0162ee80 + 0x1c4))(*(undefined4 *)(param_1 + 4));
      local_34 = (**(code **)(*DAT_0162ee80 + 0x1c8))(*(undefined4 *)(param_1 + 4));
    }
  }
  FUN_00646150(local_14,local_34);
  cVar1 = (**(code **)(*DAT_0162ee80 + 0xa4))();
  if ((cVar1 != '\0') && (local_14 != -1)) {
    FUN_006464d0(0,0);
  }
  ExceptionList = local_10;
  return;
}

