// FUN_004c7230  004c7230

void __fastcall FUN_004c7230(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_8;
  
  iVar1 = FUN_004c70d0();
  if (iVar1 != -1) {
    FUN_004c8eb0();
  }
  local_8 = 0;
  while( true ) {
    iVar1 = FUN_0060c9a0();
    if (iVar1 <= local_8) break;
    piVar2 = (int *)FUN_004c72f0(*(undefined4 *)(param_1 + 8),local_8);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x70))();
    }
    local_8 = local_8 + 1;
  }
  local_8 = 0;
  while( true ) {
    iVar1 = FUN_0060c9a0();
    if (iVar1 <= local_8) break;
    piVar2 = (int *)FUN_004c72f0(*(undefined4 *)(param_1 + 0xc),local_8);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x70))();
    }
    local_8 = local_8 + 1;
  }
  return;
}

