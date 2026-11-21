// FUN_006288b0  006288b0

void __fastcall FUN_006288b0(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_8;
  
  FUN_00614fd0();
  local_8 = 0;
  while( true ) {
    iVar1 = (**(code **)(*param_1 + 0xbc))();
    if (iVar1 <= local_8) break;
    piVar2 = (int *)FUN_0060ca40(local_8);
    (**(code **)(*piVar2 + 0x70))();
    local_8 = local_8 + 1;
  }
  return;
}

