// FUN_00479800  00479800

void __thiscall FUN_00479800(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int local_c;
  
  local_c = 0;
  while( true ) {
    iVar2 = FUN_0047f950(param_1);
    if (iVar2 <= local_c) break;
    iVar2 = FUN_0047e390(local_c);
    cVar1 = FUN_004c61b0();
    if (cVar1 != '\0') {
      *(undefined4 *)(iVar2 + 0x80) = param_2;
    }
    local_c = local_c + 1;
  }
  return;
}

