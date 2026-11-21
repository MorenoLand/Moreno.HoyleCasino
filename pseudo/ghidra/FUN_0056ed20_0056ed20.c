// FUN_0056ed20  0056ed20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0056ed20(int param_1)

{
  char cVar1;
  void *pvVar2;
  undefined4 local_24;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a5eb2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  for (local_14 = 0; (local_14 < 7 && (*(int *)(param_1 + 0xbc + local_14 * 4) != -1));
      local_14 = local_14 + 1) {
  }
  if (local_14 != 0) {
    if (local_14 == 1) {
      FUN_0056e1a0(DAT_00748918);
    }
    else if (local_14 < 3) {
      FUN_0056e1a0(DAT_0074891c);
    }
    else if (local_14 < 7) {
      FUN_0056e1a0(DAT_00748920);
    }
    else {
      FUN_0056e1a0(DAT_00748924);
    }
    pvVar2 = operator_new(0x28);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_24 = 0;
    }
    else {
      local_24 = FUN_00601110(0,0,1,0,0);
    }
    local_8 = 0xffffffff;
    FUN_005f5d50(local_24);
    cVar1 = (**(code **)(*DAT_0162ee84 + 0x38))();
    if (cVar1 != '\0') {
      (**(code **)(*DAT_0162ee84 + 0x80))(0x1926a,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    }
  }
  ExceptionList = local_10;
  return;
}

