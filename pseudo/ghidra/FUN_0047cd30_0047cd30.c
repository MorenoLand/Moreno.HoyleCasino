// FUN_0047cd30  0047cd30

uint __fastcall FUN_0047cd30(undefined4 param_1)

{
  char cVar1;
  uint in_EAX;
  int iVar2;
  uint local_c;
  
  local_c = 0;
  while( true ) {
    if (6 < (int)local_c) {
      return in_EAX & 0xffffff00;
    }
    iVar2 = FUN_0047e390(local_c);
    if (((iVar2 != 0) && (cVar1 = FUN_004c61b0(param_1), cVar1 == '\0')) &&
       (iVar2 = FUN_004c7010(), iVar2 == 1)) break;
    in_EAX = local_c + 1;
    local_c = in_EAX;
  }
  return 1;
}

