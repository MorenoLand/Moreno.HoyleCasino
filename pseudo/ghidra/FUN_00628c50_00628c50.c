// FUN_00628c50  00628c50

void __fastcall FUN_00628c50(int *param_1)

{
  int iVar1;
  int *piVar2;
  int local_8;
  
  param_1[0x1a] = -1;
  local_8 = 0;
  while( true ) {
    iVar1 = (**(code **)(*param_1 + 0xb8))();
    if (iVar1 <= local_8) break;
    piVar2 = (int *)FUN_0060ca40(local_8);
    (**(code **)(*piVar2 + 8))(0);
    local_8 = local_8 + 1;
  }
  (**(code **)(*param_1 + 0xd0))();
  return;
}

