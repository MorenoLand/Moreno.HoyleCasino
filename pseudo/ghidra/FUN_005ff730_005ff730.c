// FUN_005ff730  005ff730

void __fastcall FUN_005ff730(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_8;
  
  FUN_006001b0();
  if (*(int *)(param_1 + 0x210) != 0) {
    local_8 = 0;
    while( true ) {
      iVar1 = FUN_0060c9a0();
      if (iVar1 <= local_8) break;
      piVar2 = (int *)FUN_0060ca40(local_8);
      (**(code **)(*piVar2 + 0x70))();
      local_8 = local_8 + 1;
    }
  }
  return;
}

