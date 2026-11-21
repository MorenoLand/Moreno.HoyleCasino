// FUN_0047e6a0  0047e6a0

void __fastcall FUN_0047e6a0(undefined4 param_1)

{
  int iVar1;
  undefined4 local_8;
  
  FUN_004c7330(param_1);
  local_8 = 0;
  while( true ) {
    iVar1 = FUN_0060c9a0();
    if (iVar1 <= local_8) break;
    FUN_0047e390(local_8);
    FUN_004c7330(param_1);
    local_8 = local_8 + 1;
  }
  FUN_0047fab0();
  return;
}

