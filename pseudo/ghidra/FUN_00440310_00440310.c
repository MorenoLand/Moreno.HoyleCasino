// FUN_00440310  00440310

void __fastcall FUN_00440310(int param_1)

{
  bool bVar1;
  char *_Str1;
  int iVar2;
  void *pvVar3;
  undefined **_Str2;
  undefined4 local_2c;
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069e8fa;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar1 = false;
  local_18 = 0;
  do {
    if (4 < local_18) {
      if (bVar1) {
        if (*(int *)(*(int *)(param_1 + 0xa0) + 0x180) == 0) {
          pvVar3 = operator_new(0x28);
          local_8 = 0;
          if (pvVar3 == (void *)0x0) {
            local_2c = 0;
          }
          else {
            local_2c = FUN_00601110(0,0,1,0,0);
          }
          local_8 = 0xffffffff;
          FUN_005f5d50(local_2c);
        }
      }
      else {
        FUN_005f5d50(0);
        (**(code **)(**(int **)(param_1 + 0xa0) + 0x70))();
      }
      ExceptionList = local_10;
      return;
    }
    _Str2 = &PTR_006b27f8;
    _Str1 = (char *)FUN_005fb8b0(local_18 + 0x14);
    iVar2 = strcmp(_Str1,(char *)_Str2);
    if (iVar2 != 0) {
      for (local_1c = 0; local_1c < 3; local_1c = local_1c + 1) {
        FUN_005fb3a0(local_18);
        iVar2 = FUN_00606570();
        if (iVar2 == local_18 * 3 + 5 + local_1c) break;
      }
      if ((local_1c == 3) && (!bVar1)) {
        bVar1 = true;
      }
    }
    local_18 = local_18 + 1;
  } while( true );
}

