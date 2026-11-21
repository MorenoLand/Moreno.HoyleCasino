// FUN_006298d0  006298d0

void __thiscall
FUN_006298d0(int *param_1,undefined4 param_2,undefined4 param_3,undefined3 param_4,int param_5,
            char param_6)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined4 uVar6;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ab5e4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(*param_1 + 0xb4))(param_2,DAT_00781870 ^ (uint)&stack0xfffffffc);
  FUN_005ecd00(param_3,0xffffffff,CONCAT13(extraout_var,CONCAT12(DAT_0075ee1e,DAT_0075ee1c)));
  FUN_005ee920(CONCAT13(extraout_var_00,param_4));
  (**(code **)(*param_1 + 0x6c))(param_5);
  (**(code **)(*param_1 + 0x74))();
  if ((param_6 != '\0') && (iVar1 = FUN_00629280(), 0 < iVar1)) {
    if (param_1[0x75] == 0) {
      pvVar2 = operator_new(0x184);
      local_8 = 0;
      if (pvVar2 == (void *)0x0) {
        local_20 = 0;
      }
      else {
        local_20 = FUN_005f5bf0();
      }
      local_8 = 0xffffffff;
      param_1[0x75] = local_20;
      *(int *)(param_1[0x75] + 4) = param_1[1];
    }
    uVar6 = 0xffffffff;
    param_5 = param_5 + -1;
    uVar3 = (**(code **)(*param_1 + 0x54))(param_5,0xffffffff);
    uVar4 = (**(code **)(*param_1 + 0x4c))(uVar3);
    uVar5 = FUN_00629280(uVar4);
    FUN_005eae80(uVar5,uVar4,uVar3,param_5,uVar6);
    uVar3 = FUN_006292a0();
    (**(code **)(*(int *)param_1[0x75] + 0xb0))(uVar3);
    (**(code **)(*(int *)param_1[0x75] + 0x74))();
    ExceptionList = local_10;
    return;
  }
  if (param_1[0x75] != 0) {
    (**(code **)(*(int *)param_1[0x75] + 0x70))();
  }
  ExceptionList = local_10;
  return;
}

