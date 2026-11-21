// FUN_005552b0  005552b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005552b0(int *param_1,int *param_2)

{
  char cVar1;
  void *pvVar2;
  undefined4 local_24;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a5630;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(*param_1 + 0x18))(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_14 = 0;
  while( true ) {
    if (4 < local_14) {
      (**(code **)(*param_2 + 8))(3,0);
      ExceptionList = local_10;
      return;
    }
    cVar1 = FUN_005f54c0();
    if (cVar1 != '\0') break;
    local_14 = local_14 + 1;
  }
  if (DAT_00793418 == 0) {
    (**(code **)(*DAT_0162ee84 + 0x80))(0x186a3,0,0,10,1,0x3f800000,_DAT_006b3654,param_1 + 0x25);
  }
  else {
    (**(code **)(*DAT_0162ee84 + 0x80))(0x186a3,0,0,10,1,0x3f800000,_DAT_006b3654,param_1 + 0x26);
  }
  DAT_00793418 = 1 - DAT_00793418;
  param_1[0xb] = local_14;
  (**(code **)(*(int *)param_1[local_14 + 6] + 0xb0))(0);
  (**(code **)(*(int *)param_1[local_14 + 6] + 0x74))();
  pvVar2 = operator_new(0x20);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_24 = 0;
  }
  else {
    local_24 = FID_conflict_evaluation_error(param_2);
  }
  local_8 = 0xffffffff;
  FUN_005f5d50(local_24);
  ExceptionList = local_10;
  return;
}

