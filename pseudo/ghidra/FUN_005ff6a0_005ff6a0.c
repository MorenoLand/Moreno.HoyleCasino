// FUN_005ff6a0  005ff6a0

void __fastcall FUN_005ff6a0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int local_8;
  
  FUN_00606140();
  if (param_1[0x84] != 0) {
    local_8 = 0;
    while( true ) {
      iVar1 = FUN_0060c9a0();
      if (iVar1 <= local_8) break;
      piVar2 = (int *)FUN_0060ca40(local_8);
      (**(code **)(*piVar2 + 0x74))();
      local_8 = local_8 + 1;
    }
  }
  FUN_005ff960(param_1);
  (**(code **)(*param_1 + 0x6c))(100);
  return;
}

