// FUN_005fcad0  005fcad0

void __thiscall FUN_005fcad0(int *param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  scheduler_resource_allocation_error *this;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aa614;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00602020(param_2);
  iVar3 = FUN_005f5400(uVar2);
  if (iVar3 != -2) {
    cVar1 = (**(code **)(*param_1 + 0x84))(param_2);
    if (cVar1 == '\0') {
      cVar1 = FUN_005f2920(param_1[0x7b]);
      if ((cVar1 != '\0') && (cVar1 = FUN_005fcc50(param_2), cVar1 != '\0')) {
        (**(code **)(*param_1 + 0xd8))(3);
      }
      FUN_005f5df0(0);
    }
    else {
      FUN_005ff0a0();
      if ((((param_1[0x7b] != -1) && (cVar1 = FUN_006026d0(), cVar1 != '\0')) &&
          (cVar1 = FUN_005f2920(param_1[0x7b]), cVar1 == '\0')) && (param_1[0x5f] == 0)) {
        this = operator_new(0x24);
        local_8 = 0;
        if (this == (scheduler_resource_allocation_error *)0x0) {
          local_20 = 0;
        }
        else {
          local_20 = Concurrency::scheduler_resource_allocation_error::
                     scheduler_resource_allocation_error(this,(char *)param_1,0);
        }
        local_8 = 0xffffffff;
        FUN_005f5df0(local_20);
      }
      if (param_1[0x7b] == -1) {
        FUN_005feff0();
      }
    }
  }
  ExceptionList = local_10;
  return;
}

