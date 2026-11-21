// FUN_0047aa30  0047aa30

void __fastcall FUN_0047aa30(int param_1)

{
  int iVar1;
  undefined2 local_c;
  
  *(undefined1 *)(param_1 + 0x7d2) = 1;
  local_c = 0;
  while( true ) {
    iVar1 = FUN_0047f950();
    if (iVar1 <= local_c) break;
    FUN_0047e390((int)local_c);
    iVar1 = FUN_004c6cb0();
    if (iVar1 != 0) {
      FUN_004c6b30();
    }
    local_c = local_c + 1;
  }
  return;
}

