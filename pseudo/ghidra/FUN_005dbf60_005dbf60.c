// FUN_005dbf60  005dbf60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005dbf60(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int local_28;
  undefined1 local_18 [8];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a93a7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar7 = local_18;
  uVar1 = FUN_005dac90(puVar7,DAT_00781870 ^ (uint)&stack0xfffffffc);
  FUN_005dcb00(uVar1);
  puVar2 = (undefined4 *)FUN_005d5a90(puVar7);
  uVar1 = puVar2[1];
  uVar6 = *puVar2;
  uVar5 = 5;
  uVar3 = FUN_005dac90(5,uVar6,uVar1);
  FUN_005e7e40(uVar3,uVar5,uVar6,uVar1);
  (**(code **)(*DAT_0162ee84 + 0x80))(0x18a9b,0,0,5,1,0x3f800000,_DAT_006b3654,0);
  if (DAT_007947c4 == 0) {
    pvVar4 = operator_new(0x1c0);
    local_8 = 0;
    if (pvVar4 == (void *)0x0) {
      local_28 = 0;
    }
    else {
      local_28 = FUN_005cecc0();
    }
    local_8 = 0xffffffff;
    DAT_007947c4 = local_28;
    uVar1 = (**(code **)(*param_1 + 0x2f4))();
    FUN_005cee20(param_2,param_3,uVar1);
    FUN_005f7340(0,0);
  }
  FUN_005cef60();
  ExceptionList = local_10;
  return;
}

