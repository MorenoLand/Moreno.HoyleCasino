// FUN_00639d60  00639d60

ulong __fastcall FUN_00639d60(CPropertySection *param_1)

{
  char cVar1;
  ulong local_18 [3];
  void *local_c;
  int local_8;
  
  local_c = (void *)0x0;
  local_18[0] = 1;
  local_18[1] = 2;
  local_18[2] = 3;
  local_8 = 0;
  while( true ) {
    if (2 < local_8) {
      return 0xffffffff;
    }
    local_c = CPropertySection::Get(param_1,local_18[local_8],(ulong *)0x0);
    if ((local_c != (void *)0x0) && (cVar1 = FUN_00600230(), cVar1 != '\0')) break;
    local_8 = local_8 + 1;
  }
  return local_18[local_8];
}

