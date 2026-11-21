// FUN_005d8020  005d8020

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005d8020(int param_1)

{
  int iVar1;
  DWORD DVar2;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  int local_c;
  int *local_8;
  
  FUN_0064d030();
  local_8 = (int *)FUN_005f2a60(0x30dfba,0);
  if (local_8 != (int *)0x0) {
    iVar1 = FUN_005dcb00(0);
    if (*(char *)(iVar1 + 0x4a0) == '\0') {
      (**(code **)(*local_8 + 0xcc))();
    }
    else {
      (**(code **)(*local_8 + 0xd0))();
    }
  }
  DVar2 = GetTickCount();
  if (299999 < DVar2 - *(int *)(param_1 + 0x60)) {
    DVar2 = GetTickCount();
    *(DWORD *)(param_1 + 0x60) = DVar2;
    local_2c = FUN_00636c50();
    if (local_2c != -1) {
      local_28 = 0xffffffff;
      local_24 = 0xffffffff;
      local_1c = 0;
      local_14 = _DAT_006b3e40;
      local_c = local_2c;
      local_28 = FUN_005d8110();
      if (local_28 != -1) {
        FUN_00639390(&local_2c,0,0,1);
      }
    }
  }
  return;
}

