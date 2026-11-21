// FUN_005deab0  005deab0

int __thiscall FUN_005deab0(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  void *pvVar4;
  int local_34;
  int local_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a95c3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  DAT_007947e4 = 0;
  iVar1 = (**(code **)(*param_1 + 0xe4))(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if (param_2 < iVar1) {
    piVar2 = (int *)(**(code **)(*param_1 + 0xe0))(param_2);
    uVar3 = (**(code **)(*piVar2 + 4))
                      (0,&Room::RTTI_Type_Descriptor,&CasinoRoom::RTTI_Type_Descriptor,0);
    DAT_007947e4 = __RTDynamicCast(uVar3);
  }
  if (param_2 == 3200000) {
    pvVar4 = operator_new(0x98);
    local_8 = 0;
    if (pvVar4 == (void *)0x0) {
      local_30 = 0;
    }
    else {
      local_30 = FUN_00661470();
    }
    local_8 = 0xffffffff;
    DAT_007947e4 = local_30;
  }
  else if (param_2 == 0x30d401) {
    pvVar4 = operator_new(0xac);
    local_8 = 1;
    if (pvVar4 == (void *)0x0) {
      local_34 = 0;
    }
    else {
      local_34 = FUN_0051f260();
    }
    local_8 = 0xffffffff;
    DAT_007947e4 = local_34;
  }
  iVar1 = DAT_007947e4;
  if (DAT_007947e4 == 0) {
    iVar1 = FUN_00632890(param_2);
  }
  ExceptionList = local_10;
  return iVar1;
}

