// FUN_00530f60  00530f60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00530f60(int *param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined4 local_34;
  undefined4 local_30;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a475b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = FUN_005fc360(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if (iVar2 == 0) {
    (**(code **)(*param_1 + 4))(1);
    cVar1 = FUN_00637630();
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x1c))(0);
    }
    else {
      (**(code **)(**(int **)(DAT_00793390 + 4) + 0xb0))(0);
      local_14 = FUN_00637810(0);
      if (local_14 < 4) {
        if (local_14 == 0) {
          local_14 = 1;
        }
      }
      else {
        local_14 = 3;
      }
      *(int *)(*(int *)(DAT_00793390 + 4) + 0x178) = local_14;
      pvVar3 = operator_new(0x20);
      local_8 = 0;
      if (pvVar3 == (void *)0x0) {
        local_30 = 0;
      }
      else {
        local_30 = FUN_00600f30(9,param_1);
      }
      local_8 = 0xffffffff;
      FUN_005f5d50(local_30);
    }
    (**(code **)(*DAT_0162ee84 + 0x80))(0x18a91,0,0,5,1,0x3f800000,_DAT_006b3654,0);
  }
  else if (iVar2 == 1) {
    FUN_005fc420(0);
    FUN_00535d20();
    cVar1 = FUN_00637630();
    if (cVar1 != '\0') {
      pvVar3 = operator_new(0x20);
      local_8 = 1;
      if (pvVar3 == (void *)0x0) {
        local_34 = 0;
      }
      else {
        local_34 = FUN_006010a0(0);
      }
      local_8 = 0xffffffff;
      FUN_005f5d50(local_34);
    }
  }
  ExceptionList = local_10;
  return;
}

